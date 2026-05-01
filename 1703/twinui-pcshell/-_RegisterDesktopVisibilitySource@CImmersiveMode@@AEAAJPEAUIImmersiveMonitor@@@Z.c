/*
 * XREFs of ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180031770
 * Callers:
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800307B0 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 *     ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1800310F0 (-CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@.c)
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ??$Make@VCDesktopVisibilityChangeHelper@@AEAPEAUIDesktopVisibilityChangesNotification@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDesktopVisibilityChangeHelper@@@12@AEAPEAUIDesktopVisibilityChangesNotification@@@Z @ 0x18002AF04 (--$Make@VCDesktopVisibilityChangeHelper@@AEAPEAUIDesktopVisibilityChangesNotification@@@Details@.c)
 *     WPP_SF_ddddd @ 0x18002FF6C (WPP_SF_ddddd.c)
 *     ??0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_MODE@@@Z @ 0x1800300B0 (--0CDesktopVisibilityChangeSource@CImmersiveMode@@QEAA@PEAUIImmersiveMonitor@@K_N0W4IMM_SYSTEM_M.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180031CD4 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     ?Add@?$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@@@@@QEAAJAEBQEAVCDesktopVisibilityChangeSource@CImmersiveMode@@PEA_K@Z @ 0x18003259C (-Add@-$CTSimpleArray@PEAVCDesktopVisibilityChangeSource@CImmersiveMode@@$0PPPPPPPO@V-$CTPolicyLo.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CImmersiveMode::_RegisterDesktopVisibilitySource(CImmersiveMode *this, IUnknown *a2)
{
  HRESULT v4; // edi
  unsigned __int64 i; // rbx
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-29h]
  __int64 v16; // [rsp+30h] [rbp-21h]
  void *ppvOut; // [rsp+48h] [rbp-9h] BYREF
  int v18; // [rsp+50h] [rbp-1h] BYREF
  int v19; // [rsp+54h] [rbp+3h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp+7h] BYREF
  __int64 v21; // [rsp+60h] [rbp+Fh] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp+17h] BYREF
  int v23[4]; // [rsp+78h] [rbp+27h] BYREF

  v22[1] = -2LL;
  ppvOut = 0LL;
  v4 = IUnknown_QueryService(
         a2,
         (const GUID *const)&SID_PerMonitorDesktopVisibilityService,
         &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
         &ppvOut);
  if ( v4 >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    for ( i = 0LL; i < *((_QWORD *)this + 49); ++i )
    {
      if ( (unsigned int)SHIsSameObject(
                           **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 48) + 8 * i),
                           a2) )
        v4 = -2147467260;
    }
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v4 >= 0 )
    {
      v20 = ((unsigned __int64)this + 120) & -(__int64)(this != 0LL);
      v21 = 0LL;
      Microsoft::WRL::Details::Make<CDesktopVisibilityChangeHelper,IDesktopVisibilityChangesNotification * &>(
        v22,
        (__int64 *)&v20);
      v6 = v22[0];
      v4 = v22[0] == 0LL ? 0x8007000E : 0;
      if ( v22[0] )
        v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v22[0])(
               v22[0],
               &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
               &v21);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(void *, __int64, __int64, int *))(*(_QWORD *)ppvOut + 32LL))(
               ppvOut,
               1LL,
               v21,
               &v19);
        if ( v4 < 0 )
          goto LABEL_31;
        v4 = (*(__int64 (__fastcall **)(void *, _QWORD, int *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, 0LL, &v18);
        if ( v4 < 0 )
          goto LABEL_31;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        v20 = (unsigned __int64)v7;
        if ( v7 )
          v8 = CImmersiveMode::CDesktopVisibilityChangeSource::CDesktopVisibilityChangeSource(
                 v7,
                 a2,
                 v19,
                 v18 != 0,
                 *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 42),
                 *((_DWORD *)this + 72));
        else
          v8 = 0LL;
        v20 = (unsigned __int64)v8;
        v4 = v8 == 0LL ? 0x8007000E : 0;
        if ( v8 )
          v4 = CTSimpleArray<CImmersiveMode::CDesktopVisibilityChangeSource *,4294967294,CTPolicyLocalMem<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardCompareHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>,CSimpleArrayStandardMergeHelper<CImmersiveMode::CDesktopVisibilityChangeSource *>>::Add(
                 (char *)this + 384,
                 &v20);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 >= 0 )
        {
          v8 = 0LL;
          v20 = 0LL;
          CImmersiveMode::_HandleDesktopVisibilityChange(this, (struct IImmersiveMonitor *)a2, v18 != 0, 1);
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
            && ((int (__fastcall *)(IUnknown *, int *))a2->lpVtbl[3].QueryInterface)(a2, v23) >= 0
            && ((int (__fastcall *)(IUnknown *, _QWORD *))a2->lpVtbl[1].QueryInterface)(a2, v22) >= 0
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            LODWORD(v16) = v23[2];
            LODWORD(v15) = v23[1];
            WPP_SF_ddddd(*((_QWORD *)WPP_GLOBAL_Control + 2), v9, v10, v23[0], v15, v16, v23[3], LODWORD(v22[0]));
          }
        }
        if ( v8 )
        {
          DestroyWindow((HWND)v8[2]);
          v11 = *v8;
          if ( *v8 )
          {
            *v8 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
          operator delete(v8);
        }
        if ( v4 < 0 )
        {
LABEL_31:
          if ( v19 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 40LL))(ppvOut);
        }
      }
      v12 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
  }
  v13 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v4;
}
