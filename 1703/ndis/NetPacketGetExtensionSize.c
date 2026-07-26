/*
 * XREFs of NetPacketGetExtensionSize @ 0x1C00F2D40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetExtensionForClient@@YAPEAUNET_PACKET_EXTENSION@@PEAUHNETPACKETCLIENT__@@PEBG@Z @ 0x1C00F258C (-GetExtensionForClient@@YAPEAUNET_PACKET_EXTENSION@@PEAUHNETPACKETCLIENT__@@PEBG@Z.c)
 */

struct NET_PACKET_EXTENSION *__fastcall NetPacketGetExtensionSize(
        struct HNETPACKETCLIENT__ *a1,
        const unsigned __int16 *a2)
{
  struct NET_PACKET_EXTENSION *result; // rax

  result = GetExtensionForClient(a1, a2);
  if ( result )
    return (struct NET_PACKET_EXTENSION *)LODWORD(result->Name);
  return result;
}
