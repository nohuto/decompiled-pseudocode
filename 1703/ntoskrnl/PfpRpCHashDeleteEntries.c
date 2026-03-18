/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x140562254
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1405620C0 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(__int64 a1, __int64 a2, signed __int64 *a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // r15
  unsigned int v9; // edi
  unsigned int v10; // esi
  void *v11; // r12
  struct _KTHREAD *v12; // rax
  char v13; // dl
  unsigned int v14; // ebp
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // r9d
  unsigned int v18; // esi
  char *v19; // r12
  char *v20; // rdx
  int v21; // r15d
  __int64 v22; // r8
  struct _KTHREAD *v23; // rax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  int i; // r9d
  __int64 v28; // r9
  char *v29; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-88h] BYREF
  int v31; // [rsp+20h] [rbp-68h]
  char *PoolWithTag; // [rsp+28h] [rbp-60h]
  volatile signed __int64 *v33; // [rsp+30h] [rbp-58h]
  PVOID P[2]; // [rsp+38h] [rbp-50h]
  int v35; // [rsp+90h] [rbp+8h]
  __int64 v36; // [rsp+90h] [rbp+8h]
  char v37; // [rsp+98h] [rbp+10h]
  char *v38; // [rsp+98h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 128);
  v33 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v9 = 0;
  v10 = *(_DWORD *)(a2 + 12) << *(_DWORD *)(a2 + 8);
  if ( v10 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x48436650u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)a3, 0LL);
      v13 = -1;
      *(_OWORD *)P = *(_OWORD *)a2;
      v37 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)P, 8));
      v14 = 1 << v37;
      v15 = -1;
      v16 = 1 << v37;
      if ( 1 << v37 )
      {
        do
        {
          ++v15;
          v16 >>= 1;
        }
        while ( v16 );
      }
      v17 = v15 + 1;
      if ( ((v14 - 1) & v14) == 0 )
        v17 = v15;
      v31 = v17;
      v18 = v10 >> v17;
      if ( ((v18 - 1) & v18) != 0 )
      {
        for ( ; v18; v18 >>= 1 )
          ++v13;
        v18 = 1 << v13;
      }
      v35 = 0;
      memset(v11, 0, (unsigned __int64)v18 << v17);
      v19 = (char *)P[0];
      v20 = (char *)P[0] + ((unsigned __int64)HIDWORD(P[1]) << v37);
      v38 = v20;
      if ( P[0] < v20 )
      {
        v21 = 0;
        do
        {
          v22 = *(_QWORD *)v19;
          if ( *(_QWORD *)v19 )
          {
            if ( !a5 )
              goto LABEL_26;
            v25 = 0;
            if ( !a4 )
              goto LABEL_26;
            do
            {
              if ( *(_QWORD *)(a5 + 8LL * v25) == v22 )
                break;
              ++v25;
            }
            while ( v25 < a4 );
            if ( v25 >= a4 )
            {
LABEL_26:
              if ( v18 )
              {
                v26 = 0LL;
                v36 = *(_QWORD *)v19;
                for ( i = HIBYTE(v36)
                        + 37
                        * (BYTE6(v36)
                         + 37
                         * (BYTE5(v36)
                          + 37
                          * (BYTE4(v36)
                           + 37
                           * (BYTE3(v36) + 37
                                         * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v22 + 11623883)))))));
                      ;
                      i = v26 + v28 )
                {
                  v28 = (v18 - 1) & i;
                  v29 = &PoolWithTag[v28 << v31];
                  if ( !*(_QWORD *)v29 || *(_QWORD *)v29 == v22 )
                    break;
                  if ( !v26 )
                  {
                    v26 = 2654435761LL * v22 + 1;
                    if ( ((-79 * (_BYTE)v22) & 1) != 0 )
                      v26 = 2654435761LL * v22;
                  }
                }
              }
              else
              {
                v29 = 0LL;
              }
              memmove(v29, v19, v14);
              v20 = v38;
              ++v21;
            }
          }
          v19 += v14;
        }
        while ( v19 < v20 );
        v35 = v21;
        v8 = v33;
      }
      *(_QWORD *)a2 = PoolWithTag;
      *(_DWORD *)(a2 + 16) = v35;
      if ( _InterlockedCompareExchange64(a3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a3);
      KeAbPostRelease((ULONG_PTR)a3);
      KeLeaveCriticalRegion();
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      _InterlockedOr(v30, 0);
      if ( (*a3 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)a3);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(P[0], 0);
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v9;
}
