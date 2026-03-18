/*
 * XREFs of ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800A60A4
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x1800D45E0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C45E8 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushWindowMetaDataToRenderTarget(CDrawingContext *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // ecx
  __int64 i; // rsi
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64 *, _OWORD *); // rax
  int v15; // eax
  int v16; // r14d
  __int128 v17; // [rsp+38h] [rbp-59h]
  __int128 v18; // [rsp+48h] [rbp-49h]
  __int128 v19; // [rsp+58h] [rbp-39h]
  _OWORD v20[3]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+17h]
  __int64 *v22; // [rsp+100h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+108h] [rbp+77h] BYREF

  v22 = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 46))(
         *((_QWORD *)this + 46),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v22);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2046u);
  }
  else
  {
    v4 = *((_DWORD *)this + 1644) - 1;
    for ( i = v4; i >= 0; *(_QWORD *)(*((_QWORD *)this + 819) + 8 * i--) = 0LL )
    {
      LODWORD(v17) = 1;
      v23 = *(_QWORD *)(*((_QWORD *)this + 819) + 8 * i);
      *((_QWORD *)&v19 + 1) = *(_QWORD *)(v23 + 48);
      *((_QWORD *)&v17 + 1) = *(_QWORD *)(v23 + 56);
      v7 = *(float *)(v23 + 24) + 6291456.25;
      LODWORD(v19) = (int)(LODWORD(v7) << 10) >> 11;
      v8 = *(float *)(v23 + 28) + 6291456.25;
      DWORD1(v19) = (int)(LODWORD(v8) << 10) >> 11;
      v9 = *(float *)(v23 + 32) + 6291456.25;
      LODWORD(v18) = (int)(LODWORD(v9) << 10) >> 11;
      v10 = *(float *)(v23 + 36) + 6291456.25;
      DWORD1(v18) = (int)(LODWORD(v10) << 10) >> 11;
      v11 = *(float *)(v23 + 40) + 6291456.25;
      DWORD2(v18) = (int)(LODWORD(v11) << 10) >> 11;
      v12 = *(float *)(v23 + 44) + 6291456.25;
      HIDWORD(v18) = (int)(LODWORD(v12) << 10) >> 11;
      v13 = *v22;
      v20[0] = v17;
      v14 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v13 + 224);
      v20[1] = v18;
      v21 = 0LL;
      v20[2] = v19;
      v15 = v14(v22, v20);
      v16 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2060u);
      if ( !v3 || v3 >= 0 && v16 < 0 )
        v3 = v16;
      ReleaseInterface<CCompositionSurfaceInfo>(&v23);
    }
  }
  *((_DWORD *)this + 1644) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6552, 8u);
  *((_DWORD *)this + 1658) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6608, 8u);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v22);
  return (unsigned int)v3;
}
