/*
 * XREFs of ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D124
 * Callers:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D274 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 * Callees:
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180040EA4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18006CFF0 (-EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18006FEF4 (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x180072BEC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18009B8F0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawPrivateCompositorBufferAsDrawList(
        struct CDrawingContext *a1,
        CD2DSharedBuffer *this,
        CD2DSharedBuffer *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        float a7,
        int a8,
        bool a9)
{
  struct CDrawListCache *v10; // rdi
  int v11; // eax
  CMILRefCountBase *v12; // rbx
  unsigned int v13; // esi
  int v14; // eax
  int v15; // eax
  const struct D2D_MATRIX_3X2_F *v16; // r8
  int DrawList; // eax
  int v18; // eax
  void *(__fastcall *v19)(CDrawListCache *__hidden, unsigned int); // rax
  __int64 (__fastcall *v20)(CMILRefCountBase *); // rax
  struct CDrawListCache *v22; // [rsp+38h] [rbp-18h] BYREF
  CMILRefCountBase *v23; // [rsp+40h] [rbp-10h] BYREF

  v23 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v11 = CPrimitiveGroupDrawListGenerator::Create(this, a3, a6, (__int64)&v23);
  v12 = v23;
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x7F6u);
    goto LABEL_7;
  }
  v14 = CDrawListCache::Create(&v22);
  v13 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x7F8u);
    goto LABEL_21;
  }
  v15 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(v12, a1, a9);
  v13 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x7F9u);
LABEL_21:
    v10 = v22;
    goto LABEL_7;
  }
  v10 = v22;
  DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(v12, a1, v16, v22);
  v13 = DrawList;
  if ( DrawList < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x7FAu);
  }
  else
  {
    v18 = CDrawingContext::EmitDrawListCache((__int64)a1, (__int64)v10, a7);
    v13 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x7FBu);
  }
LABEL_7:
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
    {
      v19 = *(void *(__fastcall **)(CDrawListCache *__hidden, unsigned int))(*(_QWORD *)v22 + 16LL);
      if ( v19 == CDrawListCache::`scalar deleting destructor' )
        CDrawListCache::`scalar deleting destructor'(v22, 1u);
      else
        v19(v22, 1u);
    }
    v12 = v23;
  }
  if ( v12 )
  {
    v20 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v12 + 8LL);
    if ( v20 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v12);
    else
      v20(v12);
  }
  return v13;
}
