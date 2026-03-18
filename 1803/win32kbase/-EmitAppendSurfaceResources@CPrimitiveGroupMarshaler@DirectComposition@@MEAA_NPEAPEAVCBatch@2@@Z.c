/*
 * XREFs of ?EmitAppendSurfaceResources@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0014570
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitAppendSurfaceResources(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  char *v6; // rcx
  unsigned int v7; // edx
  _DWORD *v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 21) < *((_DWORD *)this + 20); *((_DWORD *)this + 21) += v5 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    v11 = v4;
    if ( v4 < 0x14 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v11) )
        return *((_DWORD *)this + 21) == *((_DWORD *)this + 20);
      v4 = v11;
    }
    v5 = (unsigned int)(*((_DWORD *)this + 20) - *((_DWORD *)this + 21));
    if ( v5 >= (v4 - 16) >> 2 )
      LODWORD(v5) = (v4 - 16) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(4 * v5 + 16),
      &v12);
    v6 = (char *)v12;
    v7 = 0;
    *(_DWORD *)v12 = 4 * v5 + 16;
    v8 = v6 + 16;
    *(_QWORD *)(v6 + 4) = 0LL;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 1) = 308;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v6 + 3) = v5; v7 < (unsigned int)v5; ++v8 )
    {
      v9 = v7 + *((_DWORD *)this + 21);
      ++v7;
      *v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 8 * v9) + 24LL);
    }
  }
  return *((_DWORD *)this + 21) == *((_DWORD *)this + 20);
}
