/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F490
 * Callers:
 *     <none>
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180015AD8 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x1800163FC (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030EB0 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180034A28 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180034C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180036060 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  char v4; // bp
  int SyncedWindowData; // eax
  unsigned int v6; // ebx
  struct CWindowData *v7; // rdi
  struct CWindowData *v8; // rcx
  struct CWindowData **v9; // rax
  struct CWindowData *Element; // rax
  struct CWindowData **v11; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  struct CWindowData *v15; // [rsp+60h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  v4 = 1;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1271;
LABEL_21:
    v13 = SyncedWindowData;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
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
      v14 = 1275;
      goto LABEL_21;
    }
    v7 = v15;
    v4 = 0;
    if ( !v15 )
    {
LABEL_22:
      v6 = -2147024890;
      v14 = 1279;
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
      v14 = 1291;
      goto LABEL_21;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v7);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1295;
    goto LABEL_21;
  }
  v8 = *(struct CWindowData **)v7;
  v9 = (struct CWindowData **)*((_QWORD *)v7 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)v7 + 8LL) != v7 || *v9 != v7 )
    __fastfail(3u);
  *v9 = v8;
  *((_QWORD *)v8 + 1) = v9;
  Element = (struct CWindowData *)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                                    (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
                                    *((_QWORD *)v7 + 15));
  if ( Element )
    Element = (struct CWindowData *)((char *)Element + 64);
  if ( !Element )
  {
    v6 = -2147024882;
    v14 = 1307;
    goto LABEL_23;
  }
  v11 = (struct CWindowData **)*((_QWORD *)Element + 1);
  if ( *v11 != Element )
    __fastfail(3u);
  *((_QWORD *)v7 + 1) = v11;
  *(_QWORD *)v7 = Element;
  *v11 = v7;
  *((_QWORD *)Element + 1) = v7;
  CWindowData::ClearSnapshot(v7, 1, 0, 1);
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v6 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1316;
    goto LABEL_21;
  }
  if ( (*((_BYTE *)v7 + 592) & 1) != 0 )
  {
    SyncedWindowData = CWindowList::ShowHide(this, v7, 1);
    v6 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1320;
      goto LABEL_21;
    }
  }
  if ( WinSqmIsOptedIn_CachedInDwm() && v4 )
    *((_BYTE *)v7 + 595) |= 2u;
LABEL_18:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
