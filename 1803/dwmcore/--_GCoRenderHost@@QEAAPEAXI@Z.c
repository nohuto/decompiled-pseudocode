/*
 * XREFs of ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x1801436E4
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18005E608 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x18014843C (-Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1801486BC (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
 */

CoRenderHost *__fastcall CoRenderHost::`scalar deleting destructor'(CoRenderHost *this)
{
  *(_QWORD *)this = &CoRenderHost::`vftable'{for `IDWMCoRenderHost'};
  *((_QWORD *)this + 1) = &CoRenderHost::`vftable'{for `IDeviceResourceNotify'};
  ReleaseInterface<IBitmapLock>((__int64 *)this + 3);
  CoRenderHost::ReleaseResources(this);
  operator delete(this);
  return this;
}
