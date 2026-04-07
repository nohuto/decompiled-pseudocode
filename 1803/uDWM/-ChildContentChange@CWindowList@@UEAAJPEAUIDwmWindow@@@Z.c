/*
 * XREFs of ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800154F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180026E58 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800A40B8 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ChildContentChange(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v4; // edi
  int SyncedWindowData; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rsi
  char v8; // al
  CDesktopManager *v9; // rbp
  int v11; // eax
  CWindowData *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v12 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v12);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x118Bu);
  }
  else
  {
    v7 = v12;
    if ( v12 )
    {
      v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 184LL))(a2);
      if ( ((*((_BYTE *)v7 + 593) & 0x10) != 0) == v8
        || (*((_BYTE *)v7 + 593) ^= (*((_BYTE *)v7 + 593) ^ (16 * v8)) & 0x10,
            v11 = CWindowData::NotifyRepresentationChanged(v7),
            v6 = v11,
            v11 >= 0) )
      {
        v9 = CDesktopManager::s_pDesktopManagerInstance;
        if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 184) )
        {
          do
            CDesktopThumbnailBase::RecloneWindow(*(CDesktopThumbnailBase **)(*((_QWORD *)v9 + 89) + 8LL * v4++), v7);
          while ( v4 < *((_DWORD *)v9 + 184) );
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1195u);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v6;
}
