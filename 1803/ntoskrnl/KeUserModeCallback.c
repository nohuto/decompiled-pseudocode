/*
 * XREFs of KeUserModeCallback @ 0x1405B80E0
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14003E9A0 (MmSessionGetWin32Callouts.c)
 *     MmCreateKernelStack @ 0x14012FD20 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140130270 (MmDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x1401AE100 (KiCallUserMode.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExCallCallBack @ 0x1404B63E4 (ExCallCallBack.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 ApcStateIndex; // al
  unsigned __int8 CallbackNestingLevel; // cl
  __int64 KernelStack; // rax
  char *v10; // r14
  _KTRAP_FRAME *TrapFrame; // r15
  unsigned __int64 Rsp; // r12
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned int v17; // edi
  _RTL_RUN_ONCE *Win32Callouts; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  int v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+30h] [rbp-68h]
  int v23; // [rsp+40h] [rbp-58h]
  int v24; // [rsp+58h] [rbp-40h]
  int v25; // [rsp+60h] [rbp-38h]
  int v26; // [rsp+68h] [rbp-30h]
  int v27; // [rsp+70h] [rbp-28h]
  char v28; // [rsp+78h] [rbp-20h]
  ULONG_PTR retaddr; // [rsp+98h] [rbp+0h]

  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x4Au, retaddr, KeGetCurrentIrql(), 0LL, 0LL);
  ApcStateIndex = CurrentThread->ApcStateIndex;
  if ( ApcStateIndex || CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, retaddr, ApcStateIndex, CurrentThread->CombinedApcDisable, 0LL);
  CallbackNestingLevel = CurrentThread->CallbackNestingLevel;
  CurrentThread->CallbackNestingLevel = CallbackNestingLevel + 1;
  if ( (unsigned __int8)(CallbackNestingLevel + 1) > 0x1Fu )
  {
    CurrentThread->CallbackNestingLevel = CallbackNestingLevel;
    return 3221225725LL;
  }
  else
  {
    KernelStack = MmCreateKernelStack(
                    0,
                    *(_WORD *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL),
                    (unsigned __int64)CurrentThread);
    v10 = (char *)KernelStack;
    v23 = KernelStack;
    if ( KernelStack )
    {
      *(_QWORD *)(KernelStack - 48) = KernelStack;
      *(_QWORD *)(KernelStack - 40) = KernelStack - (unsigned int)KeKernelStackSize;
      *(_QWORD *)(KernelStack - 32) = CurrentThread->StackBase;
      *(_QWORD *)(KernelStack - 24) = CurrentThread->StackLimit;
      *(_QWORD *)(KernelStack - 8) = CurrentThread->InitialStack;
      TrapFrame = CurrentThread->TrapFrame;
      Rsp = TrapFrame->Rsp;
      v13 = (Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = v13;
      v15 = v13 + ((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 87;
      if ( v13 > v15 || v15 >= 0x7FFFFFFF0000LL )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          ExRaiseAccessViolation();
      }
      else
      {
        v16 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v14 = *(_BYTE *)v14;
          v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v14 != v16 );
      }
      memmove((void *)(v13 + 88), a2, (unsigned int)v5);
      *(_QWORD *)(v13 + 32) = v13 + 88;
      *(_DWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) = a3;
      *(_DWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x2C) = a1;
      *(_QWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x48) = Rsp;
      *(_QWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x30) = TrapFrame->Rip;
      TrapFrame->Rsp = v13;
      v17 = KiCallUserMode(
              a4,
              a5,
              (unsigned __int64)(v10 - 48),
              v10,
              BugCheckParameter4,
              v21,
              v22,
              (int)CurrentThread,
              v23,
              (int)TrapFrame,
              Rsp,
              v24,
              v25,
              v26,
              v27,
              v28);
      if ( *((_DWORD *)CurrentThread->Teb + 1488) )
      {
        TrapFrame->Rsp -= 256LL;
        Win32Callouts = MmSessionGetWin32Callouts();
        ExCallCallBack((signed __int64 *)Win32Callouts, 7LL, 0LL);
      }
      TrapFrame->Rsp = Rsp;
      --CurrentThread->CallbackNestingLevel;
      MmDeleteKernelStack((unsigned __int64)v10, 0);
      return v17;
    }
    else
    {
      --CurrentThread->CallbackNestingLevel;
      return 3221225495LL;
    }
  }
}
