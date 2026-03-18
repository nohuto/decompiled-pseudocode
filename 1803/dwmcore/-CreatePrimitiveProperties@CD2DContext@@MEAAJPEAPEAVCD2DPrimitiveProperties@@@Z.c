/*
 * XREFs of ?CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801E1E90
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x1801E5E54 (-Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitive.c)
 */

__int64 __fastcall CD2DContext::CreatePrimitiveProperties(CD2DContext *this, struct CD2DPrimitiveProperties **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct ID2D1PrivateCompositorPrimitiveProperties *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorPrimitiveProperties **))(**((_QWORD **)this + 23)
                                                                                              + 40LL))(
         *((_QWORD *)this + 23),
         &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x803u);
  }
  else
  {
    v6 = CD2DPrimitiveProperties::Create(*((struct CD2DResourceManager **)this + 18), v8, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x807u);
  }
  ReleaseInterface<IBitmapLock>((__int64 *)&v8);
  return v5;
}
