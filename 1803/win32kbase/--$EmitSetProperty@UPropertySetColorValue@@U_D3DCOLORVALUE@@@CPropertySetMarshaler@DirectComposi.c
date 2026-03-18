/*
 * XREFs of ??$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x1C00080C8
 * Callers:
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00084FC (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetColorValue,_D3DCOLORVALUE>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  int v3; // ebx
  __int64 v4; // r14
  char v7; // di
  char *v8; // r9
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  void *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3;
  v7 = 1;
  v10 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
  if ( v10 < 0x2C && !DirectComposition::CBatch::AllocateNewFragment(a2, &v10) )
    return 0;
  DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x2CuLL, &v11);
  v8 = (char *)v11;
  *(_DWORD *)v11 = 44;
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
  *(_OWORD *)(v8 + 28) = *(_OWORD *)((*(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 72));
  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4 + 4) &= 0x1FFFFFFFu;
  return v7;
}
