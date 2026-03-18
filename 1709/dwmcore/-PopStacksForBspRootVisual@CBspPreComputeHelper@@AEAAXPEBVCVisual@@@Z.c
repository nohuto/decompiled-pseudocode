/*
 * XREFs of ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801CF9CC
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800B1154 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1800B53C8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x18011D904 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x1801CF8F0 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspRootVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  int *v7; // r8
  int v8; // eax
  int v9; // eax
  int *v10; // r8
  const struct CVisual *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)this + 72);
  CWatermarkStack<bool,64,2,10>::Pop((_DWORD *)(v2 + 256));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v3 + 224));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v4 + 192));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v5 + 160));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v6 + 128));
  v8 = v7[24];
  if ( v8 )
    v7[24] = v8 - 1;
  v9 = v7[16];
  if ( v9 )
    v7[16] = v9 - 1;
  CWatermarkStack<CVisual *,64,2,10>::Pop(v7 + 8, 0LL);
  if ( CWatermarkStack<CBspNode *,64,2,10>::Pop(v10, &v11) )
    ReleaseInterface<CRemoteApplicationWindow>((__int64 *)&v11);
}
