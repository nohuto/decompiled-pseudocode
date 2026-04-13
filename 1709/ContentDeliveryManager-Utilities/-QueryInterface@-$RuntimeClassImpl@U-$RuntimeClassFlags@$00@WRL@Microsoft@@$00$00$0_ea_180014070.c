/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@567@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014070
 * Callers:
 *     ?QueryInterface@?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800141A0 (-QueryInterface@-$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationMod.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@567@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021A50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180021A50.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@567@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021D90 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180021D90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( (*a2
     || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (*a2 != -1350114592
     || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( *a2 == 693115335
      && a2[1] == *(_DWORD *)&GUID_295019c7_d9e9_5485_991a_0826b2af7e3d.Data2
      && a2[2] == *(_DWORD *)GUID_295019c7_d9e9_5485_991a_0826b2af7e3d.Data4
      && a2[3] == *(_DWORD *)&GUID_295019c7_d9e9_5485_991a_0826b2af7e3d.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_28;
    }
    v5 = a1 + 8;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      if ( *a2 != -1230936869
        || a2[1] != *(_DWORD *)&GUID_b6a164db_6a48_56a8_addb_35ff07040814.Data2
        || a2[2] != *(_DWORD *)GUID_b6a164db_6a48_56a8_addb_35ff07040814.Data4
        || a2[3] != *(_DWORD *)&GUID_b6a164db_6a48_56a8_addb_35ff07040814.Data4[4] )
      {
        v4 = -2147467262;
LABEL_27:
        if ( v4 < 0 )
          return (unsigned int)v4;
LABEL_28:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v4;
      }
      *a3 = v5 + 8;
    }
    v4 = 0;
    goto LABEL_27;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
