/*
 * XREFs of ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180007B78
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18001067C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180007820 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z @ 0x180007948 (-_SetDesktopId@CTransitionVisualController@@IEAAJ_K@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180009B94 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180009FD4 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000A0E4 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z @ 0x18000C904 (-_MoveOwnedWindowTreeOffscreen@CTransitionVisualController@@KAXPEAVCWindowData@@@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x18000CFE0 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000D6A4 (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtag.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000D9B0 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x180013270 (-_GetSnapshotIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x180022880 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x180032F40 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003B404 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     EtwppTemplate_q @ 0x180085D80 (EtwppTemplate_q.c)
 */

__int64 __fastcall CTransitionVisualController::EnsureSnapshot(CVisual **this, struct CWindowData *a2)
{
  volatile signed __int32 *v2; // rdi
  int v4; // ecx
  BOOL v6; // r13d
  bool v7; // r12
  int v8; // eax
  int inserted; // ebx
  int v10; // ecx
  struct tagRECT *v11; // r15
  unsigned int Clone; // r15d
  int v13; // eax
  struct CTopLevelWindow *v14; // rdx
  int v15; // eax
  unsigned int v16; // r8d
  _QWORD *v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // eax
  struct CVisual *v20; // rdx
  __int64 v21; // rcx
  int v23; // eax
  int v24; // r9d
  int v25; // eax
  int v26; // r9d
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  struct CVisual *v28; // r14
  CDesktopManager *v29; // rcx
  int v30; // [rsp+20h] [rbp-40h]
  unsigned int v31; // [rsp+20h] [rbp-40h]
  unsigned int v32; // [rsp+20h] [rbp-40h]
  __int128 v33; // [rsp+50h] [rbp-10h] BYREF
  struct CTransitionWindowSnapshot *v34; // [rsp+A8h] [rbp+48h] BYREF
  struct CVisual *v35; // [rsp+B0h] [rbp+50h] BYREF
  struct tagRECT *v36; // [rsp+B8h] [rbp+58h]

  v2 = 0LL;
  v4 = *((_DWORD *)a2 + 150);
  v34 = 0LL;
  v6 = (v4 & 0x40000) != 0;
  v7 = (v4 & 0x40000) != 0
    || (v4 & 0x10000000) != 0 && (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) > 0;
  v35 = 0LL;
  v8 = CTransitionVisualController::_EnsureStagingVisualRoot((CTransitionVisualController *)this);
  inserted = v8;
  if ( v8 < 0 )
  {
    v31 = 2754;
LABEL_44:
    v24 = v8;
LABEL_46:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v24, v31);
    return (unsigned int)inserted;
  }
  if ( !*((_QWORD *)a2 + 5) )
  {
    inserted = -2147024809;
    v31 = 2758;
    v24 = -2147024809;
    goto LABEL_46;
  }
  v8 = CTransitionVisualController::_SetDesktopId((CTransitionVisualController *)this, *((_QWORD *)a2 + 15));
  inserted = v8;
  if ( v8 < 0 )
  {
    v31 = 2762;
    goto LABEL_44;
  }
  if ( (int)CTransitionVisualController::_GetSnapshotIndex((CTransitionVisualController *)this, *((HWND *)a2 + 5)) >= 0 )
    return (unsigned int)inserted;
  v10 = *((_DWORD *)a2 + 150) & 0x1000000;
  v33 = 0uLL;
  v11 = (struct tagRECT *)(((unsigned __int64)a2 + 604) & -(__int64)(v10 != 0));
  v36 = v11;
  if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot(a2) )
  {
    v25 = CTransitionWindowSnapshot::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            *((struct CTopLevelWindow **)a2 + 50),
            0LL,
            v11,
            &v34);
    v2 = (volatile signed __int32 *)v34;
    if ( v25 >= 0 )
    {
LABEL_19:
      *(_QWORD *)&v33 = *((_QWORD *)a2 + 5);
      *((_QWORD *)&v33 + 1) = v2;
      goto LABEL_20;
    }
  }
  if ( (*((_BYTE *)a2 + 596) & 0x10) != 0 )
  {
    inserted = -2147483638;
  }
  else
  {
    Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2, 0);
    if ( Clone >= *((_DWORD *)this + 12) )
    {
      v13 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v35);
      inserted = v13;
      if ( v13 < 0 )
      {
        v32 = 2784;
        goto LABEL_72;
      }
      inserted = VisualCollection::InsertRelative((CVisual *)((char *)this[18] + 32), v35, 0LL, 0, 1);
      if ( inserted < 0 )
      {
        v32 = 2785;
        goto LABEL_52;
      }
      v14 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 50);
      if ( v7 )
      {
        LOBYTE(v30) = 0;
        v13 = CTransitionVisualController::_StageCloneWithOwnedWindows(this, v14, v35, 0xFFFFFFFFLL, v30, v6);
        inserted = v13;
        if ( v13 < 0 )
        {
          v32 = 2790;
          goto LABEL_72;
        }
        Clone = CTransitionVisualController::_FindClone((CTransitionVisualController *)this, a2, 0);
      }
      else
      {
        v13 = CTransitionVisualController::_StageCloneRelative(
                (CTransitionVisualController *)this,
                v14,
                v35,
                0,
                0LL,
                1,
                0,
                1,
                0LL);
        inserted = v13;
        if ( v13 < 0 )
        {
          v32 = 2797;
          goto LABEL_72;
        }
      }
    }
    if ( Clone < *((_DWORD *)this + 12) )
    {
      _mm_lfence();
      if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this[3] + 3 * Clone) + 720LL) + 40LL) == *((_QWORD *)a2 + 5) )
      {
        _mm_lfence();
        v15 = CTransitionWindowSnapshot::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                *((struct CTopLevelWindow **)a2 + 50),
                *(struct CVisual **)(*((_QWORD *)this[3] + 3 * Clone + 1) + 24LL),
                v36,
                &v34);
        inserted = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v15, 0xAFAu);
          v2 = (volatile signed __int32 *)v34;
          goto LABEL_33;
        }
        v2 = (volatile signed __int32 *)v34;
        *((_BYTE *)v34 + 356) = *((_BYTE *)this[3] + 24 * Clone + 18);
        goto LABEL_19;
      }
      v2 = (volatile signed __int32 *)v34;
    }
    inserted = -2147467259;
  }
LABEL_20:
  if ( v2 )
  {
    if ( inserted < 0 )
      goto LABEL_33;
    v16 = (unsigned int)v34;
    v17 = this + 7;
    v18 = *((_DWORD *)this + 20);
    v19 = v18 + 1;
    if ( v18 + 1 >= v18 )
      v16 = v18 + 1;
    inserted = v19 < v18 ? 0x80070216 : 0;
    if ( v19 < v18 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0xB5u);
    }
    else if ( v16 > *((_DWORD *)this + 19) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet(v17, 16LL, 1LL, &v33);
      inserted = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*v17 + 16LL * v18) = v33;
      *((_DWORD *)this + 20) = v16;
    }
    if ( inserted >= 0 )
    {
      _InterlockedIncrement(v2 + 2);
      if ( (*((_DWORD *)a2 + 150) & 0x100000) != 0 )
      {
        RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                 *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                                 *((_QWORD *)a2 + 15));
        v2 = (volatile signed __int32 *)v34;
        v28 = RootVisualForDesktop;
        v13 = VisualCollection::InsertRelative(
                (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                v34,
                *((struct CVisual **)a2 + 50),
                1,
                1);
        inserted = v13;
        if ( v13 >= 0 )
        {
          CTransitionVisualController::_MoveOwnedWindowTreeOffscreen(a2);
          CDesktopManager::UpdateSceneImpl(v29, v28);
LABEL_31:
          if ( dword_1800C0044
            && (unsigned __int8)(byte_1800C0048 - 1) > 2u
            && (qword_1800C0030 & 0x8000000000000001uLL) != 0
            && (qword_1800C0038 & 0x8000000000000001uLL) == qword_1800C0038 )
          {
            EtwppTemplate_q(v21, &EtwTraceInfo_9009, v2);
          }
          v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
          inserted = v13;
          if ( v13 >= 0 )
            goto LABEL_33;
          v32 = 2859;
          goto LABEL_72;
        }
        v32 = 2838;
      }
      else
      {
        v2 = (volatile signed __int32 *)v34;
        v20 = v34;
        *((_OWORD *)v34 + 21) = _xmm;
        v13 = VisualCollection::InsertRelative((CVisual *)((char *)this[18] + 32), v20, 0LL, 0, 1);
        inserted = v13;
        if ( v13 >= 0 )
        {
          CVisual::RenderRecursive(this[18]);
          goto LABEL_31;
        }
        v32 = 2853;
      }
LABEL_72:
      v26 = v13;
      goto LABEL_73;
    }
    v32 = 2829;
LABEL_52:
    v26 = inserted;
LABEL_73:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v26, v32);
LABEL_33:
    if ( v2 )
      CBaseObject::Release((CBaseObject *)v2);
  }
  if ( v35 )
    CBaseObject::Release(v35);
  return (unsigned int)inserted;
}
