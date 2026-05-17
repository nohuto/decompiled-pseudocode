/*
 * XREFs of sub_1800774AC @ 0x1800774AC
 * Callers:
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     RtlGetUserInfoHeap @ 0x180076E40 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180077230 (RtlSetUserValueHeap.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800774AC(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 15) == 4 )
    return a1 - 32;
  else
    return a1 + 16LL * *(unsigned __int16 *)(a1 + 8) - 16;
}
