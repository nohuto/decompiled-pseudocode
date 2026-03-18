/*
 * XREFs of VrpCountPathComponents @ 0x1406A97B0
 * Callers:
 *     VrpCreateNamespaceNode @ 0x1406A56CC (VrpCreateNamespaceNode.c)
 *     VrpPostOpenOrCreate @ 0x1406A6674 (VrpPostOpenOrCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     VrpGetNextToken @ 0x1406A9810 (VrpGetNextToken.c)
 */

__int64 __fastcall VrpCountPathComponents(__int64 a1)
{
  unsigned __int16 v2; // bx
  UNICODE_STRING v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = 0;
  RtlInitUnicodeString(&v4, 0LL);
  while ( 1 )
  {
    VrpGetNextToken(a1, &v5, &v4);
    if ( !v4.Length )
      break;
    ++v2;
  }
  return v2;
}
