/*
 * XREFs of WppLoadTracingSupport @ 0x1C01C47B8
 * Callers:
 *     RIMInitializeAutoLogger @ 0x1C00985A4 (RIMInitializeAutoLogger.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

KDEFERRED_ROUTINE *WppLoadTracingSupport()
{
  KDEFERRED_ROUTINE *result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  WPP_MAIN_CB.Dpc.DeferredContext = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  WPP_MAIN_CB.Dpc.SystemArgument1 = MmGetSystemRoutineAddress(&DestinationString);
  result = (KDEFERRED_ROUTINE *)WPP_MAIN_CB.Dpc.DpcListEntry.Next;
  *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 2;
  if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
    result = (KDEFERRED_ROUTINE *)((__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD, _QWORD))WPP_MAIN_CB.Dpc.DpcListEntry.Next)(
                                    &v2,
                                    0LL,
                                    0LL,
                                    0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = (KDEFERRED_ROUTINE *)MmGetSystemRoutineAddress(&DestinationString);
    WPP_MAIN_CB.Dpc.ProcessorHistory = (KAFFINITY)result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = (KDEFERRED_ROUTINE *)MmGetSystemRoutineAddress(&DestinationString);
      WPP_MAIN_CB.Dpc.DeferredRoutine = result;
      *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 4;
    }
  }
  return result;
}
