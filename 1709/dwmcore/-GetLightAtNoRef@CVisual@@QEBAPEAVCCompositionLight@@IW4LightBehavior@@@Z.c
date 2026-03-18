/*
 * XREFs of ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x18004E954
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18004E930 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 */

__int64 __fastcall CVisual::GetLightAtNoRef(__int64 a1, __int64 a2, int a3)
{
  unsigned int LightsCount; // eax
  __int64 v4; // rcx
  int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rcx

  LightsCount = CVisual::GetLightsCount(a1, a3);
  if ( v6 >= LightsCount )
    return 0LL;
  if ( v5 )
    v7 = v4 + 272;
  else
    v7 = v4 + 264;
  return CPtrArrayBase::operator[](v7, v6);
}
