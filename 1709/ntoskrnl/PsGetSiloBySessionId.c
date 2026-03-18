/*
 * XREFs of PsGetSiloBySessionId @ 0x140528750
 * Callers:
 *     SessionIsInteractive @ 0x1400B5200 (SessionIsInteractive.c)
 *     SeQuerySessionIdTokenEx @ 0x1405286B0 (SeQuerySessionIdTokenEx.c)
 *     SeQueryServerSiloToken @ 0x1405911E0 (SeQueryServerSiloToken.c)
 *     PsIsServiceSession @ 0x1405EC7EC (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x14074A7F4 (EtwWmitraceWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 */

__int64 __fastcall PsGetSiloBySessionId(int a1, _QWORD *a2)
{
  _QWORD *SessionById; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  SessionById = (_QWORD *)MmGetSessionById(a1);
  if ( !SessionById )
    return 3221226581LL;
  v4 = *(_QWORD *)(SessionById[128] + 8176LL);
  ObfDereferenceObject(SessionById);
  result = 0LL;
  *a2 = v4;
  return result;
}
