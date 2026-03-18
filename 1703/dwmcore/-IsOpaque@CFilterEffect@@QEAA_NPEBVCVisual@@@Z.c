/*
 * XREFs of ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x180002DDC
 * Callers:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180002170 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEf.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x18016EF7C (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x18016EF7C (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 */

bool __fastcall CFilterEffect::IsOpaque(CFilterEffect *this, const struct CVisual *a2)
{
  unsigned int v4; // eax
  int v5; // eax
  bool v6; // cl

  v4 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v4;
  if ( (v4 & 6) == 2 )
  {
    v5 = (*(__int64 (__fastcall **)(CFilterEffect *))(*(_QWORD *)this + 160LL))(this);
    v6 = 0;
    if ( v5 )
    {
      if ( v5 == 2 )
        v6 = CFilterEffect::CheckInputsForOpacity(this, a2);
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 0;
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v6;
}
