/*
 * XREFs of ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052810
 * Callers:
 *     ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0052670 (-ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0017B40 (NdisAcquireRWLockRead.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisMAllocSGList @ 0x1C004B1B8 (ndisMAllocSGList.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C0052474 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005D740 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisMCoSendComplete @ 0x1C0112B40 (NdisMCoSendComplete.c)
 */

void __fastcall ndisCoSendPacketsToNdisPackets(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r14
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // r13d
  struct _NDIS_PACKET **v10; // rax
  struct _NDIS_MINIPORT_BLOCK *v11; // rdx
  struct _NDIS_PACKET *v12; // rbp
  int v13; // r9d
  _MDL *i; // rdi
  PVOID MappedSystemVa; // rax
  struct _NDIS_STACK_RESERVED *v16; // rcx
  struct _NDIS_PACKET **v17; // [rsp+30h] [rbp-58h]
  struct _NDIS_STACK_RESERVED *v18; // [rsp+38h] [rbp-50h] BYREF
  _X_FILTER *EthDB; // [rsp+40h] [rbp-48h]
  unsigned int v20; // [rsp+90h] [rbp+8h]
  struct _LOCK_STATE_EX LockState; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v22; // [rsp+A8h] [rbp+20h]

  v3 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qqd(0xBu, &WPP_4308510b5fb5364aadc32f04d3b40dd6_Traceguids, a1, *a2, a3);
  EthDB = v3->EthDB;
  NdisAcquireRWLockRead(EthDB->BindListLock, &LockState, 0);
  v7 = 0;
  v8 = 0;
  v22 = 0;
  v9 = 0;
  v20 = 0;
  if ( a3 )
  {
    v10 = a2;
    v17 = a2;
    while ( 1 )
    {
      v11 = (struct _NDIS_MINIPORT_BLOCK *)a1[24];
      v12 = *v10;
      if ( v11->PmodeOpens )
        ndisCoIndicatePromiscPacket(a1, v11, v3->OpenQueue, *v10, 0);
      ++*(_DWORD *)&v12[-1].ProtocolReserved[4];
      NDIS_STACK_RESERVED_FROM_PACKET(v12, &v18);
      if ( (v3->SendFlags & 2) != 0 )
      {
LABEL_17:
        if ( v13 )
        {
          NdisMCoSendComplete(-1073741670, a1, v12);
          if ( v8 )
          {
            ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD))a1[26])(a1[25], &a2[v7], v8);
            v8 = 0;
          }
          v7 = v9 + 1;
          v20 = v9 + 1;
          goto LABEL_25;
        }
      }
      else
      {
        v22 = 0;
        for ( i = v12->Private.Head; i; i = i->Next )
        {
          if ( (i->MdlFlags & 5) != 0 )
            MappedSystemVa = i->MappedSystemVa;
          else
            MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20);
          if ( !MappedSystemVa )
          {
            v7 = v20;
            v13 = -1073741670;
            v22 = -1073741670;
            goto LABEL_17;
          }
        }
      }
      if ( (v3->Flags & 0x40) != 0 )
      {
        v16 = v18;
        *(_QWORD *)v18 = a1[10];
        *((_QWORD *)v16 + 1) = a1;
        ndisMAllocSGList(v3, v12);
      }
      else
      {
        ++v8;
      }
      v7 = v20;
LABEL_25:
      ++v9;
      v10 = ++v17;
      if ( v9 >= a3 )
      {
        if ( v8 )
          ((void (__fastcall *)(_QWORD, struct _NDIS_PACKET **, _QWORD, _QWORD))a1[26])(a1[25], &a2[v7], v8, v22);
        break;
      }
    }
  }
  NdisReleaseRWLock(EthDB->BindListLock, &LockState);
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0xCu, &WPP_4308510b5fb5364aadc32f04d3b40dd6_Traceguids, (__int64)a1);
}
