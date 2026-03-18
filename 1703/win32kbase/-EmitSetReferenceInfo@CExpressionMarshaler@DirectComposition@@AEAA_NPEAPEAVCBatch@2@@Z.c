/*
 * XREFs of ?EmitSetReferenceInfo@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018660
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017FF0 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00815E4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetReferenceInfo(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbp
  char *v6; // rcx
  unsigned int v7; // r8d
  _OWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 51) < *((_DWORD *)this + 50); *((_DWORD *)this + 51) += v5 )
  {
    v4 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 15) + 40LL);
    v12 = v4;
    if ( v4 < 0x28 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
        return *((_DWORD *)this + 51) == *((_DWORD *)this + 50);
      v4 = v12;
    }
    v5 = (v4 - 16) / 0x18;
    if ( (unsigned int)(*((_DWORD *)this + 50) - *((_DWORD *)this + 51)) < v5 )
      LODWORD(v5) = *((_DWORD *)this + 50) - *((_DWORD *)this + 51);
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(24 * v5 + 16), &v13);
    v6 = (char *)v13;
    v7 = 0;
    *(_DWORD *)v13 = 24 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 236;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v6 + 3) = v5; v7 < (unsigned int)v5; *((_QWORD *)v8 - 1) = *(_QWORD *)(v9 + 8 * v10 + 16) )
    {
      v9 = *((_QWORD *)this + 24);
      v10 = v7 + *((_DWORD *)this + 51);
      ++v7;
      v10 *= 3LL;
      *v8 = *(_OWORD *)(v9 + 8 * v10);
      v8 = (_OWORD *)((char *)v8 + 24);
    }
  }
  return *((_DWORD *)this + 51) == *((_DWORD *)this + 50);
}
