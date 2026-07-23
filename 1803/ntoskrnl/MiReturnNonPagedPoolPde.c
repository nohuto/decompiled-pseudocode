/*
 * XREFs of MiReturnNonPagedPoolPde @ 0x1400DC5A0
 * Callers:
 *     MiReturnNonPagedPoolVa @ 0x1400DC534 (MiReturnNonPagedPoolVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     MmFreePoolMemory @ 0x140009F80 (MmFreePoolMemory.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiNonPagedPoolToNode @ 0x1400DC918 (MiNonPagedPoolToNode.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiIsAddressValid @ 0x140122C40 (MiIsAddressValid.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140170180 (MiSignalNonPagedPoolWatchers.c)
 *     MiJoinBitmapPages @ 0x14025B96C (MiJoinBitmapPages.c)
 */

__int64 __fastcall MiReturnNonPagedPoolPde(ULONG_PTR a1, unsigned __int64 a2)
{
  _SLIST_HEADER *v4; // rbp
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 Region; // rax
  ULONG_PTR v8; // r15
  unsigned __int64 v9; // rdi
  unsigned int v10; // r12d
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 i; // rax
  ULONG_PTR v24; // rsi
  __int64 result; // rax
  _QWORD *v26; // rdi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  ULONG_PTR v29; // [rsp+20h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  ULONG_PTR v31; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR v32; // [rsp+88h] [rbp+10h]
  unsigned __int64 v33; // [rsp+98h] [rbp+20h]

  v31 = a1;
  v4 = &qword_1403CB6A8[25 * (unsigned int)MiNonPagedPoolToNode(a1)];
  v32 = (a1 - v4[20].Alignment) >> 12;
  v5 = v32;
  v6 = v32 & 0xFFFFFFFFFFFFFE00uLL;
  v33 = v32 + a2;
  Region = v4[23].Region;
  v8 = 0LL;
  LockHandle.LockQueue.Lock = &v4[19].Alignment;
  LockHandle.LockQueue.Next = 0LL;
  v9 = Region + 8 * (((v32 + a2 + 511) >> 6) & 0x3FFFFFFFFFFFFF8LL);
  LOBYTE(Region) = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = Region;
  KxAcquireQueuedSpinLock(&LockHandle, &v4[19]);
  RtlClearBitsEx((__int64)&v4[23], v5, a2);
  v10 = 1;
  v11 = 0LL;
  if ( (unsigned __int8)MiIsAddressValid(a1) )
  {
    v12 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v13 = v32;
    v11 = v12;
    if ( (v12 & 0x80u) != 0LL )
    {
      v14 = a2;
      v15 = (v32 + 511) & 0xFFFFFFFFFFFFFE00uLL;
      v16 = (v32 + a2) & 0xFFFFFFFFFFFFFE00uLL;
      if ( v16 > v15 )
        v14 = a2 + v15 - v16;
      v4[18].Alignment -= v14;
      v10 = 0;
    }
  }
  else
  {
    v13 = v32;
  }
  v4[17].Alignment -= a2;
  v17 = _InterlockedExchangeAdd64(&qword_1403CB118, -(__int64)a2);
  if ( MiState[0] )
  {
    if ( (v18 = v17 - a2, v17 >= MiState[0] - 5120) && v18 < MiState[0] - 5120
      || v17 >= MiState[0] - 2048 && v18 < MiState[0] - 2048 )
    {
      MiSignalNonPagedPoolWatchers();
      v13 = v32;
    }
  }
  v19 = -1LL;
  v20 = v9 & 0xFFFFFFFFFFFFF000uLL;
  v21 = 8LL * v10;
  v22 = v6 >> 9;
  for ( i = 0LL; i < 8; ++i )
  {
    v9 -= 8LL;
    if ( *(_QWORD *)v9 )
    {
      v24 = v31;
      v20 = v9 & 0xFFFFFFFFFFFFF000uLL;
      _bittestandreset64((signed __int64 *)v4[v10 + 21].Region, v22);
      if ( v6 < *(unsigned __int64 *)((char *)&v4[24].Alignment + v21) )
        *(unsigned __int64 *)((char *)&v4[24].Alignment + v21) = v6;
      goto LABEL_13;
    }
  }
  v24 = v4[20].Alignment + (v6 << 12);
  *(_QWORD *)v9 = -1LL;
  *(_QWORD *)(v9 + 8) = -1LL;
  *(_QWORD *)(v9 + 16) = -1LL;
  *(_QWORD *)(v9 + 24) = -1LL;
  *(_QWORD *)(v9 + 32) = -1LL;
  *(_QWORD *)(v9 + 40) = -1LL;
  *(_QWORD *)(v9 + 48) = -1LL;
  *(_QWORD *)(v9 + 56) = -1LL;
  v26 = (_QWORD *)(v9 + 64);
  v27 = (unsigned __int64)v26;
  if ( ((unsigned __int16)v26 & 0xFFF) != 0 )
  {
    while ( !*(_QWORD *)v27 )
    {
      v27 += 8LL;
      if ( (v27 & 0xFFF) == 0 )
        goto LABEL_21;
    }
    v20 = v27 & 0xFFFFFFFFFFFFF000uLL;
  }
LABEL_21:
  v19 = (unsigned __int64)(v26 - 8);
  v28 = (unsigned __int64)(v26 - 8);
  if ( (((_DWORD)v26 - 64) & 0xFFF) != 0 )
  {
    do
    {
      v19 = v28 - 8;
      v28 = v19;
      if ( *(_QWORD *)v19 )
        goto LABEL_23;
    }
    while ( (v19 & 0xFFF) != 0 );
    if ( *(_QWORD *)v19 )
LABEL_23:
      v19 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  }
  v8 = v24;
  _bittestandset64((signed __int64 *)v4[v10 + 21].Region, v22);
  if ( v11 && (v11 & 0x80u) != 0LL && (v6 < v13 || v6 + 512 > v33) )
  {
    --v4[17].Region;
    v8 = v24;
  }
LABEL_13:
  if ( v20 > v19 )
    MiJoinBitmapPages(v21, v19, (v20 - v19) >> 12);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v8 )
  {
    v29 = 0x200000LL;
    v31 = v24 & 0xFFFFFFFFFFE00000uLL;
    return MmFreePoolMemory(&v31, &v29);
  }
  return result;
}
