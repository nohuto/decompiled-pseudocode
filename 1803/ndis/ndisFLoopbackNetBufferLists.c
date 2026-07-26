/*
 * XREFs of ndisFLoopbackNetBufferLists @ 0x1C0025720
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0001060 (NdisSendNetBufferLists.c)
 *     ndisFilterSendNetBufferLists @ 0x1C0005860 (ndisFilterSendNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C00071C0 (NdisFSendNetBufferLists.c)
 *     ndisSendNBLToFilter @ 0x1C005AA40 (ndisSendNBLToFilter.c)
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x1C0006D10 (NdisFSendNetBufferListsComplete.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059838 (ndisFDoLoopbackNetBufferList.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C0059F3C (ndisFIsLoopbackNetBuffer.c)
 */

_QWORD *__fastcall ndisFLoopbackNetBufferLists(
        struct _LOCK_STATE_EX *NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  PNET_BUFFER_LIST v7; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  $9B4850FCE6133531ACA1A1B2AD46EB50 *FirstNetBuffer; // rdi
  _QWORD *result; // rax
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]

  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(98LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, NdisFilterHandle, NetBufferList);
  v7 = NetBufferList;
  do
  {
    Alignment = (struct _NET_BUFFER_LIST *)v7->Link.Alignment;
    v11 = v7->Link.Alignment;
    if ( (v7->Flags & 0x800) == 0 )
    {
      FirstNetBuffer = ($9B4850FCE6133531ACA1A1B2AD46EB50 *)v7->FirstNetBuffer;
      do
      {
        ndisFIsLoopbackNetBuffer(NdisFilterHandle);
        FirstNetBuffer = ($9B4850FCE6133531ACA1A1B2AD46EB50 *)FirstNetBuffer->Link.Alignment;
      }
      while ( FirstNetBuffer );
      Alignment = (struct _NET_BUFFER_LIST *)v11;
    }
    v7 = Alignment;
  }
  while ( Alignment );
  result = a5;
  *a5 = NetBufferList;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    return (_QWORD *)WPP_SF_qq(99LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, NdisFilterHandle, NetBufferList);
  return result;
}
