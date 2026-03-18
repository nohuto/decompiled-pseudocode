/*
 * XREFs of ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18009A3E0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180059708 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005AFD8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007B590 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  float v16; // xmm6_4
  float v17; // xmm0_4
  int v18; // eax
  _OWORD v19[4]; // [rsp+28h] [rbp-99h] BYREF
  int v20; // [rsp+68h] [rbp-59h]
  _OWORD v21[4]; // [rsp+78h] [rbp-49h] BYREF
  __int16 v22; // [rsp+B8h] [rbp-9h]
  float v23; // [rsp+C8h] [rbp+7h] BYREF
  float v24; // [rsp+CCh] [rbp+Bh]
  float v25; // [rsp+D0h] [rbp+Fh]
  float v26; // [rsp+D4h] [rbp+13h]
  _DWORD v27[4]; // [rsp+D8h] [rbp+17h] BYREF

  v6 = 0;
  v7 = *(void (__fastcall **)(struct IImageSource *, _OWORD *, _DWORD *))(*(_QWORD *)a2 + 64LL);
  v20 = 0;
  v7(a2, v19, v27);
  CMILMatrix::Translate((CMILMatrix *)v19, COERCE_FLOAT(v27[0] ^ _xmm), COERCE_FLOAT(v27[1] ^ _xmm));
  v8 = v19[1];
  v9 = v20;
  *(_OWORD *)a3 = v19[0];
  v10 = v19[2];
  *((_OWORD *)a3 + 1) = v8;
  v11 = v19[3];
  *((_OWORD *)a3 + 2) = v10;
  *((_OWORD *)a3 + 3) = v11;
  *((_DWORD *)a3 + 16) = v9;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)a3, (__int64)v27, &v23);
  if ( a2 == (struct IImageSource *)((*((_QWORD *)this + 118) + 64LL) & -(__int64)(*((_QWORD *)this + 118) != 0LL)) )
  {
    CMILMatrix::Translate(
      a3,
      (float)(*((_DWORD *)this + 166) - *((_DWORD *)this + 170)),
      (float)(*((_DWORD *)this + 167) - *((_DWORD *)this + 171)));
    v13 = *(_QWORD *)(*((_QWORD *)this + 118) + 96LL);
    if ( !v13 || *(_DWORD *)(v13 + 168) == 1 )
    {
      if ( *((_BYTE *)this + 1016) )
        CMILMatrix::Translate(
          a3,
          (float)((float)(*((_DWORD *)this + 168) - *((_DWORD *)this + 170))
                - (float)(*((_DWORD *)this + 166) - *((_DWORD *)this + 170)))
        - (float)(v25 - v23),
          0.0);
    }
    else
    {
      v14 = 0;
      v15 = v25 - v23;
      if ( *((_DWORD *)this + 168) - *((_DWORD *)this + 166) >= 0 )
        v14 = *((_DWORD *)this + 168) - *((_DWORD *)this + 166);
      v16 = (float)v14;
      v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v14 - v15)) & _xmm);
      if ( v17 > 0.00390625 )
        goto LABEL_12;
      v18 = 0;
      if ( *((_DWORD *)this + 169) - *((_DWORD *)this + 167) >= 0 )
        v18 = *((_DWORD *)this + 169) - *((_DWORD *)this + 167);
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)v18 - (float)(v26 - v24))) & _xmm) > 0.00390625 )
      {
LABEL_12:
        if ( v15 > 0.0 && (float)(v26 - v24) > 0.0 )
        {
          if ( *((_DWORD *)this + 169) - *((_DWORD *)this + 167) >= 0 )
            v6 = *((_DWORD *)this + 169) - *((_DWORD *)this + 167);
          v21[2] = _xmm;
          v22 = 32085;
          v21[1] = _xmm;
          v21[3] = _xmm;
          v21[0] = _xmm;
          CMILMatrix::Scale((CMILMatrix *)v21, v16 / v15, (float)v6 / (float)(v26 - v24), 1.0);
          CMILMatrix::Multiply((const struct CMILMatrix *)v21, a3, a3);
        }
      }
    }
  }
  return 0LL;
}
