/*
 * XREFs of MiZeroPage @ 0x14004E9F0
 * Callers:
 *     MiZeroLargePages @ 0x140135010 (MiZeroLargePages.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     MiLargePageFreeToZero @ 0x14010FA20 (MiLargePageFreeToZero.c)
 *     MiInsertLargeTbFlushEntry @ 0x140110068 (MiInsertLargeTbFlushEntry.c)
 *     MiCompressTbFlushList @ 0x140112EA0 (MiCompressTbFlushList.c)
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 *     MiFreeUltraMapping @ 0x1401559FC (MiFreeUltraMapping.c)
 *     MiSetZeroPageThreadPriority @ 0x14015C5E0 (MiSetZeroPageThreadPriority.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 *     KeZeroPages @ 0x140184D60 (KeZeroPages.c)
 *     MiFreeZeroPageSlistSufficient @ 0x14022A49C (MiFreeZeroPageSlistSufficient.c)
 *     HvlNotifyPageHeat @ 0x140294980 (HvlNotifyPageHeat.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPage(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // edi
  int v10; // r14d
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  char v18; // al
  __int64 v19; // rdi
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  unsigned int v22; // r10d
  int v23; // r9d
  char v24; // r11
  __int64 v25; // r12
  __int64 v26; // rbx
  unsigned __int64 i; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  __int64 *v31; // r9
  __int64 v32; // rax
  unsigned __int64 v33; // r8
  __int64 *v34; // r8
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // r14
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // r11
  unsigned int v43; // ebx
  __int64 v44; // rdi
  unsigned int v45; // ebx
  unsigned int v46; // edi
  __int64 v47; // rsi
  unsigned __int64 v48; // rsi
  char v49; // [rsp+20h] [rbp-198h]
  unsigned int v50; // [rsp+24h] [rbp-194h]
  int v51; // [rsp+28h] [rbp-190h]
  unsigned int v52; // [rsp+2Ch] [rbp-18Ch]
  int v53; // [rsp+40h] [rbp-178h]
  int v54; // [rsp+44h] [rbp-174h]
  struct _KTHREAD *v56; // [rsp+50h] [rbp-168h]
  int v57; // [rsp+58h] [rbp-160h]
  unsigned int v58; // [rsp+5Ch] [rbp-15Ch]
  __int64 v59; // [rsp+60h] [rbp-158h]
  BOOL v61; // [rsp+70h] [rbp-148h]
  __int64 v62; // [rsp+78h] [rbp-140h]
  PVOID P; // [rsp+80h] [rbp-138h]
  unsigned __int8 CurrentIrql; // [rsp+88h] [rbp-130h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-128h] BYREF
  int v66; // [rsp+A8h] [rbp-110h]
  int v67; // [rsp+ACh] [rbp-10Ch]
  unsigned __int64 v68; // [rsp+B0h] [rbp-108h] BYREF
  int v69; // [rsp+C0h] [rbp-F8h] BYREF
  __int16 v70; // [rsp+C4h] [rbp-F4h]
  __int64 v71; // [rsp+C8h] [rbp-F0h]
  __int64 v72; // [rsp+D0h] [rbp-E8h]
  _QWORD Base[21]; // [rsp+D8h] [rbp-E0h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0LL;
  v59 = 0LL;
  v4 = *(_QWORD *)(a1 + 72);
  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(unsigned int *)(v5 + 64);
  v58 = v7;
  if ( (unsigned int)v7 >= 3 )
  {
    v8 = 1LL;
  }
  else
  {
    v8 = MiLargePageSizes[v7];
    v3 = 0LL;
  }
  v62 = v8;
  if ( *(_BYTE *)(a1 + 210) )
  {
    v8 = 512LL;
    v62 = 512LL;
    if ( !(_DWORD)v7 )
    {
      v3 = *(_QWORD *)(a1 + 216);
      v59 = v3;
      v6 = *(_QWORD *)(v3 + 176) + ((unsigned __int64)*(unsigned __int16 *)(a1 + 208) << 21);
      v5 = v3;
    }
  }
  KeZeroPages(v6, v8 << 12);
  v54 = 1;
  v9 = 1;
  v53 = 1;
  v10 = 0;
  v51 = 0;
  v50 = 0;
  v11 = 0LL;
  v52 = 0;
  CurrentThread = KeGetCurrentThread();
  v56 = CurrentThread;
  P = 0LL;
  if ( v3 )
  {
    v10 = 1;
    v4 = *(_QWORD *)(v3 + 168);
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(qword_14038A0D0 + 8176 + 8256LL * *(unsigned int *)(v3 + 184)),
      &LockHandle);
    CurrentThread = v56;
  }
  if ( (HvlEnlightenments & 0x400000) != 0 && !CurrentThread->Priority && !*(_BYTE *)(a1 + 210) && !*(_BYTE *)(v5 + 68) )
  {
    v50 = 1;
    v52 = MiSetZeroPageThreadPriority(a2, CurrentThread, 1LL);
    --v56->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a2 + 184, 0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v57 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      v13 = (unsigned int)(v57 + 1);
      v57 = v13;
      if ( ((unsigned int)v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
    while ( *(__int64 *)(v4 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) );
  }
  if ( v3 )
  {
    v14 = 0;
    v54 = 0;
    if ( *(_BYTE *)(v5 + 68) != 1 )
    {
      if ( ++*(_DWORD *)(v3 + 192) == 512 )
      {
        v14 = 1;
        v54 = 1;
      }
      else
      {
        v53 = 0;
      }
    }
    v9 = v14;
    if ( v53 == 1 )
    {
      v15 = *(_DWORD *)(v3 + 188);
      if ( v15 == 1 )
      {
        v16 = *(_QWORD *)(v3 + 72);
        v17 = *(_QWORD **)(v3 + 80);
        if ( *(_QWORD *)(v16 + 8) != v3 + 72 || *v17 != v3 + 72 )
          __fastfail(3u);
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        v9 = 1;
        P = (PVOID)v3;
      }
      else
      {
        *(_DWORD *)(v3 + 188) = v15 - 1;
      }
    }
  }
  v18 = *(_BYTE *)(v5 + 68);
  v49 = v18;
  if ( v9 == 1 )
  {
    if ( v10 == 1 )
    {
      v19 = a1;
      MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 176LL));
LABEL_100:
      v18 = v49;
      goto LABEL_101;
    }
    v20 = *(unsigned int *)(a1 + 64);
    v21 = *(_QWORD *)(a1 + 32);
    v22 = 0;
    v71 = 20LL;
    v23 = 0;
    v69 = 0;
    v24 = 0;
    v70 = 0;
    v25 = 0LL;
    v72 = 0LL;
    Base[0] = 0LL;
    if ( (unsigned int)v20 > 1 )
    {
      v26 = 0LL;
    }
    else
    {
      MiInsertLargeTbFlushEntry(&v69, (unsigned int)(2 - v20), v21, 0LL);
      v26 = 1LL;
      v25 = v72;
      v22 = HIDWORD(v71);
      v24 = v70;
      v23 = v69;
    }
    for ( i = v21; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
    {
      if ( i > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v61 = (!qword_140389040 || i < qword_140389040 || i >= qword_140389040 + (BitMapHeader.SizeOfBitMap << 30))
       && (unsigned int)v20 <= 1;
    if ( !v26 )
    {
      v28 = (__int64)(v21 << 25) >> 16;
      if ( (_DWORD)v20 == 3 )
      {
        v29 = 1LL;
        if ( v23 != 1 )
        {
          if ( (v24 & 8) == 0 && v28 >= 0xFFFFF68000000000uLL && v28 <= 0xFFFFF6FFFFFFFFFFuLL )
          {
            v24 |= 8u;
            LOBYTE(v70) = v24;
          }
          if ( v23 )
          {
            v30 = (__int64)(v21 << 25) >> 16;
            if ( v28 >= 0xFFFFF68000000000uLL )
            {
              do
              {
                if ( v30 > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
                v30 = (__int64)(v30 << 25) >> 16;
              }
              while ( v30 >= 0xFFFFF68000000000uLL );
            }
          }
        }
        if ( !v22 )
          goto LABEL_72;
        if ( (v24 & 4) == 0 )
        {
          v31 = &Base[v22 - 1];
          v32 = *v31;
          if ( (*v31 & 0xC00) == 0 )
          {
            v33 = *v31 & 0x3FF;
            if ( (v32 & 0xFFFFFFFFFFFFF000uLL) + ((v33 + 1) << 12) == v28 && v33 + 1 >= v33 && v33 + 1 <= 0x3FF )
            {
              v72 = v25 + 1;
              *v31 = v32 ^ ((unsigned __int16)v32 ^ (unsigned __int16)(v32 + 1)) & 0x3FF;
LABEL_65:
              v26 = 1LL;
              goto LABEL_89;
            }
          }
        }
        if ( (v24 & 4) != 0
          || (v34 = &Base[v22 - 1], v35 = *v34, (*v34 & 0xC00) != 0)
          || (v35 & 0xFFFFFFFFFFFFF000uLL) != v28 + 4096
          || (v36 = *v34 & 0x3FF, v36 + 1 < v36)
          || v36 + 1 > 0x3FF )
        {
LABEL_72:
          if ( v22 < (unsigned int)v71 )
          {
            while ( 1 )
            {
              v37 = 1024LL;
              if ( (unsigned __int64)(v29 - 1) <= 0x3FF )
                v37 = v29;
              v29 -= v37;
              v38 = v28 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v37 - 1) & 0x3FF;
              v28 += v37 << 12;
              Base[v22] = v38;
              v22 = HIDWORD(v71) + 1;
              HIDWORD(v71) = v22;
              v72 += v37;
              if ( v22 == (_DWORD)v71 && (v70 & 4) == 0 )
              {
                qsort(Base, v22, 8uLL, MiTbFlushSort);
                MiCompressTbFlushList(&v69);
                v22 = HIDWORD(v71);
                if ( HIDWORD(v71) == (_DWORD)v71 )
                {
                  if ( v29 )
                    break;
                }
              }
              if ( !v29 )
                goto LABEL_65;
            }
            HIBYTE(v70) = 1;
            v72 = HIDWORD(v71);
            v26 = 1LL;
          }
          else
          {
            HIBYTE(v70) = 1;
            v26 = 1LL;
          }
          goto LABEL_89;
        }
        v72 = v25 + 1;
        *v34 = (v35 - 4096) ^ ((unsigned __int16)(v35 - 4096) ^ (unsigned __int16)(v35 - 4096 + 1)) & 0x3FF;
        v26 = 1LL;
LABEL_89:
        v11 = 0LL;
        goto LABEL_90;
      }
      if ( (_DWORD)v20 != 2 )
      {
        v39 = MiLargePageSizes[v20];
        if ( (unsigned int)v20 <= 1 )
        {
          v40 = (unsigned int)(2 - v20);
          do
          {
            MiInsertTbFlushEntry(&v69, v28, v39, 0LL);
            v28 = (__int64)(v28 << 25) >> 16;
            v39 <<= 9;
            --v40;
          }
          while ( v40 );
        }
        v26 = 512LL;
        goto LABEL_89;
      }
      MiInsertTbFlushEntry(&v69, (__int64)(v21 << 25) >> 16, 16LL, 0LL);
      v26 = 16LL;
    }
LABEL_90:
    v41 = v21 + 8 * v26;
    if ( v21 < v41 )
    {
      v42 = 0xFFFFF6FB7DBED000uLL;
      do
      {
        *(_QWORD *)v21 = 0LL;
        if ( v21 >= v42 && v21 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v21, 0LL);
        v21 += 8LL;
      }
      while ( v21 < v41 );
    }
    if ( v61 )
      MiFlushTbList(&v69);
    v19 = a1;
    v3 = v59;
    goto LABEL_100;
  }
  v19 = a1;
LABEL_101:
  if ( v3 && v53 == 1 )
    *(_QWORD *)(v19 + 216) = 0LL;
  if ( v18 != 1 && v54 == 1 )
  {
    v11 = (v4 + 0x58000000000LL) / 48;
    if ( v58 != 3 )
    {
      v45 = v50;
      MiLargePageFreeToZero((v4 + 0x58000000000LL) / 48, v58, v50);
      v46 = v50;
      goto LABEL_115;
    }
    v43 = 1;
    *(_QWORD *)(v19 + 24) = 0LL;
    *(_BYTE *)(v4 + 34) &= ~8u;
    if ( v50 )
    {
      v44 = dword_140388540 & (unsigned int)v11 | (((*(_QWORD *)(v4 + 40) >> 36) & 3) << byte_140388502) | ((unsigned __int16)(*(_QWORD *)(v4 + 40) >> 58) << byte_140388501);
      if ( (unsigned int)MiFreeZeroPageSlistSufficient(a2, v44, 0LL)
        && *(_QWORD *)(*(_QWORD *)(a2 + 2048) + 40 * v44) >= (unsigned __int64)(unsigned int)(4 * *(_DWORD *)(a2 + 5212)) )
      {
        v43 = 1025;
      }
      v51 = 1;
    }
    *(_QWORD *)(v4 + 16) = MiMakeDemandZeroPte(4LL);
    MiUnlinkFreeOrZeroedPage((v4 + 0x58000000000LL) / 48, 0LL, 0LL);
    MiInsertPageInFreeOrZeroedList((v4 + 0x58000000000LL) / 48, v43);
  }
  v45 = v50;
  v46 = v51;
LABEL_115:
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  if ( v3 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v46 )
  {
    v66 = 0;
    v67 = 1;
    v47 = v11 << 12;
    v68 = v47;
    if ( v62 != 1 )
    {
      if ( v62 == 16 )
      {
        v48 = v47 & 0xFFFFFFFFFFFFFC00uLL | 0xF;
      }
      else if ( v62 == 512 )
      {
        v48 = v47 & 0xFFFFFFFFFFFFF3FFuLL | 0x400;
      }
      else
      {
        v48 = v47 | 0x800;
      }
      v68 = v48;
    }
    HvlNotifyPageHeat(0LL, 1LL, &v68);
  }
  if ( v45 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 184), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a2 + 184);
    KeAbPostRelease(a2 + 184);
    KiLeaveGuardedRegionUnsafe(v56);
    MiSetZeroPageThreadPriority(a2, v56, v52);
  }
}
