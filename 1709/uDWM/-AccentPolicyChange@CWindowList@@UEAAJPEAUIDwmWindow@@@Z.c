/*
 * XREFs of ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019690 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::AccentPolicyChange(CWindowList *this, struct IDwmWindow *a2)
{
  bool v4; // si
  int SyncedWindowData; // eax
  unsigned int v6; // edi
  struct CWindowData *v7; // rbx
  _DWORD *v8; // rax
  CTopLevelWindow *v9; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-38h] BYREF
  struct CWindowData *v12[2]; // [rsp+38h] [rbp-30h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12[0] = 0LL;
  v4 = 1;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, v12);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x110Bu);
  }
  else
  {
    v7 = v12[0];
    if ( v12[0] )
    {
      v8 = (_DWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 216LL))(
                       a2,
                       v12);
      if ( *((_DWORD *)v7 + 38) == *v8 && *((_DWORD *)v7 + 39) == v8[1] )
        v4 = *((_DWORD *)v7 + 40) != v8[2];
      if ( v4 )
      {
        *(_OWORD *)((char *)v7 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 216LL))(
                                                     a2,
                                                     v12);
        v9 = (CTopLevelWindow *)*((_QWORD *)v7 + 50);
        if ( v9 )
          CTopLevelWindow::OnAccentPolicyUpdated(v9);
      }
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v6;
}
