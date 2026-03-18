/*
 * XREFs of MiCheckProcessorPteCache @ 0x140099E20
 * Callers:
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiEmptyPteBins @ 0x1400A4EA0 (MiEmptyPteBins.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v4; // r12
  signed __int64 *p_PteBitCache; // rdx
  signed __int64 *v6; // r15
  signed __int64 v7; // r8
  unsigned __int64 v8; // r10
  signed __int64 *v9; // r9
  signed __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  _BYTE *v14; // rsi
  char v15; // al
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r9
  __int64 *v19; // rdi
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r11
  __int64 v22; // rdi
  unsigned __int64 v23; // rsi
  __int64 *v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r8
  volatile signed __int64 *v29; // r9
  signed __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned int v32; // r11d
  bool v33; // zf
  __int64 v34; // rcx
  unsigned int v35; // ebx
  unsigned __int64 v36; // r11
  __int64 v37; // rdi
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  bool v40; // sf
  __int64 v41; // rdx
  unsigned int v42; // ecx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // [rsp+20h] [rbp-58h] BYREF
  __int64 v46; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache != -1LL )
    goto LABEL_2;
  __writecr8(CurrentIrql);
  v17 = qword_1403893A8;
LABEL_18:
  while ( 2 )
  {
    v18 = qword_1403893B0;
    v19 = &qword_140389360;
    if ( qword_1403893B0 )
    {
      while ( qword_140389360 < v18 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_140389390, &LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v18 = qword_1403893B0;
        if ( !qword_1403893B0 )
          goto LABEL_22;
      }
      v19 = &v45;
      v45 = qword_140389360 - v18;
      v46 = qword_140389368 + 8 * (v18 >> 6);
      if ( v17 )
        v17 -= v18;
    }
LABEL_22:
    v20 = *v19;
    v21 = v17;
    v22 = v19[1];
    if ( v17 >= v20 )
      v21 = 0LL;
    v23 = v20 - 1;
    while ( 1 )
    {
      if ( v23 - v21 == -1LL )
        goto LABEL_64;
      v24 = (__int64 *)(v22 + 8 * (v21 >> 6));
      v25 = ((1LL << (v21 & 0x3F)) - 1) | *v24;
      if ( v25 != -1 )
        break;
      while ( (unsigned __int64)++v24 <= v22 + 8 * (v23 >> 6) )
      {
        v25 = *v24;
        if ( *v24 != -1 )
          goto LABEL_27;
      }
LABEL_64:
      if ( !v21 )
      {
        if ( !(unsigned int)MiEmptyPteBins(&qword_140389360, 0LL, -1LL, v18) )
          return 0LL;
        v17 = 0LL;
        goto LABEL_18;
      }
      v39 = v17 + 1;
      if ( v17 + 1 > v20 )
        v39 = v20;
      v23 = v39 - 1;
      v21 = 0LL;
    }
LABEL_27:
    _BitScanForward64((unsigned __int64 *)&v25, ~v25);
    v26 = v25 + (((__int64)v24 - v22) >> 3 << 6);
    if ( v26 > v23 || v26 == -1LL )
      goto LABEL_64;
    v27 = (v26 + v18) & 0xFFFFFFFFFFFFFFC0uLL;
    v28 = *(_QWORD *)(qword_140389368 + 8 * (v27 >> 6));
    v29 = (volatile signed __int64 *)(qword_140389368 + 8 * (v27 >> 6));
    if ( v28 == -1LL )
      goto LABEL_90;
    while ( 1 )
    {
      v30 = _InterlockedCompareExchange64(v29, -1LL, v28);
      if ( v28 == v30 )
        break;
      v28 = v30;
      if ( v30 == -1 )
        goto LABEL_90;
    }
    if ( v28 == -1LL )
    {
LABEL_90:
      v17 = v27 + 64;
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
    *p_PteBitCache = v28;
    CurrentPrcb->PteBitOffset = v27;
    v31 = ~v28 - ((~v28 >> 1) & 0x5555555555555555LL);
    _InterlockedExchangeAdd64(
      &qword_1403893C0,
      -(__int64)((unsigned int)((0x101010101010101LL
                               * (((v31 & 0x3333333333333333LL)
                                 + ((v31 >> 2) & 0x3333333333333333LL)
                                 + (((v31 & 0x3333333333333333LL) + ((v31 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
    qword_1403893A8 = v27 + 64;
  }
  else
  {
    _InterlockedAnd64(v29, v28);
  }
LABEL_2:
  v46 = (__int64)p_PteBitCache;
  v45 = 64LL;
  v6 = p_PteBitCache;
  if ( !a1 )
  {
    v12 = 0LL;
    goto LABEL_12;
  }
  if ( a1 > 0x40 )
    goto LABEL_13;
  v7 = *p_PteBitCache;
  v8 = 63 - a1 + 1;
  v9 = &p_PteBitCache[v8 >> 6];
  v10 = p_PteBitCache;
  if ( a1 < 0x40 )
  {
    if ( a1 > 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        if ( v7 == -1 )
        {
          while ( 1 )
          {
            if ( ++v10 > v9 )
              goto LABEL_13;
            v7 = *v10;
            if ( *v10 != -1 )
            {
              v32 = 0;
              break;
            }
          }
        }
        v33 = !_BitScanForward64((unsigned __int64 *)&v34, v7);
        if ( v33 )
          LODWORD(v34) = 64;
        if ( v32 + (unsigned int)v34 >= a1 )
          break;
        v35 = a1;
        v36 = ~v7;
        while ( 1 )
        {
          v36 &= v36 >> (v35 >> 1);
          if ( !v36 )
            break;
          v35 -= v35 >> 1;
          if ( v35 <= 1 )
          {
            _BitScanForward64((unsigned __int64 *)&v37, v36);
            goto LABEL_43;
          }
        }
        if ( v10 == p_PteBitCache )
          goto LABEL_13;
        v33 = !_BitScanReverse64((unsigned __int64 *)&v38, v7);
        if ( v33 )
          v32 = 64;
        else
          v32 = 63 - v38;
        v7 = v10[1];
        ++v10;
      }
      v37 = -(__int64)v32;
LABEL_43:
      v12 = ((v10 - p_PteBitCache) << 6) + v37;
      if ( v12 <= v8 )
        goto LABEL_8;
    }
    else if ( v7 == -1 )
    {
      while ( ++v10 <= v9 )
      {
        v7 = *v10;
        if ( *v10 != -1 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      _BitScanForward64(&v11, ~v7);
      v12 = (unsigned int)v11 + ((v10 - p_PteBitCache) << 6);
      if ( v12 <= v8 )
        goto LABEL_8;
    }
    goto LABEL_13;
  }
  while ( 2 )
  {
    v40 = v7 < 0;
    while ( 1 )
    {
      if ( v40 )
      {
        do
        {
          if ( ++v10 > v9 )
            goto LABEL_13;
          v7 = *v10;
        }
        while ( *v10 < 0 );
      }
      v33 = !_BitScanReverse64((unsigned __int64 *)&v41, v7);
      if ( v33 )
        v42 = 64;
      else
        v42 = 63 - v41;
      v12 = ((v10 - v6 + 1) << 6) - v42;
      if ( v12 > v8 )
        goto LABEL_13;
      v43 = a1 - v42;
      if ( a1 == v42 )
        goto LABEL_8;
      v7 = v10[1];
      ++v10;
      if ( v43 < 0x40 )
        break;
      v40 = v7 < 0;
      if ( !v7 )
      {
        v43 -= 64LL;
        if ( !v43 )
          goto LABEL_8;
        v7 = v10[1];
        ++v10;
        break;
      }
    }
    v33 = !_BitScanForward64(&v44, v7);
    if ( v33 )
      v44 = 64LL;
    if ( v44 < v43 )
      continue;
    break;
  }
LABEL_8:
  if ( v12 != -1LL )
  {
    v13 = v12 & 7;
    v14 = (char *)v6 + (v12 >> 3);
    if ( v13 + a1 <= 8 )
    {
      v15 = byte_1402C7730[a1] << v13;
      goto LABEL_11;
    }
    if ( (v12 & 7) != 0 )
    {
      *v14++ |= byte_1402C7740[v13];
      a1 -= (unsigned int)(8 - v13);
    }
    if ( a1 > 8 )
    {
      memset(v14, 255, a1 >> 3);
      v14 += a1 >> 3;
      a1 &= 7u;
    }
    if ( a1 )
    {
      v15 = byte_1402C7730[a1];
LABEL_11:
      *v14 |= v15;
    }
LABEL_12:
    v4 = qword_140389370 + 8 * (v12 + CurrentPrcb->PteBitOffset);
  }
LABEL_13:
  __writecr8(CurrentIrql);
  return v4;
}
