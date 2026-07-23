/*
 * XREFs of MiExpandNonPagedPool @ 0x1400BE8FC
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x1400BE770 (MiFindContiguousMemoryInPool.c)
 *     MiFindNonPagedPoolVa @ 0x1400D7730 (MiFindNonPagedPoolVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     MmAllocatePoolMemory @ 0x140025B30 (MmAllocatePoolMemory.c)
 *     MiReadyNonPagedPoolExpansionForUse @ 0x140045DA4 (MiReadyNonPagedPoolExpansionForUse.c)
 *     MiReturnSystemVa @ 0x140048F2C (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFreeExcessSegments @ 0x1400C6548 (MiFreeExcessSegments.c)
 *     MiIncreaseNonPagedPoolUsage @ 0x1400D82F0 (MiIncreaseNonPagedPoolUsage.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiObtainPoolCharges @ 0x14013307C (MiObtainPoolCharges.c)
 *     MiReturnPoolCharges @ 0x140134F8C (MiReturnPoolCharges.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1402547CC (MiLogPerfMemoryRangeEvent.c)
 */

__int64 __fastcall MiExpandNonPagedPool(unsigned int a1, unsigned __int64 a2, unsigned int a3, int a4, _DWORD *a5)
{
  __int64 v6; // rdi
  int v8; // r15d
  _SLIST_HEADER *v9; // rbx
  int v10; // r13d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 Region; // rcx
  unsigned __int64 v15; // r14
  ULONG_PTR v16; // r10
  int v17; // r12d
  ULONG_PTR v18; // rdi
  int v19; // eax
  unsigned int v20; // r13d
  ULONG_PTR v21; // rdi
  int v22; // ebx
  unsigned __int64 v24; // rcx
  ULONG_PTR v25; // [rsp+30h] [rbp-51h] BYREF
  ULONG_PTR v26; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-41h]
  ULONG_PTR v28; // [rsp+48h] [rbp-39h] BYREF
  ULONG_PTR v29; // [rsp+50h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v31[12]; // [rsp+70h] [rbp-11h] BYREF
  unsigned int v33; // [rsp+E8h] [rbp+67h]
  unsigned int v34; // [rsp+F0h] [rbp+6Fh]

  v6 = a3;
  memset(v31, 0, 0x20uLL);
  v8 = 0;
  v34 = 1;
  v9 = &qword_1403CB6A8[25 * v6];
  *a5 = 3;
  v10 = a1 & 0x200;
  if ( (a1 & 0x200) != 0 )
  {
    v11 = *(_QWORD *)(1984LL * (unsigned int)v6 + qword_1403CDF50 + 1808) >> 9;
    if ( qword_1403CFA10 < 0x100000 )
    {
      v12 = *(_QWORD *)(1984LL * (unsigned int)v6 + qword_1403CDF50 + 1808) >> 14;
    }
    else
    {
      if ( qword_1403CFA10 < 0x400000 )
        v11 = ((v11 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)
            + ((unsigned __int64)(v11 - ((v11 * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64)) >> 1);
      v12 = v11 >> 4;
    }
    if ( qword_1403CFA10 <= 0x20000 )
    {
      v13 = 0LL;
    }
    else
    {
      v13 = -1LL;
      if ( qword_1403CFA10 < 0x80000 )
        v13 = 2LL;
    }
    if ( (a2 & 0x1FF) == 0 )
      goto LABEL_12;
    Region = v9[17].Region;
    if ( Region < v13 )
    {
      if ( Region >= v12 )
      {
        v24 = Region << 12;
        LOBYTE(v8) = v9[18].Alignment >= v24 / 0xA;
        if ( v9[18].Alignment < v24 / 0xA )
          goto LABEL_14;
        goto LABEL_13;
      }
LABEL_12:
      v8 = 1;
LABEL_13:
      v34 = 0;
    }
  }
LABEL_14:
  v15 = (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL;
  if ( v15 >= a2 )
  {
    v25 = 0LL;
    v27 = v15 >> 9;
    v26 = v15 >> 9 << 21;
    v33 = v6 + 1;
    if ( (int)MmAllocatePoolMemory(&v25, &v26, (v6 + 1) | 0x2000, 4u, a1) >= 0 )
    {
      v16 = v25;
      v17 = 4096;
      v18 = ((v25 >> 9) & 0x7FFFFFFFF8LL) + 8 * v15 - 0x98000000008LL;
      if ( MmProtectFreedNonPagedPool == 1 && v8 == 1 )
      {
        v8 = 0;
        v34 = 1;
      }
      v19 = a4;
      v20 = v10 != 0 ? 0xFFFFFFC4 : 0;
      while ( 1 )
      {
        if ( v8 )
        {
          v17 |= 0x20000000u;
        }
        else
        {
          v17 &= ~0x20000000u;
          if ( v19 == 1 )
            goto LABEL_50;
          v26 = a2 << 12;
        }
        if ( a2 >= 0x80000 )
        {
          if ( !(unsigned int)MiObtainPoolCharges(a2, 0LL) )
            break;
          v31[3] = a2;
          v31[0] = a2;
          MiReturnPoolCharges(v31, 0LL);
          v16 = v25;
        }
        if ( !MiReadyNonPagedPoolExpansionForUse(v9, v16, v27, v34) )
          break;
        v29 = (v25 - v9[20].Alignment) >> 21;
        v28 = v25;
        if ( (int)MmAllocatePoolMemory(&v28, &v26, v17 | v33, v20 + 64, a1) >= 0 )
        {
          if ( a2 != v15 )
            ++v9[17].Region;
          if ( v8 )
            *a5 = 1;
          v21 = (v25 - v9[20].Alignment) >> 12;
          KeAcquireInStackQueuedSpinLock(&v9[19].Alignment, &LockHandle);
          if ( v15 != a2 )
          {
            RtlClearBitsEx((__int64)&v9[23], v21 + a2, v15 - a2);
            _bittestandreset64((signed __int64 *)v9[v34 + 21].Region, v29 - 1 + v27);
            if ( v21 < *(&v9[24].Alignment + v34) )
              *(&v9[24].Alignment + v34) = v21 + a2;
          }
          v22 = MiIncreaseNonPagedPoolUsage(v9, v34, v21, a2);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          __writecr8(LockHandle.OldIrql);
          if ( v22 == 1 )
            MiFreeExcessSegments();
          if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 && *a5 == 1 )
            MiLogPerfMemoryRangeEvent(v25, 0LL, 11LL, (a2 + 511) & 0xFFFFFFFFFFFFFE00uLL);
          return v21;
        }
        if ( !v8 )
          break;
        v19 = a4;
        if ( a4 )
          break;
        v16 = v25;
        v8 = 0;
        v34 = 1;
      }
      v16 = v25;
LABEL_50:
      if ( v16 )
        MiReturnSystemVa(v16, (__int64)((v18 << 25) + 0x10000000) >> 16, 5);
    }
  }
  return -1LL;
}
