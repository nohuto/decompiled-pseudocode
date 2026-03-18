/*
 * XREFs of NtSetTimer @ 0x140286C38
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400B0710 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400B526C (PoCaptureReasonContext.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
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
  NTSTATUS result; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // ebx
  char v19[8]; // [rsp+50h] [rbp-38h] BYREF
  PVOID P; // [rsp+58h] [rbp-30h] BYREF
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
  }
  else
  {
    v14 = WakeTimer;
    if ( WakeTimer )
    {
      v15 = 1LL;
      v11 = PoPowerDownActionInProgress != 0;
      goto LABEL_8;
    }
  }
  v15 = 1LL;
LABEL_8:
  if ( Period < 0 )
    return -1073741580;
  if ( !v14 || v11 )
  {
    P = 0LL;
    v19[0] = 0;
  }
  else
  {
    LOBYTE(v15) = PreviousMode;
    result = PoCaptureReasonContext(0LL, v15, 0LL, 1, (__int64)v19, &P);
    if ( result < 0 )
      return result;
  }
  v17 = ExpSetTimer(
          TimerHandle,
          PreviousMode,
          v9,
          (__int64)TimerApcRoutine,
          (__int64)TimerContext,
          (__int64)P,
          v19[0],
          Period,
          0,
          PreviousState);
  v18 = v17;
  if ( (v17 < 0 || v17 == 1073741861) && P )
    PoDestroyReasonContext(P);
  if ( v18 >= 0 && v11 )
    return 1073741861;
  return v18;
}
