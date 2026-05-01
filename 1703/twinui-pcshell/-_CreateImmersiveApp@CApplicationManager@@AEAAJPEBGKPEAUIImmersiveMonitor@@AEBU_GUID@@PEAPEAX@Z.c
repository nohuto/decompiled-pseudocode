/*
 * XREFs of ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180010B58
 * Callers:
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CCD0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3@@Z @ 0x18000DB50 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAPEAU3.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001240C (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180015CCC (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?AddItem@?$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBUPER_APPLICATION_DATA@@@Z @ 0x1800165A4 (-AddItem@-$CStringHashTable@UPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJA.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180017684 (-s_LookupEntry@-$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x180059B2C (-CImmersiveApp_CreateInstance@@YAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIA.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x180176490 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_CreateImmersiveApp(
        CApplicationManager *this,
        CallerIdentity *a2,
        unsigned int a3,
        struct IImmersiveMonitor *a4,
        const struct _GUID *ppwsz,
        void **a6)
{
  struct IImmersiveMonitor *v6; // rbx
  void **v9; // r12
  unsigned __int16 *v10; // rdi
  unsigned __int16 **v11; // r8
  HRESULT PackageFullNameFromAppId; // ebx
  struct PER_APPLICATION_DATA *v13; // rsi
  __int64 v14; // rcx
  signed int v15; // edx
  _DWORD *v16; // rax
  void **v17; // rax
  void **v18; // rcx
  __int64 v19; // rcx
  const struct _GUID *v21; // [rsp+30h] [rbp-50h]
  LPVOID pv; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  _QWORD v25[4]; // [rsp+60h] [rbp-20h] BYREF
  CallerIdentity *v26; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v27; // [rsp+D0h] [rbp+50h]
  struct IImmersiveMonitor *v28; // [rsp+D8h] [rbp+58h]

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v6 = a4;
  v9 = a6;
  *a6 = 0LL;
  v10 = 0LL;
  pv = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( CompareStringOrdinal((LPCWCH)a2, -1, L"Microsoft.Windows.Desktop", -1, 1) != 2 )
  {
    v23 = -1LL;
    v24 = -1LL;
    PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (const unsigned __int16 *)&pv, v11);
    v10 = (unsigned __int16 *)pv;
    if ( PackageFullNameFromAppId < 0 )
      goto LABEL_21;
    v6 = v28;
  }
  memset(v25, 0, sizeof(v25));
  v13 = 0LL;
  v14 = *((_QWORD *)this + 102);
  v15 = v14 == 0 ? 0x8002802B : 0;
  if ( v14 )
  {
    v16 = (_DWORD *)CSimpleHashTable<unsigned short const *,PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                      v14,
                      *((unsigned int *)this + 201),
                      &v26);
    v15 = *v16 != 1 ? 0x8002802B : 0;
    if ( *v16 == 1 )
      v13 = (struct PER_APPLICATION_DATA *)(v16 + 4);
  }
  if ( v15 < 0 )
  {
    if ( v10 )
      CApplicationManager::s_LoadQuirksForApp(v10, (struct PER_APPLICATION_DATA *)v25);
    v13 = (struct PER_APPLICATION_DATA *)v25;
  }
  a6 = 0LL;
  v17 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&a6);
  PackageFullNameFromAppId = CImmersiveApp_CreateInstance(
                               (LPCWSTR)a2,
                               v10,
                               v27,
                               v6,
                               v13,
                               (struct IIAMServiceProvider *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL)),
                               v21,
                               v17);
  if ( PackageFullNameFromAppId >= 0 )
  {
    if ( v13 == (struct PER_APPLICATION_DATA *)v25 )
    {
      ppwsz = 0LL;
      PackageFullNameFromAppId = SHStrDupW((LPCWSTR)a2, (LPWSTR *)&ppwsz);
      if ( PackageFullNameFromAppId >= 0 )
        PackageFullNameFromAppId = CStringHashTable<PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare>::AddItem(
                                     (char *)this + 800,
                                     v25,
                                     &ppwsz);
    }
    if ( PackageFullNameFromAppId >= 0 )
      PackageFullNameFromAppId = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a6)(
                                   a6,
                                   &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                   v9);
  }
  v18 = a6;
  if ( a6 )
  {
    a6 = 0LL;
    (*((void (__fastcall **)(void **))*v18 + 2))(v18);
  }
  v19 = v25[0];
  if ( v25[0] )
  {
    v25[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_21:
  if ( v10 )
    CoTaskMemFree(v10);
  return (unsigned int)PackageFullNameFromAppId;
}
