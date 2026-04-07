/*
 * XREFs of ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x18009EA50
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180038AF0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18007FDC0 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18003B27C (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  CBaseObject *v10; // rsi
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  CBaseObject *v14; // rdi
  int v15; // eax
  struct CRenderDataInstruction *v17; // [rsp+40h] [rbp-58h] BYREF
  CBaseObject *v18; // [rsp+48h] [rbp-50h] BYREF
  float v19; // [rsp+50h] [rbp-48h]
  float v20; // [rsp+54h] [rbp-44h]

  v4 = *((_QWORD *)this + 2);
  v17 = 0LL;
  v8 = CResource::Create(0x21u, *(_QWORD *)(v4 + 16), &v18);
  v10 = v18;
  v11 = v8;
  if ( v8 >= 0 )
  {
    v20 = a4;
    *(float *)&v18 = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
    *((float *)&v18 + 1) = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
    v19 = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, CBaseObject **, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v10 + 2) + 1176LL))(
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xFDu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xFCu);
      }
      if ( v14 )
        CBaseObject::Release(v14);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xFAu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xECu);
  }
  if ( v10 )
    CBaseObject::Release(v10);
  return v11;
}
