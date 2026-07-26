/*
 * XREFs of ndisMIndicatePacket @ 0x1C0064E80
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C00069C0 (NdisAcquireRWLockRead.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     NdisGetFirstBufferFromPacket @ 0x1C005B260 (NdisGetFirstBufferFromPacket.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0064BA0 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1C0067840 (-ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE_.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C006B734 (ndisReturnPacketToNetBufferList.c)
 */

void __fastcall ndisMIndicatePacket(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  unsigned int Number; // eax
  struct _NDIS_PACKET **v6; // rbx
  char v7; // r15
  struct _NDIS_RW_LOCK_EX *v8; // rcx
  struct _NDIS_PACKET *v9; // rbx
  __int64 v10; // rcx
  struct _NDIS_STACK_RESERVED *v11; // r13
  char *v12; // r14
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // rdx
  struct _NDIS_STACK_RESERVED *v18; // r12
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 v22; // rax
  struct NDIS_NBL_TRACKER_HANDLE__ *v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rax
  __int16 (__fastcall *v27)(_QWORD, struct _NDIS_PACKET *); // r8
  struct _NET_BUFFER_LIST *v28; // rcx
  int v29; // ecx
  __int64 v30; // rdx
  bool v31; // zf
  struct _NDIS_PACKET *v32; // rdx
  _QWORD *v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rbx
  unsigned int v38; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-45h]
  unsigned int v40; // [rsp+48h] [rbp-41h]
  struct _NDIS_STACK_RESERVED *v41; // [rsp+50h] [rbp-39h] BYREF
  _QWORD *v42; // [rsp+58h] [rbp-31h]
  unsigned int v43; // [rsp+60h] [rbp-29h]
  ULONG_PTR v44; // [rsp+68h] [rbp-21h]
  int v45; // [rsp+70h] [rbp-19h] BYREF
  __int64 v46; // [rsp+78h] [rbp-11h] BYREF
  __int64 v47; // [rsp+80h] [rbp-9h]
  __int64 v48; // [rsp+88h] [rbp-1h]
  struct _NDIS_STACK_RESERVED *v49; // [rsp+90h] [rbp+7h]
  struct _MDL *v50; // [rsp+98h] [rbp+Fh] BYREF
  struct _LOCK_STATE_EX LockState; // [rsp+F0h] [rbp+67h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+F8h] [rbp+6Fh]
  unsigned int v53; // [rsp+100h] [rbp+77h]
  int v54; // [rsp+108h] [rbp+7Fh]

  v53 = a3;
  BugCheckParameter4 = a2;
  Number = KeGetPcr()->Prcb.Number;
  v6 = (struct _NDIS_PACKET **)a2;
  v42 = *(_QWORD **)(BugCheckParameter2 + 400);
  v44 = a2;
  v7 = 0;
  v54 = 0;
  v8 = (struct _NDIS_RW_LOCK_EX *)v42[36];
  v40 = Number;
  NdisAcquireRWLockRead(v8, &LockState, 0);
  v39 = 0;
  if ( !a3 )
  {
    v33 = v42;
    goto LABEL_60;
  }
  do
  {
    v9 = *v6;
    ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
    NDIS_STACK_RESERVED_FROM_PACKET(v9, &v41);
    v11 = v41;
    v49 = v41;
    if ( *((_DWORD *)v41 + 2) )
    {
      DbgPrintEx(
        0x78u,
        0,
        " ***NDIS*** : Miniport %Z - %s\n",
        *(_QWORD *)(BugCheckParameter2 + 3880),
        "Indicating packet not owned by it");
      KeBugCheckEx(0x7Cu, 0x12uLL, BugCheckParameter2, (ULONG_PTR)v9, BugCheckParameter4);
    }
    v12 = (char *)v9 + v9->Private.NdisPacketOobOffset;
    NdisGetFirstBufferFromPacket(v10, &v50, &v46, &v45, &v38);
    if ( (v9->Private.Flags & 0x20000) == 0 && (v9->Private.NdisPacketFlags & 2) == 0 )
    {
      v13 = *(_QWORD *)(BugCheckParameter2 + 3160);
      if ( v13 )
      {
        v14 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v14 + v13 + 32);
        v15 = *(_QWORD *)(BugCheckParameter2 + 3160);
        if ( v15 )
        {
          v16 = v38;
          v17 = (_QWORD *)(v15 + 112LL * KeGetPcr()->Prcb.Number);
          v17[1] += v38;
          *v17 += v16;
        }
      }
    }
    v9->Private.Flags &= ~0x20000u;
    *((_DWORD *)v11 + 2) = -1;
    v18 = v41;
    *((_DWORD *)v41 + 3) = 0;
    *(_QWORD *)v18 = BugCheckParameter2;
    v9->Private.ValidCounts = 0;
    if ( *((_DWORD *)v12 + 8) == -1073741670 || (*(_DWORD *)(BugCheckParameter2 + 124) & 0x800) != 0 )
    {
      v19 = 1LL;
      v7 = 1;
    }
    else
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) == 0 )
        *((_DWORD *)v12 + 8) = 0;
      v19 = 1LL;
    }
    v20 = *v42;
    if ( *v42 )
    {
      v21 = v40 << 12;
      do
      {
        v22 = *(_QWORD *)(v20 + 424);
        ++v54;
        v48 = v22;
        *(_BYTE *)(*(_QWORD *)(v20 + 816) + v21) = 1;
        v23 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(BugCheckParameter2 + 1600);
        v24 = *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset);
        v25 = KeGetPcr()->Prcb.Number;
        v43 = v24;
        v26 = *((_QWORD *)v23 + v25);
        v47 = v26;
        LODWORD(v26) = KeGetPcr()->Prcb.Number;
        *((_QWORD *)v23 + v26) = v9;
        if ( v7 || (v27 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v20 + 160)) == 0LL )
        {
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = -1073741670;
          (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v20 + 128))(*(_QWORD *)(v20 + 32), v9);
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = v43;
        }
        else
        {
          v28 = *(struct _NET_BUFFER_LIST **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset);
          if ( v28 && v24 == -1073741670 )
          {
            ndisNblTrackerTransferOwnershipSingleNbl(v28, v23, *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v20 + 680), 0x9Au);
            v27 = *(__int16 (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(v20 + 160);
          }
          *((_DWORD *)v18 + 3) += v27(*(_QWORD *)(v20 + 32), v9);
        }
        v19 = 1LL;
        if ( *((int *)v18 + 3) > 0 && (*(_DWORD *)(v20 + 224) & 8) == 0 )
          v7 = 1;
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) = v47;
        v20 = v48;
      }
      while ( v48 );
      v11 = v49;
    }
    v29 = *((_DWORD *)v18 + 3);
    v7 = 0;
    if ( v29 )
    {
      v30 = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, v29 + 1) + v29 + 1);
      v31 = (_DWORD)v30 == 0;
      if ( (int)v30 <= 0 )
        goto LABEL_34;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) == 0 )
        *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
    }
    else
    {
      v30 = 0LL;
      *((_DWORD *)v11 + 2) = 0;
    }
    v31 = (_DWORD)v30 == 0;
LABEL_34:
    if ( v31 )
    {
      --*(_DWORD *)&v9[-1].ProtocolReserved[4];
      if ( *((_DWORD *)v12 + 8) == -1073741670 )
        goto LABEL_50;
      if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x40000) != 0 )
      {
        *(_QWORD *)v41 = 0LL;
        *((_DWORD *)v12 + 8) = 259;
        if ( (v9[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v9[-1].ProtocolReserved[4] == -1 )
          goto LABEL_45;
        v32 = v9;
        if ( *(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
          goto LABEL_40;
        (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *, __int64))(*(_QWORD *)(BugCheckParameter2 + 3784) + 224LL))(
          *(_QWORD *)(BugCheckParameter2 + 24),
          v9,
          1LL);
      }
      else
      {
        if ( *(_MDL **)((char *)&v9[1].Private.Head + v9->Private.NdisPacketOobOffset) )
        {
          *(_QWORD *)v41 = 0LL;
          *(unsigned int *)((char *)&v9->Private.Count + v9->Private.NdisPacketOobOffset) = 259;
          if ( (v9[-1].Reserved[1] & 1) == 0 || *(_DWORD *)&v9[-1].ProtocolReserved[4] != -1 )
          {
            v32 = v9;
LABEL_40:
            ndisReturnPacketToNetBufferList(BugCheckParameter2, v32);
            goto LABEL_50;
          }
LABEL_45:
          NDIS_FREE_XFER_DATA_PACKET(v9);
          goto LABEL_50;
        }
        *((_DWORD *)v12 + 8) = 0;
      }
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 120) & 0x8000) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter2 + 1828), 1u);
    }
LABEL_50:
    v6 = (struct _NDIS_PACKET **)(v44 + 8);
    ++v39;
    v44 += 8LL;
  }
  while ( v39 < v53 );
  v33 = v42;
  if ( v54 )
  {
    v34 = *v42;
    if ( *v42 )
    {
      v35 = v40 << 12;
      do
      {
        v36 = *(_QWORD *)(v34 + 816);
        v37 = *(_QWORD *)(v34 + 424);
        if ( *(_BYTE *)(v36 + v35) )
        {
          *(_BYTE *)(v36 + v35) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(v34 + 136))(*(_QWORD *)(v34 + 32), v30, v19);
        }
        v34 = v37;
      }
      while ( v37 );
    }
  }
LABEL_60:
  NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v33[36], &LockState);
}
