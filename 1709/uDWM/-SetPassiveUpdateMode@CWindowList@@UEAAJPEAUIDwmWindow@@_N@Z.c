/*
 * XREFs of ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002BD50
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::SetPassiveUpdateMode(CWindowList *this, struct IDwmWindow *a2, unsigned __int8 a3)
{
  int SyncedWindowData; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v14 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v14);
  v7 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x7C2u);
  }
  else if ( v14 )
  {
    v8 = *((_QWORD *)v14 + 50);
    if ( v8 )
    {
      v7 = 0;
      if ( a3 != ((*(_BYTE *)(v8 + 241) & 0x10) != 0) )
      {
        v10 = *(_QWORD *)(v8 + 16);
        *(_BYTE *)(v8 + 241) = (16 * a3) | *(_BYTE *)(v8 + 241) & 0xEF;
        v11 = v10 ? *(unsigned int *)(v10 + 24) : 0LL;
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v10 + 16) + 480LL))(
                *(_QWORD *)(v10 + 16),
                v11,
                a3);
        v7 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xF6u);
      }
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x7C6u);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return (unsigned int)v7;
}
