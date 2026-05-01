/*
 * XREFs of ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x180106260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180041C70 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800F0D9C (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1508 (-_IWMFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x1800F8340 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180102024 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180111498 (-_RemoveWindowFromGlom@CApplicationManager@@AEAAXAEBVCTaskWindowFinder@@PEAUIImmersiveApplicatio.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::CreateNewGlom(
        CApplicationManager *this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveApplicationInternal *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4,
        struct IImmersiveApplicationInternal **a5)
{
  struct IImmersiveApplicationInternal **v9; // r12
  int ImmersiveApp; // ebx
  __int64 v11; // rbx
  HWND v12; // rdx
  struct IImmersiveMonitor *v13; // rbx
  unsigned __int16 *v14; // rdi
  unsigned int NextGlomId; // eax
  struct IImmersiveApplicationInternal **v16; // rax
  const struct _GUID *v18; // [rsp+30h] [rbp-39h]
  __int64 v19; // [rsp+48h] [rbp-21h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+58h] [rbp-11h] BYREF
  void *v22; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int16 *v25; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]
  __int64 v28; // [rsp+90h] [rbp+27h]
  __int64 v29; // [rsp+D8h] [rbp+6Fh] BYREF

  v28 = -2LL;
  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v19 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  ImmersiveApp = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a3)(
                   a3,
                   &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                   &v19);
  if ( ImmersiveApp >= 0 )
  {
    ImmersiveApp = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v19, &v23);
    if ( ImmersiveApp >= 0 )
    {
      v24 = -1LL;
      ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v24);
      if ( ImmersiveApp >= 0 )
      {
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v11 = v19;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
        v26 = -1LL;
        v27 = -1LL;
        ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v11 + 32LL))(v11, &v25);
        if ( ImmersiveApp >= 0 )
        {
          v29 = 0LL;
          v20 = a2;
          v21 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
          CApplicationManager::_RemoveWindowFromGlom((char *)this - 240, &v20, a3);
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v21);
          v22 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
          ImmersiveApp = CApplicationManager::_IWMFromWindow(
                           (CApplicationManager *)((char *)this - 240),
                           v12,
                           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
                           &v22);
          if ( ImmersiveApp < 0 )
            goto LABEL_9;
          v20 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
          (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)a3 + 464LL))(
            a3,
            &v20);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
          v13 = v20;
          v14 = v25;
          NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                         (CApplicationManager *)((char *)this + 376),
                         v25);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                           (CApplicationManager *)((char *)this - 240),
                           v14,
                           v24,
                           NextGlomId,
                           v13,
                           v18,
                           (void **)&a5);
          if ( ImmersiveApp >= 0 )
            ImmersiveApp = CApplicationManager::_AddViewToGlom(
                             (__int64)this - 240,
                             0LL,
                             (CImmersiveApp *)a5,
                             0,
                             v29,
                             (__int64 (__fastcall ***)(_QWORD, GUID *, CWinRTApplicationView **))a4);
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v20);
          if ( ImmersiveApp < 0 )
LABEL_9:
            CApplicationManager::_AddViewToGlom(
              (__int64)this - 240,
              0LL,
              a3,
              9,
              v29,
              (__int64 (__fastcall ***)(_QWORD, GUID *, CWinRTApplicationView **))a4);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v25);
        if ( ImmersiveApp >= 0 )
        {
          v16 = a5;
          a5 = 0LL;
          *v9 = (struct IImmersiveApplicationInternal *)v16;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ImmersiveApp;
}
