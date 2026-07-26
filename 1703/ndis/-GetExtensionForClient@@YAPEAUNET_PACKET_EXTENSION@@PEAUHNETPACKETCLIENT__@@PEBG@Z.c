/*
 * XREFs of ?GetExtensionForClient@@YAPEAUNET_PACKET_EXTENSION@@PEAUHNETPACKETCLIENT__@@PEBG@Z @ 0x1C00F258C
 * Callers:
 *     NetPacketGetExtensionOffset @ 0x1C00F2D20 (NetPacketGetExtensionOffset.c)
 *     NetPacketGetExtensionSize @ 0x1C00F2D40 (NetPacketGetExtensionSize.c)
 * Callees:
 *     FindExtensionByName @ 0x1C00F250C (FindExtensionByName.c)
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
