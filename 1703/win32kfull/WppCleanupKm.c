/*
 * XREFs of WppCleanupKm @ 0x1C0370508
 * Callers:
 *     UninitializeEditionAutoLogger @ 0x1C011B4A0 (UninitializeEditionAutoLogger.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppCleanupKm(__int64 a1)
{
  PDEVICE_OBJECT v1; // rbx

  v1 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPPTraceSuite == 4 )
    {
      if ( !WPP_GLOBAL_Control )
      {
LABEL_8:
        WppAutoLogStop(v1, a1);
        WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
        return;
      }
      do
      {
        if ( v1->Vpb )
          ((void (*)(void))pfnEtwUnregister)();
        v1 = v1->NextDevice;
      }
      while ( v1 );
    }
    else
    {
      if ( WPPTraceSuite != 2 )
        goto LABEL_8;
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    v1 = WPP_GLOBAL_Control;
    goto LABEL_8;
  }
}
