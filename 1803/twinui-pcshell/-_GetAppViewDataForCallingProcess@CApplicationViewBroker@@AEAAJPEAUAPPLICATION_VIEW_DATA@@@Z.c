/*
 * XREFs of ?_GetAppViewDataForCallingProcess@CApplicationViewBroker@@AEAAJPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18008EC68
 * Callers:
 *     ?GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z @ 0x18008ED70 (-GetApplicationViewState@CApplicationViewBroker@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z.c)
 *     ?GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1802B3300 (-GetApplicationViewData@CApplicationViewBroker@@UEAAJPEAUHWND__@@PEAUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z @ 0x180044A50 (-GetApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x18008ED98 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationViewBroker::_GetAppViewDataForCallingProcess(
        CApplicationViewBroker *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  unsigned __int16 **v4; // rdx
  int CallingProcessAppId; // edi
  CApplicationManager *v6; // rdi
  __int64 (__fastcall *v7)(CApplicationManager *, const unsigned __int16 *, struct IImmersiveApplication **); // rax
  int Application; // eax
  struct IImmersiveApplication *v10; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int16 *v11; // [rsp+30h] [rbp-41h] BYREF
  __int64 v12; // [rsp+38h] [rbp-39h]
  __int64 v13; // [rsp+40h] [rbp-31h]
  __int64 v14; // [rsp+48h] [rbp-29h]
  _OWORD v15[2]; // [rsp+58h] [rbp-19h] BYREF
  int v16; // [rsp+78h] [rbp+7h]

  v14 = -2LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_DWORD *)a2 + 8) = 3;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v11);
  v12 = -1LL;
  v13 = -1LL;
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((CallerIdentity *)&v11, v4);
  if ( CallingProcessAppId >= 0 )
  {
    v10 = 0LL;
    v6 = (CApplicationManager *)*((_QWORD *)this + 2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    v7 = *(__int64 (__fastcall **)(CApplicationManager *, const unsigned __int16 *, struct IImmersiveApplication **))(*(_QWORD *)v6 + 32LL);
    if ( v7 == CApplicationManager::GetApplication )
      Application = CApplicationManager::GetApplication(v6, v11, &v10);
    else
      Application = v7(v6, v11, &v10);
    CallingProcessAppId = Application;
    if ( Application >= 0 )
    {
      CallingProcessAppId = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, _OWORD *))(*(_QWORD *)v10 + 216LL))(
                              v10,
                              v15);
      if ( CallingProcessAppId >= 0 )
      {
        *(_OWORD *)a2 = v15[0];
        *((_OWORD *)a2 + 1) = v15[1];
        *((_DWORD *)a2 + 8) = v16;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v11);
  return (unsigned int)CallingProcessAppId;
}
