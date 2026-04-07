/*
 * XREFs of ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002C010
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001EE5C (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180024928 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18006C8BC (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x180077850 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x1800A85A8 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CWindowList::SettingsChange(
        CWindowList *this,
        const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *a2)
{
  int updated; // eax
  unsigned int v5; // r14d
  struct _RTL_GENERIC_TABLE *v6; // r15
  CImmersiveIconicBitmapRegistry *v7; // r13
  _QWORD *v8; // rax
  char *v10; // rdi
  char *i; // rbx
  CTopLevelWindow *v12; // rcx
  __int64 v13; // rsi
  int v14; // eax
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v15; // rsi
  unsigned int v16; // edx
  PVOID RestartKey; // [rsp+78h] [rbp+10h] BYREF
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+80h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+88h] [rbp+20h] BYREF

  RestartKey = 0LL;
  v19 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CDesktopManager::UpdateSettings(CDesktopManager::s_pDesktopManagerInstance, *((_DWORD *)a2 + 1));
  v5 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x157Cu);
  }
  else
  {
    if ( (*((_BYTE *)a2 + 4) & 0x20) != 0 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 60) + 80LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60));
    v6 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
    v7 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33);
    while ( 1 )
    {
      v8 = RtlEnumerateGenericTableWithoutSplaying(v6, &RestartKey);
      if ( !v8 )
        break;
      v10 = (char *)(v8 + 8);
      for ( i = (char *)v8[8]; i != v10; i = *(char **)i )
      {
        v12 = (CTopLevelWindow *)*((_QWORD *)i + 49);
        if ( v12 )
          CTopLevelWindow::OnSettingsUpdated(v12, *((_DWORD *)a2 + 1));
        v13 = *((_QWORD *)i + 54);
        if ( v13 )
        {
          CTopLevelWindow::OnSettingsUpdated(*(CTopLevelWindow **)(v13 + 88), *((_DWORD *)a2 + 1));
          v14 = CVisual::RenderRecursive(*(CVisual **)(v13 + 88));
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x283u);
        }
        if ( CWindowData::IsImmersiveWindow((CWindowData *)i) )
        {
          if ( *((_DWORD *)i + 116) )
          {
            IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(v7, *((HWND *)i + 5));
            v15 = IconicResourceNoRef;
            DynArray<CBitmapSource *,0>::Remove((char *)v7 + 16, &IconicResourceNoRef);
            if ( v15 )
              CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v15, v16);
          }
        }
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v19);
  return v5;
}
