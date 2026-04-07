/*
 * XREFs of ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A900
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001ED04 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800263D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0pddddd @ 0x18007D22C (McTemplateU0pddddd.c)
 */

__int64 __fastcall CWindowList::DPIChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  struct CWindowData *v6; // rbx
  __int64 v7; // rax
  bool v8; // cl
  BOOL v9; // edi
  int updated; // eax
  int v11; // edx
  int v12; // ecx
  struct CWindowData *v14; // [rsp+60h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x119Au);
  }
  else
  {
    v6 = v14;
    if ( v14 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
      v8 = *((double *)v6 + 40) != *(double *)v7
        || *((_DWORD *)v6 + 82) != *(_DWORD *)(v7 + 8)
        || *((_DWORD *)v6 + 83) != *(_DWORD *)(v7 + 12);
      v9 = *((_DWORD *)v6 + 84) != *(_DWORD *)(v7 + 16)
        || *((_DWORD *)v6 + 85) != *(_DWORD *)(v7 + 20)
        || *((_DWORD *)v6 + 86) != *(_DWORD *)(v7 + 24)
        || *((_DWORD *)v6 + 87) != *(_DWORD *)(v7 + 28);
      *((_OWORD *)v6 + 20) = *(_OWORD *)v7;
      *((_OWORD *)v6 + 21) = *(_OWORD *)(v7 + 16);
      *((_QWORD *)v6 + 38) = *(_QWORD *)v7;
      *((_QWORD *)v6 + 39) = *(_QWORD *)v7;
      if ( *((_QWORD *)v6 + 50) && v8 )
        CTopLevelWindow::OnSettingsUpdated(*((CTopLevelWindow **)v6 + 50), 1);
      updated = CWindowList::UpdateWindowScale(this, v6, v9);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x11B5u);
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        McTemplateU0pddddd(
          v12,
          v11,
          *((_QWORD *)v6 + 5),
          *((_DWORD *)v6 + 82),
          *((_DWORD *)v6 + 84),
          *((_DWORD *)v6 + 85),
          *((_DWORD *)v6 + 86),
          *((_DWORD *)v6 + 87));
      }
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
