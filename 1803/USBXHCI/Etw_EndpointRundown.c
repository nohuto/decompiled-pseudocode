/*
 * XREFs of Etw_EndpointRundown @ 0x1C00366D8
 * Callers:
 *     Etw_EndpointListRundown @ 0x1C0036520 (Etw_EndpointListRundown.c)
 * Callees:
 *     McTemplateK0pppnnn @ 0x1C0036AAC (McTemplateK0pppnnn.c)
 */

__int64 __fastcall Etw_EndpointRundown(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    return McTemplateK0pppnnn(
             a1,
             (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_ENDPOINT_INFORMATION,
             a1,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
