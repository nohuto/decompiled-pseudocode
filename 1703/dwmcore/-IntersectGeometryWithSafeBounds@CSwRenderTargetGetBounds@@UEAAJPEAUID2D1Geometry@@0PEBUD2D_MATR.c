/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x18019A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z @ 0x18000213C (--$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18019A73C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::IntersectGeometryWithSafeBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  int FirstAvailableD2DContext; // eax
  CD3DDeviceLevel1 *v11; // rdi
  unsigned int v12; // ebx
  int v13; // eax
  struct ID2DContext *v15; // [rsp+60h] [rbp+8h] BYREF

  v6 = a6;
  v15 = 0LL;
  *a6 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)(a1 - 24),
                               &v15);
  v11 = v15;
  v12 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x1C9u);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v15 + 280LL))(
            v15,
            a2,
            a3,
            a4,
            a5,
            v6);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1CFu);
  }
  ReleaseInterfaceNoNULL<ID2DContext>(v11);
  return v12;
}
