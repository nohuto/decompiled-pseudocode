/*
 * XREFs of ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x18007C8D8
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18007C430 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18002B258 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacity@CLegacyMilBrush@@KAJNPEAV?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@PEAM@Z @ 0x18007D3BC (-GetOpacity@CLegacyMilBrush@@KAJNPEAV-$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0DC@@@PEAM@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTileLegacyMilBrush::GetTilePropertyCurrentValues(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4,
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
  __int64 v18; // rcx
  unsigned int v19; // edi
  __int64 v20; // rbx
  _OWORD *v21; // r15
  __int64 v22; // rbx
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-D1h]
  __int64 v27; // [rsp+88h] [rbp-69h] BYREF
  __int64 v28; // [rsp+90h] [rbp-61h] BYREF
  CTransform3D *v29; // [rsp+98h] [rbp-59h] BYREF
  CTransform3D *v30; // [rsp+A0h] [rbp-51h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-49h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-41h] BYREF
  _OWORD *v33; // [rsp+B8h] [rbp-39h]
  _DWORD *v34; // [rsp+C0h] [rbp-31h]
  __int128 v35; // [rsp+C8h] [rbp-29h] BYREF
  __int128 v36; // [rsp+D8h] [rbp-19h] BYREF

  v33 = a8;
  v34 = a13;
  Opacity = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, CTransform3D **, CTransform3D **, __int64, __int64, __int128 *, __int64 *, __int128 *, __int64 *, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 248LL))(
              a1,
              &v28,
              &v27,
              &v29,
              &v30,
              a5,
              a6,
              &v35,
              &v31,
              &v36,
              &v32,
              a9,
              a10,
              a11,
              a12);
  v19 = Opacity;
  if ( Opacity < 0 )
  {
    v25 = 459;
    goto LABEL_22;
  }
  Opacity = CLegacyMilBrush::GetOpacity(v18, v27, a2);
  v19 = Opacity;
  if ( Opacity < 0 )
  {
    v25 = 465;
LABEL_22:
    v24 = Opacity;
    goto LABEL_23;
  }
  if ( v29 )
    *a3 = CTransform3D::GetMatrix(v29, 0LL);
  else
    *a3 = 0LL;
  if ( v30 )
    *a4 = CTransform3D::GetMatrix(v30, 0LL);
  else
    *a4 = 0LL;
  v20 = v31;
  *a7 = v35;
  if ( v20 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 54LL) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
      v25 = 490;
LABEL_19:
      v19 = -2147024809;
      v24 = -2147024809;
LABEL_23:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, v25);
      return v19;
    }
    *a7 = *(_OWORD *)(v20 + 56);
  }
  v21 = v33;
  v19 = 0;
  v22 = v32;
  *v33 = v36;
  if ( v22 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 48LL))(v22, 54LL) )
    {
      *v21 = *(_OWORD *)(v22 + 56);
      goto LABEL_9;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x32u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x68u);
    v25 = 495;
    goto LABEL_19;
  }
LABEL_9:
  *v34 = *(_DWORD *)(a1 + 108);
  *(_OWORD *)a14 = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(a14 + 16) = *(_OWORD *)(a1 + 88);
  *(_DWORD *)(a14 + 32) = *(_DWORD *)(a1 + 104);
  return v19;
}
