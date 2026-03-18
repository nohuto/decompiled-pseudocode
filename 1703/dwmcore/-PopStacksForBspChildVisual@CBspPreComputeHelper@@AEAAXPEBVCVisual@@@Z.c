/*
 * XREFs of ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801B33F4
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x180020640 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18008AE28 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x180135164 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspChildVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  CVisual *v2; // r11
  int *v3; // r10
  __int64 v4; // r11
  float v5; // xmm2_4
  int v6; // eax

  v2 = a2;
  if ( (*((_BYTE *)a2 + 90) & 2) != 0 )
    CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 72);
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(CVisual::GetOpacityInternal(v2) - 1.0)) & _xmm);
  if ( v5 >= 0.0000011920929 )
    CWatermarkStack<bool,64,2,10>::Pop(v3 + 64);
  if ( (*(_BYTE *)(v4 + 92) & 0x10) != 0 )
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 56);
  if ( (*(_BYTE *)(v4 + 92) & 8) != 0 )
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 48);
  if ( (*(_BYTE *)(v4 + 92) & 2) != 0 )
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 40);
  if ( (*(_BYTE *)(v4 + 92) & 0x40) != 0 )
    CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop(v3 + 32);
  v6 = v3[24];
  if ( v6 )
    v3[24] = v6 - 1;
}
