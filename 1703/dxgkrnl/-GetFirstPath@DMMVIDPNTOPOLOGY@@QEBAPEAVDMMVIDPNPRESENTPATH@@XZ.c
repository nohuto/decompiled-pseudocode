/*
 * XREFs of ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C000A860
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C00A0940 (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetFirstPath(DMMVIDPNTOPOLOGY *this)
{
  char *v1; // rax
  char *v2; // rcx

  v1 = (char *)this + 24;
  v2 = (char *)*((_QWORD *)this + 3);
  if ( v2 == v1 )
    return 0LL;
  else
    return (struct DMMVIDPNPRESENTPATH *)(v2 - 8);
}
