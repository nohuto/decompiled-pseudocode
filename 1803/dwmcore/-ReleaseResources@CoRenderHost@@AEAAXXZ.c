/*
 * XREFs of ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1801486BC
 * Callers:
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x1801436E4 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ?NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z @ 0x180148690 (-NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x180148718 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CoRenderHost::ReleaseResources(CoRenderHost *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v2 + 24) + 32LL))(v2 + 24, (char *)this + 8);
    ReleaseInterface<CD3DSurface>((__int64 *)this + 4);
  }
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
}
