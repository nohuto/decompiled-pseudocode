/*
 * XREFs of ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001EDC0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowList::SetHolographic(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  int SyncedWindowData; // eax
  int v7; // ebx
  CTopLevelWindow *v8; // rdi
  int updated; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x76Eu);
  }
  else if ( v12 )
  {
    v8 = (CTopLevelWindow *)*((_QWORD *)v12 + 50);
    if ( v8 )
    {
      v7 = 0;
      if ( a3 != ((*((_BYTE *)v8 + 241) & 4) != 0) )
      {
        *((_BYTE *)v8 + 241) = (4 * a3) | *((_BYTE *)v8 + 241) & 0xFB;
        updated = CTopLevelWindow::UpdateWindowVisuals(v8);
        v7 = updated;
        if ( updated >= 0 )
          CTopLevelWindow::ShowWindow(v8, (*((_BYTE *)v8 + 241) & 4) == 0);
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xDBu);
      }
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x772u);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return (unsigned int)v7;
}
