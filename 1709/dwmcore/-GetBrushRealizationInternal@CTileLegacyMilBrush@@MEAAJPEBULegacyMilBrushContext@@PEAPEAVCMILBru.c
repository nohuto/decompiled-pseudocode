/*
 * XREFs of ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007CF60
 * Callers:
 *     ?GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007CAC0 (-GetBrushRealizationInternal@CImageLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBr.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SetBitmapToXSpaceTransform@CMILBrushBitmap@@QEAAXPEBVCMILMatrix@@W4XSpaceDefinition@@@Z @ 0x180045E64 (-SetBitmapToXSpaceTransform@CMILBrushBitmap@@QEAAXPEBVCMILMatrix@@W4XSpaceDefinition@@@Z.c)
 *     ?SetWrapMode@CMILBrushBitmap@@QEAAJW4Enum@MilBitmapWrapMode@@PEAU_D3DCOLORVALUE@@@Z @ 0x180045EAC (-SetWrapMode@CMILBrushBitmap@@QEAAJW4Enum@MilBitmapWrapMode@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ?SetSourceModifications@CMILBrushBitmap@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBU_D3DCOLORVALUE@@1@Z @ 0x180045EFC (-SetSourceModifications@CMILBrushBitmap@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModification.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x18007B150 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 *     ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x18007CD40 (-GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBru.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180187A0C (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 */

__int64 __fastcall CTileLegacyMilBrush::GetBrushRealizationInternal(
        CTileLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(CTileLegacyMilBrush *, int *); // rax
  signed int v8; // eax
  unsigned int v9; // ebx
  signed int TilePropertyCurrentValues; // eax
  signed int v11; // eax
  int v12; // ecx
  signed int v13; // eax
  signed int v14; // eax
  signed int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  signed int v22; // eax
  signed int IntermediateBaseTile; // eax
  __int64 v25; // [rsp+28h] [rbp-E8h]
  int v26; // [rsp+90h] [rbp-80h] BYREF
  int v27; // [rsp+94h] [rbp-7Ch] BYREF
  int v28; // [rsp+98h] [rbp-78h] BYREF
  int v29; // [rsp+9Ch] [rbp-74h] BYREF
  int v30; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-68h] BYREF
  float v32; // [rsp+B0h] [rbp-60h] BYREF
  float v33; // [rsp+B4h] [rbp-5Ch] BYREF
  int v34; // [rsp+B8h] [rbp-58h] BYREF
  int v35; // [rsp+BCh] [rbp-54h] BYREF
  int v36; // [rsp+C0h] [rbp-50h] BYREF
  int v37; // [rsp+C4h] [rbp-4Ch] BYREF
  int v38; // [rsp+C8h] [rbp-48h] BYREF
  int v39; // [rsp+CCh] [rbp-44h] BYREF
  int v40; // [rsp+D0h] [rbp-40h] BYREF
  int v41[2]; // [rsp+D8h] [rbp-38h] BYREF
  int v42[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-28h] BYREF
  __int128 v44; // [rsp+F8h] [rbp-18h] BYREF
  char v45; // [rsp+108h] [rbp-8h]
  __int64 v46[8]; // [rsp+110h] [rbp+0h] BYREF
  int v47; // [rsp+150h] [rbp+40h]
  __int64 v48[8]; // [rsp+160h] [rbp+50h] BYREF
  int v49; // [rsp+1A0h] [rbp+90h]
  _BYTE v50[64]; // [rsp+1B0h] [rbp+A0h] BYREF
  int v51; // [rsp+1F0h] [rbp+E0h]
  _BYTE v52[64]; // [rsp+200h] [rbp+F0h] BYREF
  int v53; // [rsp+240h] [rbp+130h]
  __int128 v54; // [rsp+250h] [rbp+140h] BYREF
  __int128 v55; // [rsp+260h] [rbp+150h] BYREF
  __int128 v56; // [rsp+270h] [rbp+160h] BYREF
  __int64 v57[2]; // [rsp+280h] [rbp+170h] BYREF

  v54 = 0uLL;
  *(_QWORD *)&v43 = 0x3F8000003F800000LL;
  *((_QWORD *)&v43 + 1) = 0x3F8000003F800000LL;
  v6 = *(_QWORD *)this;
  *(_QWORD *)v42 = 0LL;
  *(_QWORD *)v41 = 0LL;
  v44 = 0uLL;
  v7 = *(__int64 (__fastcall **)(CTileLegacyMilBrush *, int *))(v6 + 216);
  v45 = 0;
  v53 = 0;
  v49 = 0;
  v47 = 0;
  v51 = 0;
  v31 = 0LL;
  v26 = 0;
  v28 = 0;
  v8 = v7(this, &v28);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x7Fu);
    goto LABEL_24;
  }
  if ( !v28 )
    goto LABEL_27;
  TilePropertyCurrentValues = CTileLegacyMilBrush::GetTilePropertyCurrentValues(
                                (__int64)this,
                                (__int64)&v40,
                                v42,
                                v41,
                                (__int64)&v34,
                                (__int64)&v29,
                                &v55,
                                &v56,
                                (__int64)&v37,
                                (__int64)&v27,
                                (__int64)&v36,
                                (__int64)&v35,
                                &v39,
                                (__int64)&v43);
  v9 = TilePropertyCurrentValues;
  if ( TilePropertyCurrentValues < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, TilePropertyCurrentValues, 0x95u);
    goto LABEL_24;
  }
  v11 = (*(__int64 (__fastcall **)(CTileLegacyMilBrush *, float *, float *))(*(_QWORD *)this + 224LL))(this, &v33, &v32);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x9Au);
    goto LABEL_24;
  }
  v12 = v29;
  if ( v29 != 1 )
    goto LABEL_9;
  v13 = (*(__int64 (__fastcall **)(CTileLegacyMilBrush *, const struct LegacyMilBrushContext *, __int128 *))(*(_QWORD *)this + 232LL))(
          this,
          a2,
          &v54);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xA4u);
    goto LABEL_24;
  }
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v54) )
  {
LABEL_27:
    v26 = 1;
    goto LABEL_26;
  }
  v12 = v29;
  *(_OWORD *)v57 = v54;
LABEL_9:
  CTileBrushUtils::CalculateTileBrushMapping(
    *(__int64 *)v42,
    *(__int64 *)v41,
    v37,
    v36,
    v35,
    v34,
    v12,
    (__int64)a2 + 144,
    (__int64)v57,
    v33,
    v32,
    (__int64)&v55,
    (__int64)&v56,
    (__int64)v48,
    (__int64)v46,
    (struct CMILMatrix *)v52,
    &v26);
  if ( v26 )
    goto LABEL_26;
  v14 = (*(__int64 (__fastcall **)(CTileLegacyMilBrush *, const struct LegacyMilBrushContext *, __int64 *, __int64 *, __int128 *, int, int *, int *))(*(_QWORD *)this + 240LL))(
          this,
          a2,
          v48,
          v46,
          &v55,
          v27,
          &v38,
          &v26);
  v9 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xD7u);
    goto LABEL_24;
  }
  if ( v26 )
    goto LABEL_26;
  if ( v38 )
  {
    LODWORD(v25) = v27;
    IntermediateBaseTile = CTileBrushUtils::GetIntermediateBaseTile(
                             (_DWORD)this,
                             (_DWORD)a2,
                             (unsigned int)v48,
                             (unsigned int)v46,
                             (__int64)&v55,
                             v25,
                             (__int64)&v31,
                             (__int64)v50,
                             (__int64)&v26,
                             (__int64)&v30);
    v9 = IntermediateBaseTile;
    if ( IntermediateBaseTile < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, IntermediateBaseTile, 0xEDu);
      goto LABEL_24;
    }
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(CTileLegacyMilBrush *, const struct LegacyMilBrushContext *, char *, __int64 *, __int64 *, __int128 *, int, __int64 *, _BYTE *, int *, int *))(*(_QWORD *)this + 256LL))(
            this,
            a2,
            (char *)a2 + 4,
            v48,
            v46,
            &v55,
            v27,
            &v31,
            v50,
            &v26,
            &v30);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x101u);
      goto LABEL_24;
    }
  }
  if ( v26 )
  {
LABEL_26:
    *a3 = 0LL;
    goto LABEL_25;
  }
  v16 = v31;
  v17 = *((_QWORD *)this + 38);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  *((_QWORD *)this + 38) = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v18 = v30;
  v19 = *((_DWORD *)this + 56) + 1;
  if ( *((_DWORD *)this + 56) == -1 )
    v19 = 1;
  *((_DWORD *)this + 56) = v19;
  CMILBrushBitmap::SetBitmapToXSpaceTransform((__int64)this + 112, (__int64)v50, v18);
  v21 = CMILBrushBitmap::SetWrapMode(v20, 0);
  v9 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x11Cu);
  }
  else
  {
    v22 = CMILBrushBitmap::SetSourceModifications((__int64)this + 112, v39, &v43, &v44);
    v9 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x120u);
    }
    else
    {
      *((_DWORD *)this + 93) = v40;
      *a3 = (struct CMILBrush *)(((unsigned __int64)this + 136) & -(__int64)((CTileLegacyMilBrush *)((char *)this + 112) != 0LL));
    }
  }
LABEL_24:
  if ( v26 )
    goto LABEL_26;
LABEL_25:
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v31);
  return v9;
}
