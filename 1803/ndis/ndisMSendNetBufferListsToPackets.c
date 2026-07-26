/*
 * XREFs of ndisMSendNetBufferListsToPackets @ 0x1C0056F30
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0001060 (NdisSendNetBufferLists.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E77C (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0056D2C (ndisMSendNetBufferListsCompleteInternal.c)
 */

void __fastcall ndisMSendNetBufferListsToPackets(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, int a4)
{
  char v7; // r14
  struct _NET_BUFFER_LIST *Alignment; // rdx
  struct _NET_BUFFER_LIST *v9; // rax
  _BYTE *v10; // [rsp+20h] [rbp-59h] BYREF
  __int64 v11; // [rsp+28h] [rbp-51h]
  struct _NET_BUFFER_LIST *v12; // [rsp+30h] [rbp-49h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+38h] [rbp-41h]
  int v14; // [rsp+40h] [rbp-39h]
  int v15; // [rsp+44h] [rbp-35h]
  __int64 v16; // [rsp+48h] [rbp-31h]
  _BYTE v17[80]; // [rsp+50h] [rbp-29h] BYREF

  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(0x3Au, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2);
  LODWORD(v11) = 10;
  v10 = v17;
  FirstNetBuffer = a2->FirstNetBuffer;
  v12 = a2;
  v15 = a4;
  v16 = a1;
  do
  {
    v7 = ndisXlateSendNetBufferListsToPacketArray((__int64 *)&v10, 1);
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 2040))(a1, v17);
      if ( !v7 )
        break;
    }
  }
  while ( v7 );
  Alignment = v12;
  if ( v12 )
  {
    if ( FirstNetBuffer != v12->FirstNetBuffer )
      Alignment = (struct _NET_BUFFER_LIST *)v12->Link.Alignment;
    if ( Alignment )
    {
      v9 = Alignment;
      do
      {
        v9->Status = -1073741670;
        v9 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
      }
      while ( v9 );
      ndisMSendNetBufferListsCompleteInternal(a1, Alignment, a4 & 1, 0);
    }
  }
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(0x3Bu, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2, v10, v11);
}
