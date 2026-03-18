/*
 * XREFs of ?CreateResource@CFilterEffect@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x1801638D0
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x1801639E0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@Q.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CreateResource(CFilterEffect *this, struct ID2DContext *a2, struct CD2DEffect **a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v7; // rax
  signed int v8; // eax
  unsigned int v9; // ebx
  struct CD2DEffect *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0LL;
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(CFilterEffect *))(*(_QWORD *)this + 168LL))(this);
  v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, struct CD2DEffect **))(v3 + 248))(a2, v7, &v11);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x328u);
    v4 = (__int64)v11;
  }
  else
  {
    *a3 = v11;
    v11 = 0LL;
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v4);
  return v9;
}
