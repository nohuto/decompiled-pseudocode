/*
 * XREFs of ndisFLoopbackNetBufferLists @ 0x1C005A5A4
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00038F0 (NdisSendNetBufferLists.c)
 *     ndisFilterSendNetBufferLists @ 0x1C0004B60 (ndisFilterSendNetBufferLists.c)
 *     NdisFSendNetBufferLists @ 0x1C000D5A0 (NdisFSendNetBufferLists.c)
 *     ndisSendNBLToFilter @ 0x1C005A8E0 (ndisSendNBLToFilter.c)
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x1C0006800 (NdisFSendNetBufferListsComplete.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C0059DF8 (ndisFDoLoopbackNetBufferList.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C005A34C (ndisFIsLoopbackNetBuffer.c)
 */

void __fastcall ndisFLoopbackNetBufferLists(
        struct _LOCK_STATE_EX *NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        unsigned int a3,
        char a4,
        PNET_BUFFER_LIST *a5)
{
  _SLIST_HEADER *v6; // r12
  ULONG v7; // r13d
  PNET_BUFFER_LIST v9; // rbx
  PNET_BUFFER_LIST v10; // r15
  bool v11; // zf
  struct _NET_BUFFER_LIST *Alignment; // rsi
  $2BD28CA71EA32E8609769484057EA25E *FirstNetBuffer; // rdi
  ULONG v14; // ecx
  char v15; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v16[7]; // [rsp+31h] [rbp-47h] BYREF
  struct _NET_BUFFER_LIST *v17; // [rsp+38h] [rbp-40h]

  v15 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(0x64u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, NdisFilterHandle, NetBufferList);
  v9 = NetBufferList;
  v15 = 0;
  v10 = NetBufferList;
  v16[0] = 0;
  do
  {
    v11 = (v9->Flags & 0x800) == 0;
    Alignment = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
    v17 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
    if ( !v11 )
    {
      v16[0] = 0;
LABEL_17:
      v6 = (_SLIST_HEADER *)v9;
      goto LABEL_18;
    }
    FirstNetBuffer = ($2BD28CA71EA32E8609769484057EA25E *)v9->FirstNetBuffer;
    do
    {
      ndisFIsLoopbackNetBuffer(NdisFilterHandle, (__int64)FirstNetBuffer, (__int64)v9, &v15, v16);
      if ( v15 == 1 )
      {
        v15 = 0;
        ndisFDoLoopbackNetBufferList((__int64)NdisFilterHandle, (__int64)FirstNetBuffer, (__int64)v9, a3, a4);
      }
      FirstNetBuffer = ($2BD28CA71EA32E8609769484057EA25E *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    Alignment = v17;
    if ( v16[0] != 1 )
      goto LABEL_17;
    v16[0] = 0;
    if ( v10 == v9 )
      v10 = v17;
    else
      v6->Alignment = (unsigned __int64)v17;
    v9->Link.Alignment = 0LL;
    v14 = v7 | 1;
    v9->Status = 0;
    if ( (a4 & 1) == 0 )
      v14 = v7;
    v7 = v14;
    NdisFSendNetBufferListsComplete(NdisFilterHandle, v9, v14);
LABEL_18:
    v9 = Alignment;
  }
  while ( Alignment );
  *a5 = v10;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
    WPP_SF_qq(0x65u, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, NdisFilterHandle, NetBufferList);
}
