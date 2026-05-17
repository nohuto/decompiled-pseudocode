/*
 * XREFs of RtlAddAuditAccessAce @ 0x18008C020
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAuditAccessAce(__int64 a1, unsigned int a2, int a3, unsigned __int8 *a4, char a5, char a6)
{
  int v7; // r8d

  v7 = (a5 != 0 ? 0x40 : 0) | 0x80;
  if ( !a6 )
    v7 = a5 != 0 ? 0x40 : 0;
  return RtlpAddKnownAce(a1, a2, v7, a3, a4, 2);
}
