/*
 * XREFs of EtwpThreadRundownApc @ 0x14027EF00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     EtwpTraceThreadRundown @ 0x14027EF38 (EtwpTraceThreadRundown.c)
 */

LONG __fastcall EtwpThreadRundownApc(__int64 a1, __int64 a2, __int64 a3, struct _KEVENT **a4, _QWORD *a5)
{
  struct _KEVENT *v5; // rbx

  v5 = *a4;
  EtwpTraceThreadRundown(KeGetCurrentThread(), *a5);
  return KeSetEvent(v5, 0, 0);
}
