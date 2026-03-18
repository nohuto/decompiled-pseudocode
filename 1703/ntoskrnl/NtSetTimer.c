/*
 * XREFs of NtSetTimer @ 0x140134C70
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer @ 0x140049460 (ExpSetTimer.c)
 *     PoDestroyReasonContext @ 0x14007227C (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x140072528 (PoCaptureReasonContext.c)
 */

NTSTATUS __stdcall NtSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN WakeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  PKSPIN_LOCK *v9; // rbx
  bool v11; // si
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v13; // rax
  BOOLEAN v14; // cl
  __int64 v15; // rdx
  int v16; // eax
  NTSTATUS v17; // ebx
  NTSTATUS result; // eax
  char v19[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+58h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-28h] BYREF

  v9 = (PKSPIN_LOCK *)DueTime;
  v11 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DueTime < 0x7FFFFFFF0000LL )
      v13 = (__int64)DueTime;
    v21[0] = *(_QWORD *)v13;
    v9 = (PKSPIN_LOCK *)v21;
    v21[1] = v21;
    v14 = WakeTimer;
    goto LABEL_5;
  }
  v14 = WakeTimer;
  if ( !WakeTimer )
  {
LABEL_5:
    v15 = 1LL;
    goto LABEL_6;
  }
  v15 = 1LL;
  v11 = PoPowerDownActionInProgress != 0;
LABEL_6:
  if ( Period < 0 )
    return -1073741580;
  if ( !v14 || v11 )
  {
    v20 = 0LL;
    v19[0] = 0;
  }
  else
  {
    LOBYTE(v15) = PreviousMode;
    result = PoCaptureReasonContext(0LL, v15, 0LL, 1, (__int64)v19, &v20);
    if ( result < 0 )
      return result;
  }
  v16 = ExpSetTimer(
          TimerHandle,
          PreviousMode,
          v9,
          (__int64)TimerApcRoutine,
          (__int64)TimerContext,
          v20,
          v19[0],
          Period,
          0,
          PreviousState);
  v17 = v16;
  if ( (v16 < 0 || v16 == 1073741861) && v20 )
    PoDestroyReasonContext((_QWORD *)v20);
  if ( v17 >= 0 && v11 )
    return 1073741861;
  return v17;
}
