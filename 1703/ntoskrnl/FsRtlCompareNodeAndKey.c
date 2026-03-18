/*
 * XREFs of FsRtlCompareNodeAndKey @ 0x14000CD4C
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x140426F10 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x140427060 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     <none>
 */

LONG __fastcall FsRtlCompareNodeAndKey(__int64 a1, unsigned __int64 a2, const UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 < a2 )
    return -1;
  if ( v3 > a2 )
    return 1;
  return RtlCompareUnicodeString((PCUNICODE_STRING)(8 * (*(_BYTE *)(a1 + 56) & 2 | 8LL) + a1), a3, 1u);
}
