/*
 * XREFs of ?EmitAddConditionAnimationResources@CConditionalExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01498A0
 * Callers:
 *     ?EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0149AF0 (-EmitUpdateCommands@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CConditionalExpressionMarshaler::EmitAddConditionAnimationResources(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r8
  unsigned int v6; // esi
  char *v7; // rcx
  unsigned int v8; // r9d
  _DWORD *v9; // r8
  int v10; // edx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 33) < *((_DWORD *)this + 32); *((_DWORD *)this + 33) += 2 * v6 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[15] + 5);
    v12 = v4;
    if ( v4 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
        return *((_DWORD *)this + 33) == *((_DWORD *)this + 32);
      v4 = v12;
    }
    v5 = (v4 - 16) >> 3;
    if ( (unsigned __int64)(unsigned int)(*((_DWORD *)this + 32) - *((_DWORD *)this + 33)) >> 1 >= v5 )
      v6 = v5;
    else
      v6 = (unsigned int)(*((_DWORD *)this + 32) - *((_DWORD *)this + 33)) >> 1;
    DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 8 * v6 + 16, &v13);
    v7 = (char *)v13;
    v8 = 0;
    *(_DWORD *)v13 = 8 * v6 + 16;
    v9 = v7 + 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 102;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v7 + 3) = v6;
          v8 < v6;
          *(v9 - 1) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 15)
                                            + 8LL * (unsigned int)(v10 + *((_DWORD *)this + 33) + 1))
                                + 24LL) )
    {
      v10 = 2 * v8++;
      *v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 15) + 8LL * (unsigned int)(v10 + *((_DWORD *)this + 33))) + 24LL);
      v9 += 2;
    }
  }
  return *((_DWORD *)this + 33) == *((_DWORD *)this + 32);
}
