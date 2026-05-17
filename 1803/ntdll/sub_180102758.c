/*
 * XREFs of sub_180102758 @ 0x180102758
 * Callers:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 *     sub_180102BEC @ 0x180102BEC (sub_180102BEC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180102758(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 38) & 3) != 0 )
    return (((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
  else
    return *(unsigned __int16 *)(a1 + 36);
}
