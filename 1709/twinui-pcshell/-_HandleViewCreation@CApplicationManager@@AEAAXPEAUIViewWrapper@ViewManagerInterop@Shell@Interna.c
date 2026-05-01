/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x180012B3C
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180011FE0 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x1800169CC (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x1800076AC (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18001114C (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180014C68 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_EnableMultiInstance@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180018864 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_EnableMultiInstance@@@wil@@C.c)
 *     ??$_GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x180018BA4 (--$_GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPr.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180019278 (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180019C80 (--$_FindFirstApplication@VCImmersiveAppFinderByAppIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCI.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_HandleViewCreation(
        __int64 **this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdi
  HRESULT v6; // eax
  int v7; // edx
  __int64 v8; // r8
  unsigned int v9; // esi
  struct IImmersiveMonitor *v10; // rcx
  char v11; // r12
  __int64 v12; // rcx
  int First; // eax
  int v14; // ebx
  unsigned __int64 v15; // rcx
  unsigned int v16; // r13d
  __int64 v17; // rcx
  int v18; // eax
  int ImmersiveApp; // ebx
  __int64 *v20; // rdi
  __int64 v21; // rbx
  const unsigned __int16 *v22; // rax
  struct IImmersiveMonitor *v23; // rdi
  CallerIdentity *v24; // rbx
  void **v25; // rax
  struct IImmersiveMonitor *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _GUID *v29; // [rsp+28h] [rbp-79h]
  __int64 v30; // [rsp+38h] [rbp-69h] BYREF
  struct IImmersiveMonitor *StringRawBuffer; // [rsp+40h] [rbp-61h] BYREF
  __int64 v32; // [rsp+48h] [rbp-59h] BYREF
  HSTRING v33; // [rsp+50h] [rbp-51h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v34; // [rsp+58h] [rbp-49h]
  _QWORD v35[2]; // [rsp+60h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-31h] BYREF
  HSTRING string; // [rsp+88h] [rbp-19h] BYREF
  GUID v38; // [rsp+98h] [rbp-9h] BYREF

  v35[1] = -2LL;
  v4 = a2;
  v34 = a2;
  v35[0] = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a3 + 8LL))(a3);
  string = 0LL;
  v6 = WindowsCreateStringReference(L"AAMShim.ComponentId", 0x13u, &hstringHeader, &string);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6, v7, v8);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::_GetValue<_GUID>(v35, string, v8, &v38) < 0 )
    v38 = GUID_NULL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_EnableMultiInstance>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_EnableMultiInstance>::GetCachedFeatureEnabledState();
  LODWORD(v32) = 0;
  BYTE4(v32) = 1;
  LODWORD(v30) = 0;
  WORD2(v30) = WORD2(v32);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_EnableMultiInstance>::GetFeaturePropertyCache'::`2'::data,
    6115766LL,
    &v30,
    0LL,
    3);
  v33 = 0LL;
  WindowsDeleteString(0LL);
  v33 = 0LL;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)v4 + 56LL))(
         v4,
         &v33) >= 0 )
  {
    v9 = 0;
    if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
    {
      StringRawBuffer = 0LL;
      (**(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **))v4)(
        v4,
        &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
        &StringRawBuffer);
      if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, const WCHAR *, __int64 *))(*(_QWORD *)StringRawBuffer
                                                                                       + 80LL))(
             StringRawBuffer,
             L"LastSetGlomIdForReconstitution",
             &v32) >= 0 )
        v9 = v32;
      v10 = StringRawBuffer;
      if ( StringRawBuffer )
      {
        StringRawBuffer = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    v30 = 0LL;
    v11 = 0;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v12 = v30;
    if ( v9 )
    {
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      hstringHeader.Reserved.Reserved1 = (PVOID)WindowsGetStringRawBuffer(v33, 0LL);
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v9;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppIdAndGlomId>(
                this,
                &hstringHeader,
                &v30);
    }
    else
    {
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      StringRawBuffer = (struct IImmersiveMonitor *)WindowsGetStringRawBuffer(v33, 0LL);
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>(this, &StringRawBuffer, &v30);
    }
    v14 = First;
    if ( First >= 0 )
    {
      v11 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 408LL))(v30) == 0;
      v14 = CApplicationManager::_AddViewToGlom(this, v4, v30, 1LL, 0LL);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v14 >= 0 )
      goto LABEL_49;
    v15 = (unsigned __int64)(this + 24) & -(__int64)(this != 0LL);
    v32 = 0LL;
    (*(void (__fastcall **)(unsigned __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v15 + 24LL))(
      v15,
      &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
      &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
      &v32);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 40LL))(v32);
    v16 = -1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v17 = v30;
    if ( v9 )
    {
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      hstringHeader.Reserved.Reserved1 = (PVOID)WindowsGetStringRawBuffer(v33, 0LL);
      *(_DWORD *)&hstringHeader.Reserved.Reserved2[8] = v9;
      v18 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppIdAndGlomId>(this, &hstringHeader, &v30);
    }
    else
    {
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      StringRawBuffer = (struct IImmersiveMonitor *)WindowsGetStringRawBuffer(v33, 0LL);
      v18 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>(this, &StringRawBuffer, &v30);
    }
    ImmersiveApp = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -2147319765 )
      {
        StringRawBuffer = 0LL;
        v20 = this[71];
        v21 = *v20;
        v29 = (struct _GUID *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&StringRawBuffer);
        ImmersiveApp = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *))(v21 + 72))(
                         v20,
                         0LL,
                         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                         &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
        if ( ImmersiveApp >= 0 )
        {
          if ( !v9 )
          {
            v22 = WindowsGetStringRawBuffer(v33, 0LL);
            v9 = 1;
            if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                        (CActivationBasedAppAndGlomCollection *)(this + 79),
                        v22,
                        (struct CActivationBasedAppAndGlomCollection::CGlomCollection **)&hstringHeader,
                        0LL) >= 0 )
            {
              v9 = *((_DWORD *)hstringHeader.Reserved.Reserved1 + 8);
              *((_DWORD *)hstringHeader.Reserved.Reserved1 + 8) = v9 + 1;
            }
          }
          v23 = StringRawBuffer;
          v24 = (CallerIdentity *)WindowsGetStringRawBuffer(v33, 0LL);
          v25 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v30);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp((CApplicationManager *)this, v24, v9, v23, v29, v25);
          if ( ImmersiveApp >= 0 )
          {
            v16 = 0;
            v11 = BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
          }
        }
        v26 = StringRawBuffer;
        if ( StringRawBuffer )
        {
          StringRawBuffer = 0LL;
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v26 + 16LL))(v26);
        }
        v4 = v34;
      }
    }
    else
    {
      v16 = 1;
      v11 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 408LL))(v30) == 0;
    }
    if ( ImmersiveApp >= 0 )
      ImmersiveApp = CApplicationManager::_AddViewToGlom(this, v4, v30, v16, 0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 48LL))(v32);
    v27 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    if ( ImmersiveApp >= 0 )
    {
LABEL_49:
      if ( v11 )
        ((void (__fastcall *)(char *, __int64, struct Windows::Foundation::Collections::IPropertySet *))this[31][18])(
          (char *)this + 248,
          v30,
          a3);
    }
    v28 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  if ( v33 )
    WindowsDeleteString(v33);
  if ( v35[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v35[0] + 16LL))(v35[0]);
}
