/*
 * XREFs of ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000A694
 * Callers:
 *     ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18000A800 (-GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMoni.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180009DA8 (-_GetMostRecentlyUsedViewForAppInstance@CAppViewManager@@AEAAJ_KPEAUIImmersiveMonitor@@PEAPEAUII.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?GetPerHostIdApplicationData@CApplicationManager@@UEAAJ_KPEAPEAV?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@Z @ 0x180043920 (-GetPerHostIdApplicationData@CApplicationManager@@UEAAJ_KPEAPEAV-$CRefCountedObject@UPER_APPLICA.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800886F0 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CAppViewManager::_GetViewForSwitchInternalByHostId(CAppViewManager *a1, int a2, unsigned __int64 a3, ...)
{
  struct IUnknown *v6; // r12
  __int64 v7; // rdi
  struct IImmersiveMonitor *v8; // r8
  int MostRecentlyUsedViewForAppInstance; // esi
  RTL_SRWLOCK *v10; // rbx
  __int64 v11; // r14
  __int64 (__fastcall *v12)(__int64, unsigned __int64, __int64 *); // rax
  int PerHostIdApplicationData; // eax
  struct IUnknown *v14; // rax
  HWND v16; // r14
  struct IUnknown *v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+48h] BYREF
  va_list va; // [rsp+A8h] [rbp+48h]
  struct IUnknown *v22; // [rsp+B0h] [rbp+50h] BYREF
  va_list va1; // [rsp+B0h] [rbp+50h]
  va_list va2; // [rsp+B8h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, struct IUnknown *);
  v19[1] = -2LL;
  v6 = v22;
  v22->lpVtbl = 0LL;
  v7 = 0LL;
  v19[0] = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va1);
  MostRecentlyUsedViewForAppInstance = CAppViewManager::_GetMostRecentlyUsedViewForAppInstance(
                                         a1,
                                         a3,
                                         v8,
                                         (struct IImmersiveApplicationInternal **)va1);
  if ( MostRecentlyUsedViewForAppInstance < 0 || a2 != 1 )
    goto LABEL_10;
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  v19[2] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v18 = 0LL;
  v11 = *((_QWORD *)a1 + 15);
  Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease(&v18);
  v12 = *(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v11 + 64LL);
  if ( (char *)v12 == (char *)CApplicationManager::GetPerHostIdApplicationData )
    PerHostIdApplicationData = CApplicationManager::GetPerHostIdApplicationData(v11, a3, &v18);
  else
    PerHostIdApplicationData = v12(v11, a3, &v18);
  if ( PerHostIdApplicationData >= 0 && *(_BYTE *)(v18 + 32) )
  {
    v16 = *(HWND *)(v18 + 24);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    if ( (int)CAppViewManager::_GetGlomForWindow(a1, v16, (struct IImmersiveApplicationInternal **)&v17, (bool *)va) >= 0 )
    {
      if ( (_BYTE)v20 )
      {
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v19, &v17);
        v7 = v19[0];
      }
      else
      {
        if ( !(unsigned int)SHIsSameObject(v22, v17) )
          (*(void (__fastcall **)(_QWORD, HWND, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                             + 96LL))(
            *((_QWORD *)a1 + 15),
            v16,
            v17,
            v22,
            0LL);
        ((void (__fastcall *)(struct IUnknown *, HWND, __int64))v22->lpVtbl[4].Release)(v22, v16, 2LL);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease(&v18);
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  if ( !v7 )
LABEL_10:
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v19, (struct IUnknown **)va1);
  if ( MostRecentlyUsedViewForAppInstance >= 0 )
  {
    v14 = v22;
    v22 = 0LL;
    v6->lpVtbl = (struct IUnknownVtbl *)v14;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  return (unsigned int)MostRecentlyUsedViewForAppInstance;
}
