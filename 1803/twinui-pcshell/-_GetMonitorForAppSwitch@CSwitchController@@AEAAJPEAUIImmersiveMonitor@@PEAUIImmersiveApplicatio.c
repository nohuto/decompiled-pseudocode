/*
 * XREFs of ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1802B238C
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1802B2740 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180003FE4 (--4-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitch(
        IUnknown **this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveApplication *a3,
        struct IImmersiveMonitor **a4)
{
  HRESULT v8; // ebx
  void *v9; // rbx
  struct IImmersiveMonitor *v10; // rax
  struct IImmersiveMonitor *v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13[3]; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+90h] [rbp+40h] BYREF
  void *ppvOut; // [rsp+98h] [rbp+48h] BYREF

  v13[1] = -2LL;
  *a4 = 0LL;
  v12 = 0LL;
  v8 = -2147023728;
  (*(void (__fastcall **)(struct IImmersiveApplication *, int *))(*(_QWORD *)a3 + 64LL))(a3, &v14);
  if ( !v14 && a2 )
    goto LABEL_9;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v13);
  if ( (*(int (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)a3 + 232LL))(a3, v13) >= 0
    && (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v13[0] + 48LL))(v13[0], &ppvOut) >= 0
    && (_DWORD)ppvOut )
  {
    Microsoft::WRL::ComPtr<IViewWrapperInternal>::operator=((__int64 *)&v12, v13);
    v8 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v13);
  if ( v8 >= 0 )
    goto LABEL_14;
  if ( a2 )
  {
LABEL_9:
    Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=((__int64 *)&v12, (__int64)a2);
    v8 = 0;
  }
  if ( v8 >= 0 )
    goto LABEL_14;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         this[2],
         (const GUID *const)&SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &ppvOut);
  if ( v8 >= 0 )
  {
    v9 = ppvOut;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v12);
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v9 + 72LL))(
           v9,
           0LL,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  if ( v8 >= 0 )
  {
LABEL_14:
    v10 = v12;
    v12 = 0LL;
    *a4 = v10;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v8;
}
