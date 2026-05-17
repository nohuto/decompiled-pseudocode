/*
 * XREFs of sub_18008AEA0 @ 0x18008AEA0
 * Callers:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 *     sub_180093ED0 @ 0x180093ED0 (sub_180093ED0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18008AEA0(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 38) & 3) != 0 )
    return (((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL) + 4096) >> 4;
  else
    return *(unsigned __int16 *)(a1 + 36);
}
