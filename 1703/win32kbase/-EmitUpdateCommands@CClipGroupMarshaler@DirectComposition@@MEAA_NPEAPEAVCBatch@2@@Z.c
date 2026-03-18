/*
 * XREFs of ?EmitUpdateCommands@CClipGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147940
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00815E4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CClipGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CClipGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r14
  char *v6; // r8
  unsigned int v7; // r10d
  _DWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  for ( ; *((_DWORD *)this + 19) < *((_DWORD *)this + 18); *((_DWORD *)this + 19) += v5 )
  {
    v4 = 4096LL - *((_QWORD *)(*a2)[15] + 5);
    v12 = v4;
    if ( v4 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
        return *((_DWORD *)this + 19) == *((_DWORD *)this + 18);
      v4 = v12;
    }
    v5 = (v4 - 20) >> 2;
    if ( (unsigned int)(*((_DWORD *)this + 18) - *((_DWORD *)this + 19)) < v5 )
      LODWORD(v5) = *((_DWORD *)this + 18) - *((_DWORD *)this + 19);
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a2,
      (unsigned int)(4 * v5 + 20),
      &v13);
    v6 = (char *)v13;
    *(_DWORD *)v13 = 4 * v5 + 20;
    *(_QWORD *)(v6 + 4) = 0LL;
    *(_QWORD *)(v6 + 12) = 0LL;
    *((_DWORD *)v6 + 1) = 378;
    *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v6 + 3) = 4 * v5;
    *((_DWORD *)v6 + 4) = *((_DWORD *)this + 19) != 0;
    v7 = *((_DWORD *)this + 19);
    if ( (_DWORD)v5 )
    {
      v8 = v6 + 20;
      v9 = (unsigned int)v5;
      do
      {
        v10 = v7++;
        *v8++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v10) + 24LL);
        --v9;
      }
      while ( v9 );
    }
  }
  return *((_DWORD *)this + 19) == *((_DWORD *)this + 18);
}
