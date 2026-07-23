/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1400BA53C
 * Callers:
 *     PnpTraceInterruptUsage @ 0x1400B2DC0 (PnpTraceInterruptUsage.c)
 *     _TlgWriteAgg @ 0x1400BA394 (_TlgWriteAgg.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     EnableFlushTimer @ 0x1400B4BF8 (EnableFlushTimer.c)
 *     RunningHash @ 0x1400BA500 (RunningHash.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     CreateNewEventEntry @ 0x1401217E4 (CreateNewEventEntry.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        _WORD *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  unsigned __int8 v6; // r15
  ULONG_PTR BugCheckParameter4; // r11
  char v9; // r12
  unsigned __int8 v10; // cl
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // r11
  unsigned int v14; // ecx
  int v15; // r13d
  __int64 v16; // r14
  __int64 v17; // rdi
  int v18; // ecx
  int v19; // r8d
  int v20; // edi
  volatile signed __int64 *i; // rsi
  unsigned __int16 *v22; // r14
  int v23; // eax
  __int64 v24; // r10
  __int64 v25; // rsi
  unsigned __int8 v26; // r9
  signed __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r10d
  volatile signed __int64 *v30; // r8
  unsigned int v31; // edi
  unsigned int v33; // edi
  __int64 v34; // r12
  __int64 v35; // rax
  int v36; // eax
  unsigned int NewEventEntry; // eax
  unsigned int v38; // eax
  signed __int64 v39; // rcx
  BOOL v40; // eax
  unsigned __int8 v41; // si
  unsigned int v42; // [rsp+40h] [rbp-28h]
  unsigned int v43; // [rsp+44h] [rbp-24h] BYREF
  signed __int64 v44; // [rsp+48h] [rbp-20h] BYREF
  __int64 CurrentIrql; // [rsp+50h] [rbp-18h]
  char v46; // [rsp+B0h] [rbp+48h]

  v5 = *(_QWORD *)(a1 + 48);
  v6 = a3;
  v44 = 0LL;
  v42 = 0;
  v43 = 0;
  RunningHash(&v43, (__int64)a2, 2uLL);
  v9 = a5;
  v10 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < v6 )
  {
    v11 = a4 + 16LL * v10;
    v12 = (unsigned __int8)(v6 - v10);
    do
    {
      RunningHash(&v43, *(_QWORD *)v11, *(unsigned int *)(v11 + 8));
      v11 = v13 + 16;
      --v12;
    }
    while ( v12 );
    BugCheckParameter4 = 0LL;
  }
  v14 = ((9 * v43) >> 11) ^ (9 * v43);
  v15 = 32769 * v14;
  v43 = v14;
  v16 = v14 & 0x1F;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) != (_BYTE)BugCheckParameter4 )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, BugCheckParameter4);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      v17 = KeAbPreAcquire(v5 + 272, 0LL);
      v18 = 17;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v5 + 272), v17, v5 + 272);
      v19 = 0;
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      v46 = 0;
      goto LABEL_12;
    }
    if ( *(_BYTE *)(v5 + 373) != (_BYTE)BugCheckParameter4 )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, BugCheckParameter4);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v19 = 0;
  v46 = 1;
LABEL_12:
  v20 = (int)a2;
  for ( i = (volatile signed __int64 *)(v5 + 8 * v16); ; i = (volatile signed __int64 *)&v22[v25] )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v31 = -1073741789;
        goto LABEL_27;
      }
      if ( !v44 )
      {
        LOBYTE(v18) = *(_BYTE *)(v5 + 373);
        LOBYTE(v19) = v6;
        NewEventEntry = CreateNewEventEntry(v18, v20, v19, a4, v9, v15, (__int64)&v44);
        v19 = 0;
        v42 = NewEventEntry;
        if ( !v44 )
        {
          v31 = NewEventEntry;
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_27;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v44, 0LL) )
        break;
    }
    v22 = (unsigned __int16 *)*i;
    v23 = *(_DWORD *)(*i + 40);
    if ( v15 != v23 )
    {
      v18 = v15 - v23;
      goto LABEL_16;
    }
    if ( *a2 != *v22 )
    {
      v18 = (unsigned __int16)*a2 - *v22;
      goto LABEL_42;
    }
    v33 = *((unsigned __int8 *)v22 + 45) + 2;
    if ( v33 >= v6 )
    {
LABEL_40:
      v18 = 0;
LABEL_41:
      v6 = a3;
LABEL_42:
      v20 = (int)a2;
LABEL_16:
      v24 = a4;
      goto LABEL_17;
    }
    v34 = *((_QWORD *)v22 + 2);
    while ( 1 )
    {
      v24 = a4;
      v35 = 16LL * v33;
      v18 = *(_DWORD *)(v35 + a4 + 8) - *(_DWORD *)(v35 + v34 + 8);
      if ( v18 )
        break;
      v36 = memcmp(*(const void **)(v35 + a4), *(const void **)(v35 + v34), *(unsigned int *)(v35 + a4 + 8));
      v19 = 0;
      v18 = v36;
      if ( v36 )
        goto LABEL_41;
      if ( ++v33 >= v6 )
        goto LABEL_40;
    }
    v6 = a3;
    v20 = (int)a2;
LABEL_17:
    if ( !v18 )
    {
      if ( !v22 )
      {
        v31 = v42;
        goto LABEL_27;
      }
      v26 = 2;
      if ( !a5 )
      {
LABEL_26:
        v31 = v42;
        goto LABEL_27;
      }
      while ( 2 )
      {
        v27 = **(_QWORD **)(v24 + 16LL * v26);
        v28 = *((_QWORD *)v22 + 2);
        v29 = *(unsigned __int8 *)(v28 + 16LL * v26 + 13);
        v30 = *(volatile signed __int64 **)(v28 + 16LL * v26);
        if ( v29 == 113 )
        {
          _InterlockedExchangeAdd64(v30, v27);
          goto LABEL_25;
        }
        if ( (unsigned int)(v29 - 114) > 1 )
        {
LABEL_25:
          v24 = a4;
          if ( ++v26 >= (unsigned int)a5 + 2 )
            goto LABEL_26;
          continue;
        }
        break;
      }
      while ( 2 )
      {
        v39 = *v30;
        if ( v29 == 114 )
        {
          v40 = v27 < *v30;
        }
        else
        {
          if ( v27 > v39 )
          {
LABEL_54:
            if ( v39 == _InterlockedCompareExchange64(v30, v27, v39) )
              goto LABEL_25;
            continue;
          }
          v40 = 0;
        }
        break;
      }
      if ( !v40 )
        goto LABEL_25;
      goto LABEL_54;
    }
    v9 = a5;
    v25 = 16LL;
    if ( v18 < 0 )
      v25 = 12LL;
  }
  v44 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360));
  v38 = *(_DWORD *)(v5 + 256);
  v31 = v42;
  if ( *(_DWORD *)(v5 + 304) < v38 )
    *(_DWORD *)(v5 + 304) = v38;
LABEL_27:
  if ( v46 )
  {
    v41 = CurrentIrql;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    if ( v41 < 2u )
      __writecr8(v41);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 272));
    KeAbPostRelease(v5 + 272);
  }
  if ( v44 )
    ExFreePoolWithTag(*(PVOID *)(v44 + 16), 0);
  return v31;
}
