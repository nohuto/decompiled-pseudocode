/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x14000A790
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x14000A740 (KeSaveExtendedProcessorState.c)
 *     PnprQuiesceProcessorDpc @ 0x14042CDC0 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140439818 (PopHandleNextState.c)
 * Callees:
 *     KeAllocateXStateContext @ 0x14000A8E4 (KeAllocateXStateContext.c)
 *     RtlXRestore @ 0x14000B3B0 (RtlXRestore.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlXSave @ 0x14012EAA8 (RtlXSave.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     XSaveSHelper @ 0x140189C20 (XSaveSHelper.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, PVOID *a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int8 v6; // r15
  _BYTE *SparePtr; // rax
  ULONG_PTR v8; // r12
  unsigned int *v9; // rax
  __int64 result; // rax
  unsigned __int8 v11; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  int v13; // eax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & BugCheckParameter3) == 0 )
      {
LABEL_26:
        v6 = CurrentIrql + 1;
        goto LABEL_8;
      }
LABEL_28:
      KeBugCheckEx(0x131u, 0LL, KeFeatureBits & 0x800000, (unsigned int)BugCheckParameter3, HIDWORD(BugCheckParameter3));
    }
    if ( (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) != 0 )
      goto LABEL_28;
  }
  else if ( (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    goto LABEL_28;
  }
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    goto LABEL_26;
  v6 = 0;
LABEL_8:
  SparePtr = CurrentThread->WaitBlock[1].SparePtr;
  v8 = (BugCheckParameter3 | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr )
  {
    v11 = SparePtr[16];
    if ( v11 > v6 )
      KeBugCheckEx(0x131u, 2uLL, v11, v6, 0LL);
  }
  if ( v8 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_11;
    if ( SparePtr && SparePtr[16] == v6 )
    {
      v9 = (unsigned int *)0xFFFFF78000000600LL;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
LABEL_12:
        result = KeAllocateXStateContext(a2 + 3, BugCheckParameter3, *v9);
        if ( (int)result < 0 )
          return result;
        goto LABEL_13;
      }
LABEL_11:
      v9 = (unsigned int *)0xFFFFF780000003E8LL;
      goto LABEL_12;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    memset(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
    v13 = KeXStateLength;
    a2[6] = 0LL;
    *((_DWORD *)a2 + 8) = v13;
    a2[5] = CurrentPrcb->ExtendedState;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
    a2[6] = 0LL;
    a2[5] = 0LL;
  }
LABEL_13:
  a2[1] = CurrentThread;
  *((_BYTE *)a2 + 16) = v6;
  a2[3] = (PVOID)v8;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *a2 = CurrentThread->WaitBlock[1].SparePtr;
  if ( v8 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      RtlXRestore(a2[5], 0LL);
      XSaveSHelper(a2[5], v8);
    }
    else
    {
      RtlXSave(a2[5], v8);
    }
  }
  CurrentThread->WaitBlock[1].SparePtr = a2;
  if ( !CurrentIrql )
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  return 0LL;
}
