/*
 * XREFs of ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180126678
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x18011FB60 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 *     ?GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x180120870 (-GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@P.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800886F0 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801261D8 (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CAppViewManager::_GetViewForSwitchInternal(CAppViewManager *a1, int a2, const unsigned __int16 *a3, ...)
{
  struct IUnknown *v6; // r13
  __int64 v7; // rbx
  struct IImmersiveMonitor *v8; // r8
  int MostRecentlyUsedViewForApp; // r14d
  RTL_SRWLOCK *v10; // rdi
  __int64 v11; // rsi
  HWND v12; // rsi
  struct IUnknown *v13; // rax
  struct IUnknown *v15; // [rsp+30h] [rbp-30h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-28h] BYREF
  __int64 v17[4]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h] BYREF
  va_list va; // [rsp+A8h] [rbp+48h]
  struct IUnknown *v20; // [rsp+B0h] [rbp+50h] BYREF
  va_list va1; // [rsp+B0h] [rbp+50h]
  va_list va2; // [rsp+B8h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, struct IUnknown *);
  v17[1] = -2LL;
  v6 = v20;
  v20->lpVtbl = 0LL;
  v7 = 0LL;
  v17[0] = 0LL;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va1);
  MostRecentlyUsedViewForApp = CAppViewManager::_GetMostRecentlyUsedViewForApp(
                                 a1,
                                 a3,
                                 v8,
                                 (struct IImmersiveApplicationInternal **)va1);
  if ( MostRecentlyUsedViewForApp < 0 || a2 != 1 )
    goto LABEL_15;
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  v17[2] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = 0LL;
  v11 = *((_QWORD *)a1 + 15);
  Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease((void **)&v16);
  if ( (*(int (__fastcall **)(__int64, const unsigned __int16 *, _QWORD **))(*(_QWORD *)v11 + 56LL))(v11, a3, &v16) >= 0
    && *((_BYTE *)v16 + 32) )
  {
    v12 = (HWND)v16[3];
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    if ( (int)CAppViewManager::_GetGlomForWindow(a1, v12, (struct IImmersiveApplicationInternal **)&v15, (bool *)va) >= 0 )
    {
      if ( (_BYTE)v18 )
      {
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v17, (__int64 *)&v15);
        v7 = v17[0];
      }
      else
      {
        if ( !(unsigned int)SHIsSameObject(v20, v15) )
          (*(void (__fastcall **)(_QWORD, HWND, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                             + 96LL))(
            *((_QWORD *)a1 + 15),
            v12,
            v15,
            v20,
            0LL);
        ((void (__fastcall *)(struct IUnknown *, HWND, __int64))v20->lpVtbl[4].Release)(v20, v12, 2LL);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease((void **)&v16);
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  if ( !v7 )
LABEL_15:
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(v17, (__int64 *)va1);
  if ( MostRecentlyUsedViewForApp >= 0 )
  {
    v13 = v20;
    v20 = 0LL;
    v6->lpVtbl = (struct IUnknownVtbl *)v13;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
  return (unsigned int)MostRecentlyUsedViewForApp;
}
