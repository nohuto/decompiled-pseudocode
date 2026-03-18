/*
 * XREFs of ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x18013E498
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800BBE58 (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushWindowMetaDataToRenderTarget(CDrawingContext *this)
{
  signed int v2; // eax
  int v3; // ebx
  int v4; // ecx
  __int64 i; // rsi
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64 *, _OWORD *); // rax
  signed int v14; // eax
  int v15; // r14d
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x1DF6u);
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
      v6 = *((float *)v23 + 6) + 6291456.25;
      LODWORD(v19) = (int)(LODWORD(v6) << 10) >> 11;
      v7 = *((float *)v23 + 7) + 6291456.25;
      DWORD1(v19) = (int)(LODWORD(v7) << 10) >> 11;
      v8 = *((float *)v23 + 8) + 6291456.25;
      LODWORD(v18) = (int)(LODWORD(v8) << 10) >> 11;
      v9 = *((float *)v23 + 9) + 6291456.25;
      DWORD1(v18) = (int)(LODWORD(v9) << 10) >> 11;
      v10 = *((float *)v23 + 10) + 6291456.25;
      DWORD2(v18) = (int)(LODWORD(v10) << 10) >> 11;
      v11 = *((float *)v23 + 11) + 6291456.25;
      HIDWORD(v18) = (int)(LODWORD(v11) << 10) >> 11;
      v12 = *v22;
      v20[0] = v17;
      v13 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v12 + 232);
      v20[1] = v18;
      v21 = 0LL;
      v20[2] = v19;
      v14 = v13(v22, v20);
      v15 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x1E10u);
      if ( !v3 || v3 >= 0 && v15 < 0 )
        v3 = v15;
      ReleaseInterface<CCompositionSurfaceInfo>(&v23);
    }
  }
  *((_DWORD *)this + 1660) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6616, 8u);
  *((_DWORD *)this + 1674) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 6672, 8u);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v22);
  return (unsigned int)v3;
}
