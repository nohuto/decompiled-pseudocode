/*
 * XREFs of ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800487FC
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::GetD2DBitmap(
        CDrawListBitmap *this,
        struct CDrawingContext *a2,
        struct ID2D1Bitmap1 **a3)
{
  __int64 v3; // rbx
  int v7; // eax
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 80LL))(v3, &v12);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x78u);
  }
  else
  {
    LOBYTE(v8) = *((_BYTE *)this + 16);
    v10 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64, struct ID2D1Bitmap1 **))(*(_QWORD *)v12 + 136LL))(
            v12,
            (char *)a2 + 392,
            0LL,
            v8,
            a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x7Du);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return v9;
}
