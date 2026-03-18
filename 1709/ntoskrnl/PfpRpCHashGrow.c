/*
 * XREFs of PfpRpCHashGrow @ 0x14043DE68
 * Callers:
 *     PfpRpCHashAddEntries @ 0x14043EE68 (PfpRpCHashAddEntries.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashGrow(__int64 a1, __m128i *a2, ULONG_PTR a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // r13
  unsigned int v8; // edi
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // esi
  char v12; // dl
  unsigned int v13; // r14d
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r9d
  unsigned int v17; // edi
  __int64 *v18; // r12
  unsigned __int64 v19; // rax
  int v20; // r13d
  __int64 v21; // r8
  __int64 v22; // rdx
  int i; // r9d
  __int64 v24; // r9
  char *v25; // rax
  struct _KTHREAD *v26; // rax
  struct _KTHREAD *v28; // rax
  char *PoolWithTag; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+30h] [rbp-48h]
  volatile signed __int64 *v31; // [rsp+38h] [rbp-40h]
  __m128i v32; // [rsp+40h] [rbp-38h]
  __int64 v33; // [rsp+50h] [rbp-28h]
  __m128i Src; // [rsp+58h] [rbp-20h]
  char v35; // [rsp+C0h] [rbp+48h]
  __int64 v36; // [rsp+C0h] [rbp+48h]
  char v37; // [rsp+C8h] [rbp+50h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (volatile signed __int64 *)(a1 + 128);
  v31 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v8 = a2->m128i_u32[3];
  if ( 2 * a2[1].m128i_i32[0] < v8 )
  {
    v28 = KeGetCurrentThread();
    v11 = 0;
    --v28->KernelApcDisable;
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
    if ( PoolWithTag )
    {
      v12 = -1;
      Src = *a2;
      v35 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
      v13 = 1 << v35;
      v14 = -1;
      v15 = 1 << v35;
      if ( 1 << v35 )
      {
        do
        {
          ++v14;
          v15 >>= 1;
        }
        while ( v15 );
      }
      v16 = v14 + 1;
      if ( ((v13 - 1) & v13) == 0 )
        v16 = v14;
      v37 = v16;
      v17 = v10 >> v16;
      if ( ((v17 - 1) & v17) != 0 )
      {
        for ( ; v17; v17 >>= 1 )
          ++v12;
        v17 = 1 << v12;
      }
      LODWORD(v33) = 0;
      v32.m128i_i64[1] = __PAIR64__(v17, v16);
      v32.m128i_i64[0] = (__int64)PoolWithTag;
      memset(PoolWithTag, 0, (unsigned __int64)v17 << v16);
      v18 = (__int64 *)Src.m128i_i64[0];
      v19 = Src.m128i_i64[0] + ((unsigned __int64)Src.m128i_u32[3] << v35);
      v30 = v19;
      if ( Src.m128i_i64[0] < v19 )
      {
        v20 = 0;
        do
        {
          v21 = *v18;
          if ( *v18 )
          {
            if ( v17 )
            {
              v22 = 0LL;
              v36 = *v18;
              for ( i = HIBYTE(v36)
                      + 37
                      * (BYTE6(v36)
                       + 37
                       * (BYTE5(v36)
                        + 37
                        * (BYTE4(v36)
                         + 37
                         * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v21 + 11623883)))))));
                    ;
                    i = v22 + v24 )
              {
                v24 = (v17 - 1) & i;
                v25 = &PoolWithTag[v24 << v37];
                if ( !*(_QWORD *)v25 || *(_QWORD *)v25 == v21 )
                  break;
                if ( !v22 )
                {
                  v22 = 2654435761LL * v21 + 1;
                  if ( ((-79 * (_BYTE)v21) & 1) != 0 )
                    v22 = 2654435761LL * v21;
                }
              }
            }
            else
            {
              v25 = 0LL;
            }
            memmove(v25, v18, v13);
            v19 = v30;
            LODWORD(v33) = ++v20;
          }
          v18 = (__int64 *)((char *)v18 + v13);
        }
        while ( (unsigned __int64)v18 < v19 );
        v18 = (__int64 *)Src.m128i_i64[0];
        v7 = v31;
      }
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a3, 0LL);
      *a2 = v32;
      a2[1].m128i_i64[0] = v33;
      if ( v18 )
      {
        *v18 = *a4;
        *a4 = (__int64)v18;
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  return v11;
}
