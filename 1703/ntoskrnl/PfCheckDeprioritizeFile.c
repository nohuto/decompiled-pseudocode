/*
 * XREFs of PfCheckDeprioritizeFile @ 0x1404984E4
 * Callers:
 *     MiDeprioritizeVad @ 0x140033E78 (MiDeprioritizeVad.c)
 *     MiUnmapVad @ 0x14047B5C0 (MiUnmapVad.c)
 *     CcUnmapVacb @ 0x140515A10 (CcUnmapVacb.c)
 * Callees:
 *     PfpRpLogDeprioEvent @ 0x140061AAC (PfpRpLogDeprioEvent.c)
 *     PfLockSharedTryAcquire @ 0x140061B34 (PfLockSharedTryAcquire.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PfCheckDeprioritizeFile(int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 i; // r8
  _QWORD *v11; // rax
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // [rsp+58h] [rbp+10h]

  v6 = 0;
  if ( !a2 || !(unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_14036DF08) )
    return v6;
  v7 = qword_14036DEE8;
  if ( a2 != *(_QWORD *)(qword_14036DEE8 + 8) )
  {
    v13 = -1LL << (qword_14036DEDC & 0x1F);
    v14 = a2 & v13;
    if ( (unsigned int)qword_14036DEDC < 0x20 )
      goto LABEL_31;
    v15 = a2 & v13;
    v7 = *(__int64 *)((char *)&qword_14036DEDC + 4)
       + 8LL
       * ((37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v14 + 11623883)))))))
         + HIBYTE(v15)) & (((unsigned int)qword_14036DEDC >> 5) - 1));
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v14 == (v13 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_27;
    }
    v7 = 0LL;
LABEL_27:
    if ( !v7 )
    {
LABEL_31:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14036DF08, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_14036DF08);
      KeAbPostRelease((ULONG_PTR)&qword_14036DF08);
      KeLeaveCriticalRegion();
      return v6;
    }
    qword_14036DEE8 = v7;
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14036DF08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_14036DF08);
  KeAbPostRelease((ULONG_PTR)&qword_14036DF08);
  KeLeaveCriticalRegion();
  if ( qword_14036DF28 == v8 )
    goto LABEL_16;
  if ( (unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_14036DF30) )
  {
    if ( !(_DWORD)qword_14036DF1C )
      goto LABEL_12;
    v9 = 0LL;
    for ( i = (37
             * (BYTE6(v8)
              + 37
              * (BYTE5(v8)
               + 37
               * (BYTE4(v8)
                + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
             + HIBYTE(v8)) & (unsigned int)(qword_14036DF1C - 1); ; i = (unsigned int)(qword_14036DF1C - 1) & (v9 + i) )
    {
      v11 = (_QWORD *)(qword_14036DF10 + (i << dword_14036DF18));
      if ( !*v11 || *v11 == v8 )
        break;
      if ( !v9 )
      {
        v9 = 2654435761LL * v8 + 1;
        if ( ((-79 * (_BYTE)v8) & 1) != 0 )
          v9 = 2654435761LL * v8;
      }
    }
    if ( *v11 )
    {
      qword_14036DF28 = v8;
    }
    else
    {
LABEL_12:
      v6 = 1;
      qword_14036DF68 = MEMORY[0xFFFFF78000000320];
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14036DF30, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_14036DF30);
    KeAbPostRelease((ULONG_PTR)&qword_14036DF30);
    KeLeaveCriticalRegion();
LABEL_16:
    PfpRpLogDeprioEvent(a2, a1, v6 != 0 ? a3 : 0);
  }
  return v6;
}
