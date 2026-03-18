/*
 * XREFs of ?CreateResource@CFilterEffect@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x18018DBD4
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x18018DCE4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CreateResource(CFilterEffect *this, struct ID2DContext *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  struct CD2DEffect *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0LL;
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(CFilterEffect *))(*(_QWORD *)this + 168LL))(this);
  v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, struct CD2DEffect **))(v3 + 256))(a2, v7, &v11);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x313u);
    v4 = (__int64)v11;
  }
  else
  {
    *a3 = v11;
    v11 = 0LL;
  }
  ReleaseInterfaceNoNULL<IWICBitmap>(v4);
  return v9;
}
