/*
 * XREFs of ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x18018E808
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800AB230 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180175B7C (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x18018DA24 (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z @ 0x18018DA24 (-CheckInputsForOpacity@CFilterEffect@@IEBA_NPEBVCVisual@@@Z.c)
 */

bool __fastcall CFilterEffect::IsOpaque(CFilterEffect *this, const struct CVisual *a2)
{
  int v2; // eax
  bool v5; // cl
  int v6; // eax

  v2 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    v6 = (*(__int64 (__fastcall **)(CFilterEffect *))(*(_QWORD *)this + 192LL))(this);
    v5 = 0;
    if ( v6 )
    {
      if ( v6 == 2 )
        v5 = CFilterEffect::CheckInputsForOpacity(this, a2);
    }
    else
    {
      v5 = 1;
    }
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v5;
}
