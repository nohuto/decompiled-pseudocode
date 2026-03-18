/*
 * XREFs of ?EmitUpdateCommands@CTransformGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0152180
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CTransformGroupMarshaler::EmitUpdateCommands(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbp
  char *v6; // rcx
  _DWORD *v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 17) < *((_DWORD *)this + 16) )
  {
    do
    {
      v4 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
      v12 = v4;
      if ( v4 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
          return *((_DWORD *)this + 17) == *((_DWORD *)this + 16);
        v4 = v12;
      }
      v5 = (unsigned int)(*((_DWORD *)this + 16) - *((_DWORD *)this + 17));
      if ( v5 >= (v4 - 20) >> 2 )
        LODWORD(v5) = (v4 - 20) >> 2;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v5 + 20), &v13);
      v6 = (char *)v13;
      *(_DWORD *)v13 = 4 * v5 + 20;
      v7 = v6 + 20;
      *(_QWORD *)(v6 + 4) = 0LL;
      *(_QWORD *)(v6 + 12) = 0LL;
      *((_DWORD *)v6 + 1) = 481;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v6 + 3) = 4 * v5;
      *((_DWORD *)v6 + 4) = *((_DWORD *)this + 17) != 0;
      v8 = *((_DWORD *)this + 17);
      if ( (_DWORD)v5 )
      {
        v9 = (unsigned int)v5;
        do
        {
          v10 = v8++;
          *v7++ = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8 * v10) + 24LL);
          --v9;
        }
        while ( v9 );
        v8 = *((_DWORD *)this + 17);
      }
      *((_DWORD *)this + 17) = v8 + v5;
    }
    while ( v8 + (unsigned int)v5 < *((_DWORD *)this + 16) );
  }
  return *((_DWORD *)this + 17) == *((_DWORD *)this + 16);
}
