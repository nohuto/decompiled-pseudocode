/*
 * XREFs of Etw_EndpointCreate @ 0x1C003645C
 * Callers:
 *     Endpoint_Create @ 0x1C0057FA8 (Endpoint_Create.c)
 * Callees:
 *     McTemplateK0pppnnn @ 0x1C0036AAC (McTemplateK0pppnnn.c)
 */

__int64 __fastcall Etw_EndpointCreate(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppnnn(
             (int)a2 + 103,
             (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_CREATE,
             0,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
