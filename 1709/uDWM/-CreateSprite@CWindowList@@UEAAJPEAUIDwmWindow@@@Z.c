/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800282D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180011168 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180027100 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029DB0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002C1BC (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x180035858 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // bp
  int SyncedWindowData; // eax
  unsigned int v6; // ebx
  CWindowData *v7; // rdi
  CWindowData *v8; // rax
  CWindowData **v9; // rcx
  __int64 Element; // rax
  CWindowData **v11; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  CWindowData *v15; // [rsp+60h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  v4 = 1;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1333;
LABEL_21:
    v13 = SyncedWindowData;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v14);
    goto LABEL_18;
  }
  v7 = v15;
  if ( !v15 )
  {
    if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
      goto LABEL_22;
    SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v15);
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1337;
      goto LABEL_21;
    }
    v7 = v15;
    v4 = 0;
    if ( !v15 )
    {
LABEL_22:
      v6 = -2147024890;
      v14 = 1341;
LABEL_23:
      v13 = v6;
      goto LABEL_24;
    }
  }
  if ( (*((_BYTE *)v7 + 592) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v7);
  if ( !*((_DWORD *)v7 + 32) )
  {
    SyncedWindowData = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD))(*(_QWORD *)a2 + 312LL))(
                         a2,
                         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1353;
      goto LABEL_21;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v7);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1357;
    goto LABEL_21;
  }
  v8 = *(CWindowData **)v7;
  if ( *(CWindowData **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = (CWindowData **)*((_QWORD *)v7 + 1), *v9 != v7) )
    __fastfail(3u);
  *v9 = v8;
  *((_QWORD *)v8 + 1) = v9;
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (char *)this + 8,
              *((_QWORD *)v7 + 15));
  if ( Element )
    Element += 64LL;
  if ( !Element )
  {
    v6 = -2147024882;
    v14 = 1369;
    goto LABEL_23;
  }
  v11 = *(CWindowData ***)(Element + 8);
  if ( *v11 != (CWindowData *)Element )
    __fastfail(3u);
  *((_QWORD *)v7 + 1) = v11;
  *(_QWORD *)v7 = Element;
  *v11 = v7;
  *(_QWORD *)(Element + 8) = v7;
  CWindowData::ClearSnapshot(v7, 1, 0LL, 1);
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1378;
    goto LABEL_21;
  }
  if ( (*((_BYTE *)v7 + 592) & 1) != 0 )
  {
    SyncedWindowData = CWindowList::ShowHide(this, v7, 1);
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1382;
      goto LABEL_21;
    }
  }
  if ( WinSqmIsOptedIn_CachedInDwm() && v4 )
    *((_BYTE *)v7 + 595) |= 2u;
LABEL_18:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
