/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x140482B3C
 * Callers:
 *     CmpCreateChild @ 0x140475B90 (CmpCreateChild.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x1404834DC (CmpQuerySecurityDescriptorInfo.c)
 *     CmpCheckWrpKeyAccess @ 0x140576EB0 (CmpCheckWrpKeyAccess.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x140580494 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140693688 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140693984 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmGetKCBCacheSecurity @ 0x140482BA4 (CmGetKCBCacheSecurity.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2)
{
  __int16 v2; // r9
  __int64 v3; // r11
  __int64 i; // r10
  __int64 KcbAtLayerHeight; // rax
  __int16 v6; // r9
  __int16 v7; // dx

  v2 = *(_WORD *)(a1 + 2);
  v3 = a2;
  for ( i = 0LL; v2 >= 0; v2 = v6 - 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
    v7 = *(_WORD *)(KcbAtLayerHeight + 58);
    if ( v7 && *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
      break;
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
    {
      i = KcbAtLayerHeight;
      if ( v7 )
      {
        if ( *(_BYTE *)(KcbAtLayerHeight + 57) )
          break;
      }
    }
  }
  return CmGetKCBCacheSecurity(i, v3);
}
