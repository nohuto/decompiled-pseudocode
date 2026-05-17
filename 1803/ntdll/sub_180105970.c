/*
 * XREFs of sub_180105970 @ 0x180105970
 * Callers:
 *     sub_180012820 @ 0x180012820 (sub_180012820.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 * Callees:
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_180105970(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = a2 & *(_QWORD *)a1;
  if ( (a1 ^ v2 ^ qword_18015A440 ^ *(_QWORD *)(v2 + 0x10)) == 0xA2E64EADA2E64EADuLL )
    return v2 + 32LL * ((unsigned int)(a2 - v2) >> *(_BYTE *)(a1 + 8));
  else
    return 0LL;
}
