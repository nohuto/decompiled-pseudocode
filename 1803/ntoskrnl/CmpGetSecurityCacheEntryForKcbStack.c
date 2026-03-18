/*
 * XREFs of CmpGetSecurityCacheEntryForKcbStack @ 0x1404A81C4
 * Callers:
 *     CmpQuerySecurityDescriptorInfo @ 0x1404A5DD4 (CmpQuerySecurityDescriptorInfo.c)
 *     CmpCheckNotifyAccess @ 0x1404E2560 (CmpCheckNotifyAccess.c)
 *     CmpCreateChild @ 0x140514170 (CmpCreateChild.c)
 *     CmpCheckWrpKeyAccess @ 0x140562828 (CmpCheckWrpKeyAccess.c)
 *     CmpCheckCreateAccessOnKcbStack @ 0x14056C508 (CmpCheckCreateAccessOnKcbStack.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F5E54 (CmpCheckKeyBodyAccess.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x1406F6560 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1406F6844 (CmpSnapshotKcbStackSecurity.c)
 * Callees:
 *     CmGetKCBCacheSecurity @ 0x1404A822C (CmGetKCBCacheSecurity.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
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
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, (unsigned __int16)v2);
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
