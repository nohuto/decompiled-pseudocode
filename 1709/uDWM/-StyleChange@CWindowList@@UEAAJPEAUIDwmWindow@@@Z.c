/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800292A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CWindowData@@QEAA@XZ @ 0x180010BB0 (--0CWindowData@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180011168 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001144C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180011570 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180011818 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180011B0C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800229E0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x1800256C4 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x180035858 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180036870 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180037E40 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ @ 0x18007D5F4 (-AdjustTimeScaledCount@CDwmWinSqm@@AEAAXXZ.c)
 *     ?RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ @ 0x18007D8A4 (-RecordMinimizedWndRatio@CDwmWinSqm@@QEAAXXZ.c)
 *     ?TestCounter@CDwmWinSqm@@AEAA_NXZ @ 0x18007D95C (-TestCounter@CDwmWinSqm@@AEAA_NXZ.c)
 */

__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  int v5; // esi
  struct CWindowData *v6; // rbp
  unsigned int v7; // ebp
  int v8; // r13d
  int v9; // esi
  char v10; // al
  char v11; // al
  __int64 v12; // rdi
  int v13; // eax
  CVisual *i; // rdi
  int v15; // ecx
  CWindowIconic *v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  char v19; // al
  bool v20; // di
  bool v21; // r14
  struct _RTL_GENERIC_TABLE *v22; // r15
  char v23; // r12
  unsigned __int8 v24; // di
  void (__fastcall *v26)(CVisual *); // rax
  CDwmWinSqm *v27; // rcx
  CDwmWinSqm *v28; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *j; // r14
  CWindowData *v31; // rax
  CWindowData *v32; // rax
  int v33; // eax
  CDwmWinSqm *v34; // rcx
  CDwmWinSqm *v35; // rcx
  CDwmWinSqm *v36; // rcx
  struct CWindowData *Buffer; // [rsp+78h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v31 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v31 || (v32 = CWindowData::CWindowData(v31), (v6 = v32) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5BAu);
    v7 = -2147024882;
    goto LABEL_55;
  }
  *((_QWORD *)v32 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v32);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v33 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v33;
  if ( v33 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x5BEu);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xAA5u);
    goto LABEL_27;
  }
  if ( !v4 )
    goto LABEL_27;
  v8 = *((_DWORD *)v4 + 25);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( (v8 & 0x20000000) == 0 || (v9 & 0x20000000) != 0 )
  {
    if ( (v8 & 0x20000000) != 0 )
      goto LABEL_8;
    if ( (v9 & 0x20000000) == 0 )
      goto LABEL_8;
    if ( !WinSqmIsOptedIn_CachedInDwm() )
      goto LABEL_8;
    if ( (*((_BYTE *)v4 + 594) & 0x10) == 0 )
      goto LABEL_8;
    CDwmWinSqm::AdjustTimeScaledCount(v28);
    ++dword_1800C2500;
    if ( !CDwmWinSqm::TestCounter(v36) )
      goto LABEL_8;
  }
  else
  {
    CWindowData::ClearSnapshot(v4, 0, 0LL, 0);
    if ( !WinSqmIsOptedIn_CachedInDwm() )
      goto LABEL_8;
    if ( (*((_BYTE *)v4 + 594) & 0x10) == 0 )
      goto LABEL_8;
    CDwmWinSqm::AdjustTimeScaledCount(v27);
    --dword_1800C2500;
    if ( !CDwmWinSqm::TestCounter(v34) )
      goto LABEL_8;
  }
  CDwmWinSqm::RecordMinimizedWndRatio(v35);
LABEL_8:
  *((_DWORD *)v4 + 25) = v9;
  *((_DWORD *)v4 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)v4 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
  *((_BYTE *)v4 + 592) &= ~8u;
  *((_BYTE *)v4 + 592) |= 8 * (v10 & 1);
  v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
  *((_BYTE *)v4 + 592) &= ~0x80u;
  v12 = *((_QWORD *)v4 + 50);
  *((_BYTE *)v4 + 592) |= v11 << 7;
  if ( !v12 )
    goto LABEL_15;
  v13 = *(_DWORD *)(v12 + 80);
  if ( (v13 & 0x8000) == 0 )
  {
    *(_DWORD *)(v12 + 80) = v13 | 0x8000;
    for ( i = *(CVisual **)(v12 + 24); i; i = (CVisual *)*((_QWORD *)i + 3) )
    {
      v15 = *((_DWORD *)i + 20);
      if ( (v15 & 1) != 0 )
        break;
      v26 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)i + 32LL);
      if ( v26 == CVisual::SetDirtyChildren )
        *((_DWORD *)i + 20) = v15 | 1;
      else
        v26(i);
    }
  }
  v16 = (CWindowIconic *)*((_QWORD *)v4 + 54);
  if ( v16 )
    CWindowIconic::OnWindowStyleUpdated(v16, 1);
  v17 = CTopLevelWindow3D::OnWindowStyleUpdated(*((CTopLevelWindow3D **)v4 + 51));
  v7 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xAC6u);
  }
  else
  {
LABEL_15:
    v18 = *((_QWORD *)v4 + 68);
    v19 = v18 && (*(_BYTE *)(v18 + 593) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v4);
    if ( *((_BYTE *)v4 + 593) >> 7 != v19 )
      CWindowData::UpdateOwnerLists(v4, !(*((_BYTE *)v4 + 593) >> 7));
    v20 = (*((_BYTE *)v4 + 593) & 2) != 0;
    v21 = (*((_DWORD *)v4 + 25) & 0x11000000) == 0x11000000 && *((_QWORD *)v4 + 4);
    v22 = (struct _RTL_GENERIC_TABLE *)((char *)this + 400);
    v23 = RtlIsGenericTableEmpty(v22) == 0;
    *((_BYTE *)v4 + 593) &= ~2u;
    *((_BYTE *)v4 + 593) |= 2 * v21;
    if ( v21 )
    {
      if ( !v20 )
        CGenericSet<CWindowData *>::Add(v22, v4);
    }
    else if ( v20 )
    {
      Buffer = v4;
      RtlDeleteElementGenericTable(v22, &Buffer);
    }
    v24 = RtlIsGenericTableEmpty(v22) == 0;
    if ( v23 != v24 )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)v4 + 15));
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 20) = v24;
      for ( j = WindowListForDesktop->Flink; j != WindowListForDesktop; j = j->Flink )
      {
        if ( (BYTE1(j[37].Flink) & 8) != 0 )
        {
          CWindowData::OnColorizationUpdated((CWindowData *)j);
          PostMessageW((HWND)j[2].Blink, 0x321u, v24, 0LL);
        }
      }
    }
    if ( ((v8 ^ v9) & 0x20000000) != 0 )
      CWindowData::NotifyRepresentationChanged(v4);
  }
LABEL_27:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
