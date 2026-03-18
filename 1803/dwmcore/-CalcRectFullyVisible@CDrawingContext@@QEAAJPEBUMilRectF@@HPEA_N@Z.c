/*
 * XREFs of ?CalcRectFullyVisible@CDrawingContext@@QEAAJPEBUMilRectF@@HPEA_N@Z @ 0x18015E874
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18013FFC8 (-ComputeVisibleRegion@COcclusionContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
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
  CMILMatrix *TopByReference; // rax
  __int64 v14; // r9
  int v15; // eax
  _BYTE v17[4]; // [rsp+40h] [rbp-79h] BYREF
  int v18; // [rsp+44h] [rbp-75h] BYREF
  __int128 v19; // [rsp+48h] [rbp-71h] BYREF
  __int128 v20; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v21[2]; // [rsp+68h] [rbp-51h] BYREF
  char v22; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v23[16]; // [rsp+90h] [rbp-29h] BYREF
  char v24; // [rsp+A0h] [rbp-19h] BYREF
  char v25; // [rsp+B0h] [rbp-9h] BYREF

  v4 = 0;
  v9 = 0;
  if ( *((_BYTE *)this + 6827) && CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)this + 284, (__int64)a2) )
  {
    v17[0] = 0;
    v18 = 0;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v23,
      16LL,
      4LL,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
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
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, (__int64)&v19, (float *)&v20);
    v15 = COcclusionContext::ComputeVisibleRegion(
            *((_QWORD *)this + 843),
            &v20,
            a3,
            v14,
            (__int64)v17,
            (__int64)v21,
            (__int64)&v18);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x10D9u);
      return v9;
    }
    v4 = v17[0] == 0;
  }
  *a4 = v4;
  return v9;
}
