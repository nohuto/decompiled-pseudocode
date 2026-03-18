/*
 * XREFs of CmpHashUnicodeComponent @ 0x1404D2F10
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmpAddToLeaf @ 0x1404D2940 (CmpAddToLeaf.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1404D2E60 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpGetMappingHiveForString @ 0x1404D3514 (CmpGetMappingHiveForString.c)
 *     CmpGetNameControlBlock @ 0x140502E40 (CmpGetNameControlBlock.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140572568 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpWaitForHiveMount @ 0x1405CB154 (CmpWaitForHiveMount.c)
 *     CmpAddStringToMapping @ 0x1405D3E34 (CmpAddStringToMapping.c)
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmInitSystem1 @ 0x140807ADC (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140808574 (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
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
