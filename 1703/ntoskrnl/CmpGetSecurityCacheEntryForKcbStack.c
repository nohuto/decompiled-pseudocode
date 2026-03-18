/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1404FCEA0
 * Callers:
 *     CmpCheckCreateAccessOnKcbStack @ 0x14042B290 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckWrpKeyAccess @ 0x1404A1A64 (CmpCheckWrpKeyAccess.c)
 *     CmpCreateChild @ 0x1404D0388 (CmpCreateChild.c)
 *     CmpQuerySecurityDescriptorInfo @ 0x1404FC558 (CmpQuerySecurityDescriptorInfo.c)
 *     CmpCheckKeyBodyAccess @ 0x14056C688 (CmpCheckKeyBodyAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140668650 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14066894C (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2)
{
  __int16 v2; // r9
  __int64 v3; // r10
  __int64 v5; // r11
  __int64 KcbAtLayerHeight; // rax
  __int16 v7; // r9
  __int16 v8; // dx

  v2 = *(_WORD *)(a1 + 2);
  v3 = 0LL;
  v5 = a1;
  while ( v2 >= 0 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v5, (unsigned __int16)v2);
    v8 = *(_WORD *)(KcbAtLayerHeight + 58);
    if ( v8 )
    {
      if ( *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
        break;
    }
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
    {
      v3 = KcbAtLayerHeight;
      if ( v8 )
      {
        if ( *(_BYTE *)(KcbAtLayerHeight + 57) )
          break;
      }
    }
    v2 = v7 - 1;
  }
  return CmGetKCBCacheSecurity(v3, a2);
}
