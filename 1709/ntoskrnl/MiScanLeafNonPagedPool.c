/*
 * XREFs of MiScanLeafNonPagedPool @ 0x1400C1F00
 * Callers:
 *     MiScanNonPagedPoolVa @ 0x1400C1BA0 (MiScanNonPagedPoolVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400C1DB0 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x1400C24F0 (MiIncreaseNonPagedPoolUsage.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400C25F0 (RtlFindClearBitsAndSetEx.c)
 *     MiReplenishNonPagedSlists @ 0x1400C2980 (MiReplenishNonPagedSlists.c)
 *     MiAllocatingNonPagedPoolVa @ 0x1400C2F94 (MiAllocatingNonPagedPoolVa.c)
 *     MiFreeExcessSegments @ 0x1400F7E68 (MiFreeExcessSegments.c)
 *     MiCheckPoolForContiguousPages @ 0x140119DCC (MiCheckPoolForContiguousPages.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiScanLeafNonPagedPool(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v7; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  _SLIST_HEADER *v12; // r13
  bool v13; // zf
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // r9
  unsigned __int64 *v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rsi
  __int64 v25; // r14
  unsigned __int64 v26; // rbx
  unsigned __int64 ClearBitsAndSet; // rax
  int v28; // esi
  unsigned int v29; // ebp
  __int64 v30; // r15
  int v31; // ebx
  unsigned int v32; // r11d
  unsigned __int64 *v33; // rbx
  __int64 v34; // rcx
  unsigned int v35; // r11d
  unsigned __int64 v36; // r10
  __int64 v37; // rcx
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // rcx
  __int64 v40; // r9
  unsigned __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // edx
  unsigned __int64 *v44; // r8
  unsigned int v45; // r8d
  __int64 v46; // rdx
  bool v47; // sf
  __int64 v48; // rdx
  unsigned int v49; // ecx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 i; // rsi
  unsigned __int64 NextForwardRunClearCapped; // rdi
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // r10
  unsigned __int64 v57; // [rsp+30h] [rbp-68h] BYREF
  __int64 v58; // [rsp+38h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF

  v7 = a5;
  v9 = *(_QWORD *)(a4 + 32);
  v10 = a7 - a5;
  v11 = a1;
  v12 = &qword_140388510[25 * a2];
  v13 = *(_DWORD *)a4 == 2;
  v57 = a6;
  v14 = v12[23].Region + 8 * (a5 >> 6);
  v58 = v14;
  if ( v13 )
  {
    for ( i = 0LL; ; i = NextForwardRunClearCapped + v55 )
    {
      a7 = i;
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)&v57, i, v14, &a7);
      if ( !NextForwardRunClearCapped )
        break;
      v55 = a7;
      (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(v9 + 8))(
        v9,
        v12[20].Alignment + ((a7 + a5) << 12),
        NextForwardRunClearCapped,
        0LL);
    }
    return -1LL;
  }
  if ( v10 >= v57 )
    v15 = 0LL;
  else
    v15 = a7 - a5;
  v16 = v57 - 1;
  if ( !a1 )
  {
    v23 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    if ( v16 - v15 + 1 < v11 )
    {
      v22 = -1LL;
      goto LABEL_12;
    }
    v17 = v16 - v11 + 1;
    a7 = v17;
    v18 = v58 + 8 * (v17 >> 6);
    v19 = (unsigned __int64 *)(v58 + 8 * (v15 >> 6));
    v20 = ((1LL << (v15 & 0x3F)) - 1) | *v19;
    if ( v11 > 0x7F )
    {
      v38 = v18 + 8;
      if ( (v17 & 0x3F) == 0 )
        v38 = v58 + 8 * (v17 >> 6);
      if ( v20 )
      {
        v39 = v19[1];
        ++v19;
        if ( v39 )
        {
          v40 = v58;
          goto LABEL_68;
        }
        v13 = !_BitScanReverse64((unsigned __int64 *)&v52, v20);
        if ( v13 )
          v43 = 64;
        else
          v43 = 63 - v52;
        v40 = v58;
      }
      else
      {
        v40 = v58;
        v43 = 0;
      }
      while ( 1 )
      {
        v22 = (((__int64)v19 - v40) >> 3 << 6) - v43;
        if ( v22 > v17 )
          goto LABEL_50;
        v44 = &v19[(v11 - v43) >> 6];
        if ( ++v19 == v44 )
        {
LABEL_76:
          v45 = ((_BYTE)v11 - (_BYTE)v43) & 0x3F;
          if ( (((_BYTE)v11 - (_BYTE)v43) & 0x3F) != 0 )
          {
            v13 = !_BitScanForward64((unsigned __int64 *)&v46, *v19);
            if ( v13 )
              LODWORD(v46) = 64;
            if ( (unsigned int)v46 < v45 )
              goto LABEL_68;
          }
          goto LABEL_11;
        }
        while ( !*v19 )
        {
          if ( ++v19 == v44 )
            goto LABEL_76;
        }
        do
        {
LABEL_68:
          if ( (unsigned __int64)v19 > v38 )
          {
LABEL_58:
            v22 = -1LL;
            goto LABEL_12;
          }
          v41 = v19[1];
          ++v19;
        }
        while ( v41 );
        v13 = !_BitScanReverse64((unsigned __int64 *)&v42, *(v19 - 1));
        if ( v13 )
          v43 = 64;
        else
          v43 = 63 - v42;
      }
    }
    if ( v11 >= 0x40 )
    {
      while ( 2 )
      {
        v47 = v20 < 0;
        while ( 1 )
        {
          if ( v47 )
          {
            do
            {
              if ( (unsigned __int64)++v19 > v18 )
                goto LABEL_50;
              v20 = *v19;
            }
            while ( (*v19 & 0x8000000000000000uLL) != 0LL );
          }
          v13 = !_BitScanReverse64((unsigned __int64 *)&v48, v20);
          if ( v13 )
            v49 = 64;
          else
            v49 = 63 - v48;
          v22 = (((((__int64)v19 - v58) >> 3) + 1) << 6) - v49;
          if ( v22 > v17 )
            goto LABEL_50;
          v50 = v11 - v49;
          if ( v11 == v49 )
            goto LABEL_11;
          v20 = v19[1];
          ++v19;
          if ( v50 < 0x40 )
            break;
          v47 = v20 < 0;
          if ( !v20 )
          {
            v50 -= 64LL;
            if ( !v50 )
              goto LABEL_11;
            v20 = v19[1];
            ++v19;
            break;
          }
        }
        v13 = !_BitScanForward64(&v51, v20);
        if ( v13 )
          v51 = 64LL;
        if ( v51 < v50 )
          continue;
        goto LABEL_11;
      }
    }
    if ( v11 > 1 )
    {
      v32 = 0;
      v33 = (unsigned __int64 *)(v58 + 8 * (v16 >> 6));
      while ( 1 )
      {
        if ( v20 == -1 )
        {
          while ( (unsigned __int64)++v19 <= v18 )
          {
            v20 = *v19;
            if ( *v19 != -1LL )
            {
              v32 = 0;
              goto LABEL_42;
            }
          }
          v22 = -1LL;
          goto LABEL_12;
        }
LABEL_42:
        v13 = !_BitScanForward64((unsigned __int64 *)&v34, v20);
        if ( v13 )
          LODWORD(v34) = 64;
        if ( v32 + (unsigned int)v34 >= v11 )
          break;
        v35 = v11;
        v36 = ~v20;
        while ( 1 )
        {
          v36 &= v36 >> (v35 >> 1);
          if ( !v36 )
            break;
          v35 -= v35 >> 1;
          if ( v35 <= 1 )
          {
            _BitScanForward64(&v36, v36);
            goto LABEL_49;
          }
        }
        if ( v19 == v33 )
          goto LABEL_58;
        v13 = !_BitScanReverse64((unsigned __int64 *)&v37, v20);
        if ( v13 )
          v32 = 64;
        else
          v32 = 63 - v37;
        v20 = v19[1];
        ++v19;
      }
      v36 = -(__int64)v32;
LABEL_49:
      v22 = (((__int64)v19 - v58) >> 3 << 6) + v36;
      if ( v22 <= a7 )
        goto LABEL_11;
      goto LABEL_50;
    }
    if ( v20 == -1 )
    {
      while ( (unsigned __int64)++v19 <= v18 )
      {
        v20 = *v19;
        if ( *v19 != -1LL )
          goto LABEL_10;
      }
LABEL_50:
      v22 = -1LL;
      goto LABEL_12;
    }
LABEL_10:
    _BitScanForward64(&v21, ~v20);
    v22 = (unsigned int)v21 + (((__int64)v19 - v58) >> 3 << 6);
    if ( v22 > v17 )
    {
      v22 = -1LL;
      goto LABEL_12;
    }
LABEL_11:
    if ( v22 != -1LL )
      break;
LABEL_12:
    if ( !v15 )
      break;
    v56 = v11 + v10;
    v15 = 0LL;
    if ( v11 + v10 > v57 )
      v56 = v57;
    v16 = v56 - 1;
  }
  v7 = a5;
  v23 = v22;
LABEL_14:
  if ( v23 == -1LL || *(_BYTE *)(a4 + 48) == 1 && v23 < v10 )
    return -1LL;
  KeAcquireInStackQueuedSpinLock(&v12[19].Alignment, &LockHandle);
  v25 = 8LL * (int)a3;
  v26 = *(unsigned __int64 *)((char *)&v12[24].Alignment + v25);
  if ( v26 < v7 || *(_BYTE *)(a4 + 48) == 1 || v26 >= v7 + a6 )
  {
    v26 = -1LL;
  }
  else if ( v23 + v7 < v26 )
  {
    v23 = v26 - v7;
  }
  if ( *(_DWORD *)a4 == 1 )
  {
    v29 = a2;
    v30 = MiCheckPoolForContiguousPages((unsigned int)&v57, v11, v23, a4, v7, a2);
    if ( v30 == -1 )
      goto LABEL_81;
    v28 = -1;
    goto LABEL_26;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(&v57, v11, v23);
  v28 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1LL )
    goto LABEL_81;
  if ( *(_BYTE *)(a4 + 48) != 1 || ClearBitsAndSet >= v10 )
  {
    v29 = a2;
    v30 = ClearBitsAndSet + v7;
    if ( v26 != -1LL && v11 == 1 && !*(_DWORD *)a4 )
      *(unsigned __int64 *)((char *)&v12[24].Alignment + v25) = v30 + 1;
LABEL_26:
    MiAllocatingNonPagedPoolVa(v12, a3, v30, v11);
    if ( !*(_DWORD *)a4 && !a3 && v11 <= 3 )
      v11 += MiReplenishNonPagedSlists((unsigned int)&v57, v29, (int)v30 - v28, v28, v11);
    v31 = MiIncreaseNonPagedPoolUsage(v12, a3, v30, v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v31 == 1 )
      MiFreeExcessSegments();
    return v30;
  }
  RtlClearBitsEx((__int64)&v57, ClearBitsAndSet, v11);
LABEL_81:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return -1LL;
}
