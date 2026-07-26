/*
 * XREFs of ndisMIsLoopbackPacket @ 0x1C00562A0
 * Callers:
 *     ndisMLoopbackPacketX @ 0x1C00567A0 (ndisMLoopbackPacketX.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C00069C0 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisPacketSize @ 0x1C0015FD0 (NdisPacketSize.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ?NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z @ 0x1C004BD1C (-NdisQueryPacket@@YAXPEAU_NDIS_PACKET@@PEAI1PEAPEAU_MDL@@1@Z.c)
 *     NdisAllocateBuffer @ 0x1C0051050 (NdisAllocateBuffer.c)
 *     ndisMCopyFromPacketToBuffer @ 0x1C00550BC (ndisMCopyFromPacketToBuffer.c)
 *     ethFindMulticast @ 0x1C0064B08 (ethFindMulticast.c)
 */

bool __fastcall ndisMIsLoopbackPacket(__int64 a1, struct _NDIS_PACKET *a2, struct _NDIS_PACKET **a3)
{
  char v5; // si
  _MDL *Head; // rcx
  unsigned int *Priority; // rdx
  char *MappedSystemVa; // rbx
  __int64 v11; // rcx
  char v12; // bl
  __int64 v13; // r14
  char v14; // r15
  int v15; // r13d
  bool v16; // zf
  UINT Length; // r14d
  UINT v18; // eax
  __int64 v19; // r13
  UINT v20; // eax
  char *PoolWithTag; // rax
  char *v22; // r15
  char *v23; // rax
  struct _NDIS_PACKET *v24; // rbx
  unsigned int v25; // r15d
  unsigned int *v26; // rdx
  struct _MDL *v27; // r15
  unsigned __int16 v28; // r13
  char *v29; // [rsp+30h] [rbp-10h]
  KSPIN_LOCK *LockState; // [rsp+88h] [rbp+48h] BYREF
  PNDIS_BUFFER Buffer; // [rsp+98h] [rbp+58h] BYREF

  Buffer = 0LL;
  v5 = 0;
  Head = a2->Private.Head;
  Priority = (unsigned int *)(ndisMdlMappingNxFlag | 0x20);
  if ( (Head->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)Head->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, (ULONG)Priority);
  if ( MappedSystemVa )
  {
    if ( *(_DWORD *)(a1 + 464) )
      return (a2->Private.Flags & 0x200) != 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x800000) != 0 )
    {
      if ( (*MappedSystemVa & 1) == 0
        && (v11 = *(_QWORD *)(a1 + 400), *(_DWORD *)(MappedSystemVa + 2) == *(_DWORD *)(v11 + 338))
        && *(_WORD *)MappedSystemVa == *(_WORD *)(v11 + 336) )
      {
        v12 = 1;
        v5 = 1;
      }
      else
      {
        v12 = 1;
      }
      goto LABEL_35;
    }
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(*(_QWORD *)(a1 + 400) + 288LL), (PLOCK_STATE_EX)&LockState, 0);
    v13 = *(_QWORD *)(a1 + 400);
    v14 = 0;
    v5 = 0;
    v15 = *(_DWORD *)(v13 + 312);
    if ( (*MappedSystemVa & 1) != 0 )
    {
      if ( *MappedSystemVa == -1
        && MappedSystemVa[1] == -1
        && MappedSystemVa[2] == -1
        && MappedSystemVa[3] == -1
        && MappedSystemVa[4] == -1
        && MappedSystemVa[5] == -1 )
      {
        v16 = (v15 & 8) == 0;
LABEL_23:
        if ( v16 )
          goto LABEL_32;
        goto LABEL_31;
      }
      if ( (v15 & 4) == 0 )
      {
        if ( (v15 & 2) == 0 )
          goto LABEL_32;
        v16 = (unsigned __int8)ethFindMulticast(
                                 *(unsigned int *)(v13 + 368),
                                 0LL,
                                 *(_QWORD *)(v13 + 352),
                                 MappedSystemVa) == 0;
        goto LABEL_23;
      }
    }
    else
    {
      if ( *(_DWORD *)(MappedSystemVa + 2) != *(_DWORD *)(v13 + 338)
        || *(_WORD *)MappedSystemVa != *(_WORD *)(v13 + 336) )
      {
LABEL_32:
        v12 = v14;
        if ( (v15 & 0xA0) != 0 )
          v12 = 1;
        NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v13 + 288), (PLOCK_STATE_EX)&LockState);
        if ( !v12 )
        {
LABEL_37:
          if ( v5 )
            a2->Private.NdisPacketFlags |= 4u;
          if ( v12 )
          {
            if ( a2->Private.ValidCounts )
            {
              Length = a2->Private.TotalLength;
            }
            else
            {
              NdisQueryPacket(a2, Priority, 0LL, 0LL, (unsigned int *)&LockState);
              Length = (unsigned int)LockState;
            }
            v18 = NdisPacketSize(0x20u);
            v19 = v18;
            v20 = Length + v18;
            if ( v20 >= Length )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v20, 0x706C444Eu);
              v22 = PoolWithTag;
              if ( PoolWithTag )
              {
                memset(PoolWithTag, 0, (unsigned int)v19);
                v23 = &v22[v19];
                v29 = &v22[v19];
                v24 = (struct _NDIS_PACKET *)&v22[48 * ndisPacketStackSize + 16];
                v25 = 0;
                if ( ndisPacketStackSize )
                {
                  do
                  {
                    *(_DWORD *)&v24[-1].ProtocolReserved[4] = v25;
                    NDIS_STACK_RESERVED_FROM_PACKET(v24, (struct _NDIS_STACK_RESERVED **)&LockState);
                    KeInitializeSpinLock(LockState + 3);
                    ++v25;
                  }
                  while ( v25 < ndisPacketStackSize );
                  v23 = v29;
                }
                *(_DWORD *)&v24[-1].ProtocolReserved[4] = -1;
                NdisAllocateBuffer((PNDIS_STATUS)&LockState, &Buffer, 0LL, v23, Length);
                v27 = Buffer;
                if ( !(_DWORD)LockState )
                {
                  v24->Private.Head = Buffer;
                  v24->Private.Tail = v27;
                  v24->Private.Pool = (void *)1886351180;
                  v28 = v19 - 48 * ndisPacketStackSize - 152;
                  v24->Private.NdisPacketOobOffset = v28;
                  *(_QWORD *)&v24->ProtocolReserved[v28] = v24;
                  ndisMCopyFromPacketToBuffer(a2, v26, Length, v29, (unsigned int *)&LockState);
                  if ( (_DWORD)LockState == Length )
                  {
                    if ( a3 )
                    {
                      *a3 = v24;
                      v24->Private.NdisPacketFlags |= 2u;
                      v24->Private.Flags = a2->Private.Flags & 0x80 | 0x100;
                    }
                    return v5;
                  }
                }
                ExFreePoolWithTag((char *)v24 - 48 * ndisPacketStackSize - 16, 0);
                if ( v27 )
                  IoFreeMdl(v27);
              }
            }
            *a3 = 0LL;
            return 0;
          }
          return (a2->Private.Flags & 0x200) != 0;
        }
LABEL_35:
        if ( (a2->Private.Flags & 0x200) != 0 )
          v5 = 1;
        goto LABEL_37;
      }
      v5 = 1;
    }
LABEL_31:
    v14 = 1;
    goto LABEL_32;
  }
  if ( a3 )
    *a3 = 0LL;
  return 0;
}
