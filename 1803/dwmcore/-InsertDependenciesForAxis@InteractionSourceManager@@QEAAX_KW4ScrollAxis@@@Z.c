/*
 * XREFs of ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801C9EC0
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18019484C (-InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18013E8A0 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertDependenciesForConditionalIfExists@CInteractionTracker@@QEAAX_KPEAVCConditionalExpression@@@Z @ 0x180194990 (-InsertDependenciesForConditionalIfExists@CInteractionTracker@@QEAAX_KPEAVCConditionalExpression.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1801C9E1C (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 */

void __fastcall InteractionSourceManager::InsertDependenciesForAxis(CComposition **a1, unsigned __int64 a2, int a3)
{
  CComposition *v3; // rsi
  CComposition *v6; // r12
  __int64 v8; // rbx
  __int64 v9; // r15
  struct CConditionalExpression *SourceModifierConditionalAnimation; // rax
  CInteractionTracker *v11; // rcx
  CInteractionTracker *v12; // rcx
  __int64 v13; // r8
  struct CConditionalExpression *v14; // r8
  struct CResource *v15; // rdx
  CComposition *v16; // rcx
  int WeakReferenceBase; // eax
  CWeakReferenceBase *v18; // rbx
  unsigned int v19; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CWeakReferenceBase *v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[13];
  v6 = (CComposition *)((char *)a1[14] + (_QWORD)v3);
  while ( v3 != v6 )
  {
    v8 = (unsigned __int8)v3 & 1;
    v9 = *((_QWORD *)a1[11] + (((unsigned __int64)a1[12] - 1) & ((unsigned __int64)v3 >> 1)));
    SourceModifierConditionalAnimation = (struct CConditionalExpression *)CManipulation::GetSourceModifierConditionalAnimation(
                                                                            *(_QWORD **)(v9 + 8 * v8),
                                                                            a3);
    CInteractionTracker::InsertDependenciesForConditionalIfExists(v11, a2, SourceModifierConditionalAnimation);
    v13 = *(_QWORD *)(v9 + 8 * v8);
    if ( a3 )
    {
      if ( a3 == 1 )
        v14 = *(struct CConditionalExpression **)(v13 + 488);
      else
        v14 = 0LL;
    }
    else
    {
      v14 = *(struct CConditionalExpression **)(v13 + 480);
    }
    CInteractionTracker::InsertDependenciesForConditionalIfExists(v12, a2, v14);
    v15 = *(struct CResource **)(v9 + 8 * v8);
    v16 = *a1;
    v21 = 0LL;
    WeakReferenceBase = CComposition::GetWeakReferenceBase(v16, v15, &v21);
    if ( WeakReferenceBase < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x115,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\animations\\interactionsourcemanager.cpp",
        (const char *)(unsigned int)WeakReferenceBase);
      __debugbreak();
    }
    v18 = v21;
    if ( a3 >= 0 )
    {
      if ( a3 <= 1 )
      {
        v19 = 1;
      }
      else
      {
        if ( a3 != 2 )
          goto LABEL_15;
        v19 = 3;
      }
      CExpressionManager::InsertExpressionsInOrderForTarget(*((_QWORD *)*a1 + 30), a2, (__int64)v21, v19);
    }
LABEL_15:
    CExpressionManager::InsertExpressionsInOrderForTarget(*((_QWORD *)*a1 + 30), a2, (__int64)v18, 9u);
    if ( v18 )
      CWeakReferenceBase::Release(v18);
    v3 = (CComposition *)((char *)v3 + 1);
  }
}
