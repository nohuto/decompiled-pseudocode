/*
 * XREFs of ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800DA104
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800C3EDC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  CMILCOMBase *v23; // [rsp+108h] [rbp+77h] BYREF

  v22 = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 45))(
         *((_QWORD *)this + 45),
         &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
         &v22);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1EF9u);
  }
  else
  {
    v4 = *((_DWORD *)this + 1660) - 1;
    for ( i = v4; i >= 0; *(_QWORD *)(*((_QWORD *)this + 827) + 8 * i--) = 0LL )
    {
      LODWORD(v17) = 1;
      v23 = *(CMILCOMBase **)(*((_QWORD *)this + 827) + 8 * i);
      *((_QWORD *)&v19 + 1) = *((_QWORD *)v23 + 6);
      *((_QWORD *)&v17 + 1) = *((_QWORD *)v23 + 7);
      v7 = *((float *)v23 + 6) + 6291456.25;
      LODWORD(v19) = (int)(LODWORD(v7) << 10) >> 11;
      v8 = *((float *)v23 + 7) + 6291456.25;
      DWORD1(v19) = (int)(LODWORD(v8) << 10) >> 11;
      v9 = *((float *)v23 + 8) + 6291456.25;
      LODWORD(v18) = (int)(LODWORD(v9) << 10) >> 11;
      v10 = *((float *)v23 + 9) + 6291456.25;
      DWORD1(v18) = (int)(LODWORD(v10) << 10) >> 11;
      v11 = *((float *)v23 + 10) + 6291456.25;
      DWORD2(v18) = (int)(LODWORD(v11) << 10) >> 11;
      v12 = *((float *)v23 + 11) + 6291456.25;
      HIDWORD(v18) = (int)(LODWORD(v12) << 10) >> 11;
      v13 = *v22;
      v20[0] = v17;
      v14 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v13 + 280);
      v20[1] = v18;
      v21 = 0LL;
      v20[2] = v19;
      v15 = v14(v22, v20);
      v16 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1F13u);
      if ( !v3 || v3 >= 0 && v16 < 0 )
        v3 = v16;
      ReleaseInterface<CCompositionSurfaceInfo>(&v23);
    }
  }
  *((_DWORD *)this + 1660) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6616, 8u);
  *((_DWORD *)this + 1674) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6672, 8u);
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v22);
  return (unsigned int)v3;
}
