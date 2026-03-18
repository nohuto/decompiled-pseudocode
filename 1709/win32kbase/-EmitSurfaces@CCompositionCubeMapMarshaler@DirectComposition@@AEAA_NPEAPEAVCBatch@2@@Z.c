/*
 * XREFs of ?EmitSurfaces@CCompositionCubeMapMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01475F8
 * Callers:
 *     ?EmitUpdateCommands@CCompositionCubeMapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147720 (-EmitUpdateCommands@CCompositionCubeMapMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CCompositionCubeMapMarshaler::EmitSurfaces(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rsi
  char *v6; // rcx
  char *v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  void *v15; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 13) < *((_DWORD *)this + 12); *((_DWORD *)this + 13) += v5 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[15] + 5);
    v14 = v4;
    if ( v4 < 0x24 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v14) )
        return *((_DWORD *)this + 13) == *((_DWORD *)this + 12);
      v4 = v14;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 12) - *((_DWORD *)this + 13));
    if ( v5 >= (v4 - 16) / 0x14 )
      LODWORD(v5) = (v4 - 16) / 0x14;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(20 * v5 + 16),
      &v15);
    v6 = (char *)v15;
    *(_DWORD *)v15 = 20 * v5 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 67;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v6 + 3) = v5;
    v7 = v6 + 16;
    v8 = *((_DWORD *)this + 13);
    if ( (_DWORD)v5 )
    {
      v9 = (unsigned int)v5;
      do
      {
        v10 = 3LL * v8;
        v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 24LL * v8);
        if ( v11 )
          v12 = *(_DWORD *)(v11 + 24);
        else
          v12 = 0;
        *(_DWORD *)v7 = v12;
        ++v8;
        *(_OWORD *)(v7 + 4) = *(_OWORD *)(*((_QWORD *)this + 5) + 8 * v10 + 8);
        v7 += 20;
        --v9;
      }
      while ( v9 );
    }
  }
  return *((_DWORD *)this + 13) == *((_DWORD *)this + 12);
}
