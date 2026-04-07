/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18008F8F0
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800051A0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800063A4 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x1800071EC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180009498 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000BAA4 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___ @ 0x18008D84C (CTransitionVisualController--ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x18008E088 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
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
  bool v7; // zf
  struct tagRECT *v9; // rdi
  struct CVisual *v11; // rsi
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  int inserted; // eax
  bool v25; // [rsp+50h] [rbp-49h] BYREF
  struct CVisual *v26; // [rsp+58h] [rbp-41h] BYREF
  struct CVisual *v27; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v28[5]; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-9h] BYREF
  int v30; // [rsp+108h] [rbp+6Fh] BYREF

  v30 = a4;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 96) == -1LL;
  v9 = (struct tagRECT *)*((_QWORD *)a2 + 90);
  v26 = a3;
  v11 = 0LL;
  v27 = 0LL;
  v25 = 1;
  if ( !v7 )
  {
    v28[1] = a1;
    v28[0] = &v30;
    v28[2] = &v26;
    v28[3] = &a5;
    v28[4] = &v25;
    CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___(
      (__int64)v9,
      (__int64)v28,
      1);
    v13 = CTransitionVisualController::_StageCloneRelative(
            (CTransitionVisualController *)a1,
            a2,
            v26,
            0,
            0LL,
            1,
            a5,
            1,
            &v25);
    v12 = v13;
    if ( v13 >= 0 )
    {
      if ( !*((_DWORD *)v26 + 18) )
      {
        v12 = -2003304447;
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          -2003304447,
          0x108u);
        goto LABEL_41;
      }
      if ( a6 == 1 )
      {
        v7 = (v9[37].right & 0x1000000) == 0;
        rc = v9[3];
        if ( !v7 )
        {
          v14 = 0;
          if ( v9[38].top - v9[37].bottom >= 0 )
            v14 = v9[38].top - v9[37].bottom;
          v15 = rc.right - rc.left;
          if ( rc.right - rc.left < 0 )
            v15 = 0;
          if ( v14 > v15 )
            rc.right = v14 + rc.left;
          v16 = 0;
          if ( v9[38].right - v9[38].left >= 0 )
            v16 = v9[38].right - v9[38].left;
          v17 = rc.bottom - rc.top;
          if ( rc.bottom - rc.top < 0 )
            v17 = 0;
          if ( v16 > v17 )
            rc.bottom = v16 + rc.top;
          OffsetRect(&rc, v9[37].bottom, v9[38].left);
        }
        if ( (v9[37].right & 0x800000) != 0 )
        {
          v18 = 0;
          if ( v9[40].top - v9[39].bottom >= 0 )
            v18 = v9[40].top - v9[39].bottom;
          v19 = rc.right - rc.left;
          if ( rc.right - rc.left < 0 )
            v19 = 0;
          if ( v18 > v19 )
            rc.right = v18 + rc.left;
          v20 = 0;
          if ( v9[40].right - v9[40].left >= 0 )
            v20 = v9[40].right - v9[40].left;
          v21 = rc.bottom - rc.top;
          if ( rc.bottom - rc.top < 0 )
            v21 = 0;
          if ( v20 > v21 )
            rc.bottom = v20 + rc.top;
        }
        v22 = CTransitionVisualController::CreateBackground(&rc, &v27);
        v12 = v22;
        if ( v22 >= 0 )
        {
          v11 = v27;
          inserted = VisualCollection::InsertRelative(
                       (struct CVisual *)((char *)v26 + 32),
                       (struct CVisual **)v27,
                       0LL,
                       1u,
                       1);
          v12 = inserted;
          if ( inserted >= 0 )
            goto LABEL_44;
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            inserted,
            0x12Au);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v22,
            0x129u);
          v11 = v27;
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v13,
        0x103u);
    }
    if ( v12 >= 0 )
      goto LABEL_44;
    goto LABEL_41;
  }
  v12 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    -2147467259,
    0xEEu);
LABEL_41:
  VisualCollection::RemoveAll((struct CVisual *)((char *)v26 + 32));
  while ( *(_DWORD *)(a1 + 48) > v6 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 48) - 1)),
      0);
    DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)(a1 + 24), *(_DWORD *)(a1 + 48) - 1);
  }
LABEL_44:
  if ( v11 )
    CBaseObject::Release(v11);
  return (unsigned int)v12;
}
