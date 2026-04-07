/*
 * XREFs of ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x180075EA4
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180079C18 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18003EA00 (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopMagnifierSamplingMode(__int64 a1, int a2)
{
  bool v2; // zf
  unsigned int v3; // edx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  v2 = a2 == 1;
  v3 = 2;
  v5 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    v3 = 0;
  v6 = CVisual::SetSamplingMode(v5, v3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = CVisual::RenderRecursive(*(CVisual **)(a1 + 40));
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x191u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x18Cu);
  }
  return v7;
}
