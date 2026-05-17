/*
 * XREFs of RtlAddAuditAccessAce @ 0x18008A270
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037408 @ 0x180037408 (sub_180037408.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(char *a1, unsigned int a2, int a3, unsigned __int8 *a4, char a5, char a6)
{
  int v7; // r8d

  v7 = (a5 != 0 ? 0x40 : 0) | 0x80;
  if ( !a6 )
    v7 = a5 != 0 ? 0x40 : 0;
  return sub_180037408(a1, a2, v7, a3, a4, 2);
}
