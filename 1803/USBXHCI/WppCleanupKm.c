/*
 * XREFs of WppCleanupKm @ 0x1C0057B10
 * Callers:
 *     DriverCleanup @ 0x1C0057760 (DriverCleanup.c)
 *     DriverEntry @ 0x1C00577D0 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppCleanupKm(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong == 4 )
    {
      while ( v1 )
      {
        if ( v1->Vpb )
          ((void (*)(void))WPP_MAIN_CB.Dpc.DeferredRoutine)();
        v1 = v1->NextDevice;
      }
    }
    else if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WppAutoLogStop(WPP_GLOBAL_Control, a1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
