/*
 * XREFs of WppCleanupKm @ 0x1C0067DB0
 * Callers:
 *     RaDriverUnload @ 0x1C0031340 (RaDriverUnload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

void WppCleanupKm()
{
  PDEVICE_OBJECT v0; // rbx

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( LODWORD(WPP_MAIN_CB.Reserved) == 4 )
    {
      while ( v0 )
      {
        if ( v0->Vpb )
          ((void (*)(void))pfnEtwUnregister)();
        v0 = v0->NextDevice;
      }
    }
    else if ( LODWORD(WPP_MAIN_CB.Reserved) == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
