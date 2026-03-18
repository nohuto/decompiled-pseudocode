/*
 * XREFs of ?OnVisualPropertyChange@CManipulationContext@@SAXPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x180193894
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18004DA9C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@K_NPEAVCInteractionChain@@PEA_N@Z @ 0x180192764 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 *     ?OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z @ 0x18019348C (-OnHoverContact@CManipulationContext@@QEAAJPEAVCInteraction@@IK@Z.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801944C4 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800134A0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180085584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator() @ 0x18019254C (_lambda_0fac207bc2d8fd4a1b8744335422bc83_--operator().c)
 */

void __fastcall CManipulationContext::OnVisualPropertyChange(struct CVisual *a1, struct CVisualTree *a2)
{
  struct CInteraction *InteractionInternal; // rax
  CVisual *v3; // r10
  __int64 v4; // r11
  struct CInteraction *v5; // rdi
  __int64 v6; // rax
  CVisual *v7; // rbx
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
  char v20; // [rsp+30h] [rbp-50h] BYREF
  struct CInteraction *v21; // [rsp+38h] [rbp-48h] BYREF
  _BYTE *v22[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v23; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  __int128 v25; // [rsp+70h] [rbp-10h] BYREF

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  v5 = InteractionInternal;
  if ( InteractionInternal )
  {
    CVisual::GetWorldTransform(v3, v4, 5, (__int64)InteractionInternal + 128, 0LL, 0LL);
    memset_0(&v23, 0, 0x30uLL);
    v6 = *((_QWORD *)v5 + 15);
    v7 = 0LL;
    if ( v6 )
      v7 = *(CVisual **)(v6 + 8);
    v20 = 0;
    do
    {
      if ( !v7 )
        break;
      v8 = CVisual::GetInteractionInternal(v7);
      v21 = v8;
      if ( v8 )
      {
        v20 = 1;
        v22[0] = &v21;
        v10 = 0;
        v22[1] = &v20;
        v11 = *((_QWORD *)v8 + 14);
        if ( v11 )
          v10 = *(_DWORD *)(v11 + 76);
        lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator()(v22, &v23, v10, &v25, 1);
        v12 = 0;
        v13 = *((_QWORD *)v21 + 14);
        if ( v13 )
          v12 = *(_DWORD *)(v13 + 80);
        lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator()(v22, (_QWORD *)&v23 + 1, v12, (_DWORD *)&v25 + 1, 2);
        v14 = 0;
        v15 = *((_QWORD *)v21 + 14);
        if ( v15 )
          v14 = *(_DWORD *)(v15 + 88);
        lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator()(v22, (_QWORD *)&v24 + 1, v14, (_DWORD *)&v25 + 3, 4);
        v16 = 0;
        v17 = *((_QWORD *)v21 + 14);
        if ( v17 )
          v16 = *(_DWORD *)(v17 + 84);
        lambda_0fac207bc2d8fd4a1b8744335422bc83_::operator()(v22, &v24, v16, (_DWORD *)&v25 + 2, 3);
        v9 = v20;
      }
      v7 = (CVisual *)*((_QWORD *)v7 + 10);
    }
    while ( !v9 );
    v18 = v24;
    *((_OWORD *)v5 + 4) = v23;
    v19 = v25;
    *((_OWORD *)v5 + 5) = v18;
    *((_OWORD *)v5 + 6) = v19;
  }
}
