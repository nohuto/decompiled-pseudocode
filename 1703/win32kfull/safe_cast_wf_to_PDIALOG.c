/*
 * XREFs of safe_cast_wf_to_PDIALOG @ 0x1C004D90C
 * Callers:
 *     xxxSetWindowLongPtr @ 0x1C004E638 (xxxSetWindowLongPtr.c)
 *     xxxSetWindowLong @ 0x1C00DD088 (xxxSetWindowLong.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_wf_to_PDIALOG(__int64 a1)
{
  if ( !a1 || (*(_BYTE *)(a1 + 58) & 1) == 0 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 252) )
    return *(_QWORD *)(a1 + 392);
  return *(_QWORD *)(a1 + 384);
}
