/*
 * XREFs of ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001240C
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180011910 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z @ 0x180015BF0 (-_RecoverApplicationViews@CApplicationManager@@AEAAXPEAUIViewEventDispatcherCrashRecovery@@@Z.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18000731C (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180010B58 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBGKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180014108 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018094 (--$_FindFirstApplication@VCImmersiveAppFinderByAppId@@@CApplicationManager@@AEAAJAEBVCImmersiveA.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByAppIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByAppIdAndGlomId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018A40 (--$_FindFirstApplication@VCImmersiveAppFinderByAppIdAndGlomId@@@CApplicationManager@@AEAAJAEBVCI.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CApplicationManager::_HandleViewCreation(
        __int64 **this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  struct Windows::Foundation::Collections::IPropertySet *v3; // rdi
  unsigned int v6; // esi
  struct IImmersiveMonitor *v7; // rcx
  char v8; // r15
  __int64 v9; // rcx
  int First; // eax
  int v11; // ebx
  unsigned __int64 v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rcx
  int v15; // eax
  int ImmersiveApp; // ebx
  __int64 *v17; // rdi
  __int64 v18; // rbx
  const unsigned __int16 *v19; // rax
  struct IImmersiveMonitor *v20; // rdi
  CallerIdentity *v21; // rbx
  void **v22; // rax
  struct IImmersiveMonitor *v23; // rcx
  PCWSTR v24; // rcx
  __int64 v25; // rcx
  struct _GUID *v26; // [rsp+20h] [rbp-40h]
  HSTRING string; // [rsp+30h] [rbp-30h] BYREF
  struct IImmersiveMonitor *v28; // [rsp+38h] [rbp-28h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *StringRawBuffer; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-18h]
  __int64 v31; // [rsp+50h] [rbp-10h]
  PCWSTR v32; // [rsp+A8h] [rbp+48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v33; // [rsp+B0h] [rbp+50h]
  __int64 v34; // [rsp+B8h] [rbp+58h] BYREF

  v33 = a3;
  v31 = -2LL;
  v3 = a3;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING *))(*(_QWORD *)a2 + 56LL))(
         a2,
         &string) >= 0 )
  {
    v6 = 0;
    if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
    {
      v28 = 0LL;
      (**(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, struct IImmersiveMonitor **))a2)(
        a2,
        &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
        &v28);
      if ( (*(int (__fastcall **)(struct IImmersiveMonitor *, const WCHAR *, PCWSTR *))(*(_QWORD *)v28 + 80LL))(
             v28,
             L"LastSetGlomIdForReconstitution",
             &v32) >= 0 )
        v6 = (unsigned int)v32;
      v7 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    v34 = 0LL;
    v8 = 0;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = v34;
    if ( v6 )
    {
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      StringRawBuffer = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)WindowsGetStringRawBuffer(
                                                                                          string,
                                                                                          0LL);
      v30 = v6;
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppIdAndGlomId>(
                this,
                &StringRawBuffer,
                &v34);
    }
    else
    {
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v32 = WindowsGetStringRawBuffer(string, 0LL);
      First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>(this, &v32, &v34);
    }
    v11 = First;
    if ( First >= 0 )
    {
      v8 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 408LL))(v34) == 0;
      v11 = CApplicationManager::_AddViewToGlom(this, a2, v34, 1LL, 0LL);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v11 >= 0 )
      goto LABEL_41;
    v12 = (unsigned __int64)(this + 19) & -(__int64)(this != 0LL);
    v32 = 0LL;
    (*(void (__fastcall **)(unsigned __int64, GUID *, GUID *, PCWSTR *))(*(_QWORD *)v12 + 24LL))(
      v12,
      &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
      &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
      &v32);
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v32 + 40LL))(v32);
    v13 = -1;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v14 = v34;
    if ( v6 )
    {
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      StringRawBuffer = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)WindowsGetStringRawBuffer(
                                                                                          string,
                                                                                          0LL);
      v30 = v6;
      v15 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppIdAndGlomId>(
              this,
              &StringRawBuffer,
              &v34);
    }
    else
    {
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v28 = (struct IImmersiveMonitor *)WindowsGetStringRawBuffer(string, 0LL);
      v15 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByAppId>(this, &v28, &v34);
    }
    ImmersiveApp = v15;
    if ( v15 < 0 )
    {
      if ( v15 == -2147319765 )
      {
        v28 = 0LL;
        v17 = this[62];
        v18 = *v17;
        v26 = (struct _GUID *)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v28);
        ImmersiveApp = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *))(v18 + 72))(
                         v17,
                         0LL,
                         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                         &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
        if ( ImmersiveApp >= 0 )
        {
          if ( !v6 )
          {
            v19 = WindowsGetStringRawBuffer(string, 0LL);
            v6 = 1;
            if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(
                        (CActivationBasedAppAndGlomCollection *)(this + 70),
                        v19,
                        &StringRawBuffer,
                        0LL) >= 0 )
            {
              v6 = *((_DWORD *)StringRawBuffer + 8);
              *((_DWORD *)StringRawBuffer + 8) = v6 + 1;
            }
          }
          v20 = v28;
          v21 = (CallerIdentity *)WindowsGetStringRawBuffer(string, 0LL);
          v22 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v34);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp((CApplicationManager *)this, v21, v6, v20, v26, v22);
          if ( ImmersiveApp >= 0 )
          {
            v13 = 0;
            v8 = BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
          }
        }
        v23 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v23 + 16LL))(v23);
        }
        v3 = v33;
      }
    }
    else
    {
      v13 = 1;
      v8 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v34 + 408LL))(v34) == 0;
    }
    if ( ImmersiveApp >= 0 )
      ImmersiveApp = CApplicationManager::_AddViewToGlom(this, a2, v34, v13, 0LL);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v32 + 48LL))(v32);
    v24 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( ImmersiveApp >= 0 )
    {
LABEL_41:
      if ( v8 )
        ((void (__fastcall *)(char *, __int64, struct Windows::Foundation::Collections::IPropertySet *))this[25][18])(
          (char *)this + 200,
          v34,
          v3);
    }
    v25 = v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  if ( string )
    WindowsDeleteString(string);
}
