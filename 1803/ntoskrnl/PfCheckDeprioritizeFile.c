/*
 * XREFs of PfCheckDeprioritizeFile @ 0x14054FA08
 * Callers:
 *     MiDeprioritizeVad @ 0x1400A23D8 (MiDeprioritizeVad.c)
 *     MiUnmapVad @ 0x1404D72FC (MiUnmapVad.c)
 *     CcUnmapVacb @ 0x140593090 (CcUnmapVacb.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PfLockSharedTryAcquire @ 0x1400A2528 (PfLockSharedTryAcquire.c)
 *     PfpRpLogDeprioEvent @ 0x1400A25A8 (PfpRpLogDeprioEvent.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PfCheckDeprioritizeFile(int a1, __int64 a2, int a3)
{
  int v5; // r14d
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v14; // rax
  __int64 v15; // rcx

  v5 = a1;
  v6 = 0;
  if ( !a2 || !(unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_1403CD788) )
    return v6;
  v7 = qword_1403CD768;
  if ( a2 != *(_QWORD *)(qword_1403CD768 + 8) )
  {
    v8 = -1LL << (dword_1403CD75C & 0x1F);
    v9 = a2 & v8;
    if ( (unsigned int)dword_1403CD75C < 0x20 )
      goto LABEL_31;
    v7 = qword_1403CD760
       + 8
       * ((((a2 & (unsigned __int64)v8) >> 56)
         + 37
         * ((unsigned __int8)((a2 & (unsigned __int64)v8) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((a2 & (unsigned __int64)v8) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((a2 & (unsigned __int64)v8) >> 32)
            + 37
            * ((((unsigned int)a2 & (unsigned int)v8) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)a2 & (unsigned int)v8) >> 16)
              + 37 * ((unsigned __int8)((unsigned __int16)(a2 & v8) >> 8) + 37 * ((unsigned __int8)v9 + 11623883)))))))) & (((unsigned int)dword_1403CD75C >> 5) - 1));
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_8;
    }
    v7 = 0LL;
LABEL_8:
    if ( !v7 )
    {
LABEL_31:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403CD788, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_1403CD788);
      KeAbPostRelease((ULONG_PTR)&qword_1403CD788);
      KeLeaveCriticalRegion();
      return v6;
    }
    v5 = a1;
    qword_1403CD768 = v7;
  }
  v10 = *(_QWORD *)(v7 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403CD788, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1403CD788);
  KeAbPostRelease((ULONG_PTR)&qword_1403CD788);
  KeLeaveCriticalRegion();
  if ( qword_1403CD7A8 == v10 )
    goto LABEL_20;
  if ( (unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_1403CD7B0) )
  {
    if ( !(_DWORD)qword_1403CD79C )
      goto LABEL_16;
    v11 = 0LL;
    v12 = (37
         * (BYTE6(v10)
          + 37
          * (BYTE5(v10)
           + 37
           * (BYTE4(v10)
            + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (37 * ((unsigned __int8)v10 + 11623883) + BYTE1(v10)))))))
         + HIBYTE(v10)) & (unsigned int)(qword_1403CD79C - 1);
    if ( !*(_QWORD *)((v12 << dword_1403CD798) + qword_1403CD790) )
      goto LABEL_16;
    v14 = *(_QWORD *)((v12 << dword_1403CD798) + qword_1403CD790);
    do
    {
      v15 = v14;
      if ( v14 == v10 )
        break;
      if ( !v11 )
      {
        v11 = 2654435761u * v10 + 1;
        if ( ((-79 * (_BYTE)v10) & 1) != 0 )
          v11 = 2654435761u * v10;
      }
      v12 = (unsigned int)(qword_1403CD79C - 1) & (v11 + v12);
      v15 = *(_QWORD *)((v12 << dword_1403CD798) + qword_1403CD790);
      v14 = v15;
    }
    while ( v15 );
    if ( v15 )
    {
      qword_1403CD7A8 = v10;
    }
    else
    {
LABEL_16:
      v6 = 1;
      qword_1403CD7E8 = MEMORY[0xFFFFF78000000320];
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403CD7B0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1403CD7B0);
    KeAbPostRelease((ULONG_PTR)&qword_1403CD7B0);
    KeLeaveCriticalRegion();
LABEL_20:
    PfpRpLogDeprioEvent(a2, v5, v6 != 0 ? a3 : 0);
  }
  return v6;
}
