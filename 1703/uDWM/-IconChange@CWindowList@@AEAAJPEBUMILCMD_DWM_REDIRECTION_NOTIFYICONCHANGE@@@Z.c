/*
 * XREFs of ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x1800339C8
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180034FE0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003DF88 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::IconChange(CWindowList *this, const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *a2)
{
  HWND v4; // rdx
  int SyncedWindowDataByHwnd; // eax
  unsigned int v6; // edi
  struct CWindowData *v7; // rbx
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rcx
  CVisual *v12; // rcx
  CWindowIconic *v13; // rcx
  int v14; // eax
  struct CWindowData *v15; // [rsp+48h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(HWND *)((char *)a2 + 4);
  v15 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v4, &v15);
  v6 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0xB12u);
  }
  else
  {
    v7 = v15;
    if ( v15 )
    {
      v8 = *(_QWORD *)((char *)a2 + 12);
      v9 = 0;
      if ( *((_QWORD *)v15 + 17) != v8 )
      {
        *((_QWORD *)v15 + 17) = v8;
        v9 = 1;
      }
      v10 = *(_QWORD *)((char *)a2 + 20);
      if ( *((_QWORD *)v7 + 18) != v10 )
      {
        *((_QWORD *)v7 + 18) = v10;
        v9 = 1;
      }
      if ( v9 )
      {
        v12 = (CVisual *)*((_QWORD *)v7 + 50);
        if ( v12 )
          CVisual::SetDirtyFlags(v12, 0x20000);
        v13 = (CWindowIconic *)*((_QWORD *)v7 + 54);
        if ( v13 )
        {
          v14 = CWindowIconic::OnIconUpdated(v13, 1);
          v6 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB2Du);
        }
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
