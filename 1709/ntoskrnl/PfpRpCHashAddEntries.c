/*
 * XREFs of PfpRpCHashAddEntries @ 0x14043EE68
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x14043EA18 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PfpRpCHashGrow @ 0x14043DE68 (PfpRpCHashGrow.c)
 */

__int64 __fastcall PfpRpCHashAddEntries(
        __int64 a1,
        __m128i *a2,
        volatile signed __int64 *a3,
        __int64 *a4,
        unsigned int a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // r12
  __int32 v7; // ecx
  unsigned __int64 v8; // rbp
  unsigned int v9; // r13d
  __int64 *v10; // r15
  int v13; // r12d
  void *v14; // rcx
  __int64 v16; // r8
  __int32 v17; // r10d
  unsigned __int64 v18; // r11
  __int64 i; // rdx
  _QWORD *v20; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // [rsp+68h] [rbp+10h]
  _QWORD *v24; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = a1;
  v24 = 0LL;
  v7 = a2->m128i_i32[2];
  v8 = (unsigned __int64)a4 + ((unsigned __int64)a5 << v7);
  v9 = 1 << v7;
  v10 = a4;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a3, 0LL);
    v5 = v24;
  }
  if ( (unsigned __int64)v10 < v8 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(2 * a2[1].m128i_i32[0]) >= a2->m128i_i32[3] )
      {
        if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a3);
        KeAbPostRelease((ULONG_PTR)a3);
        KeLeaveCriticalRegion();
        v13 = PfpRpCHashGrow(v6, a2, (ULONG_PTR)a3, (__int64 *)&v24);
        if ( v13 < 0 )
        {
          v5 = v24;
          goto LABEL_6;
        }
      }
      v16 = *v10;
      v17 = a2->m128i_i32[3];
      if ( !v17 )
        break;
      v23 = *v10;
      v18 = (37
           * (BYTE6(v23)
            + 37
            * (BYTE5(v23)
             + 37
             * (BYTE4(v23)
              + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v16 + 11623883)))))))
           + HIBYTE(v23)) & (unsigned int)(v17 - 1);
      for ( i = 0LL; ; v18 = (unsigned int)(v17 - 1) & (i + v18) )
      {
        v20 = (_QWORD *)(a2->m128i_i64[0] + (v18 << a2->m128i_i32[2]));
        if ( !*v20 || *v20 == v16 )
          break;
        if ( !i )
        {
          i = 2654435761LL * v16 + 1;
          if ( ((-79 * (_BYTE)v16) & 1) != 0 )
            i = 2654435761LL * v16;
        }
      }
      if ( !*v20 )
        goto LABEL_20;
LABEL_18:
      v10 = (__int64 *)((char *)v10 + v9);
      if ( (unsigned __int64)v10 >= v8 )
      {
        v5 = v24;
        goto LABEL_4;
      }
      v6 = a1;
    }
    v20 = 0LL;
LABEL_20:
    memmove(v20, v10, v9);
    ++a2[1].m128i_i32[0];
    goto LABEL_18;
  }
LABEL_4:
  if ( a5 )
  {
    if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a3);
    KeAbPostRelease((ULONG_PTR)a3);
    KeLeaveCriticalRegion();
    v5 = v24;
  }
  v13 = 0;
LABEL_6:
  while ( 1 )
  {
    v14 = v5;
    if ( !v5 )
      break;
    v5 = (_QWORD *)*v5;
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v13;
}
