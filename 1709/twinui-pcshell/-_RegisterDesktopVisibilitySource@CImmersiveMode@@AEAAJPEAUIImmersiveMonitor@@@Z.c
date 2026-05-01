/*
 * XREFs of ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18003308C
 * Callers:
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180031F60 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180032920 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     WPP_SF_ddddd @ 0x1800316DC (WPP_SF_ddddd.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x180031820 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x18003366C (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     ?Add@?$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@@@QEAAJAEBQEAVCDesktopVisibilityChangeSource@CImmersiveMode@@PEA_K@Z @ 0x180033F9C (-Add@-$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V-$CTPolicyLo.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveMode::_RegisterDesktopVisibilitySource(CImmersiveMode *this, IUnknown *a2)
{
  HRESULT v4; // esi
  unsigned __int64 i; // rbx
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  __int64 v19; // [rsp+28h] [rbp-39h]
  __int64 v20; // [rsp+30h] [rbp-31h]
  void *ppvOut; // [rsp+48h] [rbp-19h] BYREF
  int v22; // [rsp+50h] [rbp-11h] BYREF
  int v23; // [rsp+54h] [rbp-Dh] BYREF
  __int64 v24; // [rsp+58h] [rbp-9h] BYREF
  int v25; // [rsp+60h] [rbp-1h] BYREF
  _QWORD *v26; // [rsp+68h] [rbp+7h] BYREF
  _QWORD *v27; // [rsp+70h] [rbp+Fh]
  __int64 v28; // [rsp+78h] [rbp+17h]
  int v29[4]; // [rsp+80h] [rbp+1Fh] BYREF

  v28 = -2LL;
  ppvOut = 0LL;
  v4 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_PerMonitorDesktopVisibilityService,
         &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
         &ppvOut);
  if ( v4 >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    for ( i = 0LL; i < *((_QWORD *)this + 56); ++i )
    {
      if ( (unsigned int)SHIsSameObject(
                           **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 55) + 8 * i),
                           a2) )
        v4 = -2147467260;
    }
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v4 >= 0 )
    {
      v6 = ((unsigned __int64)this + 160) & -(__int64)(this != 0LL);
      v24 = 0LL;
      v7 = 0LL;
      v27 = 0LL;
      v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v8;
      if ( v8 )
      {
        *((_DWORD *)v8 + 3) = 1;
        *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDesktopVisibilityChangesNotification>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *v9 = &CDesktopVisibilityChangeHelper::`vftable';
        v9[2] = 0LL;
        if ( v9[2] != v6 )
        {
          if ( v6 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 8LL))(((unsigned __int64)this + 160) & -(__int64)(this != 0LL));
          v10 = v9[2];
          v9[2] = v6;
          if ( v10 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v7 = v9;
      }
      v4 = v7 == 0LL ? 0x8007000E : 0;
      if ( v7 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v7)(
               v7,
               &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
               &v24);
        (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      }
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(void *, __int64, __int64, int *))(*(_QWORD *)ppvOut + 32LL))(
               ppvOut,
               1LL,
               v24,
               &v23);
        if ( v4 < 0 )
          goto LABEL_38;
        v4 = (*(__int64 (__fastcall **)(void *, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, 0LL, &v22);
        if ( v4 < 0 )
          goto LABEL_38;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v27 = v11;
        if ( v11 )
          v12 = CImmersiveMode::CDesktopVisibilityChangeSource::CDesktopVisibilityChangeSource(
                  v11,
                  a2,
                  v23,
                  v22 != 0,
                  *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 49),
                  *((_DWORD *)this + 86));
        else
          v12 = 0LL;
        v26 = v12;
        v4 = v12 == 0LL ? 0x8007000E : 0;
        if ( v12 )
          v4 = CTSimpleArray<CImmersiveMode::CDesktopVisibilityChangeSource *,4294967294,CTPolicyLocalMem<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>>::Add(
                 (char *)this + 440,
                 &v26);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 >= 0 )
        {
          v12 = 0LL;
          v26 = 0LL;
          CImmersiveMode::_HandleDesktopVisibilityChange(this, (struct IImmersiveMonitor *)a2, v22 != 0, 1);
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
            && ((int (__fastcall *)(IUnknown *, int *))a2->lpVtbl[3].QueryInterface)(a2, v29) >= 0
            && ((int (__fastcall *)(IUnknown *, int *))a2->lpVtbl[1].QueryInterface)(a2, &v25) >= 0
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            LODWORD(v20) = v29[2];
            LODWORD(v19) = v29[1];
            WPP_SF_ddddd(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, v29[0], v19, v20, v29[3], v25);
          }
        }
        if ( v12 )
        {
          DestroyWindow((HWND)v12[2]);
          v15 = *v12;
          if ( *v12 )
          {
            *v12 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          }
          operator delete(v12);
        }
        if ( v4 < 0 )
        {
LABEL_38:
          if ( v23 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 40LL))(ppvOut);
        }
      }
      v16 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  v17 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v4;
}
