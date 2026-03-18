/*
 * XREFs of ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18014843C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x1801436E4 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CoRenderHost::Create(struct IDWMCoRenderEngine *a1, struct CoRenderHost **a2)
{
  CoRenderHost *v4; // rax
  CoRenderHost *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CoRenderHost *)WPF::ProcessHeapImpl::AllocClear(0x30uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_QWORD *)v4 + 3) = a1;
  *(_QWORD *)v4 = &CoRenderHost::`vftable'{for `IDWMCoRenderHost'};
  *((_QWORD *)v4 + 1) = &CoRenderHost::`vftable'{for `IDeviceResourceNotify'};
  if ( a1 )
  {
    (*(void (__fastcall **)(struct IDWMCoRenderEngine *))(*(_QWORD *)a1 + 8LL))(a1);
    a1 = (struct IDWMCoRenderEngine *)*((_QWORD *)v5 + 3);
  }
  v6 = (*(__int64 (__fastcall **)(struct IDWMCoRenderEngine *, CoRenderHost *))(*(_QWORD *)a1 + 24LL))(a1, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x23u);
    CoRenderHost::`scalar deleting destructor'(v5);
  }
  else
  {
    *a2 = v5;
  }
  return v7;
}
