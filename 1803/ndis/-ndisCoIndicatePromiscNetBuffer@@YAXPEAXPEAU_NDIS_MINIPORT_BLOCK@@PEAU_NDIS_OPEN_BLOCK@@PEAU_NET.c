/*
 * XREFs of ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C0052BE4
 * Callers:
 *     ?ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0053100 (-ndisCoSendNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053AC0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053E20 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisXlateRecvNetBufferListsToPacketArray @ 0x1C004E054 (ndisXlateRecvNetBufferListsToPacketArray.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004E550 (ndisXlateReturnPacketToNetBufferList.c)
 */

void __fastcall ndisCoIndicatePromiscNetBuffer(
        _QWORD *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _NDIS_OPEN_BLOCK *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // rbx
  struct _NET_BUFFER_LIST *v10; // r14
  unsigned int v11; // r8d
  bool v12; // zf
  struct _NDIS_OPEN_BLOCK *FilterNextOpen; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rax
  struct _NET_BUFFER_LIST *v15; // rax
  char v16; // r15
  __int64 v17; // r12
  void *v18; // r14
  __int64 v19; // r13
  struct _NDIS_PACKET *v20; // rbx
  _NDIS_PACKET *v21; // r8
  __int64 v22; // [rsp+30h] [rbp-D0h]
  __int64 v24[6]; // [rsp+40h] [rbp-C0h] BYREF
  char v25; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v26; // [rsp+2F8h] [rbp+1F8h]

  v7 = a1[9];
  v10 = a4;
  memset(v24, 0, sizeof(v24));
  LODWORD(v24[4]) = 0;
  v11 = a6 | 2;
  v12 = a2->PmodeOpens == 0;
  v24[0] = (__int64)&v25;
  v24[3] = (__int64)v10->FirstNetBuffer;
  v22 = v7;
  v24[1] = 0xC000009A00000040uLL;
  v24[2] = (__int64)v10;
  v24[5] = (__int64)a2;
  v26 = a6 | 2;
  if ( !v12 && a3 )
  {
    do
    {
      if ( a7 )
        FilterNextOpen = a3->FilterNextOpen;
      else
        FilterNextOpen = a3->MiniportNextOpen;
      if ( (a3->OpenFlags & 4) != 0 )
      {
        *((_BYTE *)a3->ReceivedAPacketSlot + (KeGetPcr()->Prcb.Number << 12)) = 1;
        if ( a3->ProtocolHandle->MajorNdisVersion < 6u )
        {
          do
          {
            v16 = ndisXlateRecvNetBufferListsToPacketArray(v24);
            if ( LODWORD(v24[4]) )
            {
              v17 = v24[0];
              v18 = (void *)(v7 + 136);
              v19 = LODWORD(v24[4]);
              do
              {
                v20 = *(struct _NDIS_PACKET **)v17;
                v21 = *(_NDIS_PACKET **)v17;
                *(_DWORD *)(*(_QWORD *)v17 + 36LL) |= 0x100u;
                a3->ProtocolHandle->CoReceivePacketHandler(a3->ProtocolBindingContext, v18, v21);
                ndisXlateReturnPacketToNetBufferList(v20);
                v17 += 8LL;
                --v19;
              }
              while ( v19 );
              v7 = v22;
            }
          }
          while ( v16 );
          v10 = a4;
        }
        else
        {
          Alignment = v10;
          do
          {
            Alignment->Flags |= 0x80u;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
          v10->NblFlags |= 0x8000u;
          a3->ProtocolHandle->CoReceiveNetBufferListsHandler(
            a3->ProtocolBindingContext,
            (void *)(v7 + 136),
            v10,
            a5,
            v11);
          v15 = v10;
          do
          {
            v15->Flags &= ~0x80u;
            v15 = (struct _NET_BUFFER_LIST *)v15->Link.Alignment;
          }
          while ( v15 );
          v10->NblFlags &= ~0x8000u;
        }
        v11 = v26;
      }
      a3 = FilterNextOpen;
    }
    while ( FilterNextOpen );
  }
}
