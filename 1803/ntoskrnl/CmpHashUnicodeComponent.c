/*
 * XREFs of CmpHashUnicodeComponent @ 0x1405132A0
 * Callers:
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmpGetNameControlBlock @ 0x1404AB750 (CmpGetNameControlBlock.c)
 *     CmpComputeComponentHashes @ 0x140513000 (CmpComputeComponentHashes.c)
 *     CmpAddToLeaf @ 0x140513600 (CmpAddToLeaf.c)
 *     CmpCheckLeaf @ 0x1405500E0 (CmpCheckLeaf.c)
 *     CmpGetMappingHiveForString @ 0x1405C0518 (CmpGetMappingHiveForString.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1405DDFC8 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405E2080 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddStringToMapping @ 0x140613E3C (CmpAddStringToMapping.c)
 *     CmpWaitForHiveMount @ 0x140647A90 (CmpWaitForHiveMount.c)
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmInitSystem1 @ 0x1408B04E0 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x1408B0FCC (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
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
