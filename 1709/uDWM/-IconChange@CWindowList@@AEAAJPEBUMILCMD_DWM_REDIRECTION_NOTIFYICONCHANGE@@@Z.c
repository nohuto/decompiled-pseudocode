/*
 * XREFs of ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180026194
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002ADB0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800276A0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180037CFC (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::IconChange(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // edi
  struct CWindowData *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // al
  CVisual *v13; // rcx
  CWindowIconic *v14; // rcx
  int v15; // eax
  struct CWindowData *v16; // [rsp+48h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v16 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v16);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0xB46u);
  }
  else
  {
    v7 = v16;
    if ( v16 )
    {
      v8 = *((_QWORD *)v16 + 17);
      v9 = *(_QWORD *)((char *)a2 + 12);
      if ( v8 != v9 )
        *((_QWORD *)v16 + 17) = v9;
      v10 = *(_QWORD *)((char *)a2 + 20);
      v11 = v8 != v9;
      if ( *((_QWORD *)v7 + 18) != v10 )
      {
        *((_QWORD *)v7 + 18) = v10;
        v11 = 1;
      }
      if ( v11 )
      {
        v13 = (CVisual *)*((_QWORD *)v7 + 50);
        if ( v13 )
          CVisual::SetDirtyFlags(v13, 0x20000);
        v14 = (CWindowIconic *)*((_QWORD *)v7 + 54);
        if ( v14 )
        {
          v15 = CWindowIconic::OnIconUpdated(v14, 1);
          v6 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xB61u);
        }
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
