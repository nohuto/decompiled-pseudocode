/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x1801E5210
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x1801E5174 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::IntersectGeometryWithSafeBounds(
        CSwRenderTargetGetBounds *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  int DefaultD2DContext; // eax
  struct ID2DContext *v10; // rdi
  unsigned int v11; // ebx
  int v12; // eax
  struct ID2DContext *v14; // [rsp+40h] [rbp-28h] BYREF

  v14 = 0LL;
  *a6 = 0LL;
  DefaultD2DContext = CSwRenderTargetGetBounds::GetDefaultD2DContext(a1, &v14);
  v10 = v14;
  v11 = DefaultD2DContext;
  if ( DefaultD2DContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultD2DContext, 0x1A6u);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v14 + 248LL))(
            v14,
            a2,
            a3,
            a4,
            a5,
            a6);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1ACu);
  }
  if ( v10 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v10 + 16LL))(v10);
  return v11;
}
