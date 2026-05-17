/*
 * XREFs of sub_180063B6C @ 0x180063B6C
 * Callers:
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     RtlGetUserInfoHeap @ 0x1800634E0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180063860 (RtlSetUserValueHeap.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_1801019C4 @ 0x1801019C4 (sub_1801019C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180063B6C(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 15) == 4 )
    return a1 - 32;
  else
    return a1 + 16LL * *(unsigned __int16 *)(a1 + 8) - 16;
}
