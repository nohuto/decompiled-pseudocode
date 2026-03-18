/*
 * XREFs of ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C0147D70
 * Callers:
 *     ?EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147490 (-EmitUpdateCommands@CFilterEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0148260 (-EmitUpdateCommands@CTableTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014CA70 (-EmitUpdateCommands@CGaussianBlurEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014CC00 (-EmitUpdateCommands@CBrightnessEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014CEA0 (-EmitUpdateCommands@CColorMatrixEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014D350 (-EmitUpdateCommands@CShadowEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014D630 (-EmitUpdateCommands@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CSaturationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014D750 (-EmitUpdateCommands@CSaturationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014D8D0 (-EmitUpdateCommands@CTurbulenceEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CFloodEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014DB50 (-EmitUpdateCommands@CFloodEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014DD80 (-EmitUpdateCommands@CLinearTransferEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014E1A0 (-EmitUpdateCommands@CCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CBlendEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014E2A0 (-EmitUpdateCommands@CBlendEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014E3E0 (-EmitUpdateCommands@CArithmeticCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2.c)
 *     ?EmitUpdateCommands@CAffineTransform2DEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014E610 (-EmitUpdateCommands@CAffineTransform2DEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00815E4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CEffectInputSet::EmitUpdateCommands(
        __int64 a1,
        __int64 a2,
        int a3,
        struct DirectComposition::CBatch ***a4)
{
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rbp
  char *v9; // rdx
  unsigned int v10; // r9d
  char *v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // rcx
  void *v16; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  for ( ; *(_DWORD *)(a1 + 32) < *(_DWORD *)a1; *(_DWORD *)(a1 + 32) += v8 )
  {
    v7 = 4096LL - *((_QWORD *)(*a4)[15] + 5);
    v17 = v7;
    if ( v7 < 0x30 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a4, &v17) )
        return *(_DWORD *)(a1 + 32) == *(_DWORD *)a1;
      v7 = v17;
    }
    v8 = (v7 - 20) / 0x1C;
    if ( (unsigned int)(*(_DWORD *)a1 - *(_DWORD *)(a1 + 32)) < v8 )
      LODWORD(v8) = *(_DWORD *)a1 - *(_DWORD *)(a1 + 32);
    DirectComposition::CBatch::EnsureBatchBuffer(
      (struct DirectComposition::CBatch **)a4,
      (unsigned int)(28 * v8 + 20),
      &v16);
    v9 = (char *)v16;
    *(_DWORD *)v16 = 28 * v8 + 20;
    *(_QWORD *)(v9 + 4) = 0LL;
    *(_QWORD *)(v9 + 12) = 0LL;
    *((_DWORD *)v9 + 1) = 270;
    *((_DWORD *)v9 + 2) = a3;
    *((_DWORD *)v9 + 4) = v8;
    v10 = *(_DWORD *)(a1 + 32);
    if ( (_DWORD)v8 )
    {
      v11 = v9 + 24;
      v12 = (unsigned int)v8;
      do
      {
        *((_DWORD *)v11 - 1) = v10;
        v13 = v10;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v10);
        if ( v14 )
          *(_DWORD *)v11 = *(_DWORD *)(v14 + 24);
        else
          *(_DWORD *)v11 = 0;
        ++v10;
        *((_DWORD *)v11 + 5) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v13);
        *(_OWORD *)(v11 + 4) = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 16 * v13);
        v11 += 28;
        --v12;
      }
      while ( v12 );
    }
  }
  return *(_DWORD *)(a1 + 32) == *(_DWORD *)a1;
}
