/*
 * XREFs of ethFilterDprIndicateReceivePacket @ 0x1C00640D0
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C00069C0 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ethFindMulticast @ 0x1C0064B08 (ethFindMulticast.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0064BA0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ethFilterReceivePacketStats @ 0x1C0064CBC (ethFilterReceivePacketStats.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0067840 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C006B734 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ethFilterDprIndicateReceivePacket(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  unsigned int Number; // ebp
  __int64 *v5; // r15
  struct _NDIS_PACKET **v6; // rbx
  int v7; // r8d
  int v9; // r14d
  struct _NDIS_RW_LOCK_EX *v10; // rcx
  struct _NDIS_PACKET *v11; // rbx
  int v12; // ecx
  int v13; // r10d
  _MDL *Head; // rsi
  char *v15; // rdx
  char *MappedSystemVa; // r11
  char *v17; // rax
  struct _MDL *Next; // rcx
  __int64 ByteCount; // r9
  struct _NDIS_STACK_RESERVED *v20; // r13
  __int64 v21; // rsi
  unsigned int Flags; // ecx
  int v23; // r10d
  __int64 NdisPacketOobOffset; // rax
  unsigned int v25; // ebp
  __int64 v26; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v27; // rdx
  __int64 v28; // r14
  __int16 (__fastcall *v29)(_QWORD, struct _NDIS_PACKET *, _QWORD, __int64); // r8
  struct _NET_BUFFER_LIST *v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  int v35; // r14d
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // r12
  int v39; // r9d
  struct NDIS_NBL_TRACKER_HANDLE__ *v40; // rdx
  unsigned int v41; // ebp
  __int64 v42; // rax
  __int64 v43; // r15
  __int16 (__fastcall *v44)(_QWORD, struct _NDIS_PACKET *); // r8
  struct _NET_BUFFER_LIST *v45; // rcx
  int v46; // eax
  int v47; // r13d
  __int64 v48; // r8
  _QWORD *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // r8
  _QWORD *v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // r12
  int v58; // eax
  int v59; // ebp
  char Multicast; // al
  struct NDIS_NBL_TRACKER_HANDLE__ *v61; // rdx
  unsigned int v62; // r14d
  __int64 v63; // rax
  __int64 v64; // r15
  __int16 (__fastcall *v65)(_QWORD, struct _NDIS_PACKET *, _QWORD, __int64); // r8
  struct _NET_BUFFER_LIST *v66; // rcx
  int v67; // ecx
  struct _NDIS_STACK_RESERVED *v68; // rax
  char v69; // al
  int v70; // ecx
  signed __int32 v71; // edx
  bool v72; // zf
  char *v73; // rcx
  struct _NDIS_PACKET *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rbx
  int v79; // [rsp+40h] [rbp-88h]
  unsigned __int8 v80[4]; // [rsp+44h] [rbp-84h]
  unsigned int v81; // [rsp+48h] [rbp-80h]
  unsigned int v82; // [rsp+4Ch] [rbp-7Ch]
  char *v83; // [rsp+50h] [rbp-78h]
  __int64 *v84; // [rsp+58h] [rbp-70h]
  struct _NDIS_STACK_RESERVED *v85; // [rsp+60h] [rbp-68h]
  struct _NDIS_STACK_RESERVED *v86; // [rsp+68h] [rbp-60h] BYREF
  char *v87; // [rsp+70h] [rbp-58h]
  ULONG_PTR v88; // [rsp+78h] [rbp-50h]
  struct _LOCK_STATE_EX LockState; // [rsp+D0h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D8h] [rbp+10h]
  unsigned int v91; // [rsp+E0h] [rbp+18h]
  int v92; // [rsp+E8h] [rbp+20h]

  v91 = a3;
  BugCheckParameter4 = a2;
  Number = KeGetPcr()->Prcb.Number;
  v5 = *(__int64 **)(BugCheckParameter2 + 400);
  v6 = (struct _NDIS_PACKET **)a2;
  v7 = *(_DWORD *)(BugCheckParameter2 + 124);
  v88 = a2;
  v9 = 0;
  v10 = (struct _NDIS_RW_LOCK_EX *)v5[36];
  v84 = v5;
  v79 = 0;
  v81 = Number;
  LockState.OldIrql = 2;
  NdisAcquireRWLockRead(v10, &LockState, v7 < 0);
  v82 = 0;
  if ( !a3 )
    goto LABEL_144;
  while ( 1 )
  {
    v11 = *v6;
    v12 = *(_DWORD *)&v11[-1].ProtocolReserved[4];
    if ( v12 != -1 && (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) == 0 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)(BugCheckParameter2 + 3880),
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 5uLL, BugCheckParameter2, (ULONG_PTR)v11, BugCheckParameter4);
    }
    *(_DWORD *)&v11[-1].ProtocolReserved[4] = v12 + 1;
    NDIS_STACK_RESERVED_FROM_PACKET(v11, &v86);
    Head = v11->Private.Head;
    v15 = (char *)v11 + v11->Private.NdisPacketOobOffset;
    v87 = v15;
    if ( (Head->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = (char *)Head->MappedSystemVa;
      v83 = MappedSystemVa;
    }
    else
    {
      v17 = (char *)MmMapLockedPages(Head, 0);
      v15 = v87;
      MappedSystemVa = v17;
      v83 = v17;
    }
    Next = Head->Next;
    ByteCount = Head->ByteCount;
    *(_DWORD *)v80 = Head->ByteCount;
    if ( Head->Next )
    {
      do
      {
        ByteCount = (unsigned int)(Next->ByteCount + ByteCount);
        Next = Next->Next;
      }
      while ( Next );
      *(_DWORD *)v80 = ByteCount;
    }
    v20 = v86;
    v85 = v86;
    *((_DWORD *)v86 + 2) = -1;
    *((_DWORD *)v20 + 3) = 0;
    *(_QWORD *)v20 = BugCheckParameter2;
    v11->Private.ValidCounts = 0;
    if ( *((_DWORD *)v15 + 8) == -1073741670 || (*(_DWORD *)(BugCheckParameter2 + 124) & 0x800) != 0 )
    {
      LOBYTE(v13) = 1;
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) == 0 )
        *((_DWORD *)v15 + 8) = 0;
      LOBYTE(v13) = 0;
    }
    v21 = v5[41];
    v92 = v13;
    if ( v21 && *(_DWORD *)(v21 + 704) < 6u )
    {
      if ( ((unsigned int)ByteCount >= 0xE || (v5[38] & 0xA0) != 0)
        && ((v11->Private.Flags & 0x80u) == 0
         || *(_QWORD *)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != v21) )
      {
        v79 = v9 + 1;
        *(_BYTE *)((Number << 12) + *(_QWORD *)(v21 + 816)) = 1;
        Flags = v11->Private.Flags;
        v23 = *(_DWORD *)(v21 + 432) & 0xA0;
        if ( (Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          ethFilterReceivePacketStats(BugCheckParameter2, MappedSystemVa, (unsigned int)ByteCount);
          Flags = v11->Private.Flags;
          ByteCount = *(unsigned int *)v80;
        }
        NdisPacketOobOffset = v11->Private.NdisPacketOobOffset;
        v11->Private.Flags = Flags & 0xFFFDFFFF;
        v25 = *(unsigned int *)((char *)&v11->Private.Count + NdisPacketOobOffset);
        v26 = KeGetPcr()->Prcb.Number;
        v27 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(BugCheckParameter2 + 1600);
        v28 = *((_QWORD *)v27 + v26);
        *((_QWORD *)v27 + v26) = v11;
        if ( (_BYTE)v92
          || (v29 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD, __int64))(v21 + 160)) == 0LL
          || v23 && !v5[41] )
        {
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, _DWORD))(v21 + 128))(
            *(_QWORD *)(v21 + 32),
            v11,
            MappedSystemVa,
            14LL,
            MappedSystemVa + 14,
            v11->Private.Head->ByteCount - 14,
            ByteCount - 14);
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v25;
        }
        else
        {
          v30 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
          if ( v30 && v25 == -1073741670 )
          {
            ndisNblTrackerTransferOwnershipSingleNbl(
              v30,
              v27,
              *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v21 + 680),
              ByteCount);
            v29 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD, __int64))(v21 + 160);
          }
          *((_DWORD *)v20 + 3) += v29(*(_QWORD *)(v21 + 32), v11, v29, ByteCount);
        }
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v28;
      }
      goto LABEL_113;
    }
    if ( (unsigned int)ByteCount < 0xE )
    {
      v47 = 32;
    }
    else
    {
      if ( (*MappedSystemVa & 1) == 0 )
      {
        if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          v31 = *(_QWORD *)(BugCheckParameter2 + 3160);
          if ( v31 )
          {
            v32 = (_QWORD *)(v31 + 112LL * KeGetPcr()->Prcb.Number);
            v32[1] += (unsigned int)ByteCount;
            *v32 += (unsigned int)ByteCount;
            v33 = *(_QWORD *)(BugCheckParameter2 + 3160);
            if ( v33 )
            {
              v34 = 112LL * KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(v34 + v33 + 32);
            }
          }
        }
        v11->Private.Flags &= ~0x20000u;
        v35 = 0;
        if ( (v5[38] & 0xA4) != 0
          && (*(_DWORD *)((char *)v5 + 338) != *(_DWORD *)(MappedSystemVa + 2)
           || *((_WORD *)v5 + 168) != *(_WORD *)MappedSystemVa) )
        {
          v35 = 1;
        }
        v36 = *v5;
        if ( *v5 )
        {
          do
          {
            v37 = *(_DWORD *)(v36 + 432);
            v38 = *(_QWORD *)(v36 + 424);
            v39 = v37 & 0xA0;
            if ( ((v37 & 0xA0) != 0 || !v35 && (v37 & 1) != 0)
              && ((v11->Private.Flags & 0x80u) == 0
               || *(_QWORD *)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != v36) )
            {
              ++v79;
              *(_BYTE *)((Number << 12) + *(_QWORD *)(v36 + 816)) = 1;
              v40 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(BugCheckParameter2 + 1600);
              v41 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
              v42 = KeGetPcr()->Prcb.Number;
              v43 = *((_QWORD *)v40 + v42);
              *((_QWORD *)v40 + v42) = v11;
              if ( (_BYTE)v13
                || (v44 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v36 + 160)) == 0LL
                || v39 && !v84[41] )
              {
                *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
                (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, int))(v36 + 128))(
                  *(_QWORD *)(v36 + 32),
                  v11,
                  MappedSystemVa,
                  14LL,
                  MappedSystemVa + 14,
                  v11->Private.Head->ByteCount - 14,
                  *(_DWORD *)v80 - 14);
                *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v41;
              }
              else
              {
                v45 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
                if ( v45 && v41 == -1073741670 )
                {
                  ndisNblTrackerTransferOwnershipSingleNbl(
                    v45,
                    v40,
                    *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v36 + 680),
                    v39);
                  v44 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v36 + 160);
                }
                *((_DWORD *)v20 + 3) += v44(*(_QWORD *)(v36 + 32), v11);
              }
              if ( *((int *)v20 + 3) > 0 )
              {
                v46 = (unsigned __int8)v92;
                if ( (*(_DWORD *)(v36 + 224) & 8) == 0 )
                  v46 = 1;
                v92 = v46;
              }
              MappedSystemVa = v83;
              Number = v81;
              *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v43;
            }
            LOBYTE(v13) = v92;
            v36 = v38;
          }
          while ( v38 );
          v5 = v84;
        }
        goto LABEL_113;
      }
      if ( *MappedSystemVa == -1
        && MappedSystemVa[1] == -1
        && MappedSystemVa[2] == -1
        && MappedSystemVa[3] == -1
        && MappedSystemVa[4] == -1
        && MappedSystemVa[5] == -1 )
      {
        v47 = 8;
        if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          v48 = *(_QWORD *)(BugCheckParameter2 + 3160);
          if ( v48 )
          {
            v49 = (_QWORD *)(v48 + 112LL * KeGetPcr()->Prcb.Number);
            v49[2] += (unsigned int)ByteCount;
            *v49 += (unsigned int)ByteCount;
            v50 = *(_QWORD *)(BugCheckParameter2 + 3160);
            if ( v50 )
            {
              v51 = 112LL * KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(v51 + v50 + 48);
            }
          }
        }
      }
      else
      {
        v47 = 2;
        if ( (v11->Private.Flags & 0x20000) == 0 && (v11->Private.NdisPacketFlags & 2) == 0 )
        {
          v52 = *(_QWORD *)(BugCheckParameter2 + 3160);
          if ( v52 )
          {
            v53 = (_QWORD *)(v52 + 112LL * KeGetPcr()->Prcb.Number);
            v53[3] += (unsigned int)ByteCount;
            *v53 += (unsigned int)ByteCount;
            v54 = *(_QWORD *)(BugCheckParameter2 + 3160);
            if ( v54 )
            {
              v55 = 112LL * KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(v55 + v54 + 40);
            }
          }
        }
      }
      v11->Private.Flags &= ~0x20000u;
    }
    v56 = *v5;
    if ( *v5 )
    {
      do
      {
        v57 = *(_QWORD *)(v56 + 424);
        if ( (v11->Private.Flags & 0x80u) == 0
          || *(_QWORD *)&v11->MacReserved[v11->Private.NdisPacketOobOffset + 24] != v56 )
        {
          if ( (v58 = *(_DWORD *)(v56 + 432), v59 = v58 & 0xA0, (v58 & 0xA0) != 0)
            || v47 == 8 && (v58 & 8) != 0
            || v47 == 2
            && ((v58 & 4) != 0
             || (v58 & 2) != 0
             && (Multicast = ethFindMulticast(*(unsigned int *)(v56 + 456), *(_QWORD *)(v56 + 448), 0LL, MappedSystemVa),
                 ByteCount = *(unsigned int *)v80,
                 Multicast)) )
          {
            v72 = (_BYTE)v92 == 0;
            v79 = v9 + 1;
            *(_BYTE *)((v81 << 12) + *(_QWORD *)(v56 + 816)) = 1;
            v61 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(BugCheckParameter2 + 1600);
            v62 = *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset);
            v63 = KeGetPcr()->Prcb.Number;
            v64 = *((_QWORD *)v61 + v63);
            *((_QWORD *)v61 + v63) = v11;
            if ( v72
              && (v65 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD, __int64))(v56 + 160)) != 0LL
              && (!v59 || v84[41]) )
            {
              v66 = *(struct _NET_BUFFER_LIST **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset);
              if ( v66 && v62 == -1073741670 )
              {
                ndisNblTrackerTransferOwnershipSingleNbl(
                  v66,
                  v61,
                  *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v56 + 680),
                  ByteCount);
                v65 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *, _QWORD, __int64))(v56 + 160);
              }
              v67 = v65(*(_QWORD *)(v56 + 32), v11, v65, ByteCount);
              v68 = v85;
              *((_DWORD *)v85 + 3) += v67;
            }
            else
            {
              *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = -1073741670;
              (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, _DWORD))(v56 + 128))(
                *(_QWORD *)(v56 + 32),
                v11,
                v83,
                14LL,
                v83 + 14,
                v11->Private.Head->ByteCount - 14,
                ByteCount - 14);
              *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = v62;
              v68 = v85;
            }
            if ( *((int *)v68 + 3) > 0 )
            {
              v69 = v92;
              if ( (*(_DWORD *)(v56 + 224) & 8) == 0 )
                v69 = 1;
              LOBYTE(v92) = v69;
            }
            ByteCount = *(unsigned int *)v80;
            v9 = v79;
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v64;
          }
        }
        MappedSystemVa = v83;
        v56 = v57;
      }
      while ( v57 );
      v5 = v84;
    }
    v20 = v85;
LABEL_113:
    v70 = *((_DWORD *)v20 + 3);
    if ( v70 )
    {
      v71 = _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 2, v70 + 1) + v70 + 1;
      v72 = v71 == 0;
      if ( v71 <= 0 )
        goto LABEL_119;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) == 0 )
        *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
    }
    else
    {
      v71 = 0;
      *((_DWORD *)v20 + 2) = 0;
    }
    v72 = v71 == 0;
LABEL_119:
    if ( v72 )
    {
      v73 = v87;
      --*(_DWORD *)&v11[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v73 + 8) == -1073741670 )
        goto LABEL_135;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v86 = 0LL;
        *((_DWORD *)v73 + 8) = 259;
        if ( (v11[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v11[-1].ProtocolReserved[4] == -1 )
          goto LABEL_130;
        v74 = v11;
        if ( *(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
          goto LABEL_125;
        (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(BugCheckParameter2 + 3784) + 224LL))(
          *(_QWORD *)(BugCheckParameter2 + 24),
          v11);
      }
      else
      {
        if ( *(_MDL **)((char *)&v11[1].Private.Head + v11->Private.NdisPacketOobOffset) )
        {
          *(_QWORD *)v86 = 0LL;
          *(unsigned int *)((char *)&v11->Private.Count + v11->Private.NdisPacketOobOffset) = 259;
          if ( (v11[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v11[-1].ProtocolReserved[4] != -1 )
          {
            v74 = v11;
LABEL_125:
            ndisReturnPacketToNetBufferList(BugCheckParameter2, v74);
            goto LABEL_135;
          }
LABEL_130:
          NDIS_FREE_XFER_DATA_PACKET(v11);
          goto LABEL_135;
        }
        *((_DWORD *)v73 + 8) = 0;
      }
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter2 + 1828), 1u);
    }
LABEL_135:
    v6 = (struct _NDIS_PACKET **)(v88 + 8);
    ++v82;
    v88 += 8LL;
    if ( v82 >= v91 )
      break;
    Number = v81;
    v9 = v79;
  }
  if ( v79 )
  {
    v75 = *v5;
    if ( *v5 )
    {
      v76 = v81 << 12;
      do
      {
        v77 = *(_QWORD *)(v75 + 816);
        v78 = *(_QWORD *)(v75 + 424);
        if ( *(_BYTE *)(v77 + v76) )
        {
          *(_BYTE *)(v77 + v76) = 0;
          (*(void (__fastcall **)(_QWORD))(v75 + 136))(*(_QWORD *)(v75 + 32));
        }
        v75 = v78;
      }
      while ( v78 );
    }
  }
LABEL_144:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v5[36], &LockState);
}
