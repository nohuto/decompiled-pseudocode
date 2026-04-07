/*
 * XREFs of ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x1800351BC
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18004A868 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMDisplay::SetDcompTarget(CDWMDisplay *this, struct IDCompositionRenderTargetPartner *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)a2 + 8LL))(a2);
}
