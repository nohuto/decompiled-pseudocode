/*
 * XREFs of ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18012563C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180120760 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CoRenderHost::Create(struct IDWMCoRenderEngine *a1, struct CoRenderHost **a2)
{
  CoRenderHost *v4; // rax
  CoRenderHost *v5; // rbx
  signed int v6; // eax
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
    (*(void (__fastcall **)(struct IDWMCoRenderEngine *))(*(_QWORD *)a1 + 8LL))(a1);
  v6 = (*(__int64 (__fastcall **)(_QWORD *, CoRenderHost *))(**((_QWORD **)v5 + 3) + 24LL))(*((_QWORD **)v5 + 3), v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x23u);
    CoRenderHost::`scalar deleting destructor'(v5);
  }
  else
  {
    *a2 = v5;
  }
  return v7;
}
