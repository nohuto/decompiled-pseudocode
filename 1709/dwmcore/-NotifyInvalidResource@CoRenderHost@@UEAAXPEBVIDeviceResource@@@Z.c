/*
 * XREFs of ?NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z @ 0x180125890
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1801258BC (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
 */

void __fastcall CoRenderHost::NotifyInvalidResource(CoRenderHost *this, const struct IDeviceResource *a2)
{
  CoRenderHost::ReleaseResources((CoRenderHost *)((char *)this - 8));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 104LL))(*((_QWORD *)this + 2));
}
