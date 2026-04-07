/*
 * XREFs of ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x18003518C
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18004A868 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800757A0 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

struct IDCompositionRenderTargetPartner *__fastcall CDWMDisplay::GetDcompTarget(CDWMDisplay *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 1));
    return (struct IDCompositionRenderTargetPartner *)*((_QWORD *)this + 1);
  }
  return (struct IDCompositionRenderTargetPartner *)v1;
}
