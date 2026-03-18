/*
 * XREFs of MiCheckProcessorPteCache @ 0x14010ECE0
 * Callers:
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiEmptyPteBins @ 0x1400DAC70 (MiEmptyPteBins.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v4; // r14
  unsigned __int64 v5; // rbp
  signed __int64 *p_PteBitCache; // rdx
  signed __int64 *v7; // rbx
  signed __int64 v8; // r8
  unsigned __int64 v9; // r11
  signed __int64 *v10; // r9
  signed __int64 *v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  _BYTE *v15; // rsi
  char v16; // al
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r11
  __int64 *v20; // rbx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r10
  __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  __int64 *v25; // r8
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r8
  volatile signed __int64 *v30; // r10
  signed __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // r10
  bool v34; // zf
  __int64 v35; // rcx
  unsigned int v36; // esi
  unsigned __int64 v37; // r10
  __int64 v38; // rcx
  bool v39; // sf
  __int64 v40; // rdx
  unsigned int v41; // ecx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rsi
  __int64 v45; // [rsp+20h] [rbp-58h] BYREF
  __int64 v46; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  v5 = -1LL;
  p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache != -1LL )
    goto LABEL_2;
  __writecr8(CurrentIrql);
  v18 = qword_1403CC620;
LABEL_19:
  while ( 2 )
  {
    v19 = qword_1403CC628;
    v20 = &qword_1403CC5E0;
    if ( qword_1403CC628 )
    {
      while ( qword_1403CC5E0 < v19 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_1403CC610, &LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v19 = qword_1403CC628;
        if ( !qword_1403CC628 )
          goto LABEL_23;
      }
      v20 = &v45;
      v45 = qword_1403CC5E0 - v19;
      v46 = qword_1403CC5E8 + 8 * (v19 >> 6);
      if ( v18 )
        v18 -= v19;
    }
LABEL_23:
    v21 = *v20;
    v22 = v18;
    v23 = v20[1];
    if ( v18 >= v21 )
      v22 = 0LL;
    v24 = v21 - 1;
    while ( 1 )
    {
      if ( v24 - v22 == -1LL )
        goto LABEL_76;
      v25 = (__int64 *)(v23 + 8 * (v22 >> 6));
      v26 = ((1LL << (v22 & 0x3F)) - 1) | *v25;
      if ( v26 != -1 )
        break;
      while ( (unsigned __int64)++v25 <= v23 + 8 * (v24 >> 6) )
      {
        v26 = *v25;
        if ( *v25 != -1 )
          goto LABEL_28;
      }
LABEL_76:
      if ( !v22 )
      {
        if ( !(unsigned int)MiEmptyPteBins((__int64)&qword_1403CC5E0, 0) )
          return 0LL;
        v18 = 0LL;
        goto LABEL_19;
      }
      v44 = v18 + 1;
      if ( v18 + 1 > v21 )
        v44 = v21;
      v24 = v44 - 1;
      v22 = 0LL;
    }
LABEL_28:
    _BitScanForward64((unsigned __int64 *)&v26, ~v26);
    v27 = v26 + (((__int64)v25 - v23) >> 3 << 6);
    if ( v27 > v24 || v27 == -1LL )
      goto LABEL_76;
    v28 = (v27 + v19) & 0xFFFFFFFFFFFFFFC0uLL;
    v29 = *(_QWORD *)(qword_1403CC5E8 + 8 * (v28 >> 6));
    v30 = (volatile signed __int64 *)(qword_1403CC5E8 + 8 * (v28 >> 6));
    if ( v29 == -1LL )
      goto LABEL_88;
    while ( 1 )
    {
      v31 = _InterlockedCompareExchange64(v30, -1LL, v29);
      if ( v29 == v31 )
        break;
      v29 = v31;
      if ( v31 == -1 )
        goto LABEL_88;
    }
    if ( v29 == -1LL )
    {
LABEL_88:
      v18 = v28 + 64;
      continue;
    }
    break;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache == -1LL )
  {
    *p_PteBitCache = v29;
    CurrentPrcb->PteBitOffset = v28;
    v32 = ~v29 - ((~v29 >> 1) & 0x5555555555555555LL);
    _InterlockedExchangeAdd64(
      &qword_1403CC638,
      -(__int64)((unsigned int)((0x101010101010101LL
                               * (((v32 & 0x3333333333333333LL)
                                 + ((v32 >> 2) & 0x3333333333333333LL)
                                 + (((v32 & 0x3333333333333333LL) + ((v32 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
    qword_1403CC620 = v28 + 64;
  }
  else
  {
    _InterlockedAnd64(v30, v29);
  }
LABEL_2:
  v46 = (__int64)p_PteBitCache;
  v45 = 64LL;
  v7 = p_PteBitCache;
  if ( !a1 )
  {
    v5 = 0LL;
    goto LABEL_13;
  }
  if ( a1 <= 0x40 )
  {
    v8 = *p_PteBitCache;
    v9 = 63 - a1 + 1;
    v10 = &p_PteBitCache[v9 >> 6];
    v11 = p_PteBitCache;
    if ( a1 >= 0x40 )
    {
      while ( 2 )
      {
        v39 = v8 < 0;
        while ( 1 )
        {
          if ( v39 )
          {
            do
            {
              if ( ++v11 > v10 )
                goto LABEL_9;
              v8 = *v11;
            }
            while ( *v11 < 0 );
          }
          v34 = !_BitScanReverse64((unsigned __int64 *)&v40, v8);
          if ( v34 )
            v41 = 64;
          else
            v41 = 63 - v40;
          v13 = ((v11 - v7 + 1) << 6) - v41;
          if ( v13 > v9 )
            goto LABEL_9;
          v42 = a1 - v41;
          if ( a1 == v41 )
            goto LABEL_8;
          v8 = v11[1];
          ++v11;
          if ( v42 < 0x40 )
            break;
          v39 = v8 < 0;
          if ( !v8 )
          {
            v42 -= 64LL;
            if ( !v42 )
              goto LABEL_8;
            v8 = v11[1];
            ++v11;
            break;
          }
        }
        v34 = !_BitScanForward64(&v43, v8);
        if ( v34 )
          v43 = 64LL;
        if ( v43 < v42 )
          continue;
        break;
      }
LABEL_8:
      v5 = v13;
    }
    else if ( a1 > 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( v8 == -1 )
        {
          while ( 1 )
          {
            if ( ++v11 > v10 )
              goto LABEL_9;
            v8 = *v11;
            if ( *v11 != -1 )
            {
              v33 = 0LL;
              break;
            }
          }
        }
        v34 = !_BitScanForward64((unsigned __int64 *)&v35, v8);
        if ( v34 )
          LODWORD(v35) = 64;
        if ( (unsigned int)(v33 + v35) >= a1 )
          break;
        v36 = a1;
        v37 = ~v8;
        while ( 1 )
        {
          v37 &= v37 >> (v36 >> 1);
          if ( !v37 )
            break;
          v36 -= v36 >> 1;
          if ( v36 <= 1 )
          {
            _BitScanForward64(&v37, v37);
            goto LABEL_44;
          }
        }
        if ( v11 == p_PteBitCache )
          goto LABEL_9;
        v34 = !_BitScanReverse64((unsigned __int64 *)&v38, v8);
        if ( v34 )
          v33 = 64LL;
        else
          v33 = (unsigned int)(63 - v38);
        v8 = v11[1];
        ++v11;
      }
      v37 = -v33;
LABEL_44:
      v13 = ((v11 - p_PteBitCache) << 6) + v37;
      if ( v13 <= v9 )
        goto LABEL_8;
    }
    else if ( v8 == -1 )
    {
      while ( ++v11 <= v10 )
      {
        v8 = *v11;
        if ( *v11 != -1 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      _BitScanForward64(&v12, ~v8);
      v13 = (unsigned int)v12 + ((v11 - p_PteBitCache) << 6);
      if ( v13 <= v9 )
        goto LABEL_8;
    }
  }
LABEL_9:
  if ( v5 != -1LL )
  {
    v14 = v5 & 7;
    v15 = (char *)v7 + (v5 >> 3);
    if ( v14 + a1 <= 8 )
    {
      v16 = byte_1402FEA38[a1] << v14;
      goto LABEL_12;
    }
    if ( (v5 & 7) != 0 )
    {
      *v15++ |= byte_1402FEA48[v14];
      a1 -= (unsigned int)(8 - v14);
    }
    if ( a1 > 8 )
    {
      memset(v15, 255, a1 >> 3);
      v15 += a1 >> 3;
      a1 &= 7u;
    }
    if ( a1 )
    {
      v16 = byte_1402FEA38[a1];
LABEL_12:
      *v15 |= v16;
    }
LABEL_13:
    v4 = qword_1403CC5F0 + 8 * (v5 + CurrentPrcb->PteBitOffset);
  }
  __writecr8(CurrentIrql);
  return v4;
}
