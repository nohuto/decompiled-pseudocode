/*
 * XREFs of Etw_EndpointDelete @ 0x1C00388E4
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C0018F70 (Endpoint_EvtEndpointCleanupCallback.c)
 * Callees:
 *     McTemplateK0pppnnn @ 0x1C00080D8 (McTemplateK0pppnnn.c)
 */

NTSTATUS __fastcall Etw_EndpointDelete(__int64 a1, _QWORD *a2)
{
  NTSTATUS result; // eax

  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppnnn(
             (__int64)a2 + 103,
             &USBXHCI_ETW_EVENT_ENDPOINT_DELETE,
             0LL,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
