/*
 * XREFs of ?s_LookupEntry@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180017684
 * Callers:
 *     ?GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18000D740 (-GetPerApplicationData@CApplicationManager@@UEAAJPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180010B58 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180011630 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUITaskWindow@@W4UpdateAppDataReason@1@@Z @ 0x180011850 (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicat_ea_180011850.c)
 *     ?AddItem@?$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBUPER_APPLICATION_DATA@@@Z @ 0x1800165A4 (-AddItem@-$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJA.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1800175B0 (-_RehashTable@-$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
        __int64 a1,
        unsigned int a2,
        LPCWCH *a3)
{
  LPCWCH v3; // r11
  __int64 v4; // r9
  unsigned int v8; // r10d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // edx
  unsigned int v12; // edx
  int v13; // edi
  unsigned int v14; // ebx
  __int64 v15; // rcx

  v3 = *a3;
  v4 = -1LL;
  v8 = 314159269;
  do
    ++v4;
  while ( v3[v4] );
  v9 = 0LL;
  v10 = 2 * v4;
  if ( v10 )
  {
    do
    {
      v11 = *((unsigned __int8 *)v3 + v9++);
      v8 ^= (v8 >> 2) + 2080 * v8 + v11;
    }
    while ( v9 < v10 );
  }
  v12 = (v8 & 0x7FFFFFFF) % a2;
  v13 = -1;
  while ( 1 )
  {
    v14 = v12;
    v15 = a1 + 48LL * v12;
    if ( *(_DWORD *)v15 != 2 || v13 != -1 )
      break;
    v13 = v12;
LABEL_10:
    if ( *(_DWORD *)v15 == 1 && CompareStringOrdinal(*(LPCWCH *)(v15 + 8), -1, *a3, -1, 0) == 2 )
      return a1 + 48LL * v14;
    v12 = (v14 + 1) % a2;
  }
  if ( *(_DWORD *)v15 )
    goto LABEL_10;
  if ( v13 != -1 )
    v14 = v13;
  return a1 + 48LL * v14;
}
