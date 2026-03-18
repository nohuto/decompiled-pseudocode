/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C01563A0
 * Callers:
 *     _TlgWriteAgg @ 0x1C01567AC (_TlgWriteAgg.c)
 * Callees:
 *     memcmp @ 0x1C00AA900 (memcmp.c)
 *     CreateNewEventEntry @ 0x1C0155EF0 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C0156158 (EnableFlushTimer.c)
 *     RunningHash @ 0x1C015677C (RunningHash.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v6; // rdi
  unsigned __int8 v7; // r13
  unsigned __int8 v9; // r15
  unsigned __int8 v10; // cl
  __int64 v11; // r11
  __int64 v12; // rsi
  __int64 v13; // r11
  unsigned int v14; // ecx
  int v15; // r12d
  __int64 v16; // rsi
  volatile signed __int64 *v17; // r14
  __int128 *v18; // rsi
  unsigned int v19; // eax
  unsigned __int16 *v20; // r15
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // esi
  unsigned int v24; // r12d
  __int64 v25; // r13
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // r14
  unsigned int v29; // esi
  unsigned int v30; // eax
  unsigned __int8 v31; // r9
  signed __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // r10d
  volatile signed __int64 *v35; // r8
  signed __int64 v36; // rcx
  BOOL v37; // eax
  volatile LONG *v38; // rcx
  unsigned int v40; // [rsp+40h] [rbp-28h]
  unsigned int v41; // [rsp+44h] [rbp-24h] BYREF
  int v42; // [rsp+48h] [rbp-20h]
  __int64 v43; // [rsp+50h] [rbp-18h] BYREF
  __int64 CurrentIrql; // [rsp+58h] [rbp-10h]
  char v45; // [rsp+B0h] [rbp+48h]

  v5 = qword_1C0188810;
  v6 = 0LL;
  v41 = 0;
  v7 = a3;
  v43 = 0LL;
  v40 = 0;
  RunningHash(&v41, a2, 2LL);
  v9 = a5;
  v10 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < v7 )
  {
    v11 = a4 + 16LL * v10;
    v12 = (unsigned __int8)(v7 - v10);
    do
    {
      RunningHash(&v41, *(_QWORD *)v11, *(unsigned int *)(v11 + 8));
      v11 = v13 + 16;
      --v12;
    }
    while ( v12 );
  }
  v14 = ((9 * v41) >> 11) ^ (9 * v41);
  v15 = 32769 * v14;
  v41 = v14;
  v42 = 32769 * v14;
  v16 = v14 & 0x1F;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_13;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_13:
    v45 = 1;
    goto LABEL_14;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
  v45 = 0;
LABEL_14:
  v17 = (volatile signed __int64 *)(v5 + 8 * v16);
  v18 = a2;
  while ( 1 )
  {
    if ( *v17 )
      goto LABEL_21;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 316);
      v29 = -1073741789;
      goto LABEL_62;
    }
    if ( !v6 )
    {
      v19 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), v18, v7, a4, v9, v15, &v43);
      v6 = v43;
      v40 = v19;
      if ( !v43 )
      {
        v29 = v19;
        if ( v19 == -1073741801 )
          ++*(_DWORD *)(v5 + 320);
        else
          ++*(_DWORD *)(v5 + 324);
        goto LABEL_62;
      }
    }
    if ( !_InterlockedCompareExchange64(v17, v6, 0LL) )
      break;
    v6 = v43;
LABEL_21:
    v20 = (unsigned __int16 *)*v17;
    v21 = *(_DWORD *)(*v17 + 40);
    if ( v15 != v21 )
    {
      v22 = v15 - v21;
LABEL_33:
      v26 = a4;
      goto LABEL_34;
    }
    if ( *(_WORD *)a2 != *v20 )
    {
      v22 = *(unsigned __int16 *)a2 - *v20;
LABEL_32:
      v18 = a2;
      goto LABEL_33;
    }
    v23 = *((unsigned __int8 *)v20 + 45) + 2;
    v24 = v7;
    if ( v23 >= v7 )
    {
LABEL_30:
      v22 = 0;
LABEL_31:
      v15 = v42;
      goto LABEL_32;
    }
    v25 = *((_QWORD *)v20 + 2);
    while ( 1 )
    {
      v26 = a4;
      v27 = 16LL * v23;
      v22 = *(_DWORD *)(v27 + a4 + 8) - *(_DWORD *)(v27 + v25 + 8);
      if ( v22 )
        break;
      v22 = memcmp(*(const void **)(v27 + a4), *(const void **)(v27 + v25), *(unsigned int *)(v27 + a4 + 8));
      if ( v22 )
        goto LABEL_31;
      if ( ++v23 >= v24 )
        goto LABEL_30;
    }
    v15 = v42;
    v18 = a2;
LABEL_34:
    if ( !v22 )
    {
      if ( v20 )
      {
        v31 = 2;
        if ( a5 )
        {
          do
          {
            v32 = **(_QWORD **)(v26 + 16LL * v31);
            v33 = *((_QWORD *)v20 + 2);
            v34 = *(unsigned __int8 *)(v33 + 16LL * v31 + 13);
            v35 = *(volatile signed __int64 **)(v33 + 16LL * v31);
            if ( v34 == 113 )
            {
              _InterlockedExchangeAdd64(v35, v32);
            }
            else if ( (unsigned int)(v34 - 114) <= 1 )
            {
              while ( 1 )
              {
                v36 = *v35;
                if ( v34 == 114 )
                  break;
                if ( v32 <= v36 )
                {
                  v37 = 0;
LABEL_55:
                  if ( !v37 )
                    goto LABEL_59;
                }
                if ( v36 == _InterlockedCompareExchange64(v35, v32, v36) )
                  goto LABEL_59;
              }
              v37 = v32 < v36;
              goto LABEL_55;
            }
LABEL_59:
            v26 = a4;
            ++v31;
          }
          while ( v31 < (unsigned int)a5 + 2 );
          v6 = v43;
        }
      }
      v29 = v40;
      goto LABEL_62;
    }
    v7 = a3;
    v28 = 16LL;
    if ( v22 < 0 )
      v28 = 12LL;
    v17 = (volatile signed __int64 *)&v20[v28];
    v9 = a5;
  }
  v43 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
  v30 = *(_DWORD *)(v5 + 256);
  v6 = v43;
  v29 = v40;
  if ( *(_DWORD *)(v5 + 304) < v30 )
    *(_DWORD *)(v5 + 304) = v30;
LABEL_62:
  if ( v45 )
  {
    v38 = (volatile LONG *)(v5 + 280);
    if ( (unsigned __int8)CurrentIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v38);
    else
      ExReleaseSpinLockShared(v38, CurrentIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v6 )
    ExFreePoolWithTag(*(PVOID *)(v6 + 16), 0);
  return v29;
}
