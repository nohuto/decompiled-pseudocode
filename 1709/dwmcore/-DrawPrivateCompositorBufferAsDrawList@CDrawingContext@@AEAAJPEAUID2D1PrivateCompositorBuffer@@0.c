/*
 * XREFs of ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EDB8
 * Callers:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EEF0 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18003E988 (-EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV?$span@PEAVIImageSource@@@gsl@@2AEBV?$span@PEAVCPrimitiveColor@@@4@PEAPEAV1@@Z @ 0x180046718 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1AEBV-$span@PEA.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180046EB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800B2B14 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawPrivateCompositorBufferAsDrawList(
        struct CDrawingContext *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        float a7,
        int a8,
        bool a9)
{
  __int64 v9; // rax
  struct CDrawListCache *v11; // rbx
  int v12; // eax
  CPrimitiveGroupDrawListGenerator *v13; // rdi
  unsigned int v14; // esi
  int v15; // eax
  int v16; // eax
  const struct D2D_MATRIX_3X2_F *v17; // r8
  int DrawList; // eax
  int v19; // eax
  __int64 (__fastcall *v20)(CMILRefCountBase *); // rax
  __int64 (__fastcall *v21)(CMILRefCountBase *); // rax
  CMILRefCountBase *v23; // [rsp+40h] [rbp-18h] BYREF
  struct CDrawListCache *v24; // [rsp+60h] [rbp+8h] BYREF

  v9 = *((_QWORD *)a1 + 4);
  v23 = 0LL;
  v11 = 0LL;
  v24 = 0LL;
  v12 = CPrimitiveGroupDrawListGenerator::Create(*(_QWORD *)(v9 + 360), a2, a3, a4, a5, a6, &v23);
  v13 = v23;
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x86Eu);
    goto LABEL_7;
  }
  v15 = CDrawListCache::Create(&v24);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x870u);
    goto LABEL_19;
  }
  v16 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(v13, a1, a9);
  v14 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x871u);
LABEL_19:
    v11 = v24;
    goto LABEL_7;
  }
  v11 = v24;
  DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(v13, a1, v17, v24);
  v14 = DrawList;
  if ( DrawList < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x872u);
  }
  else
  {
    v19 = CDrawingContext::EmitDrawListCache((__int64)a1, (__int64)v11, a7);
    v14 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x873u);
  }
LABEL_7:
  if ( v11 )
  {
    v20 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v11 + 8LL);
    if ( v20 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v11);
    else
      v20(v11);
  }
  if ( v13 )
  {
    v21 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v13 + 8LL);
    if ( v21 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v13);
    else
      v21(v13);
  }
  return v14;
}
