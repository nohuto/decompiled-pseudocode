/*
 * XREFs of PfpRpCHashAddEntries @ 0x14049158C
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1404913E4 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PfpRpCHashGrow @ 0x140638E50 (PfpRpCHashGrow.c)
 */

__int64 __fastcall PfpRpCHashAddEntries(__int64 a1, __int64 a2, ULONG_PTR a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r13d
  __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rbp
  unsigned int v9; // r12d
  ULONG_PTR *v10; // r14
  volatile signed __int64 *v11; // rdi
  __int64 v12; // rsi
  int v13; // r15d
  PVOID v14; // rcx
  int v16; // r15d
  __int64 v17; // r11
  __int64 *v18; // rax
  __int64 v19; // r10
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v23; // [rsp+78h] [rbp+10h]
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v5 = a5;
  v6 = a1;
  v7 = *(_DWORD *)(a2 + 8);
  P = 0LL;
  v8 = a4 + ((unsigned __int64)a5 << v7);
  v9 = 1 << v7;
  v10 = (ULONG_PTR *)a4;
  v11 = (volatile signed __int64 *)a3;
  v12 = a2;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a3, 0LL);
  }
  if ( (unsigned __int64)v10 < v8 )
  {
    while ( 1 )
    {
      if ( (unsigned int)(2 * *(_DWORD *)(v12 + 16)) >= *(_DWORD *)(v12 + 12) )
      {
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11, a2, a3, a4);
        KeAbPostRelease((ULONG_PTR)v11);
        KeLeaveCriticalRegion();
        v13 = PfpRpCHashGrow(v6, v12, v11, &P);
        if ( v13 < 0 )
          goto LABEL_6;
      }
      a3 = *v10;
      v23 = *(_DWORD *)(v12 + 12);
      if ( !v23 )
        break;
      v16 = *(_DWORD *)(v12 + 8);
      a2 = 0LL;
      v17 = (unsigned int)(v23 - 1);
      a4 = (unsigned int)v17 & (37
                              * ((unsigned __int8)BYTE6(*v10)
                               + 37
                               * ((unsigned __int8)((unsigned __int16)WORD2(*v10) >> 8)
                                + 37
                                * ((unsigned __int8)BYTE4(*v10)
                                 + 37
                                 * (BYTE3(*v10)
                                  + 37
                                  * ((unsigned __int8)BYTE2(*v10)
                                   + 37 * ((unsigned __int8)BYTE1(*v10) + 37 * ((unsigned __int8)a3 + 11623883)))))))
                              + HIBYTE(*v10));
      v18 = (__int64 *)(*(_QWORD *)v12 + (a4 << v16));
      if ( !*v18 )
        goto LABEL_16;
      v19 = *v18;
      do
      {
        v20 = v19;
        if ( v19 == a3 )
          break;
        if ( !a2 )
        {
          a2 = 2654435761u * a3 + 1;
          if ( ((-79 * (_BYTE)a3) & 1) != 0 )
            a2 = 2654435761u * a3;
        }
        a4 = v17 & (a2 + a4);
        v18 = (__int64 *)(*(_QWORD *)v12 + (a4 << v16));
        v20 = *v18;
        v19 = *v18;
      }
      while ( *v18 );
      v5 = a5;
      if ( !v20 )
        goto LABEL_16;
LABEL_17:
      v10 = (ULONG_PTR *)((char *)v10 + v9);
      if ( (unsigned __int64)v10 >= v8 )
        goto LABEL_4;
      v6 = a1;
    }
    v18 = 0LL;
LABEL_16:
    memmove(v18, v10, v9);
    ++*(_DWORD *)(v12 + 16);
    goto LABEL_17;
  }
LABEL_4:
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11, a2, a3, a4);
    KeAbPostRelease((ULONG_PTR)v11);
    KeLeaveCriticalRegion();
  }
  v13 = 0;
LABEL_6:
  while ( 1 )
  {
    v14 = P;
    if ( !P )
      break;
    P = *(PVOID *)P;
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v13;
}
