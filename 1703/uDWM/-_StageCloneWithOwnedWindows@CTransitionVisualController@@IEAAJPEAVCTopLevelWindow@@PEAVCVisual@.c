/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180009FD4
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x180007B78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180008E0C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000A0E4 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000ACF4 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___ @ 0x18000CBA0 (CTransitionVisualController--ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000D9E8 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x180091F6C (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
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
  struct tagRECT *v9; // rbx
  struct CVisual *v11; // rsi
  int v12; // eax
  int v13; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int inserted; // eax
  bool v29; // [rsp+50h] [rbp-49h] BYREF
  struct CVisual *v30; // [rsp+58h] [rbp-41h] BYREF
  struct CVisual *v31; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v32[5]; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-9h] BYREF
  int v34; // [rsp+108h] [rbp+6Fh] BYREF

  v34 = a4;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 96) == -1LL;
  v9 = (struct tagRECT *)*((_QWORD *)a2 + 90);
  v30 = a3;
  v11 = 0LL;
  v31 = 0LL;
  v29 = 1;
  if ( v7 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147467259,
      0xEEu);
  }
  else
  {
    v32[1] = a1;
    v32[0] = &v34;
    LOBYTE(a3) = 1;
    v32[2] = &v30;
    v32[3] = &a5;
    v32[4] = &v29;
    CTransitionVisualController::ForEachOwnedWindow__lambda_01b389546427082a9499a493e716ac63___(v9, v32, a3);
    v12 = CTransitionVisualController::_StageCloneRelative(
            (CTransitionVisualController *)a1,
            a2,
            v30,
            0,
            0LL,
            1,
            a5,
            1,
            &v29);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v12, 0x103u);
LABEL_5:
      if ( v13 >= 0 )
        goto LABEL_6;
      goto LABEL_11;
    }
    if ( *((_DWORD *)v30 + 18) )
    {
      if ( a6 == 1 )
      {
        v7 = (v9[37].right & 0x1000000) == 0;
        rc = v9[3];
        if ( !v7 )
        {
          v15 = 0;
          if ( v9[38].top - v9[37].bottom >= 0 )
            v15 = v9[38].top - v9[37].bottom;
          v16 = rc.right - rc.left;
          if ( rc.right - rc.left < 0 )
            v16 = 0;
          if ( v15 > v16 )
          {
            v17 = 0;
            if ( v9[38].top - v9[37].bottom >= 0 )
              v17 = v9[38].top - v9[37].bottom;
            rc.right = rc.left + v17;
          }
          v18 = 0;
          if ( v9[38].right - v9[38].left >= 0 )
            v18 = v9[38].right - v9[38].left;
          v19 = rc.bottom - rc.top;
          if ( rc.bottom - rc.top < 0 )
            v19 = 0;
          if ( v18 > v19 )
          {
            v20 = 0;
            if ( v9[38].right - v9[38].left >= 0 )
              v20 = v9[38].right - v9[38].left;
            rc.bottom = rc.top + v20;
          }
          OffsetRect(&rc, v9[37].bottom, v9[38].left);
        }
        if ( (v9[37].right & 0x800000) != 0 )
        {
          v21 = 0;
          if ( v9[40].top - v9[39].bottom >= 0 )
            v21 = v9[40].top - v9[39].bottom;
          v22 = rc.right - rc.left;
          if ( rc.right - rc.left < 0 )
            v22 = 0;
          if ( v21 > v22 )
          {
            v23 = 0;
            if ( v9[40].top - v9[39].bottom >= 0 )
              v23 = v9[40].top - v9[39].bottom;
            rc.right = rc.left + v23;
          }
          v24 = 0;
          if ( v9[40].right - v9[40].left >= 0 )
            v24 = v9[40].right - v9[40].left;
          v25 = rc.bottom - rc.top;
          if ( rc.bottom - rc.top < 0 )
            v25 = 0;
          if ( v24 > v25 )
          {
            v26 = 0;
            if ( v9[40].right - v9[40].left >= 0 )
              v26 = v9[40].right - v9[40].left;
            rc.bottom = rc.top + v26;
          }
        }
        v27 = CTransitionVisualController::CreateBackground(&rc, &v31);
        v13 = v27;
        if ( v27 >= 0 )
        {
          v11 = v31;
          inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v30 + 32), v31, 0LL, 1, 1);
          v13 = inserted;
          if ( inserted >= 0 )
            goto LABEL_6;
          MilInstrumentationCheckHR(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            inserted,
            0x12Au);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v27, 0x129u);
          v11 = v31;
        }
      }
      goto LABEL_5;
    }
    v13 = -2003304447;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304447,
      0x108u);
  }
LABEL_11:
  VisualCollection::RemoveAll((struct CVisual *)((char *)v30 + 32));
  while ( *(_DWORD *)(a1 + 48) > v6 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 48) - 1)),
      0);
    DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(a1 + 24, (unsigned int)(*(_DWORD *)(a1 + 48) - 1));
  }
LABEL_6:
  if ( v11 )
    CBaseObject::Release(v11);
  return (unsigned int)v13;
}
