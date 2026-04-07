/*
 * XREFs of ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F620
 * Callers:
 *     <none>
 * Callees:
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x1800163FC (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180017058 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x18002E784 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F380 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180034A28 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180035840 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180035EBC (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x1800861F4 (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x1800864A4 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x18008655C (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::DestroySprite(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // eax
  unsigned int v5; // edi
  CWindowData *v6; // rbx
  CDwmWinSqm *v7; // rcx
  CTopLevelWindow3D *v8; // rcx
  CDwmWinSqm *v10; // rcx
  CDwmWinSqm *v11; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  CWindowData *v13; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v13 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 1, &v13);
  v5 = SyncedWindowData;
  if ( SyncedWindowData < 0 )
  {
    v12 = 1485;
    goto LABEL_26;
  }
  v6 = v13;
  if ( v13 )
  {
    if ( WinSqmIsOptedIn_CachedInDwm() && (*((_BYTE *)v6 + 594) & 0x10) != 0 )
    {
      CDwmWinSqm::AdjustTimeScaledCount(v7);
      --dword_1800C4474;
      if ( (*((_DWORD *)v6 + 25) & 0x20000000) != 0 )
        --dword_1800C4470;
      if ( CDwmWinSqm::TestCounter(v10) )
        CDwmWinSqm::RecordMinimizedWndRatio(v11);
      *((_BYTE *)v6 + 594) &= ~0x10u;
    }
    v8 = (CTopLevelWindow3D *)*((_QWORD *)v6 + 51);
    LOBYTE(v13) = 1;
    if ( !v8 )
      goto LABEL_7;
    SyncedWindowData = CTopLevelWindow3D::BeginDestroySprite(v8, (bool *)&v13);
    v5 = SyncedWindowData;
    if ( SyncedWindowData < 0 )
    {
      v12 = 1497;
      goto LABEL_26;
    }
    if ( !(_BYTE)v13 )
    {
      *((_BYTE *)v6 + 592) |= 4u;
      if ( !*((_QWORD *)v6 + 53) && !CWindowData::IsImmersiveWindow(v6) )
        CWindowData::SnapshotWindow(v6);
      SyncedWindowData = CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 280), (__int64)v6);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v12 = 1516;
LABEL_26:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SyncedWindowData, v12);
        goto LABEL_9;
      }
    }
    else
    {
LABEL_7:
      CWindowList::ImmediateDestroySprite(this, v6);
    }
    if ( !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2) )
    {
      SyncedWindowData = CWindowList::DestroyWindow(this, a2);
      v5 = SyncedWindowData;
      if ( SyncedWindowData < 0 )
      {
        v12 = 1521;
        goto LABEL_26;
      }
    }
  }
  else
  {
    v5 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x5CEu);
  }
LABEL_9:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v5;
}
