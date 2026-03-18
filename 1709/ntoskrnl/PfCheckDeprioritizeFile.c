/*
 * XREFs of PfCheckDeprioritizeFile @ 0x14043EBAC
 * Callers:
 *     MiDeprioritizeVad @ 0x14012E200 (MiDeprioritizeVad.c)
 *     MiUnmapVad @ 0x140499B30 (MiUnmapVad.c)
 *     CcUnmapVacb @ 0x14056F9B0 (CcUnmapVacb.c)
 * Callees:
 *     PfLockSharedTryAcquire @ 0x140001F44 (PfLockSharedTryAcquire.c)
 *     PfpRpLogDeprioEvent @ 0x140001FA0 (PfpRpLogDeprioEvent.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PfCheckDeprioritizeFile(int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 i; // r9
  _QWORD *v13; // rax
  __int64 v15; // [rsp+58h] [rbp+10h]

  v6 = 0;
  if ( !a2 || !(unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_14038D368) )
    return v6;
  v7 = qword_14038D348;
  if ( a2 != *(_QWORD *)(qword_14038D348 + 8) )
  {
    v8 = -1LL << (dword_14038D33C & 0x1F);
    v9 = a2 & v8;
    if ( !((unsigned int)dword_14038D33C >> 5) )
      goto LABEL_31;
    v15 = a2 & v8;
    v7 = qword_14038D340
       + 8LL
       * ((37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v15)) & (((unsigned int)dword_14038D33C >> 5) - 1));
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
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14038D368, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_14038D368);
      KeAbPostRelease((ULONG_PTR)&qword_14038D368);
      KeLeaveCriticalRegion();
      return v6;
    }
    qword_14038D348 = v7;
  }
  v10 = *(_QWORD *)(v7 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14038D368, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14038D368);
  KeAbPostRelease((ULONG_PTR)&qword_14038D368);
  KeLeaveCriticalRegion();
  if ( qword_14038D388 == v10 )
    goto LABEL_22;
  if ( (unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_14038D390) )
  {
    if ( !dword_14038D37C )
      goto LABEL_18;
    v11 = 0LL;
    for ( i = (37
             * (BYTE6(v10)
              + 37
              * (BYTE5(v10)
               + 37
               * (BYTE4(v10)
                + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
             + HIBYTE(v10)) & (unsigned int)(dword_14038D37C - 1); ; i = (unsigned int)(dword_14038D37C - 1) & (v11 + i) )
    {
      v13 = (_QWORD *)(qword_14038D370 + (i << dword_14038D378));
      if ( !*v13 || *v13 == v10 )
        break;
      if ( !v11 )
      {
        v11 = 2654435761LL * v10 + 1;
        if ( ((-79 * (_BYTE)v10) & 1) != 0 )
          v11 = 2654435761LL * v10;
      }
    }
    if ( *v13 )
    {
      qword_14038D388 = v10;
    }
    else
    {
LABEL_18:
      v6 = 1;
      qword_14038D3C8 = MEMORY[0xFFFFF78000000320];
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14038D390, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14038D390);
    KeAbPostRelease((ULONG_PTR)&qword_14038D390);
    KeLeaveCriticalRegion();
LABEL_22:
    PfpRpLogDeprioEvent(a2, a1, v6 != 0 ? a3 : 0);
  }
  return v6;
}
