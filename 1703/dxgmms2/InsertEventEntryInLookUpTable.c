/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C002BBE0
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     RunningHash @ 0x1C0014164 (RunningHash.c)
 *     memcmp @ 0x1C0015AE0 (memcmp.c)
 *     CreateNewEventEntry @ 0x1C002B770 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C002B9B8 (EnableFlushTimer.c)
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
  __int128 *v9; // r15
  char v10; // r8
  unsigned __int8 v11; // cl
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // r11
  unsigned int v15; // ecx
  int v16; // r12d
  __int64 v17; // rsi
  volatile signed __int64 *v18; // r14
  unsigned int v19; // eax
  volatile signed __int64 v20; // r15
  int v21; // eax
  int v22; // ecx
  int v23; // ecx
  unsigned int v24; // esi
  unsigned int v25; // r12d
  __int64 v26; // r13
  __int64 v27; // r10
  __int64 v28; // rax
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
  unsigned int v40; // [rsp+30h] [rbp-28h] BYREF
  int v41; // [rsp+34h] [rbp-24h]
  __int64 v42; // [rsp+38h] [rbp-20h] BYREF
  __int64 CurrentIrql; // [rsp+40h] [rbp-18h]
  unsigned int v44; // [rsp+A0h] [rbp+48h]

  v5 = qword_1C003C030;
  v6 = 0LL;
  v40 = 0;
  v7 = a3;
  v42 = 0LL;
  v9 = a2;
  v44 = 0;
  RunningHash(&v40, (__int64)a2, 2uLL);
  v11 = v10 + a5;
  if ( (unsigned __int8)(v10 + a5) < v7 )
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
  v15 = ((9 * v40) >> 11) ^ (9 * v40);
  v16 = 32769 * v15;
  v40 = v15;
  v41 = 32769 * v15;
  v17 = v15 & 0x1F;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 336));
  }
  else if ( (unsigned int)KeIsExecutingDpc() )
  {
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 336));
  }
  else
  {
    ExAcquirePushLockSharedEx(v5 + 328, 0LL);
  }
  v18 = (volatile signed __int64 *)(v5 + 8 * v17);
  while ( 1 )
  {
    if ( *v18 )
      goto LABEL_16;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 372);
      v29 = -1073741789;
      goto LABEL_57;
    }
    if ( !v6 )
    {
      v19 = CreateNewEventEntry(v9, v7, a4, a5, v16, &v42);
      v6 = v42;
      v44 = v19;
      if ( !v42 )
      {
        v29 = v19;
        if ( v19 == -1073741801 )
          ++*(_DWORD *)(v5 + 376);
        else
          ++*(_DWORD *)(v5 + 380);
        goto LABEL_57;
      }
    }
    if ( !_InterlockedCompareExchange64(v18, v6, 0LL) )
      break;
    v6 = v42;
LABEL_16:
    v20 = *v18;
    v21 = *(_DWORD *)(*v18 + 40);
    if ( v16 != v21 )
    {
      v22 = v16;
LABEL_18:
      v23 = v22 - v21;
LABEL_28:
      v27 = a4;
      goto LABEL_29;
    }
    LOWORD(v22) = *(_WORD *)a2;
    LOWORD(v21) = *(_WORD *)v20;
    if ( *(_WORD *)a2 != *(_WORD *)v20 )
    {
      v21 = (unsigned __int16)v21;
      v22 = (unsigned __int16)v22;
      goto LABEL_18;
    }
    v24 = *(unsigned __int8 *)(v20 + 45) + 2;
    v25 = v7;
    if ( v24 >= v7 )
    {
LABEL_26:
      v23 = 0;
LABEL_27:
      v16 = v41;
      goto LABEL_28;
    }
    v26 = *(_QWORD *)(v20 + 16);
    while ( 1 )
    {
      v27 = a4;
      v28 = 16LL * v24;
      v23 = *(_DWORD *)(v28 + a4 + 8) - *(_DWORD *)(v28 + v26 + 8);
      if ( v23 )
        break;
      v23 = memcmp(*(const void **)(v28 + a4), *(const void **)(v28 + v26), *(unsigned int *)(v28 + a4 + 8));
      if ( v23 )
        goto LABEL_27;
      if ( ++v24 >= v25 )
        goto LABEL_26;
    }
    v16 = v41;
LABEL_29:
    if ( !v23 )
    {
      if ( v20 )
      {
        v31 = 2;
        if ( a5 )
        {
          do
          {
            v32 = **(_QWORD **)(v27 + 16LL * v31);
            v33 = *(_QWORD *)(v20 + 16);
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
LABEL_50:
                  if ( !v37 )
                    goto LABEL_54;
                }
                if ( v36 == _InterlockedCompareExchange64(v35, v32, v36) )
                  goto LABEL_54;
              }
              v37 = v32 < v36;
              goto LABEL_50;
            }
LABEL_54:
            v27 = a4;
            ++v31;
          }
          while ( v31 < (unsigned int)a5 + 2 );
          v6 = v42;
        }
      }
      v29 = v44;
      goto LABEL_57;
    }
    v18 = (volatile signed __int64 *)(v20 + 24);
    if ( v23 >= 0 )
      v18 = (volatile signed __int64 *)(v20 + 32);
    v7 = a3;
    v9 = a2;
  }
  v42 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 416), *(_DWORD *)(v5 + 424));
  v30 = *(_DWORD *)(v5 + 256);
  v6 = v42;
  v29 = v44;
  if ( *(_DWORD *)(v5 + 360) < v30 )
    *(_DWORD *)(v5 + 360) = v30;
LABEL_57:
  if ( KeGetCurrentIrql() >= 2u )
  {
    v38 = (volatile LONG *)(v5 + 336);
    if ( (unsigned __int8)CurrentIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v38);
    else
      ExReleaseSpinLockShared(v38, CurrentIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 328, 0LL);
  }
  if ( v6 )
    ExFreePoolWithTag(*(PVOID *)(v6 + 16), 0);
  return v29;
}
