/*
 * XREFs of ?GetExtensionForClient@@YAPEAUNET_PACKET_EXTENSION@@PEAUHNETPACKETCLIENT__@@PEBG@Z @ 0x1C00FBA74
 * Callers:
 *     NetPacketGetExtensionOffset @ 0x1C00FC210 (NetPacketGetExtensionOffset.c)
 *     NetPacketGetExtensionSize @ 0x1C00FC230 (NetPacketGetExtensionSize.c)
 * Callees:
 *     FindExtensionByName @ 0x1C00FB9F4 (FindExtensionByName.c)
 */

struct NET_PACKET_EXTENSION *__fastcall GetExtensionForClient(
        struct HNETPACKETCLIENT__ *a1,
        const unsigned __int16 *a2)
{
  int v2; // eax
  unsigned __int16 **ExtensionByName; // rax

  if ( !a1 )
    return 0LL;
  v2 = *(_DWORD *)a1;
  if ( *(int *)a1 < 0 || v2 <= 2 || v2 > 9 )
    return 0LL;
  ExtensionByName = FindExtensionByName((__int64)a2);
  return (struct NET_PACKET_EXTENSION *)((unsigned __int64)ExtensionByName & -(__int64)(*((_DWORD *)ExtensionByName + 4) != 0));
}
