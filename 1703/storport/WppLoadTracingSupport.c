/*
 * XREFs of WppLoadTracingSupport @ 0x1C0060D30
 * Callers:
 *     StorPortInitialize @ 0x1C001A380 (StorPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001ED80 (_guard_dispatch_icall_nop.c)
 */

_LIST_ENTRY *WppLoadTracingSupport()
{
  _LIST_ENTRY *result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  WPP_MAIN_CB.DeviceObjectExtension = (_DEVOBJ_EXTENSION *)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  pfnWppQueryTraceInformation = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = (_LIST_ENTRY *)WPP_MAIN_CB.DeviceObjectExtension;
  LODWORD(WPP_MAIN_CB.Reserved) = 2;
  if ( WPP_MAIN_CB.DeviceObjectExtension )
    result = (_LIST_ENTRY *)((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD, _QWORD))WPP_MAIN_CB.DeviceObjectExtension)(
                              &v2,
                              0LL,
                              0LL,
                              0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
      pfnEtwUnregister = (__int64)result;
      LODWORD(WPP_MAIN_CB.Reserved) = 4;
    }
  }
  return result;
}
