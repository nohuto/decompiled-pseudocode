/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18004203C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180001D0C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800083B8 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006A38 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x180006AAC (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x1800094AC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000F9A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___ @ 0x180042170 (CTransitionVisualController--ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x180096CB4 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneWithOwnedWindows(
        __int64 a1,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        int a4,
        bool a5,
        int a6)
{
  unsigned int v6; // r15d
  struct CVisual *v7; // rsi
  bool v8; // zf
  struct tagRECT *v10; // rdi
  int v12; // eax
  int v13; // ebx
  LONG right; // eax
  int v16; // edx
  int bottom; // r10d
  int v18; // eax
  int v19; // r9d
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int inserted; // eax
  bool v27; // [rsp+50h] [rbp-49h] BYREF
  struct CVisual *v28; // [rsp+58h] [rbp-41h] BYREF
  struct CVisual *v29; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v30[5]; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-9h] BYREF
  int v32; // [rsp+108h] [rbp+6Fh] BYREF

  v32 = a4;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = 0LL;
  v8 = *(_QWORD *)(a1 + 96) == -1LL;
  v10 = (struct tagRECT *)*((_QWORD *)a2 + 90);
  v28 = a3;
  v29 = 0LL;
  v27 = 1;
  if ( v8 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147467259,
      0xECu);
  }
  else
  {
    v30[1] = a1;
    v30[0] = &v32;
    LOBYTE(a3) = 1;
    v30[2] = &v28;
    v30[3] = &a5;
    v30[4] = &v27;
    CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___(v10, v30, a3);
    v12 = CTransitionVisualController::_StageCloneRelative(
            (CTransitionVisualController *)a1,
            a2,
            v28,
            0,
            0LL,
            1,
            a5,
            1,
            &v27);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v12,
        0x101u);
LABEL_5:
      if ( v13 >= 0 )
        goto LABEL_6;
      goto LABEL_11;
    }
    if ( *((_DWORD *)v28 + 18) )
    {
      if ( a6 == 1 )
      {
        right = v10[37].right;
        rc = v10[3];
        if ( (right & 0x1000000) != 0 )
        {
          v16 = 0;
          bottom = v10[37].bottom;
          if ( v10[38].top - bottom >= 0 )
            v16 = v10[38].top - bottom;
          v18 = 0;
          if ( rc.right - rc.left >= 0 )
            v18 = rc.right - rc.left;
          if ( v16 > v18 )
            rc.right = v16 + rc.left;
          v19 = 0;
          if ( v10[38].right - v10[38].left >= 0 )
            v19 = v10[38].right - v10[38].left;
          v20 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v20 = rc.bottom - rc.top;
          if ( v19 > v20 )
            rc.bottom = v19 + rc.top;
          OffsetRect(&rc, bottom, v10[38].left);
          right = v10[37].right;
        }
        if ( (right & 0x800000) != 0 )
        {
          v21 = 0;
          if ( v10[40].top - v10[39].bottom >= 0 )
            v21 = v10[40].top - v10[39].bottom;
          v22 = 0;
          if ( rc.right - rc.left >= 0 )
            v22 = rc.right - rc.left;
          if ( v21 > v22 )
            rc.right = v21 + rc.left;
          v23 = 0;
          if ( v10[40].right - v10[40].left >= 0 )
            v23 = v10[40].right - v10[40].left;
          v24 = 0;
          if ( rc.bottom - rc.top >= 0 )
            v24 = rc.bottom - rc.top;
          if ( v23 > v24 )
            rc.bottom = v23 + rc.top;
        }
        v25 = CTransitionVisualController::CreateBackground(&rc, &v29);
        v13 = v25;
        if ( v25 >= 0 )
        {
          v7 = v29;
          inserted = VisualCollection::InsertRelative(
                       (struct CVisual *)((char *)v28 + 32),
                       (struct CVisual **)v29,
                       0LL,
                       1u,
                       1);
          v13 = inserted;
          if ( inserted >= 0 )
            goto LABEL_6;
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            inserted,
            0x128u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v25,
            0x127u);
          v7 = v29;
        }
      }
      goto LABEL_5;
    }
    v13 = -2003304447;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304447,
      0x106u);
  }
LABEL_11:
  VisualCollection::RemoveAll((struct CVisual *)((char *)v28 + 32));
  while ( *(_DWORD *)(a1 + 48) > v6 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 48) - 1)),
      0);
    DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)(a1 + 24), *(_DWORD *)(a1 + 48) - 1);
  }
LABEL_6:
  if ( v7 )
    CBaseObject::Release(v7);
  return (unsigned int)v13;
}
