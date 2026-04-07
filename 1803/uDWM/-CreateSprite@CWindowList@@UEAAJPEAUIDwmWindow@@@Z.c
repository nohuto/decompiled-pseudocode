/*
 * XREFs of ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800277B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180015F8C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180026E58 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029840 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002D5C0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002F81C (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateSprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // ebx
  CWindowData *v6; // rdi
  CWindowData *v7; // rax
  CWindowData **v8; // rcx
  __int64 Element; // rax
  __int64 v10; // r8
  CWindowData **v11; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]
  CWindowData *v15; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v15 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v15);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1632;
LABEL_31:
    v13 = SyncedWindowData;
    goto LABEL_32;
  }
  v6 = v15;
  if ( v15 )
    goto LABEL_3;
  if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
    goto LABEL_23;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v15);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1636;
    goto LABEL_31;
  }
  v6 = v15;
  if ( !v15 )
  {
LABEL_23:
    v5 = -2147024890;
    v14 = 1640;
LABEL_25:
    v13 = v5;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v14);
    goto LABEL_17;
  }
LABEL_3:
  if ( (*((_BYTE *)v6 + 592) & 4) != 0 )
    CWindowList::ImmediateDestroySprite(this, v6);
  if ( !*((_DWORD *)v6 + 32) )
  {
    SyncedWindowData = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD))(*(_QWORD *)a2 + 312LL))(
                         a2,
                         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1652;
      goto LABEL_31;
    }
  }
  SyncedWindowData = CWindowList::SyncWindowData(this, a2, v6);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1656;
    goto LABEL_31;
  }
  v7 = *(CWindowData **)v6;
  if ( *(CWindowData **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = (CWindowData **)*((_QWORD *)v6 + 1), *v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *((_QWORD *)v7 + 1) = v8;
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (char *)this + 8,
              *((_QWORD *)v6 + 15));
  if ( Element )
    Element += 64LL;
  if ( !Element )
  {
    v5 = -2147024882;
    v14 = 1668;
    goto LABEL_25;
  }
  v11 = *(CWindowData ***)(Element + 8);
  if ( *v11 != (CWindowData *)Element )
    __fastfail(3u);
  *((_QWORD *)v6 + 1) = v11;
  *(_QWORD *)v6 = Element;
  *v11 = v6;
  *(_QWORD *)(Element + 8) = v6;
  CWindowData::ClearSnapshot(v6, 1, v10, 1);
  SyncedWindowData = CWindowList::ClipChange(this, a2);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v14 = 1677;
    goto LABEL_31;
  }
  if ( (*((_BYTE *)v6 + 592) & 1) != 0 )
  {
    SyncedWindowData = CWindowList::ShowHide(this, v6, 1);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v14 = 1681;
      goto LABEL_31;
    }
  }
LABEL_17:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
