/*
 * XREFs of ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0153430
 * Callers:
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0153560 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

bool __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitTable(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  char *v10; // r9
  unsigned __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  void *v13; // [rsp+78h] [rbp+20h] BYREF

  v6 = 2LL * a3;
  v7 = 2 * (a3 + 6LL);
  if ( *((_DWORD *)this + 4 * a3 + 25) < *((_DWORD *)this + 4 * a3 + 24) )
  {
    do
    {
      v8 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
      v12 = v8;
      if ( v8 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v12) )
          return *((_DWORD *)this + 2 * v6 + 25) == *((_DWORD *)this + 2 * v7);
        v8 = v12;
      }
      v9 = (unsigned int)(*((_DWORD *)this + 2 * v7) - *((_DWORD *)this + 2 * v6 + 25));
      if ( v9 >= (v8 - 20) >> 2 )
        LODWORD(v9) = (v8 - 20) >> 2;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v9 + 20), &v13);
      v10 = (char *)v13;
      *(_DWORD *)v13 = 4 * v9 + 20;
      *(_QWORD *)(v10 + 4) = 0LL;
      *(_QWORD *)(v10 + 12) = 0LL;
      *((_DWORD *)v10 + 1) = 373;
      *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v10 + 4) = a3;
      *((_DWORD *)v10 + 3) = *((_DWORD *)this + 2 * v6 + 25) != 0;
      memmove(
        v10 + 20,
        (const void *)(*((_QWORD *)this + v6 + 11) + 4LL * *((unsigned int *)this + 2 * v6 + 25)),
        (unsigned int)(4 * v9));
      *((_DWORD *)this + 2 * v6 + 25) += v9;
    }
    while ( *((_DWORD *)this + 2 * v6 + 25) < *((_DWORD *)this + 2 * v7) );
  }
  return *((_DWORD *)this + 2 * v6 + 25) == *((_DWORD *)this + 2 * v7);
}
