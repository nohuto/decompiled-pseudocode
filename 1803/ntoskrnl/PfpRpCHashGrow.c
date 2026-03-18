/*
 * XREFs of PfpRpCHashGrow @ 0x140638E50
 * Callers:
 *     PfpRpCHashAddEntries @ 0x14049158C (PfpRpCHashAddEntries.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashGrow(__int64 a1, __m128i *a2, ULONG_PTR a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r12
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // r8
  unsigned int v16; // r14d
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // edx
  unsigned int v20; // edi
  unsigned __int64 *v21; // r15
  unsigned __int64 v22; // rax
  int v23; // r12d
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  int i; // r9d
  __int64 v27; // r9
  char *v28; // rax
  struct _KTHREAD *v29; // rax
  struct _KTHREAD *v31; // rax
  char *PoolWithTag; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+30h] [rbp-48h]
  volatile signed __int64 *v34; // [rsp+38h] [rbp-40h]
  __m128i v35; // [rsp+40h] [rbp-38h]
  __int64 v36; // [rsp+50h] [rbp-28h]
  __m128i Src; // [rsp+58h] [rbp-20h]
  char v38; // [rsp+C0h] [rbp+48h]
  char v39; // [rsp+C8h] [rbp+50h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 128);
  v34 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v8 = a2->m128i_u32[3];
  if ( 2 * a2[1].m128i_i32[0] < v8 )
  {
    v31 = KeGetCurrentThread();
    v11 = 0;
    --v31->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a3, 0LL);
  }
  else
  {
    v9 = 2 * v8;
    if ( v9 < 8 )
      v9 = 8;
    v10 = v9 << a2->m128i_i32[2];
    v11 = 0;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v10, 0x48436650u);
    v14 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = -1;
      Src = *a2;
      v38 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
      v16 = 1 << v38;
      v17 = -1;
      v18 = 1 << v38;
      if ( 1 << v38 )
      {
        do
        {
          ++v17;
          v18 >>= 1;
        }
        while ( v18 );
      }
      v19 = v17 + 1;
      if ( ((v16 - 1) & v16) == 0 )
        v19 = v17;
      v39 = v19;
      v20 = v10 >> v19;
      if ( ((v20 - 1) & v20) != 0 )
      {
        for ( ; v20; v20 >>= 1 )
          ++v15;
        v20 = 1 << v15;
      }
      v35.m128i_i64[1] = __PAIR64__(v20, v19);
      LODWORD(v36) = 0;
      v35.m128i_i64[0] = (__int64)PoolWithTag;
      memset(PoolWithTag, 0, (unsigned __int64)v20 << v19);
      v21 = (unsigned __int64 *)Src.m128i_i64[0];
      v22 = Src.m128i_i64[0] + ((unsigned __int64)Src.m128i_u32[3] << v38);
      v33 = v22;
      if ( Src.m128i_i64[0] < v22 )
      {
        v23 = 0;
        do
        {
          v24 = *v21;
          if ( *v21 )
          {
            if ( v20 )
            {
              v25 = 0LL;
              for ( i = 37
                      * (BYTE6(v24)
                       + 37
                       * (BYTE5(v24)
                        + 37
                        * (BYTE4(v24)
                         + 37
                         * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
                      + HIBYTE(v24); ; i = v25 + v27 )
              {
                v27 = (v20 - 1) & i;
                v28 = &PoolWithTag[v27 << v39];
                if ( !*(_QWORD *)v28 || *(_QWORD *)v28 == v24 )
                  break;
                if ( !v25 )
                {
                  v25 = 2654435761u * v24 + 1;
                  if ( ((-79 * (_BYTE)v24) & 1) != 0 )
                    v25 = 2654435761u * v24;
                }
              }
            }
            else
            {
              v28 = 0LL;
            }
            memmove(v28, v21, v16);
            v22 = v33;
            LODWORD(v36) = ++v23;
          }
          v21 = (unsigned __int64 *)((char *)v21 + v16);
        }
        while ( (unsigned __int64)v21 < v22 );
        v7 = v34;
      }
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a3, 0LL);
      *a2 = v35;
      a2[1].m128i_i64[0] = v36;
      if ( Src.m128i_i64[0] )
      {
        v12 = (__int64)a4;
        *(_QWORD *)Src.m128i_i64[0] = *a4;
        *a4 = Src.m128i_i64[0];
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7, v12, v13, v14);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  return v11;
}
