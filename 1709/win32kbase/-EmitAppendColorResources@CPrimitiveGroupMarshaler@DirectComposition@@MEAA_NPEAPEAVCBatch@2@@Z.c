/*
 * XREFs of ?EmitAppendColorResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00274A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitAppendColorResources(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  unsigned int v8; // edx
  _DWORD *v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 25) < *((_DWORD *)this + 24); *((_DWORD *)this + 25) += v6 )
  {
    v5 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 15) + 40LL);
    v11 = v5;
    if ( v5 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v11) )
        return *((_DWORD *)this + 25) == *((_DWORD *)this + 24);
      v5 = v11;
    }
    v6 = (unsigned int)(*((_DWORD *)this + 24) - *((_DWORD *)this + 25));
    if ( v6 >= (v5 - 16) >> 2 )
      LODWORD(v6) = (v5 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v6 + 16), &v12);
    v7 = (char *)v12;
    v8 = 0;
    *(_DWORD *)v12 = 4 * v6 + 16;
    v9 = v7 + 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 271;
    *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v7 + 3) = v6; v8 < (unsigned int)v6; ++v9 )
    {
      v10 = v8 + *((_DWORD *)this + 25);
      ++v8;
      *v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v10) + 24LL);
    }
  }
  return *((_DWORD *)this + 25) == *((_DWORD *)this + 24);
}
