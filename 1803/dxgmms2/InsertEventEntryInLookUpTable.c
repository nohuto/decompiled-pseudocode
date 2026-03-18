/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C0034FF8
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     RunningHash @ 0x1C0016100 (RunningHash.c)
 *     memcmp @ 0x1C0017970 (memcmp.c)
 *     CreateNewEventEntry @ 0x1C0034B7C (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C0034DD8 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v6; // rdi
  unsigned __int8 v7; // r15
  __int128 *v9; // r12
  unsigned __int8 v10; // r14
  unsigned __int8 v11; // cl
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // r11
  int v15; // r13d
  __int64 v16; // rsi
  volatile signed __int64 *i; // rsi
  unsigned int v18; // eax
  volatile signed __int64 v19; // r14
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // esi
  __int64 v24; // r12
  __int64 v25; // r10
  __int64 v26; // rax
  signed __int64 v27; // rsi
  unsigned int v28; // esi
  unsigned int v29; // eax
  unsigned __int8 v30; // r9
  signed __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // r10d
  volatile signed __int64 *v34; // r8
  signed __int64 v35; // rcx
  BOOL v36; // eax
  volatile LONG *v37; // rcx
  unsigned int v39; // [rsp+40h] [rbp-28h]
  int v40; // [rsp+44h] [rbp-24h] BYREF
  __int64 v41; // [rsp+48h] [rbp-20h] BYREF
  __int64 CurrentIrql; // [rsp+50h] [rbp-18h]
  char v43; // [rsp+B0h] [rbp+48h]

  v5 = qword_1C0047080;
  v6 = 0LL;
  v40 = 0;
  v7 = a3;
  v41 = 0LL;
  v9 = (__int128 *)a2;
  v39 = 0;
  RunningHash(&v40, a2, 2uLL);
  v10 = a5;
  v11 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < v7 )
  {
    v12 = a4 + 16LL * v11;
    v13 = (unsigned __int8)(v7 - v11);
    do
    {
      RunningHash(&v40, *(_QWORD *)v12, *(unsigned int *)(v12 + 8));
      v12 = v14 + 16;
      --v13;
    }
    while ( v13 );
  }
  v15 = 32769 * ((9 * v40) ^ ((unsigned int)(9 * v40) >> 11));
  v16 = ((unsigned __int8)(9 * v40) ^ (unsigned __int8)((unsigned int)(9 * v40) >> 11)) & 0x1F;
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
    v43 = 1;
    goto LABEL_14;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
  v43 = 0;
LABEL_14:
  for ( i = (volatile signed __int64 *)(v5 + 8 * v16);
        ;
        i = (volatile signed __int64 *)((((__int64)v22 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v27) )
  {
    if ( *i )
      goto LABEL_21;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 316);
      v28 = -1073741789;
      goto LABEL_60;
    }
    if ( !v6 )
    {
      v18 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), v9, v7, a4, v10, v15, &v41);
      v6 = v41;
      v39 = v18;
      if ( !v41 )
      {
        v28 = v18;
        if ( v18 == -1073741801 )
          ++*(_DWORD *)(v5 + 320);
        else
          ++*(_DWORD *)(v5 + 324);
        goto LABEL_60;
      }
    }
    if ( !_InterlockedCompareExchange64(i, v6, 0LL) )
      break;
    v6 = v41;
LABEL_21:
    v19 = *i;
    v20 = *(_DWORD *)(*i + 40);
    if ( v15 != v20 )
    {
      v21 = v15;
LABEL_23:
      v22 = v21 - v20;
LABEL_33:
      v25 = a4;
      goto LABEL_34;
    }
    LOWORD(v21) = *(_WORD *)v9;
    LOWORD(v20) = *(_WORD *)v19;
    if ( *(_WORD *)v9 != *(_WORD *)v19 )
    {
      v20 = (unsigned __int16)v20;
      v21 = (unsigned __int16)v21;
      goto LABEL_23;
    }
    v23 = *(unsigned __int8 *)(v19 + 45) + 2;
    if ( v23 >= v7 )
    {
LABEL_31:
      v22 = 0;
LABEL_32:
      v7 = a3;
      goto LABEL_33;
    }
    v24 = *(_QWORD *)(v19 + 16);
    while ( 1 )
    {
      v25 = a4;
      v26 = 16LL * v23;
      v22 = *(_DWORD *)(v26 + a4 + 8) - *(_DWORD *)(v26 + v24 + 8);
      if ( v22 )
        break;
      v22 = memcmp(*(const void **)(v26 + a4), *(const void **)(v26 + v24), *(unsigned int *)(v26 + a4 + 8));
      if ( v22 )
        goto LABEL_32;
      if ( ++v23 >= v7 )
        goto LABEL_31;
    }
    v7 = a3;
LABEL_34:
    if ( !v22 )
    {
      if ( v19 )
      {
        v30 = 2;
        if ( a5 )
        {
          do
          {
            v31 = **(_QWORD **)(v25 + 16LL * v30);
            v32 = *(_QWORD *)(v19 + 16);
            v33 = *(unsigned __int8 *)(v32 + 16LL * v30 + 13);
            v34 = *(volatile signed __int64 **)(v32 + 16LL * v30);
            if ( v33 == 113 )
            {
              _InterlockedExchangeAdd64(v34, v31);
            }
            else if ( (unsigned int)(v33 - 114) <= 1 )
            {
              while ( 1 )
              {
                v35 = *v34;
                if ( v33 == 114 )
                  break;
                if ( v31 <= v35 )
                {
                  v36 = 0;
LABEL_53:
                  if ( !v36 )
                    goto LABEL_57;
                }
                if ( v35 == _InterlockedCompareExchange64(v34, v31, v35) )
                  goto LABEL_57;
              }
              v36 = v31 < v35;
              goto LABEL_53;
            }
LABEL_57:
            v25 = a4;
            ++v30;
          }
          while ( v30 < (unsigned int)a5 + 2 );
          v6 = v41;
        }
      }
      v28 = v39;
      goto LABEL_60;
    }
    v9 = (__int128 *)a2;
    v27 = v19 + 32;
    v10 = a5;
  }
  v41 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
  v29 = *(_DWORD *)(v5 + 256);
  v6 = v41;
  v28 = v39;
  if ( *(_DWORD *)(v5 + 304) < v29 )
    *(_DWORD *)(v5 + 304) = v29;
LABEL_60:
  if ( v43 )
  {
    v37 = (volatile LONG *)(v5 + 280);
    if ( (unsigned __int8)CurrentIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v37);
    else
      ExReleaseSpinLockShared(v37, CurrentIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v6 )
    ExFreePoolWithTag(*(PVOID *)(v6 + 16), 0);
  return v28;
}
