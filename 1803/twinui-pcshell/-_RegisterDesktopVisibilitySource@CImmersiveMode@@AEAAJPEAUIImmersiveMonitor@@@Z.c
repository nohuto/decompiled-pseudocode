/*
 * XREFs of ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180118380
 * Callers:
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1801176A0 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801179C0 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?s_CreateInstance@CDesktopVisibilityChangeHelper@@SAJPEAUIDesktopVisibilityChangesNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x180112BA0 (-s_CreateInstance@CDesktopVisibilityChangeHelper@@SAJPEAUIDesktopVisibilityChangesNotification@@.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x180116C4C (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ??_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z @ 0x18011747C (--_GCDesktopVisibilityChangeSource@CImmersiveMode@@QEAAPEAXI@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@@@QEAAJ_K0@Z @ 0x1801180FC (-_EnsureCapacity@-$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1801181D0 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     WPP_SF_ddddd @ 0x180118D08 (WPP_SF_ddddd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveMode::_RegisterDesktopVisibilitySource(CImmersiveMode *this, struct IUnknown *a2)
{
  HRESULT v4; // edi
  unsigned __int64 i; // rbx
  void *v6; // rax
  void *v7; // r8
  HWND *v8; // rbx
  __int64 v9; // rdx
  HWND **v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  void *ppvOut; // [rsp+48h] [rbp-19h] BYREF
  int v15; // [rsp+50h] [rbp-11h] BYREF
  int v16; // [rsp+54h] [rbp-Dh] BYREF
  void *v17; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v18[3]; // [rsp+60h] [rbp-1h] BYREF
  _DWORD v19[4]; // [rsp+78h] [rbp+17h] BYREF

  v18[1] = -2LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_PerMonitorDesktopVisibilityService,
         &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
         &ppvOut);
  if ( v4 >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    for ( i = 0LL; i < *((_QWORD *)this + 55); ++i )
    {
      if ( (unsigned int)SHIsSameObject(**(struct IUnknown ***)(*((_QWORD *)this + 54) + 8 * i), a2) )
        v4 = -2147467260;
    }
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v4 >= 0 )
    {
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      v4 = CDesktopVisibilityChangeHelper::s_CreateInstance(
             (struct IDesktopVisibilityChangesNotification *)(((unsigned __int64)this + 152) & -(__int64)(this != 0LL)),
             (const struct _GUID *)((char *)this + 152),
             &v17);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(void *, __int64, void *, int *))(*(_QWORD *)ppvOut + 32LL))(
               ppvOut,
               1LL,
               v17,
               &v16);
        if ( v4 < 0 )
          goto LABEL_28;
        v4 = (*(__int64 (__fastcall **)(void *, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, 0LL, &v15);
        if ( v4 < 0 )
          goto LABEL_28;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v18[0] = v6;
        if ( v6 )
          v8 = (HWND *)CImmersiveMode::CDesktopVisibilityChangeSource::CDesktopVisibilityChangeSource(
                         (__int64)v6,
                         a2,
                         v16,
                         v15 != 0,
                         *((struct IUnknown **)this + 48),
                         *((_DWORD *)this + 84));
        else
          v8 = 0LL;
        v4 = v8 == 0LL ? 0x8007000E : 0;
        if ( v8 )
        {
          v4 = 0;
          v9 = *((_QWORD *)this + 55);
          if ( v9 != *((_QWORD *)this + 57)
            || (v4 = CTSimpleArray<CImmersiveMode::DesktopVisibilityChangeListener *,4294967294,CTPolicyLocalMem<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::DesktopVisibilityChangeListener *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::DesktopVisibilityChangeListener *>>::_EnsureCapacity(
                       (__int64)this + 432,
                       v9 + 1,
                       v7),
                v4 >= 0) )
          {
            v10 = (HWND **)(*((_QWORD *)this + 54) + 8 * (*((_QWORD *)this + 55))++);
            if ( v10 )
              *v10 = v8;
          }
        }
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 >= 0 )
        {
          v8 = 0LL;
          v18[2] = 0LL;
          CImmersiveMode::_HandleDesktopVisibilityChange(this, a2, v15 != 0, 1);
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
            && ((int (__fastcall *)(struct IUnknown *, _DWORD *))a2->lpVtbl[3].QueryInterface)(a2, v19) >= 0
            && ((int (__fastcall *)(struct IUnknown *, _QWORD *))a2->lpVtbl[1].QueryInterface)(a2, v18) >= 0
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_ddddd(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, v19[0], v19[1], v19[2], v19[3], v18[0]);
          }
        }
        if ( v8 )
          CImmersiveMode::CDesktopVisibilityChangeSource::`scalar deleting destructor'(v8);
        if ( v4 < 0 )
        {
LABEL_28:
          if ( v16 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 40LL))(ppvOut);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v4;
}
