/*
 * XREFs of ?Create@CHwLinearGradientColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801F727C
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z @ 0x1801F6FF0 (-SetBrushAndContext@CHwLinearGradientBrush@@UEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CHwLinearGradientColorSource@@IEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x1801F7138 (--0CHwLinearGradientColorSource@@IEAA@PEAVCD3DDeviceLevel1@@@Z.c)
 */

__int64 __fastcall CHwLinearGradientColorSource::Create(
        struct CD3DDeviceLevel1 *a1,
        struct CHwLinearGradientColorSource **a2)
{
  unsigned int v4; // ebx
  CHwLinearGradientColorSource *v5; // rax
  struct CHwLinearGradientColorSource *v6; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = (CHwLinearGradientColorSource *)HeapAlloc(WPF::g_processHeap, 0, 0x130uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v6 = CHwLinearGradientColorSource::CHwLinearGradientColorSource(v5, a1);
  *a2 = v6;
  if ( v6 )
  {
    (**(void (__fastcall ***)(struct CHwLinearGradientColorSource *))v6)(v6);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
  }
  return v4;
}
