/*
 * XREFs of PsGetSiloBySessionId @ 0x1404C7990
 * Callers:
 *     SessionIsInteractive @ 0x140072D94 (SessionIsInteractive.c)
 *     PsIsServiceSession @ 0x14045DFB0 (PsIsServiceSession.c)
 *     EtwWmitraceWorker @ 0x14070EB94 (EtwWmitraceWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 */

__int64 __fastcall PsGetSiloBySessionId(int a1, _QWORD *a2)
{
  __int64 SessionById; // rax
  void *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax

  SessionById = MmGetSessionById(a1);
  v4 = (void *)SessionById;
  if ( !SessionById )
    return 3221226581LL;
  v5 = *(_QWORD *)(SessionById + 1024);
  v6 = *(_QWORD *)(v5 + 8176);
  if ( v6 )
    ObfReferenceObject(*(PVOID *)(v5 + 8176));
  ObfDereferenceObject(v4);
  result = 0LL;
  *a2 = v6;
  return result;
}
