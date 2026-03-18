/*
 * XREFs of ?Pop@CLightStack@@QEAAJXZ @ 0x18015610C
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A0130 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800A6380 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800BD7E0 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FindLight@CLightStack@@AEBA_NPEBVCCompositionLight@@@Z @ 0x1801560E4 (-FindLight@CLightStack@@AEBA_NPEBVCCompositionLight@@@Z.c)
 */

__int64 __fastcall CLightStack::Pop(CLightStack *this)
{
  unsigned int v1; // r8d
  const struct CCompositionLight *v2; // rbx
  __int64 v3; // rcx

  v1 = *((_DWORD *)this + 6) - 1;
  v2 = *(const struct CCompositionLight **)(*(_QWORD *)this + 8LL * v1);
  *((_DWORD *)this + 6) = v1;
  if ( !CLightStack::FindLight(this, v2) )
    ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)(v3 + 72));
  if ( v2 )
    (*(void (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)v2 + 16LL))(v2);
  return 0LL;
}
