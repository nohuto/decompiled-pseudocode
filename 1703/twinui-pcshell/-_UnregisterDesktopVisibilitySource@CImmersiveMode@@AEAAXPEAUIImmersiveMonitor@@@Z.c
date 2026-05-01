/*
 * XREFs of ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x180031B0C
 * Callers:
 *     ?DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1800307B0 (-DisplaySettingsChange@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_C.c)
 * Callees:
 *     WPP_SF_d @ 0x180006BA0 (WPP_SF_d.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180031CD4 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::_UnregisterDesktopVisibilitySource(CImmersiveMode *this, struct IImmersiveMonitor *a2)
{
  unsigned int v4; // ebp
  unsigned __int64 v5; // rdi
  __int64 *v6; // rsi
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rcx
  void *ppvOut; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  v5 = 0LL;
  if ( *((_QWORD *)this + 49) )
  {
    while ( !(unsigned int)SHIsSameObject(
                             **(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 48) + 8 * v5),
                             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2) )
    {
      if ( ++v5 >= *((_QWORD *)this + 49) )
        goto LABEL_16;
    }
    v6 = *(__int64 **)(*((_QWORD *)this + 48) + 8 * v5);
    v7 = *((_QWORD *)this + 49);
    if ( v5 < v7 )
    {
      if ( v5 != v7 - 1 )
        memmove(
          (void *)(*((_QWORD *)this + 48) + 8 * v5),
          (const void *)(*((_QWORD *)this + 48) + 8 * v5 + 8),
          8 * (v7 - v5) - 8);
      --*((_QWORD *)this + 49);
    }
    v4 = *((_DWORD *)v6 + 2);
    DestroyWindow((HWND)v6[2]);
    v8 = *v6;
    if ( *v6 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    operator delete(v6);
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
      && (*(int (__fastcall **)(struct IImmersiveMonitor *, void **))(*(_QWORD *)a2 + 24LL))(a2, &ppvOut) >= 0
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_ec78d6d4df123bb2dcb1c9b30d08f526_Traceguids, (int)ppvOut);
    }
  }
LABEL_16:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v4 )
  {
    ppvOut = 0LL;
    if ( IUnknown_QueryService(
           (IUnknown *)a2,
           (const GUID *const)&SID_PerMonitorDesktopVisibilityService,
           &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
           &ppvOut) >= 0 )
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 40LL))(ppvOut, v4);
    CImmersiveMode::_HandleDesktopVisibilityChange(this, a2, 0, 0);
    v9 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
}
