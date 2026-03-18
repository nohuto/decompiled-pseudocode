/*
 * XREFs of ?EmitTable@CTableTransferEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@I@Z @ 0x1C0148F70
 * Callers:
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01490C0 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C002A65C (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0085DFC (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

bool __fastcall DirectComposition::CTableTransferEffectMarshaler::EmitTable(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  char *v11; // r9
  __int64 v13; // [rsp+20h] [rbp-48h]
  unsigned __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+18h]
  void *v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = a3;
  v4 = a3 + 6LL;
  v13 = v4;
  v5 = 2 * v4;
  v6 = 2LL * a3;
  if ( *((_DWORD *)this + 4 * a3 + 25) < *((_DWORD *)this + 4 * v4) )
  {
    do
    {
      v9 = 4096LL - *((_QWORD *)(*a2)[15] + 5);
      v14 = v9;
      if ( v9 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v14) )
          break;
        v9 = v14;
      }
      v10 = (unsigned int)(*((_DWORD *)this + 2 * v5) - *((_DWORD *)this + 2 * v6 + 25));
      if ( v10 >= (v9 - 20) >> 2 )
        LODWORD(v10) = (v9 - 20) >> 2;
      DirectComposition::CBatch::EnsureBatchBuffer(
        (struct DirectComposition::CBatch **)a2,
        (unsigned int)(4 * v10 + 20),
        &v16);
      v11 = (char *)v16;
      *(_DWORD *)v16 = 4 * v10 + 20;
      *(_QWORD *)(v11 + 4) = 0LL;
      *(_QWORD *)(v11 + 12) = 0LL;
      *((_DWORD *)v11 + 1) = 317;
      *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v11 + 4) = a3;
      *((_DWORD *)v11 + 3) = *((_DWORD *)this + 2 * v6 + 25) != 0;
      memmove(
        v11 + 20,
        (const void *)(*((_QWORD *)this + v6 + 11) + 4LL * *((unsigned int *)this + 2 * v6 + 25)),
        (unsigned int)(4 * v10));
      *((_DWORD *)this + 2 * v6 + 25) += v10;
    }
    while ( *((_DWORD *)this + 2 * v6 + 25) < *((_DWORD *)this + 2 * v5) );
    v4 = v13;
  }
  return *((_DWORD *)this + 2 * v6 + 25) == *((_DWORD *)this + 4 * v4);
}
