/*
 * XREFs of WppLoadTracingSupport @ 0x1C005ABCC
 * Callers:
 *     DriverEntry @ 0x1C005A740 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

void (__fastcall *WppLoadTracingSupport())(_KDPC *, void *, void *, void *)
{
  void (__fastcall *result)(_KDPC *, void *, void *, void *); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  WPP_MAIN_CB.Dpc.DeferredContext = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  WPP_MAIN_CB.Dpc.SystemArgument1 = MmGetSystemRoutineAddress(&DestinationString);
  result = (void (__fastcall *)(_KDPC *, void *, void *, void *))WPP_MAIN_CB.Dpc.DpcListEntry.Next;
  WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 2;
  if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
    result = (void (__fastcall *)(_KDPC *, void *, void *, void *))((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD, _QWORD))WPP_MAIN_CB.Dpc.DpcListEntry.Next)(
                                                                     &v2,
                                                                     0LL,
                                                                     0LL,
                                                                     0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = (void (__fastcall *)(_KDPC *, void *, void *, void *))MmGetSystemRoutineAddress(&DestinationString);
    WPP_MAIN_CB.Dpc.ProcessorHistory = (unsigned __int64)result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = (void (__fastcall *)(_KDPC *, void *, void *, void *))MmGetSystemRoutineAddress(&DestinationString);
      WPP_MAIN_CB.Dpc.DeferredRoutine = result;
      WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 4;
    }
  }
  return result;
}
