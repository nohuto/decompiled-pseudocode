/*
 * XREFs of NdisGetNetBufferListProtocolId @ 0x1C0011860
 * Callers:
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004F310 (ndisXlateSendNetBufferListsToPacketArray.c)
 * Callees:
 *     <none>
 */

UCHAR __stdcall NdisGetNetBufferListProtocolId(PNET_BUFFER_LIST NetBufferList)
{
  UCHAR result; // al

  result = (__int64)NetBufferList->NetBufferListInfo[7] & 0xF;
  if ( !result )
    return *((_BYTE *)NetBufferList->NdisPoolHandle + 32);
  return result;
}
