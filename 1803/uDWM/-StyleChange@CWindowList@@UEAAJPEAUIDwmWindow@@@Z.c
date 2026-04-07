/*
 * XREFs of ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800154F4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800159D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180015F8C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180016278 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180016398 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180016738 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180022CA0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002BA20 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x1800392E0 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003AAA4 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800702A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::StyleChange(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  int v5; // esi
  struct CWindowData *v6; // rbp
  unsigned int v7; // ebp
  int v8; // r13d
  int v9; // esi
  __int64 v10; // r8
  int v11; // ecx
  char v12; // al
  char v13; // al
  __int64 v14; // rdi
  int v15; // eax
  CVisual *i; // rdi
  int v17; // ecx
  CWindowIconic *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  char v21; // al
  unsigned __int8 v22; // di
  bool v23; // di
  bool v24; // r14
  struct _RTL_GENERIC_TABLE *v25; // r15
  char v26; // r12
  unsigned __int8 v27; // di
  void (__fastcall *v29)(CVisual *); // rax
  __int64 v30; // r8
  struct _LIST_ENTRY *WindowListForDesktop; // r15
  struct _LIST_ENTRY *j; // r14
  CWindowData *v33; // rax
  CWindowData *v34; // rax
  int v35; // eax
  int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CWindowData *Buffer; // [rsp+78h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v33 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v33 || (v34 = CWindowData::CWindowData(v33), (v6 = v34) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6DEu);
    v7 = -2147024882;
    goto LABEL_54;
  }
  *((_QWORD *)v34 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v34);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v35 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v35;
  if ( v35 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x6E2u);
  v7 = v5;
  if ( v5 < 0 )
  {
LABEL_54:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xBA7u);
    goto LABEL_26;
  }
  if ( !v4 )
    goto LABEL_26;
  v8 = *((_DWORD *)v4 + 25);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = v9 & 0x20000000;
  if ( (v8 & 0x20000000) != 0 )
  {
    if ( v11 )
      goto LABEL_7;
    CWindowData::ClearSnapshot(v4, 0, v10, 0);
    if ( !*((_QWORD *)v4 + 51) )
      goto LABEL_7;
    LOBYTE(v30) = 1;
    v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 60)
                                                             + 72LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60),
            *((_QWORD *)v4 + 5),
            v30);
    if ( v36 >= 0 )
      goto LABEL_7;
    v37 = 2996LL;
  }
  else
  {
    if ( !v11 )
      goto LABEL_7;
    if ( !*((_QWORD *)v4 + 51) )
      goto LABEL_7;
    v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 60)
                                                            + 72LL))(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60),
            *((_QWORD *)v4 + 5),
            0LL);
    if ( v36 >= 0 )
      goto LABEL_7;
    v37 = 3003LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v37,
    (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v36,
    v38);
LABEL_7:
  *((_DWORD *)v4 + 25) = v9;
  *((_DWORD *)v4 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)v4 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 168LL))(a2);
  *((_BYTE *)v4 + 592) &= ~8u;
  *((_BYTE *)v4 + 592) |= 8 * (v12 & 1);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 176LL))(a2);
  *((_BYTE *)v4 + 592) &= ~0x80u;
  v14 = *((_QWORD *)v4 + 49);
  *((_BYTE *)v4 + 592) |= v13 << 7;
  if ( !v14 )
    goto LABEL_14;
  v15 = *(_DWORD *)(v14 + 80);
  if ( (v15 & 0x8000) == 0 )
  {
    *(_DWORD *)(v14 + 80) = v15 | 0x8000;
    for ( i = *(CVisual **)(v14 + 24); i; i = (CVisual *)*((_QWORD *)i + 3) )
    {
      v17 = *((_DWORD *)i + 20);
      if ( (v17 & 1) != 0 )
        break;
      v29 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)i + 32LL);
      if ( v29 == CVisual::SetDirtyChildren )
        *((_DWORD *)i + 20) = v17 | 1;
      else
        v29(i);
    }
  }
  v18 = (CWindowIconic *)*((_QWORD *)v4 + 54);
  if ( v18 )
    CWindowIconic::OnWindowStyleUpdated(v18, 1);
  v19 = CTopLevelWindow3D::OnWindowStyleUpdated(*((CTopLevelWindow3D **)v4 + 50));
  v7 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xBC8u);
  }
  else
  {
LABEL_14:
    v20 = *((_QWORD *)v4 + 68);
    v21 = v20 && (*(_BYTE *)(v20 + 593) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v4);
    v22 = *((_BYTE *)v4 + 593);
    if ( v22 >> 7 != v21 )
    {
      CWindowData::UpdateOwnerLists(v4, !(v22 >> 7));
      v22 = *((_BYTE *)v4 + 593);
    }
    v23 = (v22 & 2) != 0;
    v24 = (*((_DWORD *)v4 + 25) & 0x11000000) == 0x11000000 && *((_QWORD *)v4 + 4);
    v25 = (struct _RTL_GENERIC_TABLE *)((char *)this + 400);
    v26 = RtlIsGenericTableEmpty(v25) == 0;
    *((_BYTE *)v4 + 593) &= ~2u;
    *((_BYTE *)v4 + 593) |= 2 * v24;
    if ( v24 )
    {
      if ( !v23 )
        CGenericSet<CWindowData *>::Add(v25, v4);
    }
    else if ( v23 )
    {
      Buffer = v4;
      RtlDeleteElementGenericTable(v25, &Buffer);
    }
    v27 = RtlIsGenericTableEmpty(v25) == 0;
    if ( v26 != v27 )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)v4 + 15));
      *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v27;
      for ( j = WindowListForDesktop->Flink; j != WindowListForDesktop; j = j->Flink )
      {
        if ( (BYTE1(j[37].Flink) & 8) != 0 )
        {
          CWindowData::OnColorizationUpdated((CWindowData *)j);
          PostMessageW((HWND)j[2].Blink, 0x321u, v27, 0LL);
        }
      }
    }
    if ( ((v8 ^ v9) & 0x20000000) != 0 )
      CWindowData::NotifyRepresentationChanged(v4);
  }
LABEL_26:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v7;
}
