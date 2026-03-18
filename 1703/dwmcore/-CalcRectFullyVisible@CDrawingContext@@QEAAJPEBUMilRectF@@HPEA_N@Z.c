/*
 * XREFs of ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18014ACC0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18009EF08 (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::CalcRectFullyVisible(
        CDrawingContext *this,
        const struct MilRectF *a2,
        unsigned int a3,
        bool *a4)
{
  bool v4; // bl
  unsigned int v9; // edi
  char *v10; // rcx
  __int64 v11; // rdx
  char *v12; // rax
  const struct CMILMatrix *TopByReference; // rax
  __int64 v14; // r9
  int v15; // eax
  _BYTE v17[4]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-75h] BYREF
  __int128 v19; // [rsp+48h] [rbp-71h] BYREF
  __int128 v20; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v21[2]; // [rsp+68h] [rbp-51h] BYREF
  char v22; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v23[16]; // [rsp+90h] [rbp-29h] BYREF
  char v24; // [rsp+A0h] [rbp-19h] BYREF
  char v25; // [rsp+B0h] [rbp-9h] BYREF

  v4 = 0;
  v9 = 0;
  if ( *((_BYTE *)this + 6771)
    && *((_QWORD *)this + 835)
    && CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)this + 292) )
  {
    v17[0] = 0;
    v18 = 0;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v23,
      16LL,
      4LL,
      (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    v21[0] = v23;
    v10 = &v25;
    v21[1] = &v24;
    v11 = 2LL;
    v12 = &v22;
    do
    {
      *(_QWORD *)v12 = v10;
      v10 += 16;
      v12 += 8;
      --v11;
    }
    while ( v11 );
    v19 = *(_OWORD *)a2;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)TopByReference, (__int64)&v19, (float *)&v20);
    v15 = COcclusionContext::ComputeVisibleRegion(*((_QWORD *)this + 835), &v20, a3, v14, v17, (__int64)v21, &v18);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1272u);
      return v9;
    }
    v4 = v17[0] == 0;
  }
  *a4 = v4;
  return v9;
}
