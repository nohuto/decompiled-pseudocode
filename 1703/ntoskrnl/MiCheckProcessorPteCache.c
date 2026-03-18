/*
 * XREFs of MiCheckProcessorPteCache @ 0x1400F7580
 * Callers:
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 * Callees:
 *     MiEmptyPteBins @ 0x1400844C4 (MiEmptyPteBins.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v4; // r14
  unsigned __int64 *p_PteBitCache; // rdx
  unsigned __int64 v6; // r13
  unsigned __int64 *v7; // r9
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  _BYTE *v13; // rsi
  char v14; // al
  unsigned int v16; // r11d
  bool v17; // zf
  __int64 v18; // rcx
  unsigned int v19; // r11d
  unsigned __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r9
  __int64 *v25; // rdi
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // r11
  __int64 v28; // rdi
  unsigned __int64 v29; // rsi
  __int64 *v30; // r8
  __int64 v31; // rax
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r8
  volatile signed __int64 *v35; // r9
  signed __int64 v36; // rax
  unsigned __int8 v37; // al
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned int v41; // ecx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 v44; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v45; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v47; // [rsp+A0h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v47 = CurrentIrql;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  p_PteBitCache = &CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache != -1LL )
    goto LABEL_2;
  __writecr8(CurrentIrql);
  v23 = qword_14036D0E8;
LABEL_34:
  while ( 2 )
  {
    v24 = qword_14036D0F0;
    v25 = &qword_14036D0A0;
    if ( qword_14036D0F0 )
    {
      while ( qword_14036D0A0 < v24 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_14036D0D0, &LockHandle);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        v24 = qword_14036D0F0;
        if ( !qword_14036D0F0 )
          goto LABEL_38;
      }
      v25 = &v44;
      v44 = qword_14036D0A0 - v24;
      v45 = (unsigned __int64 *)(qword_14036D0A8 + 8 * (v24 >> 6));
      if ( v23 )
        v23 -= v24;
    }
LABEL_38:
    v26 = *v25;
    v27 = v23;
    v28 = v25[1];
    if ( v23 >= v26 )
      v27 = 0LL;
    v29 = v26 - 1;
    while ( 1 )
    {
      if ( v29 - v27 == -1LL )
        goto LABEL_64;
      v30 = (__int64 *)(v28 + 8 * (v27 >> 6));
      v31 = ((1LL << (v27 & 0x3F)) - 1) | *v30;
      if ( v31 != -1 )
        break;
      while ( (unsigned __int64)++v30 <= v28 + 8 * (v29 >> 6) )
      {
        v31 = *v30;
        if ( *v30 != -1 )
          goto LABEL_43;
      }
LABEL_64:
      if ( !v27 )
      {
        if ( !(unsigned int)MiEmptyPteBins((__int64)&qword_14036D0A0, 0) )
          return 0LL;
        v23 = 0LL;
        goto LABEL_34;
      }
      v39 = v23 + 1;
      if ( v23 + 1 > v26 )
        v39 = v26;
      v29 = v39 - 1;
      v27 = 0LL;
    }
LABEL_43:
    _BitScanForward64((unsigned __int64 *)&v31, ~v31);
    v32 = v31 + (((__int64)v30 - v28) >> 3 << 6);
    if ( v32 > v29 || v32 == -1LL )
      goto LABEL_64;
    v33 = (v32 + v24) & 0xFFFFFFFFFFFFFFC0uLL;
    v34 = *(_QWORD *)(qword_14036D0A8 + 8 * (v33 >> 6));
    v35 = (volatile signed __int64 *)(qword_14036D0A8 + 8 * (v33 >> 6));
    if ( v34 == -1LL )
      goto LABEL_89;
    while ( 1 )
    {
      v36 = _InterlockedCompareExchange64(v35, -1LL, v34);
      if ( v34 == v36 )
        break;
      v34 = v36;
      if ( v36 == -1 )
        goto LABEL_89;
    }
    if ( v34 == -1LL )
    {
LABEL_89:
      v23 = v33 + 64;
      continue;
    }
    break;
  }
  v37 = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v47 = v37;
  p_PteBitCache = &CurrentPrcb->PteBitCache;
  if ( CurrentPrcb->PteBitCache == -1LL )
  {
    *p_PteBitCache = v34;
    CurrentPrcb->PteBitOffset = v33;
    v38 = ~v34 - ((~v34 >> 1) & 0x5555555555555555LL);
    _InterlockedExchangeAdd64(
      &qword_14036D100,
      -(__int64)((unsigned int)((0x101010101010101LL
                               * (((v38 & 0x3333333333333333LL)
                                 + ((v38 >> 2) & 0x3333333333333333LL)
                                 + (((v38 & 0x3333333333333333LL) + ((v38 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
    qword_14036D0E8 = v33 + 64;
  }
  else
  {
    _InterlockedAnd64(v35, v34);
  }
LABEL_2:
  v45 = p_PteBitCache;
  v44 = 64LL;
  if ( !a1 )
  {
    v11 = 0LL;
    goto LABEL_12;
  }
  if ( a1 > 0x40 )
    goto LABEL_13;
  v6 = 63 - a1 + 1;
  v7 = &v45[v6 >> 6];
  v8 = v45;
  v9 = *v45;
  if ( a1 < 0x40 )
  {
    if ( a1 > 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v9 == -1LL )
        {
          while ( 1 )
          {
            if ( ++v8 > v7 )
              goto LABEL_13;
            v9 = *v8;
            if ( *v8 != -1LL )
            {
              v16 = 0;
              break;
            }
          }
        }
        v17 = !_BitScanForward64((unsigned __int64 *)&v18, v9);
        if ( v17 )
          LODWORD(v18) = 64;
        if ( v16 + (unsigned int)v18 >= a1 )
          break;
        v19 = a1;
        v20 = ~v9;
        while ( 1 )
        {
          v20 &= v20 >> (v19 >> 1);
          if ( !v20 )
            break;
          v19 -= v19 >> 1;
          if ( v19 <= 1 )
          {
            _BitScanForward64((unsigned __int64 *)&v22, v20);
            goto LABEL_31;
          }
        }
        if ( v8 == v45 )
          goto LABEL_13;
        v17 = !_BitScanReverse64((unsigned __int64 *)&v21, v9);
        if ( v17 )
          v16 = 64;
        else
          v16 = 63 - v21;
        v9 = v8[1];
        ++v8;
      }
      v22 = -(__int64)v16;
LABEL_31:
      v11 = ((v8 - v45) << 6) + v22;
      if ( v11 > v6 )
        goto LABEL_13;
    }
    else
    {
      if ( v9 == -1LL )
      {
        do
        {
          if ( ++v8 > v7 )
            goto LABEL_13;
          v9 = *v8;
        }
        while ( *v8 == -1LL );
      }
      _BitScanForward64(&v10, ~v9);
      v11 = (unsigned int)v10 + ((v8 - v45) << 6);
      if ( v11 > v6 )
        goto LABEL_13;
    }
LABEL_8:
    if ( v11 == -1LL )
      goto LABEL_13;
    v12 = v11 & 7;
    v13 = (char *)v45 + (v11 >> 3);
    if ( v12 + a1 <= 8 )
    {
      v14 = byte_14029EB30[a1] << v12;
      goto LABEL_11;
    }
    if ( (v11 & 7) != 0 )
    {
      *v13++ |= byte_14029EB40[v12];
      a1 -= (unsigned int)(8 - v12);
    }
    if ( a1 > 8 )
    {
      memset(v13, 255, a1 >> 3);
      v13 += a1 >> 3;
      a1 &= 7u;
    }
    if ( a1 )
    {
      v14 = byte_14029EB30[a1];
LABEL_11:
      *v13 |= v14;
    }
LABEL_12:
    v4 = qword_14036D0B0 + 8 * (v11 + CurrentPrcb->PteBitOffset);
    goto LABEL_13;
  }
  while ( (v9 & 0x8000000000000000uLL) == 0 )
  {
LABEL_69:
    v17 = !_BitScanReverse64((unsigned __int64 *)&v40, v9);
    if ( v17 )
      v41 = 64;
    else
      v41 = 63 - v40;
    v11 = ((v8 - v45 + 1) << 6) - v41;
    if ( v11 > v6 )
      goto LABEL_13;
    v42 = a1 - v41;
    if ( a1 == v41 )
      goto LABEL_8;
    v9 = v8[1];
    ++v8;
    if ( v42 >= 0x40 )
    {
      if ( v9 )
        continue;
      v42 -= 64LL;
      if ( !v42 )
        goto LABEL_8;
      v9 = v8[1];
      ++v8;
    }
    v17 = !_BitScanForward64(&v43, v9);
    if ( v17 )
      v43 = 64LL;
    if ( v43 >= v42 )
      goto LABEL_8;
  }
  while ( ++v8 <= v7 )
  {
    v9 = *v8;
    if ( (*v8 & 0x8000000000000000uLL) == 0 )
      goto LABEL_69;
  }
LABEL_13:
  __writecr8(v47);
  return v4;
}
