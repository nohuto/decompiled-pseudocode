/*
 * XREFs of ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00094A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009AB0 (-EmitSetNodesInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009BC0 (-EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009D08 (-EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000A350 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C014AC0C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

char __fastcall DirectComposition::CExpressionMarshaler::EmitUpdateCommands(
        const void **this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // si
  const unsigned __int16 *v5; // rcx
  int v7; // eax
  unsigned __int64 v8; // r14
  int v9; // ecx
  int v10; // r15d
  unsigned __int64 v11; // rbp
  char *v12; // rcx
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF
  void *v14; // [rsp+68h] [rbp+20h] BYREF

  if ( !DirectComposition::CBaseExpressionMarshaler::EmitUpdateCommands(
          (DirectComposition::CBaseExpressionMarshaler *)this,
          a2)
    || !DirectComposition::CExpressionMarshaler::EmitSetSources((DirectComposition::CExpressionMarshaler *)this, a2)
    || !DirectComposition::CExpressionMarshaler::EmitSetReferenceInfo(
          (DirectComposition::CExpressionMarshaler *)this,
          a2) )
  {
    return 0;
  }
  v4 = 1;
  if ( ((_DWORD)this[2] & 0x1000) == 0 )
  {
    v5 = (const unsigned __int16 *)this[28];
    if ( v5 )
    {
      v7 = StringCchLengthW(v5, 0x3E8uLL, &v13);
      v8 = v13 + 1;
      if ( v7 < 0 )
        return 0;
      v9 = 2 * v8;
      if ( ((2 * (_BYTE)v8) & 3) != 0 )
        v9 += 4 - ((2 * (_BYTE)v8) & 3);
      v10 = v9 + 16;
      v11 = (unsigned int)(v9 + 16);
      v13 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
      if ( v13 < v11
        && (!DirectComposition::CBatch::AllocateNewFragment((struct DirectComposition::CBatch ***)a2, &v13) || v13 < v11) )
      {
        return 0;
      }
      DirectComposition::CBatch::EnsureBatchBuffer(a2, v11, &v14);
      v12 = (char *)v14;
      *(_DWORD *)v14 = v10;
      *(_QWORD *)(v12 + 4) = 0LL;
      *((_DWORD *)v12 + 3) = 0;
      *((_DWORD *)v12 + 1) = 159;
      *((_DWORD *)v12 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v12 + 3) = v8;
      memmove(v12 + 16, this[28], 2 * v8);
      *((_DWORD *)this + 4) |= 0x1000u;
    }
  }
  if ( !DirectComposition::CExpressionMarshaler::EmitSetNodesInfo((DirectComposition::CExpressionMarshaler *)this, a2) )
    return 0;
  return v4;
}
