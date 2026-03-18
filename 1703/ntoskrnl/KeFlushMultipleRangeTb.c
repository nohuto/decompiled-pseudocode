/*
 * XREFs of KeFlushMultipleRangeTb @ 0x1400D9210
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiFlushTbAsNeeded @ 0x1400F9A20 (MiFlushTbAsNeeded.c)
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400D8CD0 (KiIpiSendRequestEx.c)
 *     KiFlushViaHypervisor @ 0x1400D9420 (KiFlushViaHypervisor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     HvlFlushRangeListTb @ 0x1401EB824 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x140201138 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140251988 (VmFlushTb.c)
 *     ExFlushTb @ 0x14025D8F8 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushMultipleRangeTb(_KPROCESS *Process, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // r15d
  __int64 v6; // rdi
  unsigned int v7; // ebp
  unsigned __int8 v9; // r14
  int p_ActiveProcessors; // edx
  __int64 result; // rax
  unsigned int v12; // r14d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _BYTE *v15; // r15
  unsigned __int8 v16; // bl
  signed __int32 v17[8]; // [rsp+0h] [rbp-158h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v19; // [rsp+48h] [rbp-110h] BYREF
  int v20; // [rsp+50h] [rbp-108h]
  unsigned int v21; // [rsp+54h] [rbp-104h]
  __int64 v22; // [rsp+58h] [rbp-100h] BYREF
  _BYTE v23[176]; // [rsp+60h] [rbp-F8h] BYREF

  v4 = 0;
  v5 = a4;
  v6 = (unsigned int)Process;
  v7 = a3;
  if ( (_DWORD)a3 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process->SecurePid )
    {
      v9 = 1;
      goto LABEL_5;
    }
  }
  v9 = 0;
  if ( (unsigned int)KiFlushViaHypervisor(Process, a2, a3, a4) )
  {
LABEL_5:
    KiPrepareFlushParameters(v7, &v22, v18);
    if ( v5 )
      p_ActiveProcessors = 0;
    else
      p_ActiveProcessors = (int)&KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
    result = HvlFlushRangeListTb(v22, p_ActiveProcessors, v18[0], v9, v6, a2);
    if ( (_BYTE)result )
      goto LABEL_15;
  }
  v12 = 4;
  v19 = a2;
  if ( v5 == 1 )
    v12 = -2147483644;
  v20 = v6;
  v21 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( v5 )
  {
    v15 = 0LL;
    v4 = 1;
  }
  else
  {
    _InterlockedOr(v17, 0);
    KeCopyAffinityEx(v23, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    v15 = v23;
    KeRemoveProcessorAffinityEx(v23, CurrentPrcb->Number);
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v4,
    (__int64)v15,
    (int)&v19,
    v6,
    v12,
    (__int64 (__fastcall *)(__int64))KiFlushRangeWorker,
    (__int64)&v19);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_15:
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v6, a2);
  if ( ExTbFlushActive )
  {
    v16 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb((unsigned int)v6, a2, v7);
    result = v16;
    __writecr8(v16);
  }
  return result;
}
