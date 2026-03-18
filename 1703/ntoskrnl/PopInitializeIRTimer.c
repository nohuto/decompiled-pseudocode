/*
 * XREFs of PopInitializeIRTimer @ 0x140155A20
 * Callers:
 *     PopNetInitialize @ 0x14080C59C (PopNetInitialize.c)
 * Callees:
 *     KeInitializeIRTimer @ 0x14003B120 (KeInitializeIRTimer.c)
 */

__int64 __fastcall PopInitializeIRTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  a6 = 8;
  KeInitializeIRTimer(
    (__int64)&PopNetEvaluationTimer,
    (__int64)PopNetEvaluationTimerCallback,
    0LL,
    (unsigned __int8 *)&a6,
    2);
  return PopInitializeWorkItem(&unk_14034A168, PopNetEvaluationWorkerCallback, 0LL);
}
