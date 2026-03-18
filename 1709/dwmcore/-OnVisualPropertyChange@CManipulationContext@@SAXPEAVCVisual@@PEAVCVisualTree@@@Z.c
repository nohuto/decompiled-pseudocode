/*
 * XREFs of ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x1801A279C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180009FF8 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IK_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801A11F8 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x1801A239C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A33EC (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _lambda_8818c77f10d734eae77f8593241f110e_::operator() @ 0x1801A0FE8 (_lambda_8818c77f10d734eae77f8593241f110e_--operator().c)
 */

void __fastcall CManipulationContext::OnVisualPropertyChange(struct CVisual *a1, struct CVisualTree *a2)
{
  struct CInteraction *InteractionInternal; // rax
  CVisual *v3; // r10
  struct _LIST_ENTRY *v4; // r11
  struct CInteraction *v5; // rbx
  __int64 v6; // rax
  CVisual *v7; // rdi
  struct CInteraction *v8; // rax
  char v9; // r10
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  char v21; // [rsp+30h] [rbp-9h] BYREF
  struct CInteraction *v22; // [rsp+38h] [rbp-1h] BYREF
  _BYTE *v23[2]; // [rsp+40h] [rbp+7h] BYREF
  __int128 v24; // [rsp+50h] [rbp+17h] BYREF
  __int128 v25; // [rsp+60h] [rbp+27h] BYREF
  __int128 v26; // [rsp+70h] [rbp+37h] BYREF
  __int128 v27; // [rsp+80h] [rbp+47h] BYREF

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = InteractionInternal;
  if ( InteractionInternal )
  {
    CVisual::GetWorldTransform(v3, v4, 5, (__int64)InteractionInternal + 144, 0LL, 0LL);
    memset_0(&v24, 0, 0x40uLL);
    v6 = *((_QWORD *)v5 + 17);
    v7 = 0LL;
    if ( v6 )
      v7 = *(CVisual **)(v6 + 8);
    v21 = 0;
    do
    {
      if ( !v7 )
        break;
      v8 = CVisual::GetInteractionInternal(v7);
      v22 = v8;
      if ( v8 )
      {
        v21 = 1;
        v23[0] = &v22;
        v10 = 0;
        v23[1] = &v21;
        v11 = *((_QWORD *)v8 + 16);
        if ( v11 )
          v10 = *(_DWORD *)(v11 + 108);
        lambda_8818c77f10d734eae77f8593241f110e_::operator()(v23, &v24, v10, &v26, 1);
        v12 = 0;
        v13 = *((_QWORD *)v22 + 16);
        if ( v13 )
          v12 = *(_DWORD *)(v13 + 112);
        lambda_8818c77f10d734eae77f8593241f110e_::operator()(v23, (_QWORD *)&v24 + 1, v12, (_QWORD *)&v26 + 1, 2);
        v14 = 0;
        v15 = *((_QWORD *)v22 + 16);
        if ( v15 )
          v14 = *(_DWORD *)(v15 + 120);
        lambda_8818c77f10d734eae77f8593241f110e_::operator()(v23, (_QWORD *)&v25 + 1, v14, (_QWORD *)&v27 + 1, 4);
        v16 = 0;
        v17 = *((_QWORD *)v22 + 16);
        if ( v17 )
          v16 = *(_DWORD *)(v17 + 116);
        lambda_8818c77f10d734eae77f8593241f110e_::operator()(v23, &v25, v16, &v27, 3);
        v9 = v21;
      }
      v7 = (CVisual *)*((_QWORD *)v7 + 10);
    }
    while ( !v9 );
    v18 = v25;
    *((_OWORD *)v5 + 4) = v24;
    v19 = v26;
    *((_OWORD *)v5 + 5) = v18;
    v20 = v27;
    *((_OWORD *)v5 + 6) = v19;
    *((_OWORD *)v5 + 7) = v20;
  }
}
