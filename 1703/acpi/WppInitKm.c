/*
 * XREFs of WppInitKm @ 0x1C0093758
 * Callers:
 *     DriverEntry @ 0x1C00ACE60 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppInitKm(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  void (__fastcall *v5)(_DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, _VPB **); // rax

  v2 = &WPP_MAIN_CB;
  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( WPPTraceSuite == 4 )
    {
      do
      {
        v5 = (void (__fastcall *)(_DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, _VPB **))pfnEtwRegisterClassicProvider;
        v2->Vpb = 0LL;
        v5(v2->DriverObject, 0LL, WppClassicProviderCallback, v2, &v2->Vpb);
        v2 = v2->NextDevice;
      }
      while ( v2 );
    }
    else if ( WPPTraceSuite == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, a1, a2);
  }
}
