/*
 * XREFs of ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCInputTarget@@0@Z @ 0x180050B54
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x180086834 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z @ 0x180051320 (-MPCHolographicInputManager_FocusedAppDisabled3DGamepad_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z @ 0x1800513A4 (-MPCHolographicInputManager_FocusedAppDisabled3DMouse_@ISMTracing@@QEAAXAEB_N@Z.c)
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x180058784 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCHolographicInputManager::OnTargetWithFocus3dChanged(
        MPCHolographicInputManager *this,
        struct IMPCInputTarget *a2,
        struct IMPCInputTarget *a3)
{
  char v4; // bp
  char v5; // r14
  HWND v7; // rax
  HWND v8; // rax
  MPCCursorManager *v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx
  _DWORD *v13; // rcx
  ISMTracing *v14; // rcx

  v4 = 0;
  v5 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x400) == 0 )
  {
    if ( a3
      && (*(unsigned int (__fastcall **)(struct IMPCInputTarget *, struct IMPCInputTarget *))(*(_QWORD *)a3 + 56LL))(
           a3,
           a2) == 1 )
    {
      v7 = (HWND)(*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 64LL))(a3);
      v4 = GetPropW(v7, L"Windows.UI.Input.Spatial.DisableMouseRouting") != 0LL;
      v8 = (HWND)(*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)a3 + 64LL))(a3);
      v5 = GetPropW(v8, L"Windows.UI.Input.Spatial.Disable3DFocusGamepadRouting") != 0LL;
    }
    if ( v4 != *((_BYTE *)this + 2010) )
    {
      *((_BYTE *)this + 2010) = v4;
      v9 = (MPCCursorManager *)*((_QWORD *)this + 254);
      if ( v9 && *((_BYTE *)v9 + 64) )
      {
        MPCHolographicInputManager::GetInstance();
        *((_BYTE *)v9 + 56) = *(_DWORD *)(v10 + 2272) == 1;
        MPCCursorManager::UpdateMouseBinding(v9);
      }
      v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v11 && *v11 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DMouse_(v12, (const bool *)this + 2010);
      }
    }
    if ( v5 != *((_BYTE *)this + 2011) )
    {
      *((_BYTE *)this + 2011) = v5;
      v13 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v13 )
      {
        if ( *v13 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCHolographicInputManager_FocusedAppDisabled3DGamepad_(v14, (const bool *)this + 2011);
        }
      }
    }
  }
}
