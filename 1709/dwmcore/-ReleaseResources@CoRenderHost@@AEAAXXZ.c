/*
 * XREFs of ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1801258BC
 * Callers:
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180120760 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z @ 0x180125890 (-NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x180125918 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CoRenderHost::ReleaseResources(CoRenderHost *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 + 24) + 32LL))(v2 + 24, (char *)this + 8);
    ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 4);
  }
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
}
