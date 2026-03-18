/*
 * XREFs of PsGetSiloBySessionId @ 0x1405019A0
 * Callers:
 *     SessionIsInteractive @ 0x14007687C (SessionIsInteractive.c)
 *     SeQuerySessionIdTokenEx @ 0x140501900 (SeQuerySessionIdTokenEx.c)
 *     SeQueryServerSiloToken @ 0x14057B7C0 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1405845C0 (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x1407ACCA4 (EtwWmitraceWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x1400E1680 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 */

__int64 __fastcall PsGetSiloBySessionId(int a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)MmGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[128] + 8304LL);
  ObfDereferenceObject(SessionById);
  result = 0LL;
  *a2 = v4;
  return result;
}
