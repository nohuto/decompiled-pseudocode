/*
 * XREFs of KiParkUmsThread @ 0x14020E3B0
 * Callers:
 *     KiUmsExit @ 0x140192A80 (KiUmsExit.c)
 * Callees:
 *     RtlXRestore @ 0x14000B3B0 (RtlXRestore.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KiDeliverApc @ 0x14006FCC0 (KiDeliverApc.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     KiDispatchException @ 0x1400DA080 (KiDispatchException.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x14017DE40 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x14017E320 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x140181970 (KeResetLegacyFloatingPointState.c)
 *     KeRestoreLegacyFloatingPointControlWord @ 0x140181990 (KeRestoreLegacyFloatingPointControlWord.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     KiUmsRestoreUch @ 0x1401925C0 (KiUmsRestoreUch.c)
 *     KiIsPrimaryPresent @ 0x14020E2C0 (KiIsPrimaryPresent.c)
 *     KeUpdateUmsThreadState @ 0x1406D8C7C (KeUpdateUmsThreadState.c)
 *     KiUmsExceptionFilter @ 0x1406D9274 (KiUmsExceptionFilter.c)
 *     KiCaptureUmsThreadContext @ 0x1406DA088 (KiCaptureUmsThreadContext.c)
 */

NTSTATUS __fastcall KiParkUmsThread(__int64 *SparePtr)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *Object; // r12
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int8 v6; // r13
  NTSTATUS result; // eax
  unsigned __int64 v8; // rax
  void *v9; // rsp
  NTSTATUS updated; // esi
  __int64 v11; // r8
  char IsPrimaryPresent; // [rsp+30h] [rbp+0h]
  unsigned __int8 v13; // [rsp+32h] [rbp+2h]
  unsigned __int8 CurrentIrql; // [rsp+38h] [rbp+8h]
  unsigned __int64 NpxState; // [rsp+38h] [rbp+8h]
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF
  EXCEPTION_RECORD ExitStatus; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v18; // [rsp+110h] [rbp+E0h] BYREF
  _DWORD v19[4]; // [rsp+C00h] [rbp+BD0h] BYREF
  _QWORD v20[2]; // [rsp+C10h] [rbp+BE0h] BYREF

  IsPrimaryPresent = 0;
  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v4 = *(_QWORD *)Object;
  v5 = Object[20];
  if ( (v5 & 1) != 0 )
  {
    v6 = 1;
    Object[20] = v5 & 0xFFFFFFFE;
  }
  else
  {
    v6 = 0;
  }
  if ( !v6 && (*(_DWORD *)(v4 + 1264) & 0x40) == 0 )
  {
    *(_DWORD *)(v4 + 1264) |= 0x20u;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    v13 = CurrentIrql;
    IsPrimaryPresent = KiIsPrimaryPresent(0LL, 0LL);
    if ( IsPrimaryPresent )
    {
      _disable();
      goto LABEL_10;
    }
    __writecr8(CurrentIrql);
  }
  *(_DWORD *)(v4 + 1264) &= ~0x20u;
LABEL_10:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    v19[0] = CurrentThread[1].CycleTime;
    v19[1] = CurrentThread[1].CurrentRunTime;
    v19[2] = (IsPrimaryPresent != 0 ? 2 : 0) | SparePtr[9] & 1 | (4 * v6);
    v20[0] = v19;
    v20[1] = 12LL;
    EtwTraceKernelEvent((__int64)v20, 1u, 0x40000080u, 0x1922u, 0x400A02u);
  }
  if ( IsPrimaryPresent )
  {
    result = v13;
    __writecr8(v13);
    CurrentThread->MiscFlags &= ~0x10000u;
    return result;
  }
  v8 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
  if ( v8 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  v18 = ((unsigned __int64)&v16 + 7) & 0xFFFFFFFFFFFFFFC0uLL;
  --CurrentThread->SpecialApcDisable;
  updated = KiCaptureUmsThreadContext(CurrentThread, SparePtr);
  if ( updated < 0 )
    goto LABEL_29;
  NpxState = CurrentThread->NpxState;
  CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)Object + 9) = &v18;
  Object[20] = Object[20] & 0xFFFFFFF9 | 4;
  CurrentThread->WaitBlock[3].SparePtr = 0LL;
  if ( v6 )
  {
    v16 = *(_QWORD *)CurrentThread->WaitBlock[3].Object;
    *(_QWORD *)(v16 + 1272) = 0LL;
  }
  else
  {
    LOBYTE(v11) = 1;
    updated = KeUpdateUmsThreadState(*(_QWORD *)CurrentThread->WaitBlock[3].Object, 0LL, v11);
  }
  if ( updated < 0 )
    goto LABEL_29;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  updated = KeWaitForSingleObject(Object + 12, Executive, 1, 0, 0LL);
  if ( updated != 192 )
  {
    --CurrentThread->SpecialApcDisable;
    Object[20] &= ~4u;
    SparePtr = (__int64 *)CurrentThread->WaitBlock[3].SparePtr;
    CurrentThread->NpxState = NpxState;
    if ( (SparePtr[9] & 1) != 0 )
    {
      if ( MEMORY[0xFFFFF780000003E0] )
        RtlXRestore(SparePtr[8], MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFDuLL);
      else
        _fxrstor((void *)SparePtr[8]);
    }
    else
    {
      KeResetLegacyFloatingPointState();
      KeRestoreLegacyFloatingPointControlWord();
    }
    KiUmsRestoreUch((__int64)SparePtr);
LABEL_29:
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    goto LABEL_30;
  }
  KeGetCurrentIrql();
  __writecr8(1uLL);
  KiDeliverApc(1, 0, 0LL);
  __writecr8(0LL);
LABEL_30:
  ExitStatus.ExceptionRecord = 0LL;
  ExitStatus.NumberParameters = 1;
  ExitStatus.ExceptionInformation[0] = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
  ExitStatus.ExceptionCode = updated;
  ExitStatus.ExceptionFlags = 1;
  ExitStatus.ExceptionAddress = 0LL;
  KiDispatchException(&ExitStatus, SparePtr[11], SparePtr[10], 1, 0);
  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus.ExceptionCode);
  return ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus.ExceptionCode);
}
