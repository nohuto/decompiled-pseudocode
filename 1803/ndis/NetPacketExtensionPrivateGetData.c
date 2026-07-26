/*
 * XREFs of NetPacketExtensionPrivateGetData @ 0x1C00AC0B4
 * Callers:
 *     NetPacketReuseMany @ 0x1C007D640 (NetPacketReuseMany.c)
 *     NetPacketReuseOne @ 0x1C007D700 (NetPacketReuseOne.c)
 *     NetPacketShallowCopyOne @ 0x1C007D810 (NetPacketShallowCopyOne.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NetPacketExtensionPrivateGetData(__int64 a1, __int64 a2)
{
  return a2 + *(_QWORD *)(a1 + 24);
}
