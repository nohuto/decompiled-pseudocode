/*
 * XREFs of ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C0167550
 * Callers:
 *     <none>
 * Callees:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C0166EFC (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     ?TraceServerPortInfoDelete@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@@Z @ 0x1C0167574 (-TraceServerPortInfoDelete@Log@CoreMessagingK@@SAXPEBUServerPortInfo@2@@Z.c)
 */

void __fastcall CoreMessagingK::ServerPortInfo::OnDelete(struct CoreMessagingK::ObjectImpl *a1)
{
  CoreMessagingK::Log::TraceServerPortInfoDelete(a1);
  CoreMessagingK::ServerPorts::UninitializeServerPort(a1);
}
