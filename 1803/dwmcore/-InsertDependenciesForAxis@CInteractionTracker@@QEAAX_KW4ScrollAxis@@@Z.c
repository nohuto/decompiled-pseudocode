/*
 * XREFs of ?InsertDependenciesForAxis@CInteractionTracker@@QEAAX_KW4ScrollAxis@@@Z @ 0x18019484C
 * Callers:
 *     ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z @ 0x1801BFBF0 (-InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAX_K@Z.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _lambda_d6c37b20fdd219b27fc7355a9d04263e_::operator() @ 0x180193484 (_lambda_d6c37b20fdd219b27fc7355a9d04263e_--operator().c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1801947C0 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?InsertDependenciesForConditionalIfExists@CInteractionTracker@@QEAAX_KPEAVCConditionalExpression@@@Z @ 0x180194990 (-InsertDependenciesForConditionalIfExists@CInteractionTracker@@QEAAX_KPEAVCConditionalExpression.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z @ 0x1801C9EC0 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAX_KW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::InsertDependenciesForAxis(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rbx
  CInteractionTracker *v5; // rcx
  CComposition *v6; // rcx
  int WeakReferenceBase; // eax
  char result; // al
  __int64 v9[2]; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  CWeakReferenceBase *v11; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v12[3]; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+58h] [rbp-18h] BYREF
  int v14; // [rsp+5Ch] [rbp-14h]
  int v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+64h] [rbp-Ch]
  const void *retaddr; // [rsp+88h] [rbp+18h]

  v3 = a3;
  v10 = a2;
  CInteractionTracker::InsertDependenciesForConditionalIfExists(
    (CInteractionTracker *)a1,
    a2,
    (struct CConditionalExpression *)a1[a3 + 67]);
  if ( (unsigned int)v3 <= 1 )
    CInteractionTracker::InsertDependenciesForConditionalIfExists(v5, v10, (struct CConditionalExpression *)a1[v3 + 65]);
  v6 = (CComposition *)a1[2];
  v11 = 0LL;
  WeakReferenceBase = CComposition::GetWeakReferenceBase(v6, (struct CResource *)a1, &v11);
  if ( WeakReferenceBase < 0 )
    ModuleFailFastForHRESULT(WeakReferenceBase, retaddr);
  v12[0] = a1;
  v12[1] = &v10;
  v12[2] = &v11;
  if ( (int)v3 >= 0 )
  {
    if ( (int)v3 <= 1 )
    {
      v13 = 2;
      v14 = 20;
      v15 = 23;
      v16 = 58;
      v9[0] = 4LL;
    }
    else
    {
      if ( (_DWORD)v3 != 2 )
        goto LABEL_11;
      v13 = 26;
      v14 = 27;
      v15 = 61;
      v9[0] = 3LL;
    }
    v9[1] = (__int64)&v13;
    lambda_d6c37b20fdd219b27fc7355a9d04263e_::operator()((__int64)v12, v9);
  }
LABEL_11:
  result = InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 44));
  if ( result )
    result = InteractionSourceManager::InsertDependenciesForAxis(a1 + 44, v10, (unsigned int)v3);
  if ( v11 )
    return CWeakReferenceBase::Release(v11);
  return result;
}
