/*
 * XREFs of WppCleanupKm @ 0x1C01BD1F4
 * Callers:
 *     RIMUnInitialize @ 0x1C0067150 (RIMUnInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void WppCleanupKm()
{
  PDEVICE_OBJECT v0; // rbx
  PVOID v1; // rdi

  v0 = WPP_GLOBAL_Control;
  v1 = gpWin32kDriverObject;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong == 4 )
    {
      if ( !WPP_GLOBAL_Control )
      {
LABEL_8:
        WppAutoLogStop(v0, v1);
        WPP_GLOBAL_Control = (PDEVICE_OBJECT)&WPP_GLOBAL_Control;
        return;
      }
      do
      {
        if ( v0->Vpb )
          ((void (*)(void))WPP_MAIN_CB.Dpc.DeferredRoutine)();
        v0 = v0->NextDevice;
      }
      while ( v0 );
    }
    else
    {
      if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong != 2 )
        goto LABEL_8;
      IoWMIRegistrationControl(WPP_GLOBAL_Control, 0x80000002);
    }
    v0 = WPP_GLOBAL_Control;
    goto LABEL_8;
  }
}
