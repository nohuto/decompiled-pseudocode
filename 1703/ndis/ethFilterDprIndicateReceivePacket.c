/*
 * XREFs of ethFilterDprIndicateReceivePacket @ 0x1C0062F50
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E720 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000E7D0 (NdisReleaseRWLock.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ethFindMulticast @ 0x1C006397C (ethFindMulticast.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0063A14 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ethFilterReceivePacketStats @ 0x1C0063B30 (ethFilterReceivePacketStats.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C00664D4 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C00696B0 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ethFilterDprIndicateReceivePacket(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  unsigned int Number; // ebp
  __int64 *v4; // r15
  struct _NDIS_PACKET **v5; // rbx
  bool v6; // sf
  struct _NDIS_RW_LOCK_EX *v9; // rcx
  int v10; // r14d
  UCHAR v11; // r8
  char v12; // r12
  struct _NDIS_PACKET *v13; // rbx
  int v14; // ecx
  _MDL *Head; // rsi
  char *v16; // rdx
  char *MappedSystemVa; // r11
  char *v18; // rax
  struct _MDL *Next; // rcx
  unsigned int ByteCount; // r10d
  struct _NDIS_STACK_RESERVED *v21; // r9
  __int64 v22; // rsi
  unsigned int v23; // r13d
  int v24; // r10d
  unsigned int v25; // ebp
  __int64 v26; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v27; // rdx
  __int64 v28; // r14
  struct _NET_BUFFER_LIST *v29; // rcx
  __int16 v30; // ax
  __int64 v31; // r8
  _QWORD *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // r14d
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // r12
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rdx
  unsigned int v42; // ebp
  __int64 v43; // rax
  __int64 v44; // r15
  struct _NET_BUFFER_LIST *v45; // rcx
  __int16 v46; // ax
  char v47; // al
  int v48; // r13d
  __int64 v49; // r8
  _QWORD *v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // r8
  _QWORD *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // r12
  int v59; // eax
  int v60; // ebp
  char Multicast; // al
  __int64 v62; // rdx
  unsigned int v63; // r14d
  __int64 v64; // rax
  __int64 v65; // r15
  struct _NET_BUFFER_LIST *v66; // rcx
  __int16 v67; // ax
  char v68; // al
  int v69; // ecx
  signed __int32 v70; // edx
  bool v71; // zf
  char *v72; // rcx
  struct _NDIS_PACKET *v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rbx
  char v78; // [rsp+40h] [rbp-98h]
  int v79; // [rsp+44h] [rbp-94h]
  unsigned int v80; // [rsp+48h] [rbp-90h]
  struct _NDIS_STACK_RESERVED *v81; // [rsp+50h] [rbp-88h]
  unsigned int v82; // [rsp+58h] [rbp-80h]
  char *v83; // [rsp+60h] [rbp-78h]
  __int64 *v84; // [rsp+68h] [rbp-70h]
  struct _NDIS_STACK_RESERVED *v85; // [rsp+70h] [rbp-68h] BYREF
  char *v86; // [rsp+78h] [rbp-60h]
  ULONG_PTR v87; // [rsp+80h] [rbp-58h]
  struct _LOCK_STATE_EX LockState; // [rsp+E0h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+E8h] [rbp+10h]
  unsigned int v90; // [rsp+F0h] [rbp+18h]
  unsigned int v91; // [rsp+F8h] [rbp+20h]

  v90 = a3;
  BugCheckParameter4 = a2;
  Number = KeGetPcr()->Prcb.Number;
  v4 = *(__int64 **)(BugCheckParameter2 + 400);
  v5 = (struct _NDIS_PACKET **)a2;
  v6 = *(int *)(BugCheckParameter2 + 124) < 0;
  v87 = a2;
  v84 = v4;
  v9 = (struct _NDIS_RW_LOCK_EX *)v4[36];
  v10 = 0;
  v79 = 0;
  v80 = Number;
  LockState.OldIrql = 2;
  v11 = v6;
  NdisAcquireRWLockRead(v9, &LockState, v11);
  v82 = 0;
  if ( !a3 )
    goto LABEL_153;
  v12 = 1;
  while ( 1 )
  {
    v13 = *v5;
    v14 = *(_DWORD *)&v13[-1].ProtocolReserved[4];
    if ( v14 != -1 && (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) == 0 )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)(BugCheckParameter2 + 3880),
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 5uLL, BugCheckParameter2, (ULONG_PTR)v13, BugCheckParameter4);
    }
    *(_DWORD *)&v13[-1].ProtocolReserved[4] = v14 + 1;
    NDIS_STACK_RESERVED_FROM_PACKET(v13, &v85);
    Head = v13->Private.Head;
    v16 = (char *)v13 + v13->Private.NdisPacketOobOffset;
    v86 = v16;
    if ( (Head->MdlFlags & 5) != 0 )
    {
      MappedSystemVa = (char *)Head->MappedSystemVa;
      v83 = MappedSystemVa;
    }
    else
    {
      v18 = (char *)MmMapLockedPages(Head, 0);
      v16 = v86;
      MappedSystemVa = v18;
      v83 = v18;
    }
    Next = Head->Next;
    ByteCount = Head->ByteCount;
    v91 = ByteCount;
    if ( Next )
    {
      do
      {
        ByteCount += Next->ByteCount;
        Next = Next->Next;
      }
      while ( Next );
      v91 = ByteCount;
    }
    v21 = v85;
    v81 = v85;
    *((_DWORD *)v85 + 2) = -1;
    *((_DWORD *)v21 + 3) = 0;
    *(_QWORD *)v21 = BugCheckParameter2;
    v13->Private.ValidCounts = 0;
    if ( *((_DWORD *)v16 + 8) != -1073741670 && (*(_DWORD *)(BugCheckParameter2 + 124) & 0x800) == 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) == 0 )
        *((_DWORD *)v16 + 8) = 0;
      v12 = 0;
    }
    v22 = v4[41];
    v78 = v12;
    if ( !v22 || *(_DWORD *)(v22 + 704) >= 6u )
    {
      if ( ByteCount < 0xE )
      {
        v48 = 32;
      }
      else
      {
        v12 = 1;
        if ( (*MappedSystemVa & 1) == 0 )
        {
          if ( (v13->Private.Flags & 0x20000) == 0 && (v13->Private.NdisPacketFlags & 2) == 0 )
          {
            v31 = *(_QWORD *)(BugCheckParameter2 + 3160);
            if ( v31 )
            {
              v32 = (_QWORD *)(v31 + 112LL * KeGetPcr()->Prcb.Number);
              v32[1] += ByteCount;
              *v32 += ByteCount;
            }
            v33 = *(_QWORD *)(BugCheckParameter2 + 3160);
            if ( v33 )
            {
              v34 = 112LL * KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(v34 + v33 + 32);
            }
          }
          v13->Private.Flags &= ~0x20000u;
          v35 = 0;
          if ( (v4[38] & 0xA4) != 0
            && (*(_DWORD *)((char *)v4 + 338) != *(_DWORD *)(MappedSystemVa + 2)
             || *((_WORD *)v4 + 168) != *(_WORD *)MappedSystemVa) )
          {
            v35 = 1;
          }
          v36 = *v4;
          if ( !*v4 )
            goto LABEL_122;
          while ( 1 )
          {
            v37 = *(_DWORD *)(v36 + 432);
            v38 = *(_QWORD *)(v36 + 424);
            v39 = v37 & 0xA0;
            if ( (v37 & 0xA0) != 0 )
              break;
            if ( !v35 )
            {
              v40 = v39 + 1;
              if ( ((unsigned __int8)v37 & (unsigned __int8)(v39 + 1)) != 0 )
                goto LABEL_56;
            }
LABEL_72:
            v36 = v38;
            if ( !v38 )
            {
              v4 = v84;
              goto LABEL_121;
            }
          }
          v40 = 1;
LABEL_56:
          if ( (v13->Private.Flags & 0x80u) == 0
            || *(_QWORD *)&v13->MacReserved[v13->Private.NdisPacketOobOffset + 24] != v36 )
          {
            v79 += v40;
            *(_BYTE *)((Number << 12) + *(_QWORD *)(v36 + 816)) = v40;
            v41 = *(_QWORD *)(BugCheckParameter2 + 1600);
            v42 = *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset);
            v43 = KeGetPcr()->Prcb.Number;
            v44 = *(_QWORD *)(v41 + 8 * v43);
            *(_QWORD *)(v41 + 8 * v43) = v13;
            if ( v78 || !*(_QWORD *)(v36 + 160) || v39 && !v84[41] )
            {
              *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = -1073741670;
              (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, unsigned int))(v36 + 128))(
                *(_QWORD *)(v36 + 32),
                v13,
                MappedSystemVa,
                14LL,
                MappedSystemVa + 14,
                v13->Private.Head->ByteCount - 14,
                ByteCount - 14);
              v21 = v81;
              *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = v42;
            }
            else
            {
              v45 = *(struct _NET_BUFFER_LIST **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset);
              if ( v45 && v42 == -1073741670 )
                ndisNblTrackerTransferOwnershipSingleNbl(
                  v45,
                  0LL,
                  *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v36 + 680),
                  (unsigned __int8)v21);
              v46 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v36 + 160))(*(_QWORD *)(v36 + 32), v13);
              v21 = v81;
              *((_DWORD *)v81 + 3) += v46;
            }
            if ( *((int *)v21 + 3) > 0 )
            {
              v47 = v78;
              if ( (*(_DWORD *)(v36 + 224) & 8) == 0 )
                v47 = 1;
              v78 = v47;
            }
            MappedSystemVa = v83;
            ByteCount = v91;
            Number = v80;
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v44;
          }
          goto LABEL_72;
        }
        if ( *MappedSystemVa == -1
          && MappedSystemVa[1] == -1
          && MappedSystemVa[2] == -1
          && MappedSystemVa[3] == -1
          && MappedSystemVa[4] == -1
          && MappedSystemVa[5] == -1 )
        {
          v48 = 8;
          if ( (v13->Private.Flags & 0x20000) == 0 && (v13->Private.NdisPacketFlags & 2) == 0 )
          {
            v49 = *(_QWORD *)(BugCheckParameter2 + 3160);
            if ( v49 )
            {
              v50 = (_QWORD *)(v49 + 112LL * KeGetPcr()->Prcb.Number);
              v50[2] += ByteCount;
              *v50 += ByteCount;
            }
            v51 = *(_QWORD *)(BugCheckParameter2 + 3160);
            if ( v51 )
            {
              v52 = 112LL * KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(v52 + v51 + 48);
            }
          }
        }
        else
        {
          v48 = 2;
          if ( (v13->Private.Flags & 0x20000) == 0 && (v13->Private.NdisPacketFlags & 2) == 0 )
          {
            v53 = *(_QWORD *)(BugCheckParameter2 + 3160);
            if ( v53 )
            {
              v54 = (_QWORD *)(v53 + 112LL * KeGetPcr()->Prcb.Number);
              v54[3] += ByteCount;
              *v54 += ByteCount;
            }
            v55 = *(_QWORD *)(BugCheckParameter2 + 3160);
            if ( v55 )
            {
              v56 = 112LL * KeGetPcr()->Prcb.Number;
              ++*(_QWORD *)(v56 + v55 + 40);
            }
          }
        }
        v13->Private.Flags &= ~0x20000u;
      }
      v57 = *v4;
      if ( !*v4 )
        goto LABEL_121;
      while ( 1 )
      {
        v58 = *(_QWORD *)(v57 + 424);
        if ( (v13->Private.Flags & 0x80u) == 0
          || *(_QWORD *)&v13->MacReserved[v13->Private.NdisPacketOobOffset + 24] != v57 )
        {
          v59 = *(_DWORD *)(v57 + 432);
          v60 = v59 & 0xA0;
          if ( (v59 & 0xA0) != 0 || v48 == 8 && (v59 & 8) != 0 )
          {
LABEL_104:
            v79 = v10 + 1;
            *(_BYTE *)((v80 << 12) + *(_QWORD *)(v57 + 816)) = 1;
            v62 = *(_QWORD *)(BugCheckParameter2 + 1600);
            v63 = *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset);
            v64 = KeGetPcr()->Prcb.Number;
            v65 = *(_QWORD *)(v62 + 8 * v64);
            *(_QWORD *)(v62 + 8 * v64) = v13;
            if ( v78 || !*(_QWORD *)(v57 + 160) || v60 && !v84[41] )
            {
              *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = -1073741670;
              (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, unsigned int))(v57 + 128))(
                *(_QWORD *)(v57 + 32),
                v13,
                v83,
                14LL,
                v83 + 14,
                v13->Private.Head->ByteCount - 14,
                ByteCount - 14);
              v21 = v81;
              *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = v63;
            }
            else
            {
              v66 = *(struct _NET_BUFFER_LIST **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset);
              if ( v66 && v63 == -1073741670 )
                ndisNblTrackerTransferOwnershipSingleNbl(
                  v66,
                  0LL,
                  *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v57 + 680),
                  (unsigned __int8)v21);
              v67 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v57 + 160))(*(_QWORD *)(v57 + 32), v13);
              v21 = v81;
              *((_DWORD *)v81 + 3) += v67;
            }
            if ( *((int *)v21 + 3) > 0 )
            {
              v68 = v78;
              if ( (*(_DWORD *)(v57 + 224) & 8) == 0 )
                v68 = 1;
              v78 = v68;
            }
            ByteCount = v91;
            v10 = v79;
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v65;
            goto LABEL_119;
          }
          if ( v48 == 2 )
          {
            if ( (v59 & 4) != 0 )
              goto LABEL_104;
            if ( (v59 & 2) != 0 )
            {
              Multicast = ethFindMulticast(*(unsigned int *)(v57 + 456), *(_QWORD *)(v57 + 448), 0LL, MappedSystemVa);
              ByteCount = v91;
              if ( Multicast )
                goto LABEL_104;
              v21 = v81;
            }
          }
        }
LABEL_119:
        MappedSystemVa = v83;
        v57 = v58;
        if ( !v58 )
        {
          v4 = v84;
          goto LABEL_121;
        }
      }
    }
    if ( (ByteCount >= 0xE || (v4[38] & 0xA0) != 0)
      && ((v13->Private.Flags & 0x80u) == 0 || *(_QWORD *)&v13->MacReserved[v13->Private.NdisPacketOobOffset + 24] != v22) )
    {
      v23 = v91;
      v79 = v10 + 1;
      *(_BYTE *)((Number << 12) + *(_QWORD *)(v22 + 816)) = 1;
      v24 = *(_DWORD *)(v22 + 432) & 0xA0;
      if ( (v13->Private.Flags & 0x20000) == 0 && (v13->Private.NdisPacketFlags & 2) == 0 )
        ethFilterReceivePacketStats(BugCheckParameter2, MappedSystemVa, v23);
      v13->Private.Flags &= ~0x20000u;
      v25 = *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset);
      v26 = KeGetPcr()->Prcb.Number;
      v27 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(BugCheckParameter2 + 1600);
      v28 = *((_QWORD *)v27 + v26);
      *((_QWORD *)v27 + v26) = v13;
      if ( v12 || !*(_QWORD *)(v22 + 160) || v24 && !v4[41] )
      {
        *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = -1073741670;
        (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, char *, __int64, char *, ULONG, unsigned int))(v22 + 128))(
          *(_QWORD *)(v22 + 32),
          v13,
          MappedSystemVa,
          14LL,
          MappedSystemVa + 14,
          v13->Private.Head->ByteCount - 14,
          v23 - 14);
        v21 = v81;
        *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = v25;
      }
      else
      {
        v29 = *(struct _NET_BUFFER_LIST **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset);
        if ( v29 && v25 == -1073741670 )
          ndisNblTrackerTransferOwnershipSingleNbl(
            v29,
            v27,
            *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v22 + 680),
            (unsigned __int8)v21);
        v30 = (*(__int64 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v22 + 160))(*(_QWORD *)(v22 + 32), v13);
        v21 = v81;
        *((_DWORD *)v81 + 3) += v30;
      }
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v28;
    }
LABEL_121:
    v12 = 1;
LABEL_122:
    v69 = *((_DWORD *)v21 + 3);
    if ( v69 )
    {
      v70 = _InterlockedExchangeAdd((volatile signed __int32 *)v21 + 2, v69 + 1) + v69 + 1;
      v71 = v70 == 0;
      if ( v70 <= 0 )
        goto LABEL_128;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) == 0 )
        *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
    }
    else
    {
      v70 = 0;
      *((_DWORD *)v21 + 2) = 0;
    }
    v71 = v70 == 0;
LABEL_128:
    if ( v71 )
    {
      v72 = v86;
      --*(_DWORD *)&v13[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v72 + 8) == -1073741670 )
        goto LABEL_144;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v85 = 0LL;
        *((_DWORD *)v72 + 8) = 259;
        if ( (v13[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v13[-1].ProtocolReserved[4] == -1 )
          goto LABEL_133;
        v73 = v13;
        if ( !*(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) )
        {
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(*(_QWORD *)(BugCheckParameter2 + 3784) + 224LL))(
            *(_QWORD *)(BugCheckParameter2 + 24),
            v13);
          goto LABEL_144;
        }
        goto LABEL_140;
      }
      if ( *(_MDL **)((char *)&v13[1].Private.Head + v13->Private.NdisPacketOobOffset) )
      {
        *(_QWORD *)v85 = 0LL;
        *(unsigned int *)((char *)&v13->Private.Count + v13->Private.NdisPacketOobOffset) = 259;
        if ( (v13[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v13[-1].ProtocolReserved[4] == -1 )
        {
LABEL_133:
          NDIS_FREE_XFER_DATA_PACKET(v13);
          goto LABEL_144;
        }
        v73 = v13;
LABEL_140:
        ndisReturnPacketToNetBufferList(BugCheckParameter2, v73);
        goto LABEL_144;
      }
      *((_DWORD *)v72 + 8) = 0;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter2 + 1828), 1u);
    }
LABEL_144:
    v5 = (struct _NDIS_PACKET **)(v87 + 8);
    ++v82;
    v87 += 8LL;
    if ( v82 >= v90 )
      break;
    Number = v80;
    v10 = v79;
  }
  if ( v79 )
  {
    v74 = *v4;
    if ( *v4 )
    {
      v75 = v80 << 12;
      do
      {
        v76 = *(_QWORD *)(v74 + 816);
        v77 = *(_QWORD *)(v74 + 424);
        if ( *(_BYTE *)(v76 + v75) )
        {
          *(_BYTE *)(v76 + v75) = 0;
          (*(void (__fastcall **)(_QWORD))(v74 + 136))(*(_QWORD *)(v74 + 32));
        }
        v74 = v77;
      }
      while ( v77 );
    }
  }
LABEL_153:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v4[36], &LockState);
}
