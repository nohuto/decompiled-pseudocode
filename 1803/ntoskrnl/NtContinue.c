/*
 * XREFs of NtContinue @ 0x1401AB600
 * Callers:
 *     <none>
 * Callees:
 *     KiContinueEx @ 0x1401323B0 (KiContinueEx.c)
 *     KiRestoreDebugRegisterState @ 0x1401AB3A0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1401ABCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1401AEF30 (KiInitiateUserApc.c)
 *     KiUmsExit @ 0x1401BC780 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140246210 (KiCopyCounters.c)
 */

NTSTATUS __stdcall NtContinue(PCONTEXT Context, BOOLEAN TestAlert)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  _QWORD v14[39]; // [rsp+0h] [rbp-138h] BYREF
  char v15; // [rsp+160h] [rbp+28h]

  v3 = *(_QWORD *)(v2 + 192);
  v4 = *(_QWORD *)(v2 + 200);
  v5 = *(_QWORD *)(v2 + 208);
  *(_QWORD *)(v2 - 80) = 0LL;
  v14[32] = v3;
  v14[33] = v4;
  v14[34] = v5;
  result = KiContinueEx((unsigned __int64)Context, TestAlert, (__int64)v14, v2 - 128);
  if ( result > 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      CurrentThread->TrapFrame = *(_KTRAP_FRAME **)(v2 + 184);
      CurrentThread->PreviousMode = *(_BYTE *)(v2 - 88);
    }
    _disable();
    if ( (*(_BYTE *)(v2 + 240) & 1) == 0 )
    {
      _mm_setcsr(*(_DWORD *)(v2 - 84));
      __asm { iretq }
    }
    if ( KeGetCurrentThread()->ApcState.UserApcPending )
    {
      __writecr8(1uLL);
      _enable();
      KiInitiateUserApc();
      _disable();
      __writecr8(0LL);
    }
    if ( (KeGetCurrentThread()->Header.LockNV & 0x8000000) != 0 )
      KiRestoreSetContextState();
    v8 = KeGetCurrentThread();
    if ( (v8->Header.LockNV & 0x40010000) != 0 )
    {
      if ( (v8->Header.Size & 1) != 0 )
      {
        KiCopyCounters();
        v8 = KeGetCurrentThread();
      }
      if ( (v8->Header.Reserved1 & 0x40) != 0 )
      {
        LOBYTE(v8) = 1;
        KiUmsExit(v8);
      }
    }
    _mm_setcsr(*(_DWORD *)(v2 - 84));
    if ( *(_WORD *)(v2 + 128) )
      KiRestoreDebugRegisterState();
    v9 = *(_QWORD *)(v2 - 48);
    v10 = *(_QWORD *)(v2 - 56);
    BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
    {
      __writegsbyte(0x27Au, BpbUserSpecCtrl);
      __writemsr(0x48u, BpbUserSpecCtrl);
    }
    if ( _bittestandreset16(MK_FP(__GS__, 632LL), 2u) )
      __writemsr(0x49u, 1uLL);
    if ( (KiKvaShadow & 1) == 0 )
    {
      __asm
      {
        swapgs
        iretq
      }
    }
    return KiKernelExit(*(_QWORD *)(v2 - 72), *(_QWORD *)(v2 - 64), v10, v9, v15);
  }
  return result;
}
