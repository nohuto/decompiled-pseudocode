/*
 * XREFs of MiPopulateCfgBitMap @ 0x1404B3B10
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1404B3738 (MiCfgMarkValidEntries.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1404B3928 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x140574F8C (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1404B4120 (MiCopyToCfgBitMap.c)
 */

__int64 __fastcall MiPopulateCfgBitMap(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned __int64 v6; // rsi
  void *v7; // rdi
  _QWORD *v8; // r14
  __int64 v9; // rbp
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD v19[2]; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+50h] [rbp-38h]

  v6 = 2 * ((a5 - a4) >> 4);
  v7 = (void *)(*a1 + ((2 * (a4 >> 4)) >> 3));
  if ( a2 > 1 )
  {
    v8 = v19;
    v19[0] = 0LL;
    v19[1] = 0LL;
    v20 = 0;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = a1[2];
  v10 = (volatile signed __int64 *)(v9 + 40);
  ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
  if ( (unsigned int)MiVadDeleted(v9) )
  {
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 40), v11, v12, v13);
    KeAbPostRelease(v9 + 40);
    return 3221225738LL;
  }
  else
  {
    v15 = MiCopyToCfgBitMap(v7, 0, (__int64)v8, v6 >> 3, a6);
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 40), v14, v16, v17);
    KeAbPostRelease(v9 + 40);
    return v15;
  }
}
