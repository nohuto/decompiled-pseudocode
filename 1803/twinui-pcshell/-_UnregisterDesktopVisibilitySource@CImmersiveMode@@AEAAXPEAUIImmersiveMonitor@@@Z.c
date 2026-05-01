/*
 * XREFs of ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180118980
 * Callers:
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801179C0 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180112280 (WPP_SF_d.c)
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x18011747C (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1801181D0 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::_UnregisterDesktopVisibilitySource(CImmersiveMode *this, struct IUnknown *a2)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  void *ppvOut; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  v5 = 0LL;
  if ( *((_QWORD *)this + 55) )
  {
    while ( !(unsigned int)SHIsSameObject(**(struct IUnknown ***)(*((_QWORD *)this + 54) + 8 * v5), a2) )
    {
      if ( ++v5 >= *((_QWORD *)this + 55) )
        goto LABEL_14;
    }
    v6 = (__int64 *)(*((_QWORD *)this + 54) + 8 * v5);
    v7 = *v6;
    v8 = *((_QWORD *)this + 55);
    if ( v5 < v8 )
    {
      if ( v5 != v8 - 1 )
      {
        memmove(v6, v6 + 1, 8 * (v8 - v5) - 8);
        v8 = *((_QWORD *)this + 55);
      }
      *((_QWORD *)this + 55) = v8 - 1;
    }
    v4 = *(_DWORD *)(v7 + 8);
    CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'((HWND *)v7);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
      && ((int (__fastcall *)(struct IUnknown *, void **))a2->lpVtbl[1].QueryInterface)(a2, &ppvOut) >= 0
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_5bfe0afb15183a40aba57cd6662ed6d1_Traceguids, (int)ppvOut);
    }
  }
LABEL_14:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    if ( IUnknown_QueryService(
           a2,
           (const GUID *const)&SID_PerMonitorDesktopVisibilityService,
           &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
           &ppvOut) >= 0 )
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 40LL))(ppvOut, v4);
    CImmersiveMode::_HandleDesktopVisibilityChange(this, a2, 0, 0);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
}
