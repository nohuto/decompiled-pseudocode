/*
 * XREFs of FsRtlCompareNodeAndKey @ 0x14006DDE4
 * Callers:
 *     FsRtlAddToTunnelCache @ 0x140506A20 (FsRtlAddToTunnelCache.c)
 *     FsRtlFindInTunnelCache @ 0x140554CD0 (FsRtlFindInTunnelCache.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
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
