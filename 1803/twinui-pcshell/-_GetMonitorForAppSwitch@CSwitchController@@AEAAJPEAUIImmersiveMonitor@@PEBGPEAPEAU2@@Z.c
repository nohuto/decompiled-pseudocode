/*
 * XREFs of ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEBGPEAPEAU2@@Z @ 0x1802B2524
 * Callers:
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEBGPEAPEAU2@@Z @ 0x1802B2810 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonito_ea_1802B2810.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x1800F7708 (--4-$ComPtr@UIImmersiveApplicationManagerInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApp.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z @ 0x1802FD274 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEAUIUnknown@@PEBGPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitch(
        CallerIdentity **this,
        struct IImmersiveMonitor *a2,
        struct IUnknown *a3,
        struct IImmersiveMonitor **a4)
{
  struct IObjectArray **v8; // r9
  HRESULT v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 v12; // rbx
  void *v13; // rbx
  struct IImmersiveMonitor *v14; // rax
  struct IImmersiveMonitor *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int16 v18[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h]
  void *ppvOut; // [rsp+80h] [rbp+30h] BYREF
  int v21; // [rsp+98h] [rbp+48h] BYREF

  v19 = -2LL;
  *a4 = 0LL;
  v16 = 0LL;
  *(_QWORD *)v18 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)v18);
  if ( (int)CallerIdentity::FindAllApplicationsByAppID(this[2], a3, v18, v8) < 0 )
    goto LABEL_13;
  v9 = (*(__int64 (__fastcall **)(_QWORD, void **))(**(_QWORD **)v18 + 24LL))(*(_QWORD *)v18, &ppvOut);
  v10 = 0;
  if ( v9 < 0 )
    goto LABEL_13;
  while ( v10 < (unsigned int)ppvOut )
  {
    v17 = 0LL;
    v11 = *(_QWORD *)v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v11 + 32LL))(
           v11,
           v10,
           &GUID_8b14e88b_5663_4caf_b196_c31479262831,
           &v17);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 64LL))(v17, &v21);
      if ( v9 >= 0 )
      {
        if ( v21 )
        {
          v12 = v17;
          Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
          v9 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor **))(*(_QWORD *)v12 + 232LL))(v12, &v16);
          if ( v9 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
            break;
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    ++v10;
    if ( v9 < 0 )
      break;
  }
  if ( v9 < 0 || !v16 )
  {
LABEL_13:
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IImmersiveApplicationManagerInternal>::operator=((__int64 *)&v16, (__int64)a2);
      v9 = 0;
LABEL_19:
      v14 = v16;
      v16 = 0LL;
      *a4 = v14;
      goto LABEL_20;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v9 = IUnknown_QueryService(
           (IUnknown *)this[2],
           (const GUID *const)&SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           &ppvOut);
    if ( v9 >= 0 )
    {
      v13 = ppvOut;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
      v9 = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v13 + 72LL))(
             v13,
             0LL,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &v16);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  if ( v9 >= 0 )
    goto LABEL_19;
LABEL_20:
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)v18);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v9;
}
