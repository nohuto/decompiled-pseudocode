/*
 * XREFs of ??$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C0007E6C
 * Callers:
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00084FC (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix4x4Value,D2DMatrix>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  int v3; // ebx
  __int64 v4; // r14
  char v7; // di
  char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF
  void *v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3;
  v7 = 1;
  v12 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
  if ( v12 < 0x5C && !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
    return 0;
  DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x5CuLL, &v13);
  v8 = (char *)v13;
  *(_DWORD *)v13 = 92;
  *(_QWORD *)(v8 + 4) = 0LL;
  *(_QWORD *)(v8 + 12) = 0LL;
  *(_QWORD *)(v8 + 20) = 0LL;
  *((_DWORD *)v8 + 1) = 330;
  *((_DWORD *)v8 + 2) = *(_DWORD *)(a1 + 24);
  *((_DWORD *)v8 + 3) = v4;
  *((_DWORD *)v8 + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) & 0x1FFFFFFF;
  *((_DWORD *)v8 + 5) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4);
  LOBYTE(v3) = (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) & 0xE0000000) == 0x20000000;
  *((_DWORD *)v8 + 6) = v3;
  v9 = *(_QWORD *)(a1 + 72);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) & 0x1FFFFFFF;
  *(_OWORD *)(v8 + 28) = *(_OWORD *)(v10 + v9);
  *(_OWORD *)(v8 + 44) = *(_OWORD *)(v10 + v9 + 16);
  *(_OWORD *)(v8 + 60) = *(_OWORD *)(v10 + v9 + 32);
  *(_OWORD *)(v8 + 76) = *(_OWORD *)(v10 + v9 + 48);
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) &= 0x1FFFFFFFu;
  return v7;
}
