/*
 * XREFs of Etw_EndpointRundown @ 0x1C0038AFC
 * Callers:
 *     Etw_EndpointListRundown @ 0x1C0038940 (Etw_EndpointListRundown.c)
 * Callees:
 *     McTemplateK0pppnnn @ 0x1C00080D8 (McTemplateK0pppnnn.c)
 */

NTSTATUS __fastcall Etw_EndpointRundown(const GUID *a1, _QWORD *a2)
{
  NTSTATUS result; // eax

  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    return McTemplateK0pppnnn(
             (__int64)a1,
             &USBXHCI_ETW_EVENT_RUNDOWN_ENDPOINT_INFORMATION,
             a1,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
