/*
 * XREFs of FsRtlCompareNodeAndKey @ 0x1401051B4
 * Callers:
 *     FsRtlFindInTunnelCache @ 0x140565C10 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x140565D60 (FsRtlAddToTunnelCache.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 */

LONG __fastcall FsRtlCompareNodeAndKey(__int64 a1, unsigned __int64 a2, const UNICODE_STRING *a3)
{
  unsigned __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 < a2 )
    return -1;
  if ( v3 > a2 )
    return 1;
  return RtlCompareUnicodeString((PCUNICODE_STRING)(a1 + 8 * (*(_DWORD *)(a1 + 56) & 2 | 8LL)), a3, 1u);
}
