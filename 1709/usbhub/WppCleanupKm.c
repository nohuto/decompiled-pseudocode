/*
 * XREFs of WppCleanupKm @ 0x1C007336C
 * Callers:
 *     UsbhDriverUnload @ 0x1C004BF00 (UsbhDriverUnload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppCleanupKm(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      while ( v1 )
      {
        if ( v1->Vpb )
          ((void (*)(void))pfnEtwUnregister)();
        v1 = v1->NextDevice;
      }
    }
    else if ( WPPTraceSuite == 2 )
    {
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    WppAutoLogStop(WPP_GLOBAL_Control, a1);
    WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
  }
}
