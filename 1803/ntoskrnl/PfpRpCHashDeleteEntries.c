/*
 * XREFs of PfpRpCHashDeleteEntries @ 0x1404930FC
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1404913E4 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashDeleteEntries(__int64 a1, __int64 a2, signed __int64 *a3, unsigned int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  unsigned int v13; // esi
  void *v14; // r15
  struct _KTHREAD *v15; // rax
  char v16; // dl
  unsigned int v17; // ebp
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // r9d
  unsigned int v21; // esi
  char *v22; // r15
  char *v23; // rdx
  int v24; // r12d
  size_t v25; // r8
  char v26; // bp
  size_t v27; // rax
  unsigned __int64 v28; // r8
  struct _KTHREAD *v29; // rax
  unsigned int v31; // ecx
  unsigned int v32; // r10d
  __int64 v33; // r9
  unsigned int v34; // eax
  __int64 v35; // rdx
  int i; // r9d
  __int64 v37; // r9
  char *v38; // rax
  signed __int32 v39[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v40; // [rsp+20h] [rbp-78h]
  char *PoolWithTag; // [rsp+28h] [rbp-70h]
  unsigned __int64 v42; // [rsp+30h] [rbp-68h]
  char *v43; // [rsp+38h] [rbp-60h]
  volatile signed __int64 *v44; // [rsp+40h] [rbp-58h]
  PVOID P[2]; // [rsp+48h] [rbp-50h]
  int v46; // [rsp+A0h] [rbp+8h]
  char Size; // [rsp+A8h] [rbp+10h]
  size_t Sizea; // [rsp+A8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (volatile signed __int64 *)(a1 + 128);
  v44 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v12 = 0;
  v13 = *(_DWORD *)(a2 + 12) << *(_DWORD *)(a2 + 8);
  if ( v13 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x48436650u);
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)a3, 0LL);
      v16 = -1;
      *(_OWORD *)P = *(_OWORD *)a2;
      Size = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)P, 8));
      v17 = 1 << Size;
      v18 = -1;
      v19 = 1 << Size;
      if ( 1 << Size )
      {
        do
        {
          ++v18;
          v19 >>= 1;
        }
        while ( v19 );
      }
      v20 = v18 + 1;
      if ( ((v17 - 1) & v17) == 0 )
        v20 = v18;
      LODWORD(v40) = v20;
      v21 = v13 >> v20;
      if ( ((v21 - 1) & v21) != 0 )
      {
        for ( ; v21; v21 >>= 1 )
          ++v16;
        v21 = 1 << v16;
      }
      v46 = 0;
      memset(v14, 0, (unsigned __int64)v21 << v20);
      v22 = (char *)P[0];
      v23 = (char *)P[0] + ((unsigned __int64)HIDWORD(P[1]) << Size);
      v43 = v23;
      if ( P[0] < v23 )
      {
        v24 = 0;
        v25 = v17;
        v26 = v40;
        v27 = (unsigned int)v25;
        Sizea = v25;
        do
        {
          v28 = *(_QWORD *)v22;
          if ( *(_QWORD *)v22 )
          {
            if ( !a5 )
              goto LABEL_28;
            v31 = 0;
            if ( !a4 )
              goto LABEL_28;
            do
            {
              v32 = v31;
              v33 = *(_QWORD *)(a5 + 8LL * v31);
              if ( v33 == v28 )
                break;
              ++v31;
            }
            while ( v31 < a4 );
            v34 = v32 + 1;
            if ( v33 == v28 )
              v34 = v32;
            if ( v34 >= a4 )
            {
LABEL_28:
              v42 = HIDWORD(v28);
              v40 = v28 >> 24;
              if ( v21 )
              {
                v35 = 0LL;
                for ( i = 37
                        * (BYTE6(v28)
                         + 37
                         * (BYTE5(v28)
                          + 37
                          * ((unsigned __int8)v42
                           + 37
                           * ((unsigned __int8)v40
                            + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                        + HIBYTE(v28); ; i = v35 + v37 )
                {
                  v37 = (v21 - 1) & i;
                  v38 = &PoolWithTag[v37 << v26];
                  if ( !*(_QWORD *)v38 || *(_QWORD *)v38 == v28 )
                    break;
                  if ( !v35 )
                  {
                    v35 = 2654435761u * v28 + 1;
                    if ( ((-79 * (_BYTE)v28) & 1) != 0 )
                      v35 = 2654435761u * v28;
                  }
                }
              }
              else
              {
                v38 = 0LL;
              }
              memmove(v38, v22, Sizea);
              v23 = v43;
              ++v24;
            }
            v27 = Sizea;
          }
          v22 += v27;
        }
        while ( v22 < v23 );
        v46 = v24;
        v8 = v44;
      }
      *(_QWORD *)a2 = PoolWithTag;
      *(_DWORD *)(a2 + 16) = v46;
      if ( _InterlockedCompareExchange64(a3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a3);
      KeAbPostRelease((ULONG_PTR)a3);
      KeLeaveCriticalRegion();
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      _InterlockedOr(v39, 0);
      if ( (*a3 & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)a3);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(P[0], 0);
    }
    else
    {
      v12 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8, v9, v10, v11);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegion();
  return v12;
}
