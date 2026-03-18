/*
 * XREFs of ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180120760
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180119664 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18012563C (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1801258BC (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
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
