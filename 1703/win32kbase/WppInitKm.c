/*
 * XREFs of WppInitKm @ 0x1C01BD458
 * Callers:
 *     RIMInitializeAutoLogger @ 0x1C006D45C (RIMInitializeAutoLogger.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WppInitKm(__int64 a1, __int64 a2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  void (__fastcall *ProcessorHistory)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *); // rax

  v2 = &WPP_MAIN_CB;
  if ( WPP_GLOBAL_Control != &WPP_MAIN_CB )
  {
    WPP_GLOBAL_Control = &WPP_MAIN_CB;
    if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong == 4 )
    {
      do
      {
        ProcessorHistory = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, __int64 (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *))WPP_MAIN_CB.Dpc.ProcessorHistory;
        v2->Vpb = 0LL;
        ProcessorHistory(v2->DriverObject, 0LL, WppClassicProviderCallback, v2, &v2->Vpb);
        v2 = v2->NextDevice;
      }
      while ( v2 );
    }
    else if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong == 2 )
    {
      *(_QWORD *)&WPP_MAIN_CB.Type = &WppTraceCallback;
      IoWMIRegistrationControl(&WPP_MAIN_CB, 0x80010001);
    }
    WppAutoLogStart(WPP_GLOBAL_Control, a1, a2);
  }
}
