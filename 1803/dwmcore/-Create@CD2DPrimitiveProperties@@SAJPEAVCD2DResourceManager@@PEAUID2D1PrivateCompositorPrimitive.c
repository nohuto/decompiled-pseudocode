/*
 * XREFs of ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x1801E5E54
 * Callers:
 *     ?CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801E1E90 (-CreatePrimitiveProperties@CD2DContext@@MEAAJPEAPEAVCD2DPrimitiveProperties@@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x1801E5D90 (--0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitivePro.c)
 */

__int64 __fastcall CD2DPrimitiveProperties::Create(
        struct CD2DResourceManager *a1,
        struct ID2D1PrivateCompositorPrimitiveProperties *a2,
        struct CD2DPrimitiveProperties **a3)
{
  unsigned int v6; // ebx
  CD2DPrimitiveProperties *v7; // rax
  struct CD2DPrimitiveProperties *v8; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  v7 = (CD2DPrimitiveProperties *)WPF::ProcessHeapImpl::AllocClear(0x70uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v8 = CD2DPrimitiveProperties::CD2DPrimitiveProperties(v7, a1, a2);
  *a3 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CD2DPrimitiveProperties *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x12u);
  }
  return v6;
}
