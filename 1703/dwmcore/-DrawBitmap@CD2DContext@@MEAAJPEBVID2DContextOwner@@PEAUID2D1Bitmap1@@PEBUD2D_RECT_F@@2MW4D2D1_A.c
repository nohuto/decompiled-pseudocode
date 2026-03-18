/*
 * XREFs of ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800ADA10
 * Callers:
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x1800A7BDC (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800A0CE0 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800ACD0C (-DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     Template_ffff @ 0x18016637C (Template_ffff.c)
 */

__int64 __fastcall CD2DContext::DrawBitmap(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_RECT_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  void (__fastcall *v13)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  unsigned int v15; // eax
  __int64 v16; // rcx
  struct D2D_RECT_F v17; // xmm0
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // eax
  __int64 v22; // rcx
  struct D2D_RECT_F v23; // [rsp+50h] [rbp-81h] BYREF
  __int64 v24; // [rsp+60h] [rbp-71h] BYREF
  int v25; // [rsp+68h] [rbp-69h]
  int v26; // [rsp+6Ch] [rbp-65h]
  __int64 v27; // [rsp+70h] [rbp-61h]
  __int64 v28; // [rsp+78h] [rbp-59h]
  __int64 v29; // [rsp+80h] [rbp-51h]
  int v30; // [rsp+88h] [rbp-49h]
  int v31; // [rsp+8Ch] [rbp-45h]
  __int64 v32; // [rsp+90h] [rbp-41h]
  int v33; // [rsp+98h] [rbp-39h]
  __int64 v34; // [rsp+9Ch] [rbp-35h]
  struct D2D_MATRIX_3X2_F v35; // [rsp+B0h] [rbp-21h] BYREF

  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    Template_qq(v16, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14LL, v15);
  }
  v13 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)a2 + 16LL);
  if ( v13 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(a2, &v35);
  else
    v13(a2, &v35);
  (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 22) + 240LL))(
    *((_QWORD *)this + 22),
    &v35);
  if ( a9 != *((_DWORD *)this + 101) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 624LL))(
      *((_QWORD *)this + 22),
      (unsigned int)a9);
    *((_DWORD *)this + 101) = a9;
  }
  if ( a7 != *((_DWORD *)this + 100) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 256LL))(
      *((_QWORD *)this + 22),
      (unsigned int)a7);
    *((_DWORD *)this + 100) = a7;
  }
  if ( a5 )
  {
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      v25 = 0;
      v26 = 0;
      v31 = 0;
      v33 = 0;
      v24 = *(_QWORD *)&v35.m11;
      v17 = *a5;
      v28 = 0LL;
      v27 = *(_QWORD *)&v35.m[1][0];
      v29 = 0LL;
      v23 = v17;
      v34 = 1065353216LL;
      v32 = *(_QWORD *)&v35.m[2][0];
      v30 = 1065353216;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v24, (__int64)&v23, &v35.m11);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_ffff(
          v18,
          (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
          v19,
          v20,
          SLOBYTE(v35.m[1][0]),
          SLOBYTE(v35.m[1][1]));
    }
  }
  CD2DContext::DrawBitmapAsCommandList(this, a2, a3, a4, a5, a6, a7, a8);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v21 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 32LL))(a2);
    Template_qq(v22, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14LL, v21);
  }
  return 0LL;
}
