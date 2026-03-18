/*
 * XREFs of ?EmitSetSources@CExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00187B0
 * Callers:
 *     ?EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017FF0 (-EmitUpdateCommands@CExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00815E4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CExpressionMarshaler::EmitSetSources(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbp
  char *v6; // rcx
  unsigned int v7; // edx
  _DWORD *v8; // r8
  int v9; // r9d
  __int64 v10; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 47) < *((_DWORD *)this + 46); *((_DWORD *)this + 47) += v5 )
  {
    v4 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 15) + 40LL);
    v12 = v4;
    if ( v4 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
        return *((_DWORD *)this + 47) == *((_DWORD *)this + 46);
      v4 = v12;
    }
    v5 = (v4 - 16) >> 2;
    if ( (unsigned int)(*((_DWORD *)this + 46) - *((_DWORD *)this + 47)) < v5 )
      LODWORD(v5) = *((_DWORD *)this + 46) - *((_DWORD *)this + 47);
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v5 + 16), &v13);
    v6 = (char *)v13;
    v7 = 0;
    *(_DWORD *)v13 = 4 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 235;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v6 + 3) = v5; v7 < (unsigned int)v5; ++v8 )
    {
      v9 = 0;
      v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + 8LL * (v7 + *((_DWORD *)this + 47))) + 16LL);
      if ( v10 )
        v9 = *(_DWORD *)(v10 + 24);
      *v8 = v9;
      ++v7;
    }
  }
  return *((_DWORD *)this + 47) == *((_DWORD *)this + 46);
}
