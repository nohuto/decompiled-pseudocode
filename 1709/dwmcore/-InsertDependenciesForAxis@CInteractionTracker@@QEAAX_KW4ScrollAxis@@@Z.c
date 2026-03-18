/*
 * XREFs of ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18016BFF4
 * Callers:
 *     ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x18018A540 (-InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x18011BD2C (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAX_KPEAV-$CWeakReference@VCResource@@@.c)
 *     _lambda_33703150b5e965453f86618a52381b33_::operator() @ 0x18016AAAC (_lambda_33703150b5e965453f86618a52381b33_--operator().c)
 *     _lambda_fa0e79952f59bb2c7a7313aae2613e96_::operator() @ 0x18016AB2C (_lambda_fa0e79952f59bb2c7a7313aae2613e96_--operator().c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18016BF60 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 */

void __fastcall CInteractionTracker::InsertDependenciesForAxis(struct CResource *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  CComposition *v5; // rcx
  int WeakReferenceBase; // eax
  _QWORD *v7; // rcx
  __int64 SourceModifierConditionalAnimation; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  struct CResource *v11; // rdx
  CComposition *v12; // rcx
  int v13; // eax
  struct CWeakReferenceBase *v14; // rsi
  int v15; // r9d
  struct CWeakReferenceBase *v16; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-58h] BYREF
  int *v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h]
  struct CWeakReferenceBase *v20; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-38h] BYREF
  int v22; // [rsp+60h] [rbp-20h] BYREF
  int v23; // [rsp+64h] [rbp-1Ch]
  int v24; // [rsp+68h] [rbp-18h]
  int v25; // [rsp+6Ch] [rbp-14h]
  const void *retaddr; // [rsp+98h] [rbp+18h]

  v3 = a3;
  v17 = a2;
  v16 = (struct CWeakReferenceBase *)&v17;
  lambda_fa0e79952f59bb2c7a7313aae2613e96_::operator()((_QWORD **)&v16, *((_QWORD *)a1 + a3 + 55));
  if ( (unsigned int)v3 <= 1 )
    lambda_fa0e79952f59bb2c7a7313aae2613e96_::operator()((_QWORD **)&v16, *((_QWORD *)a1 + v3 + 53));
  v5 = (CComposition *)*((_QWORD *)a1 + 2);
  v20 = 0LL;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(v5, a1, &v20);
  if ( WeakReferenceBase < 0 )
    ModuleFailFastForHRESULT(WeakReferenceBase, retaddr);
  v21[0] = a1;
  v21[1] = &v17;
  v21[2] = &v20;
  if ( (int)v3 >= 0 )
  {
    if ( (int)v3 <= 1 )
    {
      v22 = 2;
      v23 = 20;
      v24 = 23;
      v25 = 58;
      v19 = 4LL;
    }
    else
    {
      if ( (_DWORD)v3 != 2 )
        goto LABEL_11;
      v22 = 26;
      v23 = 27;
      v24 = 61;
      v19 = 3LL;
    }
    v18 = &v22;
    lambda_33703150b5e965453f86618a52381b33_::operator()((__int64)v21, (__int64)&v18);
  }
LABEL_11:
  v7 = (_QWORD *)*((_QWORD *)a1 + 68);
  if ( !v7 )
    return;
  SourceModifierConditionalAnimation = CManipulation::GetSourceModifierConditionalAnimation(v7, v3);
  lambda_fa0e79952f59bb2c7a7313aae2613e96_::operator()((_QWORD **)&v16, SourceModifierConditionalAnimation);
  v9 = *((_QWORD *)a1 + 68);
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)v3 == 1 )
      v10 = *(_QWORD *)(v9 + 440);
    else
      v10 = 0LL;
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 432);
  }
  lambda_fa0e79952f59bb2c7a7313aae2613e96_::operator()((_QWORD **)&v16, v10);
  v11 = (struct CResource *)*((_QWORD *)a1 + 68);
  v12 = (CComposition *)*((_QWORD *)a1 + 2);
  v16 = 0LL;
  v13 = CComposition::GetWeakReferenceBase(v12, v11, &v16);
  if ( v13 < 0 )
    ModuleFailFastForHRESULT(v13, retaddr);
  v14 = v16;
  if ( (int)v3 >= 0 )
  {
    if ( (int)v3 <= 1 )
    {
      v15 = 1;
      goto LABEL_24;
    }
    if ( (_DWORD)v3 == 2 )
    {
      v15 = 3;
LABEL_24:
      CExpressionManager::InsertExpressionsInOrderForTarget(
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 216LL),
        v17,
        (__int64)v16,
        v15);
    }
  }
  CExpressionManager::InsertExpressionsInOrderForTarget(*(_QWORD *)(*((_QWORD *)a1 + 2) + 216LL), v17, (__int64)v14, 9);
}
