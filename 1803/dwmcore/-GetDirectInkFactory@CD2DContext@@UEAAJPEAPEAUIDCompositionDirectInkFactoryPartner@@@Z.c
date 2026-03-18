/*
 * XREFs of ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801E39D0
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801DFC1C (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x1801E3E74 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 */

__int64 __fastcall CD2DContext::GetDirectInkFactory(
        struct IDCompositionDirectInkFactoryPartner **this,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  int inited; // eax
  unsigned int v5; // ebx
  struct IDCompositionDirectInkFactoryPartner *v6; // rcx

  inited = CD2DContext::LazyInitDirectInkFactory((CD2DContext *)this);
  v5 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inited, 0x180u);
  }
  else
  {
    v6 = this[39];
    if ( v6 )
    {
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v6 + 8LL))(v6);
      v6 = this[39];
    }
    *a2 = v6;
    return 0;
  }
  return v5;
}
