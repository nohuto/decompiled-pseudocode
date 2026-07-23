/*
 * XREFs of MiScanLeafNonPagedPool @ 0x1400D7D50
 * Callers:
 *     MiScanNonPagedPoolVa @ 0x1400D79E0 (MiScanNonPagedPoolVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x1400D7BF0 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x1400D82F0 (MiIncreaseNonPagedPoolUsage.c)
 *     MiReplenishNonPagedSlists @ 0x1400D83E8 (MiReplenishNonPagedSlists.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400D8720 (RtlFindClearBitsAndSetEx.c)
 *     MiAllocatingNonPagedPoolVa @ 0x1400DA424 (MiAllocatingNonPagedPoolVa.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCheckPoolForContiguousPages @ 0x140162B78 (MiCheckPoolForContiguousPages.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 MiScanLeafNonPagedPool(unsigned __int64 a1, unsigned int a2, __int64 a3, __int64 a4, ...)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r10
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  _SLIST_HEADER *v9; // r13
  bool v10; // zf
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdi
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  unsigned __int64 ClearBitsAndSet; // rdi
  __int64 v24; // r12
  unsigned int v25; // esi
  int v26; // ebx
  __int64 v27; // r10
  __int64 v28; // rcx
  unsigned int v29; // r11d
  unsigned __int64 v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // ecx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r11
  unsigned __int64 v37; // r9
  __int64 v38; // r8
  unsigned int v39; // edx
  unsigned __int64 *v40; // r8
  unsigned int v41; // r8d
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 i; // rsi
  unsigned __int64 NextForwardRunClearCapped; // rdi
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v52; // [rsp+C0h] [rbp+50h]
  unsigned __int64 v54; // [rsp+D0h] [rbp+60h] BYREF
  va_list va; // [rsp+D0h] [rbp+60h]
  unsigned __int64 v56; // [rsp+D8h] [rbp+68h]
  unsigned __int64 v57; // [rsp+E0h] [rbp+70h]
  va_list va1; // [rsp+E8h] [rbp+78h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v54 = va_arg(va1, _QWORD);
  v56 = va_arg(va1, _QWORD);
  v57 = va_arg(va1, _QWORD);
  v52 = a3;
  v4 = v54;
  v5 = a4;
  v6 = *(_QWORD *)(a4 + 32);
  v7 = a1;
  v8 = v57 - v54;
  v9 = &qword_1403CB6A8[25 * a2];
  v10 = *(_DWORD *)a4 == 2;
  v48 = v56;
  v49 = v9[23].Region + 8 * (v54 >> 6);
  if ( v10 )
  {
    for ( i = 0LL; ; i = NextForwardRunClearCapped + v46 )
    {
      v54 = i;
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)&v48, i, a3, (unsigned __int64 *)va);
      if ( !NextForwardRunClearCapped )
        break;
      v46 = v54;
      (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(v6 + 8))(
        v6,
        v9[20].Alignment + ((v54 + v4) << 12),
        NextForwardRunClearCapped,
        0LL);
    }
    return -1LL;
  }
  if ( v8 >= v48 )
    v11 = 0LL;
  else
    v11 = v57 - v54;
  v12 = v48 - 1;
  if ( !a1 )
  {
    v19 = v11 & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_15;
  }
  LODWORD(v54) = 64;
  while ( 2 )
  {
    if ( v12 - v11 + 1 < v7 )
      goto LABEL_73;
    v13 = v12 - v7 + 1;
    v57 = v13;
    v14 = v49 + 8 * (v13 >> 6);
    v15 = *(_QWORD *)(v49 + 8 * (v11 >> 6)) | ((1LL << (v11 & 0x3F)) - 1);
    v16 = (unsigned __int64 *)(v49 + 8 * (v11 >> 6));
    if ( v7 > 0x7F )
    {
      v36 = v14 + 8;
      if ( (v13 & 0x3F) == 0 )
        v36 = v49 + 8 * (v13 >> 6);
      if ( !v15 )
      {
        v37 = v49;
        v39 = 0;
        goto LABEL_87;
      }
      if ( !*++v16 )
      {
        v10 = !_BitScanReverse64((unsigned __int64 *)&v43, v15);
        if ( v10 )
          v39 = 64;
        else
          v39 = 63 - v43;
        v37 = v49;
        LODWORD(v57) = v39;
        goto LABEL_87;
      }
      v37 = v49;
      while ( 1 )
      {
        do
        {
          if ( (unsigned __int64)v16 > v36 )
            goto LABEL_52;
          ++v16;
        }
        while ( *v16 );
        v10 = !_BitScanReverse64((unsigned __int64 *)&v38, *(v16 - 1));
        v39 = v10 ? 64 : 63 - v38;
LABEL_87:
        v18 = ((__int64)((__int64)v16 - v37) >> 3 << 6) - v39;
        if ( v18 > v13 )
          break;
        v40 = &v16[(v7 - v39) >> 6];
        if ( ++v16 == v40 )
        {
LABEL_91:
          v41 = ((_BYTE)v7 - (_BYTE)v39) & 0x3F;
          if ( (((_BYTE)v7 - (_BYTE)v39) & 0x3F) == 0 )
            goto LABEL_12;
          v10 = !_BitScanForward64((unsigned __int64 *)&v42, *v16);
          if ( v10 )
            LODWORD(v42) = 64;
          if ( (unsigned int)v42 >= v41 )
            goto LABEL_12;
        }
        else
        {
          while ( !*v16 )
          {
            if ( ++v16 == v40 )
              goto LABEL_91;
          }
        }
      }
LABEL_73:
      v18 = -1LL;
      goto LABEL_13;
    }
    if ( v7 < 0x40 )
    {
      if ( v7 > 1 )
      {
        v27 = 0LL;
        while ( 1 )
        {
          if ( v15 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v16 > v14 )
                goto LABEL_73;
              v15 = *v16;
              if ( *v16 != -1LL )
              {
                v27 = 0LL;
                break;
              }
            }
          }
          v10 = !_BitScanForward64((unsigned __int64 *)&v28, v15);
          if ( v10 )
            LODWORD(v28) = 64;
          if ( (unsigned int)(v27 + v28) >= v7 )
            break;
          v29 = v7;
          v30 = ~v15;
          while ( 1 )
          {
            v30 &= v30 >> (v29 >> 1);
            if ( !v30 )
              break;
            v29 -= v29 >> 1;
            if ( v29 <= 1 )
            {
              _BitScanForward64(&v30, v30);
              goto LABEL_51;
            }
          }
          if ( v16 == (unsigned __int64 *)(v49 + 8 * (v12 >> 6)) )
            goto LABEL_52;
          v10 = !_BitScanReverse64((unsigned __int64 *)&v31, v15);
          if ( v10 )
            v27 = 64LL;
          else
            v27 = (unsigned int)(63 - v31);
          v15 = v16[1];
          ++v16;
        }
        v30 = -v27;
LABEL_51:
        v18 = ((__int64)((__int64)v16 - v49) >> 3 << 6) + v30;
        if ( v18 <= v57 )
          goto LABEL_12;
        goto LABEL_52;
      }
      if ( v15 == -1 )
      {
        do
        {
          if ( (unsigned __int64)++v16 > v14 )
            goto LABEL_52;
          v15 = *v16;
        }
        while ( *v16 == -1LL );
      }
      _BitScanForward64(&v17, ~v15);
      v18 = (unsigned int)v17 + ((__int64)((__int64)v16 - v49) >> 3 << 6);
      if ( v18 > v13 )
      {
        v18 = -1LL;
        goto LABEL_13;
      }
LABEL_12:
      if ( v18 == -1LL )
        goto LABEL_13;
      break;
    }
    while ( v15 >= 0 )
    {
LABEL_63:
      v10 = !_BitScanReverse64((unsigned __int64 *)&v32, v15);
      if ( v10 )
        v33 = 64;
      else
        v33 = 63 - v32;
      v18 = ((((__int64)((__int64)v16 - v49) >> 3) + 1) << 6) - v33;
      if ( v18 > v13 )
        goto LABEL_52;
      v34 = v7 - v33;
      if ( v7 == v33 )
        goto LABEL_12;
      v15 = v16[1];
      ++v16;
      if ( v34 < 0x40 )
        goto LABEL_68;
      if ( !v15 )
      {
        v34 -= 64LL;
        if ( !v34 )
          goto LABEL_12;
        v15 = v16[1];
        ++v16;
LABEL_68:
        v10 = !_BitScanForward64(&v35, v15);
        if ( v10 )
          v35 = (unsigned int)v54;
        if ( v35 >= v34 )
          goto LABEL_12;
      }
    }
    while ( (unsigned __int64)++v16 <= v14 )
    {
      v15 = *v16;
      if ( (*v16 & 0x8000000000000000uLL) == 0LL )
        goto LABEL_63;
    }
LABEL_52:
    v18 = -1LL;
LABEL_13:
    if ( v11 )
    {
      v47 = v7 + v8;
      v11 = 0LL;
      if ( v7 + v8 > v48 )
        v47 = v48;
      v12 = v47 - 1;
      continue;
    }
    break;
  }
  v19 = v18;
  v5 = a4;
LABEL_15:
  if ( v19 == -1LL || *(_BYTE *)(v5 + 48) == 1 && v19 < v8 )
    return -1LL;
  KeAcquireInStackQueuedSpinLock(&v9[19].Alignment, &LockHandle);
  v21 = 8LL * (int)v52;
  v22 = *(unsigned __int64 *)((char *)&v9[24].Alignment + v21);
  if ( v22 < v4 || *(_BYTE *)(a4 + 48) == 1 || v22 >= v4 + v56 )
  {
    v22 = -1LL;
  }
  else if ( v4 + v19 < v22 )
  {
    v19 = v22 - v4;
  }
  if ( *(_DWORD *)a4 == 1 )
  {
    v25 = a2;
    v24 = MiCheckPoolForContiguousPages((unsigned int)&v48, v7, v19, a4, v4, a2);
    if ( v24 == -1 )
      goto LABEL_98;
    LODWORD(ClearBitsAndSet) = -1;
    goto LABEL_28;
  }
  ClearBitsAndSet = RtlFindClearBitsAndSetEx(&v48, v7, v19);
  if ( ClearBitsAndSet == -1LL )
    goto LABEL_98;
  if ( *(_BYTE *)(a4 + 48) != 1 || ClearBitsAndSet >= v8 )
  {
    v24 = ClearBitsAndSet + v4;
    if ( v22 != -1LL && v7 == 1 && !*(_DWORD *)a4 )
      *(unsigned __int64 *)((char *)&v9[24].Alignment + v21) = v24 + 1;
    v25 = a2;
LABEL_28:
    MiAllocatingNonPagedPoolVa(v9, v52, v24, v7);
    if ( !*(_DWORD *)a4 && !v52 && v7 <= 3 )
      v7 += MiReplenishNonPagedSlists((unsigned int)&v48, v25, (int)v24 - (int)ClearBitsAndSet, ClearBitsAndSet, v7);
    v26 = MiIncreaseNonPagedPoolUsage(v9, v52, v24, v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v26 == 1 )
      MiFreeExcessSegments();
    return v24;
  }
  RtlClearBitsEx((__int64)&v48, ClearBitsAndSet, v7);
LABEL_98:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return -1LL;
}
