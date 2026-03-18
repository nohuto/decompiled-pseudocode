/*
 * XREFs of MiPopulateCfgBitMap @ 0x1404D355C
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1404D3370 (MiCfgMarkValidEntries.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1405803D8 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1405873F8 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiCopyToCfgBitMap @ 0x1404D3670 (MiCopyToCfgBitMap.c)
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
  unsigned int v11; // edi
  _QWORD v13[2]; // [rsp+40h] [rbp-48h] BYREF
  int v14; // [rsp+50h] [rbp-38h]

  v6 = 2 * ((a5 - a4) >> 4);
  v7 = (void *)(*a1 + ((2 * (a4 >> 4)) >> 3));
  if ( a2 <= 1 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = v13;
    v13[0] = 0LL;
    v13[1] = 0LL;
    v14 = 0;
  }
  v9 = a1[2];
  v10 = (volatile signed __int64 *)(v9 + 40);
  ExAcquirePushLockExclusiveEx(v9 + 40, 0LL);
  if ( (unsigned int)MiVadDeleted(v9) )
  {
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 40));
    KeAbPostRelease(v9 + 40);
    return 3221225738LL;
  }
  else
  {
    v11 = MiCopyToCfgBitMap(v7, 0, (__int64)v8, v6 >> 3, a6);
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v9 + 40));
    KeAbPostRelease(v9 + 40);
    return v11;
  }
}
