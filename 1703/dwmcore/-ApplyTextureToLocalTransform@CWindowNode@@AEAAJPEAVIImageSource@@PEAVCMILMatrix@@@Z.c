/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001E2BC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180011CDC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::ApplyTextureToLocalTransform(
        CWindowNode *this,
        struct IImageSource *a2,
        struct CMILMatrix *a3)
{
  int v6; // esi
  void (__fastcall *v7)(struct IImageSource *, _OWORD *, _DWORD *); // rax
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v13; // rcx
  int v14; // eax
  float v15; // xmm5_4
  float v16; // xmm0_4
  int v17; // eax
  int v18; // eax
  int v19; // r8d
  _OWORD v20[4]; // [rsp+20h] [rbp-89h] BYREF
  int v21; // [rsp+60h] [rbp-49h]
  _OWORD v22[4]; // [rsp+70h] [rbp-39h] BYREF
  __int16 v23; // [rsp+B0h] [rbp+7h]
  float v24; // [rsp+C0h] [rbp+17h] BYREF
  float v25; // [rsp+C4h] [rbp+1Bh]
  float v26; // [rsp+C8h] [rbp+1Fh]
  float v27; // [rsp+CCh] [rbp+23h]
  _DWORD v28[4]; // [rsp+D0h] [rbp+27h] BYREF

  v6 = 0;
  v7 = *(void (__fastcall **)(struct IImageSource *, _OWORD *, _DWORD *))(*(_QWORD *)a2 + 56LL);
  v21 = 0;
  v7(a2, v20, v28);
  CMILMatrix::Translate((CMILMatrix *)v20, COERCE_FLOAT(v28[0] ^ _xmm), COERCE_FLOAT(v28[1] ^ _xmm));
  v8 = v20[1];
  v9 = v21;
  *(_OWORD *)a3 = v20[0];
  v10 = v20[2];
  *((_OWORD *)a3 + 1) = v8;
  v11 = v20[3];
  *((_OWORD *)a3 + 2) = v10;
  *((_OWORD *)a3 + 3) = v11;
  *((_DWORD *)a3 + 16) = v9;
  CMILMatrix::Transform2DBoundsHelper<0>(a3, v28, &v24);
  if ( a2 == (struct IImageSource *)((*((_QWORD *)this + 115) + 64LL) & -(__int64)(*((_QWORD *)this + 115) != 0LL)) )
  {
    CMILMatrix::Translate(
      a3,
      (float)(*((_DWORD *)this + 159) - *((_DWORD *)this + 163)),
      (float)(*((_DWORD *)this + 160) - *((_DWORD *)this + 164)));
    v13 = *(_QWORD *)(*((_QWORD *)this + 115) + 472LL);
    if ( !v13 || *(_DWORD *)(v13 + 136) == 1 )
    {
      if ( *((_BYTE *)this + 992) )
        CMILMatrix::Translate(
          a3,
          (float)((float)(*((_DWORD *)this + 161) - *((_DWORD *)this + 163))
                - (float)(*((_DWORD *)this + 159) - *((_DWORD *)this + 163)))
        - (float)(v26 - v24),
          0.0);
    }
    else
    {
      v14 = 0;
      v15 = v26 - v24;
      if ( *((_DWORD *)this + 161) - *((_DWORD *)this + 159) >= 0 )
        v14 = *((_DWORD *)this + 161) - *((_DWORD *)this + 159);
      v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v14 - v15)) & _xmm);
      if ( v16 > 0.00390625 )
        goto LABEL_12;
      v17 = 0;
      if ( *((_DWORD *)this + 162) - *((_DWORD *)this + 160) >= 0 )
        v17 = *((_DWORD *)this + 162) - *((_DWORD *)this + 160);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v17 - (float)(v27 - v25))) & _xmm) > 0.00390625 )
      {
LABEL_12:
        if ( v15 > 0.0 && (float)(v27 - v25) > 0.0 )
        {
          v18 = 0;
          v19 = *((_DWORD *)this + 161) - *((_DWORD *)this + 159);
          if ( *((_DWORD *)this + 162) - *((_DWORD *)this + 160) >= 0 )
            v18 = *((_DWORD *)this + 162) - *((_DWORD *)this + 160);
          v23 = 32085;
          v22[1] = _xmm;
          v22[2] = _xmm;
          if ( v19 >= 0 )
            v6 = v19;
          v22[3] = _xmm;
          v22[0] = _xmm;
          CMILMatrix::Scale((CMILMatrix *)v22, (float)v6 / v15, (float)v18 / (float)(v27 - v25), 1.0);
          CMILMatrix::Multiply((const struct CMILMatrix *)v22, a3, a3);
        }
      }
    }
  }
  return 0LL;
}
