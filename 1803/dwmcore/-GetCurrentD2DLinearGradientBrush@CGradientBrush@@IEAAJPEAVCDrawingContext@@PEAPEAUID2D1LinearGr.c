/*
 * XREFs of ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x18018FE88
 * Callers:
 *     ?GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180198808 (-GetD2DGradientBrush@CLinearGradientBrush@@QEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D.c)
 * Callees:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x180011E84 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z @ 0x180012868 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDeviceLevel1@@_NAEBVRetrievalParams@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentD2DLinearGradientBrush(
        CGradientBrush *this,
        struct CDrawingContext *a2,
        struct ID2D1LinearGradientBrush **a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct CD3DDeviceLevel1 *v7; // rsi
  int v8; // eax
  struct ID2D1LinearGradientBrush *v9; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1LinearGradientBrush *v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a2 + 48);
  v5 = 0;
  v12 = 0LL;
  v11[0] = 0LL;
  v11[1] = &v12;
  v7 = (struct CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 160LL))(v4);
  if ( CGradientSource::FindExistingGradient(
         (CGradientBrush *)((char *)this + 72),
         v7,
         *((_BYTE *)this + 168) == 0,
         (const struct CGradientSource::RetrievalParams *)v11)
    || (v8 = CGradientBrush::Generate(this, v7, (const struct CGradientSource::RetrievalParams *)v11), v5 = v8, v8 >= 0) )
  {
    v9 = 0LL;
    *a3 = v12;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x18Du);
    v9 = v12;
  }
  if ( v9 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v5;
}
