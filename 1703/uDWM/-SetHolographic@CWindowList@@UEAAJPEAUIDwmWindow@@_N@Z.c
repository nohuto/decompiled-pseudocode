/*
 * XREFs of ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180032CC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::SetHolographic(CWindowList *this, struct IDwmWindow *a2, char a3)
{
  int SyncedWindowData; // eax
  int v7; // ebx
  CTopLevelWindow *v8; // rdi
  int updated; // eax
  __int64 v11; // rdx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, 0x735u);
  }
  else if ( v13 )
  {
    v8 = (CTopLevelWindow *)*((_QWORD *)v13 + 50);
    if ( v8 )
    {
      v7 = 0;
      if ( a3 != ((*((_BYTE *)v8 + 241) & 4) != 0) )
      {
        *((_BYTE *)v8 + 241) = (4 * a3) | *((_BYTE *)v8 + 241) & 0xFB;
        updated = CTopLevelWindow::UpdateWindowVisuals(v8);
        v7 = updated;
        if ( updated >= 0 )
        {
          LOBYTE(v11) = (*((_BYTE *)v8 + 241) & 4) == 0;
          CTopLevelWindow::ShowWindow(v8, v11);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xE2u);
        }
      }
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x739u);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return (unsigned int)v7;
}
