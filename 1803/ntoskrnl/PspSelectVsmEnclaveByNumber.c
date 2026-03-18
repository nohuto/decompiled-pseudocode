/*
 * XREFs of PspSelectVsmEnclaveByNumber @ 0x14078000C
 * Callers:
 *     PsCallEnclave @ 0x14077EDB0 (PsCallEnclave.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspSelectVsmEnclaveByNumber(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  signed __int64 *v8; // rdi
  __int64 v9; // r10
  int v10; // r11d
  __int64 v11; // rbp
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r13
  __int64 v18; // rdx

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 1840);
  ExAcquirePushLockSharedEx(a1 + 1840, 0LL);
  v9 = *(_QWORD *)(a1 + 1824);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 4) >> 5;
    v11 = -1LL << (*(_BYTE *)(v9 + 4) & 0x1F);
    v12 = a2 & v11;
    v13 = (a2 & (unsigned __int64)v11) >> 56;
    v14 = (a2 & (unsigned __int64)v11) >> 48;
    v15 = a2 & v11;
    v16 = (a2 & (unsigned __int64)v11) >> 40;
    v17 = v15 >> 24;
    if ( !v10 )
      goto LABEL_13;
    v18 = *(_QWORD *)(v9 + 8)
        + 8LL
        * (((_DWORD)v13
          + 37
          * ((unsigned __int8)v14
           + 37
           * ((unsigned __int8)v16
            + 37
            * (BYTE4(v12)
             + 37
             * ((unsigned __int8)v17 + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))) & (unsigned int)(v10 - 1));
    while ( 1 )
    {
      v18 = *(_QWORD *)v18;
      if ( (v18 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v18 + 8)) )
        goto LABEL_8;
    }
  }
  v18 = 0LL;
LABEL_8:
  if ( v18 )
  {
    v7 = v18;
    if ( *(_DWORD *)(v18 + 40) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v18 + 16)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v7 = 0LL;
    }
  }
LABEL_13:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v7 )
    return 3221225480LL;
  *a3 = v7;
  return 0LL;
}
