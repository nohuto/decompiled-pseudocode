/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x140081DE4
 * Callers:
 *     _TlgWriteAgg @ 0x140081D20 (_TlgWriteAgg.c)
 * Callees:
 *     CreateNewEventEntry @ 0x14002A1AC (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x140030F08 (EnableFlushTimer.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     RunningHash @ 0x140082104 (RunningHash.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // r15
  __int128 *v8; // r12
  char v9; // r8
  unsigned __int8 v10; // cl
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // r11
  unsigned int v14; // ecx
  int v15; // r13d
  __int64 v16; // r14
  __int64 v17; // rdi
  volatile signed __int64 *v18; // rdi
  unsigned __int16 *v19; // r14
  int v20; // edx
  unsigned int v21; // esi
  __int64 v22; // r12
  __int64 v23; // r10
  __int64 v24; // rax
  int v25; // ecx
  unsigned __int8 v26; // r9
  signed __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r10d
  volatile signed __int64 *v30; // r8
  unsigned int v31; // esi
  signed __int64 v33; // rcx
  BOOL v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned __int8 v37; // di
  unsigned int v38; // [rsp+30h] [rbp-28h] BYREF
  __int64 v39; // [rsp+38h] [rbp-20h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-18h]
  unsigned int v41; // [rsp+A0h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 48);
  v39 = 0LL;
  v38 = 0;
  v6 = a3;
  v41 = 0;
  v8 = a2;
  RunningHash(&v38, a2, 2LL);
  v10 = v9 + a5;
  if ( (unsigned __int8)(v9 + a5) < v6 )
  {
    v11 = a4 + 16LL * v10;
    v12 = (unsigned __int8)(v6 - v10);
    do
    {
      RunningHash(&v38, *(_QWORD *)v11, *(unsigned int *)(v11 + 8));
      v11 = v13 + 16;
      --v12;
    }
    while ( v12 );
  }
  v14 = ((9 * v38) >> 11) ^ (9 * v38);
  v15 = 32769 * v14;
  v38 = v14;
  v16 = v14 & 0x1F;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 336));
  }
  else if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 336));
  }
  else
  {
    v17 = KeAbPreAcquire(v5 + 328, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 328), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v5 + 328, v17, v5 + 328);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
  }
  v18 = (volatile signed __int64 *)(v5 + 8 * v16);
  while ( 1 )
  {
    if ( !*v18 )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 372);
        v31 = -1073741789;
        goto LABEL_29;
      }
      if ( !v39 )
      {
        v35 = CreateNewEventEntry(v8, v6, a4, a5, v15, &v39);
        v31 = v35;
        v41 = v35;
        if ( !v39 )
        {
          if ( v35 == -1073741801 )
            ++*(_DWORD *)(v5 + 376);
          else
            ++*(_DWORD *)(v5 + 380);
          goto LABEL_29;
        }
      }
      if ( !_InterlockedCompareExchange64(v18, v39, 0LL) )
        break;
    }
    v19 = (unsigned __int16 *)*v18;
    v20 = *(_DWORD *)(*v18 + 40);
    if ( v15 != v20 )
    {
      v25 = v15 - v20;
LABEL_21:
      v23 = a4;
      goto LABEL_22;
    }
    if ( *(_WORD *)v8 != *v19 )
    {
      v25 = *(unsigned __int16 *)v8 - *v19;
      goto LABEL_21;
    }
    v21 = *((unsigned __int8 *)v19 + 45) + 2;
    if ( v21 >= v6 )
    {
LABEL_19:
      v25 = 0;
LABEL_20:
      v6 = a3;
      goto LABEL_21;
    }
    v22 = *((_QWORD *)v19 + 2);
    while ( 1 )
    {
      v23 = a4;
      v24 = 16LL * v21;
      v25 = *(_DWORD *)(v24 + a4 + 8) - *(_DWORD *)(v24 + v22 + 8);
      if ( v25 )
        break;
      v25 = memcmp(*(const void **)(v24 + a4), *(const void **)(v24 + v22), *(unsigned int *)(v24 + a4 + 8));
      if ( v25 )
        goto LABEL_20;
      if ( ++v21 >= v6 )
        goto LABEL_19;
    }
    v6 = a3;
LABEL_22:
    if ( !v25 )
    {
      if ( !v19 || (v26 = 2, !a5) )
      {
LABEL_28:
        v31 = v41;
        goto LABEL_29;
      }
      while ( 2 )
      {
        v27 = **(_QWORD **)(v23 + 16LL * v26);
        v28 = *((_QWORD *)v19 + 2);
        v29 = *(unsigned __int8 *)(v28 + 16LL * v26 + 13);
        v30 = *(volatile signed __int64 **)(v28 + 16LL * v26);
        if ( v29 == 113 )
        {
          _InterlockedExchangeAdd64(v30, v27);
          goto LABEL_27;
        }
        if ( (unsigned int)(v29 - 114) > 1 )
        {
LABEL_27:
          v23 = a4;
          if ( ++v26 >= (unsigned int)a5 + 2 )
            goto LABEL_28;
          continue;
        }
        break;
      }
      while ( 2 )
      {
        v33 = *v30;
        if ( v29 != 114 )
        {
          if ( v27 <= v33 )
          {
            v34 = 0;
LABEL_40:
            if ( !v34 )
              goto LABEL_27;
          }
          if ( v33 == _InterlockedCompareExchange64(v30, v27, v33) )
            goto LABEL_27;
          continue;
        }
        break;
      }
      v34 = v27 < *v30;
      goto LABEL_40;
    }
    v18 = (volatile signed __int64 *)(v19 + 12);
    if ( v25 >= 0 )
      v18 = (volatile signed __int64 *)(v19 + 16);
    v8 = a2;
  }
  v39 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 416));
  v36 = *(_DWORD *)(v5 + 256);
  v31 = v41;
  if ( *(_DWORD *)(v5 + 360) < v36 )
    *(_DWORD *)(v5 + 360) = v36;
LABEL_29:
  if ( KeGetCurrentIrql() >= 2u )
  {
    v37 = CurrentIrql;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 336));
    if ( v37 < 2u )
      __writecr8(v37);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 328), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v5 + 328);
    KeAbPostRelease(v5 + 328);
  }
  if ( v39 )
    ExFreePoolWithTag(*(PVOID *)(v39 + 16), 0);
  return v31;
}
