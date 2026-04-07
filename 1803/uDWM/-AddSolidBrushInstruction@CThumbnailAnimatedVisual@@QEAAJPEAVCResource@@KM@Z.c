/*
 * XREFs of ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x1800A5030
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012CFC (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x18008150C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000FFF4 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
  struct CResource *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  struct CRenderDataInstruction *v14; // [rsp+40h] [rbp-19h] BYREF
  struct CResource *v15; // [rsp+48h] [rbp-11h] BYREF
  float v16[4]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = *((_QWORD *)this + 2);
  v14 = 0LL;
  v15 = 0LL;
  v8 = CResource::Create(0x22u, *(_QWORD *)(v4 + 16), &v15);
  v10 = v15;
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = 236LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"windows\\dwm\\udwm\\thumbnailtransition.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v16[3] = a4;
  v16[0] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v16[1] = GammaLUT_sRGB_to_scRGB[BYTE1(a3)] / 255.0;
  v16[2] = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, float *, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v15 + 2)
                                                                                           + 1192LL))(
         *((_QWORD *)v15 + 2),
         *((unsigned int *)v15 + 6),
         v9,
         v16,
         0,
         0,
         0);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = 250LL;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  v8 = CDrawGeometryInstruction::Create(v10, a2, &v14);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = 252LL;
    goto LABEL_9;
  }
  v8 = CRenderDataVisual::AddInstruction(this, v14);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = 253LL;
    goto LABEL_9;
  }
  v11 = 0;
LABEL_11:
  if ( v10 )
    CBaseObject::Release(v10);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v14);
  return v11;
}
