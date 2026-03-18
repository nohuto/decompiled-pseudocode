/*
 * XREFs of DbgkpWakeTarget @ 0x1406AB018
 * Callers:
 *     DbgkClearProcessDebugObject @ 0x1405F1AF4 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x1406A9D70 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1406AACFC (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1406AB470 (NtDebugContinue.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     PsResumeThread @ 0x140575A80 (PsResumeThread.c)
 *     DbgkpFreeDebugEvent @ 0x1406A9FE0 (DbgkpFreeDebugEvent.c)
 */

void __fastcall DbgkpWakeTarget(char *P)
{
  struct _EX_RUNDOWN_REF *v2; // rdi

  v2 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)P + 8);
  if ( (*((_DWORD *)P + 19) & 0x20) != 0 )
    PsResumeThread(*((_QWORD *)P + 8), 0LL);
  if ( (*((_DWORD *)P + 19) & 8) != 0 )
    ExReleaseRundownProtection_0(v2 + 215);
  if ( (*((_DWORD *)P + 19) & 2) != 0 )
    DbgkpFreeDebugEvent(P);
  else
    KeSetEvent((PRKEVENT)(P + 16), 0, 0);
}
