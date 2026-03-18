/*
 * XREFs of McGenEventWriteKM @ 0x1C0074C10
 * Callers:
 *     McTemplateK0cpp @ 0x1C0074C9C (McTemplateK0cpp.c)
 *     McTemplateK0pp @ 0x1C0075108 (McTemplateK0pp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWriteKM(
        _MCGEN_TRACE_CONTEXT *Descriptor,
        const _EVENT_DESCRIPTOR *Activity,
        const _GUID *EventDataCount,
        ULONG EventData,
        _EVENT_DATA_DESCRIPTOR *Context)
{
  unsigned __int16 *Logger; // r10
  char v6; // bl
  _EVENT_DATA_DESCRIPTOR *UserData; // rdx
  _EVENT_DESCRIPTOR v9; // xmm0
  _EVENT_DESCRIPTOR DescriptorCopy; // [rsp+30h] [rbp-18h] BYREF

  Logger = (unsigned __int16 *)KMDF_PERF_PROVIDER_Context.Logger;
  v6 = 0;
  if ( KMDF_PERF_PROVIDER_Context.Logger )
  {
    UserData = Context;
    Context->Ptr = KMDF_PERF_PROVIDER_Context.Logger;
    Context->Size = *Logger;
    Context->Reserved = 2;
  }
  else
  {
    --EventData;
    v6 = 12;
    UserData = (_EVENT_DATA_DESCRIPTOR *)((unsigned __int64)&Context[1] & -(__int64)(EventData != 0));
  }
  if ( Activity->Channel == v6 )
  {
    v9 = *Activity;
    Activity = &DescriptorCopy;
    DescriptorCopy = v9;
    DescriptorCopy.Channel = Logger != 0LL ? 0xC : 0;
  }
  return EtwWrite(KMDF_PERF_PROVIDER_Context.RegistrationHandle, Activity, EventDataCount, EventData, UserData);
}
