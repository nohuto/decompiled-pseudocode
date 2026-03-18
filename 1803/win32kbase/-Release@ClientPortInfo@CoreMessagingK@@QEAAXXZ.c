/*
 * XREFs of ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C01676F0
 * Callers:
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C0166A24 (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C0166A94 (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C0166EFC (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     ?OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C0167620 (-OnDelete@ConnectionTargetInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z.c)
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01663A8 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall CoreMessagingK::ClientPortInfo::Release(CoreMessagingK::ClientPortInfo *this)
{
  int v1; // eax
  int v2; // eax

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
    CoreMessagingK::Runtime::BugCheck(256, 0LL, 0LL);
  v2 = v1 - 1;
  *((_DWORD *)this + 4) = v2;
  if ( !v2 )
    ExFreePoolWithTag(this, 0x49434D43u);
}
