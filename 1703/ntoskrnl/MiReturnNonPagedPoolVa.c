/*
 * XREFs of MiReturnNonPagedPoolVa @ 0x1401260D0
 * Callers:
 *     MiAllocatePoolPages @ 0x1400212B0 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     MiFreePoolPages @ 0x1400AA840 (MiFreePoolPages.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     MiScrubNonPagedPool @ 0x1406B6538 (MiScrubNonPagedPool.c)
 * Callees:
 *     MiReturnSystemVa @ 0x1400822DC (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiReturnNonPagedPoolCharges @ 0x140126068 (MiReturnNonPagedPoolCharges.c)
 *     MiNonPagedPoolToNode @ 0x140126720 (MiNonPagedPoolToNode.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140154988 (MiSignalNonPagedPoolWatchers.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14020F010 (MiLogPerfMemoryRangeEvent.c)
 *     MiJoinBitmapPages @ 0x140216A20 (MiJoinBitmapPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiReturnNonPagedPoolVa(ULONG_PTR a1, unsigned __int64 a2)
{
  _QWORD *v4; // r12
  unsigned __int64 Region; // rax
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // r13
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  _SLIST_HEADER *v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  _SLIST_HEADER *v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r15
  _SLIST_HEADER *v20; // rdx
  unsigned __int64 *v21; // r9
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r10
  unsigned __int64 v27; // r11
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int64 v32; // r10
  char v33; // r9
  unsigned __int8 CurrentIrql; // r12
  __int64 v35; // r15
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  _QWORD *v40; // rbx
  _SLIST_HEADER *v41; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v42; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v43; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v44; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v46; // [rsp+48h] [rbp-B8h]
  _SLIST_HEADER *v47; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v48; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v49; // [rsp+60h] [rbp-A0h]
  __int64 v50; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v51; // [rsp+70h] [rbp-90h]
  unsigned __int64 v52; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v53; // [rsp+80h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v55[3]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v56; // [rsp+B8h] [rbp-48h]
  _QWORD *v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v59; // [rsp+D4h] [rbp-2Ch]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  __int64 v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]

  memset(v55, 0, sizeof(v55));
  v56 = 0LL;
  v51 = 0LL;
  v4 = 0LL;
  v41 = &qword_14036C1C8[25 * (unsigned int)MiNonPagedPoolToNode(a1)];
  v46 = (a1 - v41[20].Alignment) >> 12;
  v45 = v46 & 0xFFFFFFFFFFFFFE00uLL;
  v52 = a2 + v46;
  v44 = (a2 + v46 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  Region = v41[23].Region;
  v60 = 20LL;
  v58 = 0;
  v59 = 0;
  v6 = Region + 8 * (v44 >> 6);
  v61 = 0LL;
  v62 = 0LL;
  v42 = 0LL;
  LockHandle.LockQueue.Lock = &v41[19].Alignment;
  v7 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v8 = 0LL;
  v43 = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  LOBYTE(Region) = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = Region;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &v41[19]);
  }
  else
  {
    v9 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&v41[19], (__int64)&LockHandle);
    if ( v9 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v9);
  }
  RtlClearBitsEx((__int64)&v41[23], v46, a2);
  v50 = MI_READ_PTE_LOCK_FREE(v7);
  if ( (v50 & 0x80u) == 0LL )
  {
    v12 = v41;
    v13 = 1LL;
  }
  else
  {
    v10 = a2;
    v11 = (v46 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    if ( (v52 & 0xFFFFFFFFFFFFFE00uLL) > v11 )
      v10 = v11 + a2 - (v52 & 0xFFFFFFFFFFFFFE00uLL);
    v12 = v41;
    v13 = 0LL;
    v41[18].Alignment -= v10;
  }
  v12[17].Alignment -= a2;
  v14 = _InterlockedExchangeAdd64(&qword_14036BD18, -(__int64)a2);
  if ( v14 >= MiState[0] - 5120 && v14 - a2 < MiState[0] - 5120
    || v14 >= MiState[0] - 2048 && v14 - a2 < MiState[0] - 2048 )
  {
    MiSignalNonPagedPoolWatchers();
  }
  v15 = (a2 + v46 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  v16 = v41;
  v17 = v46 & 0xFFFFFFFFFFFFFE00uLL;
  v18 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v19 = v44;
  v20 = &v41[v13 + 21];
  v49 = v6 & 0xFFFFFFFFFFFFF000uLL;
  v47 = v20;
  v21 = &v41[24].Alignment + v13;
  v48 = v44;
  v22 = -1LL;
  v53 = v21;
  if ( v44 > v45 )
  {
    while ( 1 )
    {
      v23 = v19 - 512;
      v24 = 0LL;
      while ( 1 )
      {
        v6 -= 8LL;
        if ( *(_QWORD *)v6 )
          break;
        if ( (unsigned __int64)++v24 >= 8 )
          goto LABEL_25;
      }
      if ( v19 == v15 )
      {
        v49 = v6 & 0xFFFFFFFFFFFFF000uLL;
      }
      else if ( v23 <= v17 )
      {
        v22 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      v6 = v6 + 8 * v24 - 56;
LABEL_25:
      if ( v24 == 8 )
      {
        v42 = v16[20].Alignment + (v23 << 12);
        v57 = (_QWORD *)(((v42 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        v25 = MI_READ_PTE_LOCK_FREE(v57);
        *(_QWORD *)v6 = -1LL;
        *(_QWORD *)(v6 + 8) = -1LL;
        *(_QWORD *)(v6 + 16) = -1LL;
        *(_QWORD *)(v6 + 24) = -1LL;
        *(_QWORD *)(v6 + 32) = -1LL;
        *(_QWORD *)(v6 + 40) = -1LL;
        *(_QWORD *)(v6 + 48) = -1LL;
        *(_QWORD *)(v6 + 56) = -1LL;
        v28 = v6 + 64;
        v50 = v25;
        if ( v19 == v44 )
        {
          v29 = v28;
          if ( (v28 & 0xFFF) != 0 )
          {
            while ( !*(_QWORD *)v29 )
            {
              v29 += 8LL;
              if ( (v29 & 0xFFF) == 0 )
                goto LABEL_34;
            }
            v49 = v29 & 0xFFFFFFFFFFFFF000uLL;
          }
        }
LABEL_34:
        v6 = v28 - 64;
        if ( v23 <= v45 )
        {
          v22 = v6;
          if ( (v6 & 0xFFF) != 0 )
          {
            while ( 1 )
            {
              v22 -= 8LL;
              if ( *(_QWORD *)v22 )
                break;
              if ( (v22 & 0xFFF) == 0 )
              {
                if ( !*(_QWORD *)v22 )
                  goto LABEL_40;
                break;
              }
            }
            v22 = (v22 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
        }
LABEL_40:
        _bittestandset64((signed __int64 *)v47->Region, v27);
        v30 = v26 + 0x200000;
        if ( v43 )
          v30 = v43;
        v43 = v30;
        v31 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v50) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( v33 < 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v35 = 512LL;
          do
          {
            MiLockPageAtDpcInline(v31);
            *(_BYTE *)(v31 + 34) = *(_BYTE *)(v31 + 34) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v31 += 48LL;
            --v35;
          }
          while ( v35 );
          __writecr8(CurrentIrql);
          v36 = v51;
          v19 = v48;
          v4 = (_QWORD *)(v31 - 24576);
          v51 = v4;
          *v4 = v36;
          if ( v23 >= v46 && v48 <= v52 )
          {
            v16 = v41;
          }
          else
          {
            v16 = v41;
            --v41[17].Region;
          }
          v8 = v42;
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
            MiLogPerfMemoryRangeEvent(v42, 0LL, 10LL, 512LL);
          v37 = v57;
          *v57 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v37) )
            MiWritePteShadow(v38);
          MiInsertTbFlushEntry((__int64)&v58, v42, 1LL, 1);
          v20 = v47;
          v15 = v44;
          v21 = v53;
          goto LABEL_56;
        }
        MiInsertTbFlushEntry((__int64)&v58, v32, 512LL, 0);
        v16 = v41;
        v20 = v47;
        v15 = v44;
        v21 = v53;
      }
      else
      {
        _bittestandreset64((signed __int64 *)v20->Region, (v19 - 512) >> 9);
        if ( v23 < *v21 )
          *v21 = v23;
      }
      v8 = v42;
LABEL_56:
      v17 = v46 & 0xFFFFFFFFFFFFFE00uLL;
      v19 -= 512LL;
      v48 = v19;
      if ( v19 <= v45 )
      {
        v18 = v49;
        break;
      }
    }
  }
  if ( v18 > v22 )
    MiJoinBitmapPages(v17, v22, (v18 - v22) >> 12);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v8 )
  {
    MiReturnSystemVa(v8, v43, 5, (__int64)&v58);
    v39 = v55[0];
    if ( v4 )
    {
      do
      {
        v40 = (_QWORD *)*v4;
        MiFreeLargePageMemory((__int64)(v4 + 0xB000000000LL) / 48, 1LL, 0LL);
        v39 += 512LL;
        v4 = v40;
      }
      while ( v40 );
      v55[0] = v39;
    }
    if ( v39 )
    {
      v56 = v39;
      MiReturnNonPagedPoolCharges(v55, 0);
    }
  }
}
