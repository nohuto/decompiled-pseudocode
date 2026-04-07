/*
 * XREFs of ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x18009CAF0
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000FDA4 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800780FC (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x180012C50 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::AddSolidBrushInstruction(
        CThumbnailAnimatedVisual *this,
        struct CResource *a2,
        int a3,
        float a4)
{
  __int64 v4; // rax
  int v8; // eax
  __int64 v9; // r8
  struct CResource *v10; // rsi
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  CBaseObject *v14; // rdi
  int v15; // eax
  struct CRenderDataInstruction *v17; // [rsp+40h] [rbp-58h] BYREF
  struct CResource *v18; // [rsp+48h] [rbp-50h] BYREF
  float v19; // [rsp+50h] [rbp-48h]
  float v20; // [rsp+54h] [rbp-44h]

  v4 = *((_QWORD *)this + 2);
  v17 = 0LL;
  v8 = CResource::Create(0x22u, *(_QWORD *)(v4 + 16), &v18);
  v10 = v18;
  v11 = v8;
  if ( v8 >= 0 )
  {
    v20 = a4;
    *(float *)&v18 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
    *((float *)&v18 + 1) = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
    v19 = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct CResource **, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v10 + 2) + 1176LL))(
            *((_QWORD *)v10 + 2),
            *((unsigned int *)v10 + 6),
            v9,
            &v18,
            0,
            0,
            0);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = CDrawGeometryInstruction::Create(v10, a2, &v17);
      v14 = v17;
      v11 = v13;
      if ( v13 >= 0 )
      {
        v15 = CRenderDataVisual::AddInstruction(this, v17);
        v11 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xFDu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xFCu);
      }
      if ( v14 )
        CBaseObject::Release(v14);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xFAu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xECu);
  }
  if ( v10 )
    CBaseObject::Release(v10);
  return v11;
}
