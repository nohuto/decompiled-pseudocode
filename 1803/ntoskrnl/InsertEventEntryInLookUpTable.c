/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x14006F1E0
 * Callers:
 *     _TlgWriteAgg @ 0x14006F11C (_TlgWriteAgg.c)
 *     PnpTraceInterruptUsage @ 0x140168E28 (PnpTraceInterruptUsage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     RunningHash @ 0x14006F514 (RunningHash.c)
 *     EnableFlushTimer @ 0x1400844D0 (EnableFlushTimer.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     CreateNewEventEntry @ 0x1400C1F3C (CreateNewEventEntry.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        _WORD *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  char v6; // r13
  _WORD *v9; // r14
  char v10; // si
  unsigned __int8 v11; // cl
  __int64 v12; // r11
  __int64 v13; // rdi
  __int64 v14; // r11
  unsigned int v15; // r15d
  __int64 v16; // rbp
  __int64 v17; // rdi
  int v18; // r8d
  int v19; // ecx
  volatile signed __int64 *i; // rdi
  unsigned __int16 *v21; // rsi
  int v22; // edx
  __int64 v23; // r10
  unsigned __int16 *v24; // rdi
  unsigned __int8 v25; // r9
  unsigned int v26; // r11d
  signed __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r10d
  volatile signed __int64 *v30; // r8
  unsigned int v31; // esi
  unsigned int v33; // edi
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned int NewEventEntry; // eax
  unsigned int v37; // eax
  signed __int64 v38; // rcx
  BOOL v39; // eax
  signed __int64 v40; // [rsp+40h] [rbp-68h] BYREF
  __int64 CurrentIrql; // [rsp+48h] [rbp-60h]
  int v42; // [rsp+B0h] [rbp+8h] BYREF
  _WORD *v43; // [rsp+B8h] [rbp+10h]
  unsigned int v44; // [rsp+C0h] [rbp+18h]
  __int64 v45; // [rsp+C8h] [rbp+20h]

  v45 = a4;
  v43 = a2;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v40 = 0LL;
  v44 = 0;
  v42 = 0;
  v9 = a2;
  RunningHash(&v42, a2, 2LL);
  v10 = a5;
  v11 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < a3 )
  {
    v12 = a4 + 16LL * v11;
    v13 = (unsigned __int8)(a3 - v11);
    do
    {
      RunningHash(&v42, *(_QWORD *)v12, *(unsigned int *)(v12 + 8));
      v12 = v14 + 16;
      --v13;
    }
    while ( v13 );
  }
  v15 = 32769 * ((9 * v42) ^ ((unsigned int)(9 * v42) >> 11));
  v16 = ((unsigned __int8)(9 * v42) ^ (unsigned __int8)((unsigned int)(9 * v42) >> 11)) & 0x1F;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
  }
  else
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      v17 = KeAbPreAcquire(v5 + 272, 0LL, 0);
      v19 = 17;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(v5 + 272), v17, v5 + 272);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      v10 = a5;
      goto LABEL_11;
    }
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
  }
  v6 = 1;
LABEL_11:
  for ( i = (volatile signed __int64 *)(v5 + 8 * v16);
        ;
        i = (volatile signed __int64 *)((char *)v24 + (((__int64)v19 >> 63) & 0xFFFFFFFFFFFFFFF8uLL)) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v31 = -1073741789;
        goto LABEL_24;
      }
      if ( !v40 )
      {
        LOBYTE(v19) = *(_BYTE *)(v5 + 373);
        LOBYTE(v18) = a3;
        NewEventEntry = CreateNewEventEntry(v19, (_DWORD)v9, v18, v45, v10, v15, (__int64)&v40);
        v31 = NewEventEntry;
        v44 = NewEventEntry;
        if ( !v40 )
        {
          if ( NewEventEntry == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_24;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v40, 0LL) )
        break;
    }
    v21 = (unsigned __int16 *)*i;
    v22 = *(_DWORD *)(*i + 40);
    if ( v15 != v22 )
    {
      v19 = v15 - v22;
LABEL_15:
      v23 = v45;
      goto LABEL_16;
    }
    if ( *v9 != *v21 )
    {
      v19 = (unsigned __int16)*v9 - *v21;
      goto LABEL_15;
    }
    v33 = *((unsigned __int8 *)v21 + 45) + 2;
    if ( v33 >= a3 )
    {
LABEL_37:
      v19 = 0;
      goto LABEL_15;
    }
    v34 = *((_QWORD *)v21 + 2);
    while ( 1 )
    {
      v23 = v45;
      v35 = 16LL * v33;
      v19 = *(_DWORD *)(v35 + v45 + 8) - *(_DWORD *)(v35 + v34 + 8);
      if ( v19 )
        break;
      v19 = memcmp(*(const void **)(v35 + v45), *(const void **)(v35 + v34), *(unsigned int *)(v35 + v45 + 8));
      if ( v19 )
        goto LABEL_15;
      if ( ++v33 >= a3 )
        goto LABEL_37;
    }
LABEL_16:
    if ( !v19 )
    {
      if ( !v21 || (v25 = 2, v26 = a5 + 2, !a5) )
      {
LABEL_23:
        v31 = v44;
        goto LABEL_24;
      }
      while ( 2 )
      {
        v27 = **(_QWORD **)(v23 + 16LL * v25);
        v28 = *((_QWORD *)v21 + 2);
        v29 = *(unsigned __int8 *)(v28 + 16LL * v25 + 13);
        v30 = *(volatile signed __int64 **)(v28 + 16LL * v25);
        if ( v29 == 113 )
        {
          _InterlockedExchangeAdd64(v30, v27);
          goto LABEL_22;
        }
        if ( (unsigned int)(v29 - 114) > 1 )
        {
LABEL_22:
          v23 = v45;
          if ( ++v25 >= v26 )
            goto LABEL_23;
          continue;
        }
        break;
      }
      while ( 2 )
      {
        v38 = *v30;
        if ( v29 == 114 )
        {
          v39 = v27 < *v30;
LABEL_65:
          if ( !v39 )
            goto LABEL_22;
        }
        else if ( v27 <= v38 )
        {
          v39 = 0;
          goto LABEL_65;
        }
        if ( v38 == _InterlockedCompareExchange64(v30, v27, v38) )
          goto LABEL_22;
        continue;
      }
    }
    v9 = v43;
    v24 = v21 + 16;
    v10 = a5;
  }
  v40 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
  v37 = *(_DWORD *)(v5 + 256);
  v31 = v44;
  if ( *(_DWORD *)(v5 + 304) < v37 )
    *(_DWORD *)(v5 + 304) = v37;
LABEL_24:
  if ( v6 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    if ( (unsigned __int8)CurrentIrql < 2u )
      __writecr8((unsigned __int8)CurrentIrql);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 272), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 272));
    KeAbPostRelease(v5 + 272);
  }
  if ( v40 )
    ExFreePoolWithTag(*(PVOID *)(v40 + 16), 0);
  return v31;
}
