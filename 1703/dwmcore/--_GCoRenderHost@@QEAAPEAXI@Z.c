/*
 * XREFs of ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180138910
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800653A8 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18013B12C (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x18013B3AC (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
 */

CoRenderHost *__fastcall CoRenderHost::`scalar deleting destructor'(CoRenderHost *this)
{
  *(_QWORD *)this = &CoRenderHost::`vftable'{for `IDWMCoRenderHost'};
  *((_QWORD *)this + 1) = &CoRenderHost::`vftable'{for `IDeviceResourceNotify'};
  ReleaseInterface<IBitmapLock>((__int64 *)this + 3);
  CoRenderHost::ReleaseResources(this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
