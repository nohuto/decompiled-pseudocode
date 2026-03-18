/*
 * XREFs of ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180166EFC
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180166BBC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@.c)
 */

__int64 __fastcall CGenericInk::GetPrimitiveBlend(CGenericInk *this, enum D2D1_PRIMITIVE_BLEND *a2)
{
  signed int v3; // eax
  unsigned int v4; // ebx
  CMILCOMBase *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
         (CGenericInk *)((char *)this + 72),
         0LL,
         &v6);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x13Bu);
  else
    *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 13) + 24LL))(*((_QWORD *)v6 + 13));
  return v4;
}
