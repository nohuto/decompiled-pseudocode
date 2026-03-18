/*
 * XREFs of ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x1801A674C
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801A6270 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180029954 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@PEAM@Z @ 0x1800B5998 (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@PEAM@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTileLegacyMilBrush::GetTilePropertyCurrentValues(
        __int64 a1,
        float *a2,
        const struct CMILMatrix **a3,
        const struct CMILMatrix **a4,
        __int64 a5,
        __int64 a6,
        _OWORD *a7,
        _OWORD *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        _DWORD *a13,
        __int64 a14)
{
  int Opacity; // eax
  unsigned int v17; // edi
  const struct CMILMatrix *Matrix; // rax
  const struct CMILMatrix *v19; // rax
  __int64 v20; // rbx
  int v21; // r9d
  __int64 v22; // rbx
  unsigned int v24; // [rsp+20h] [rbp-D1h]
  __int64 v25; // [rsp+80h] [rbp-71h] BYREF
  double v26; // [rsp+88h] [rbp-69h] BYREF
  CTransform3D *v27; // [rsp+90h] [rbp-61h] BYREF
  const struct CMILMatrix **v28; // [rsp+98h] [rbp-59h]
  CTransform3D *v29; // [rsp+A0h] [rbp-51h] BYREF
  const struct CMILMatrix **v30; // [rsp+A8h] [rbp-49h]
  __int64 v31; // [rsp+B0h] [rbp-41h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-39h] BYREF
  _DWORD *v33; // [rsp+C0h] [rbp-31h]
  __int128 v34; // [rsp+C8h] [rbp-29h] BYREF
  __int128 v35; // [rsp+D8h] [rbp-19h] BYREF

  v28 = a3;
  v30 = a4;
  v33 = a13;
  Opacity = (*(__int64 (__fastcall **)(__int64, double *, __int64 *, CTransform3D **, CTransform3D **, __int64, __int64, __int128 *, __int64 *, __int128 *, __int64 *, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 264LL))(
              a1,
              &v26,
              &v25,
              &v27,
              &v29,
              a5,
              a6,
              &v34,
              &v31,
              &v35,
              &v32,
              a9,
              a10,
              a11,
              a12);
  v17 = Opacity;
  if ( Opacity < 0 )
  {
    v24 = 459;
    goto LABEL_21;
  }
  Opacity = CLegacyMilBrush::GetOpacity(v26, v25, a2);
  v17 = Opacity;
  if ( Opacity < 0 )
  {
    v24 = 465;
LABEL_21:
    v21 = Opacity;
    goto LABEL_22;
  }
  if ( v27 )
    Matrix = CTransform3D::GetMatrix(v27, 0LL);
  else
    Matrix = 0LL;
  *v28 = Matrix;
  if ( v29 )
    v19 = CTransform3D::GetMatrix(v29, 0LL);
  else
    v19 = 0LL;
  *v30 = v19;
  v20 = v31;
  *a7 = v34;
  if ( v20 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 117LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x68u);
      v24 = 490;
LABEL_12:
      v17 = -2147024809;
      v21 = -2147024809;
LABEL_22:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, v24);
      return v17;
    }
    *a7 = *(_OWORD *)(v20 + 56);
  }
  v22 = v32;
  *a8 = v35;
  if ( v22 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 48LL))(v22, 117LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x68u);
      v24 = 495;
      goto LABEL_12;
    }
    *a8 = *(_OWORD *)(v22 + 56);
  }
  v17 = 0;
  *v33 = *(_DWORD *)(a1 + 108);
  *(_OWORD *)a14 = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(a14 + 16) = *(_OWORD *)(a1 + 88);
  *(_DWORD *)(a14 + 32) = *(_DWORD *)(a1 + 104);
  return v17;
}
