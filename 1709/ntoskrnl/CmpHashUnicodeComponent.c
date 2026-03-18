/*
 * XREFs of CmpHashUnicodeComponent @ 0x140474458
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpAddToLeaf @ 0x1404740BC (CmpAddToLeaf.c)
 *     CmpCheckLeaf @ 0x14047FD10 (CmpCheckLeaf.c)
 *     CmpGetNameControlBlock @ 0x140480E00 (CmpGetNameControlBlock.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140562984 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1405BC750 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpWaitForHiveMount @ 0x1405DE638 (CmpWaitForHiveMount.c)
 *     CmpAddStringToMapping @ 0x1405EFD98 (CmpAddStringToMapping.c)
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpGetMappingHiveForString @ 0x140692058 (CmpGetMappingHiveForString.c)
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x14083C9A8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // ebx
  __int16 v2; // ax
  WCHAR *v3; // rdi
  __int64 v4; // rsi
  WCHAR v5; // ax

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (WCHAR *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
          v5 = RtlUpcaseUnicodeChar(v5);
        else
          v5 -= 32;
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
