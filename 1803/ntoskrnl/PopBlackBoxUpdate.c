/*
 * XREFs of PopBlackBoxUpdate @ 0x1405230F0
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlTestProtectedAccess @ 0x1405553AC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PopBlackBoxUpdate(char **a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _UNKNOWN **v6; // r14
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  size_t v11; // rsi
  unsigned int v12; // ebx
  char v13; // di
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  PVOID PoolWithTag; // rax
  char *v18; // rax
  char *v19; // rcx
  char v20; // [rsp+50h] [rbp+8h]

  v20 = 0;
  v5 = *((int *)a1 + 6);
  if ( (unsigned int)v5 > 0xC )
  {
    v12 = -1073741811;
    goto LABEL_11;
  }
  v6 = &PopBlackBoxEntries + 13 * v5;
  if ( (_BYTE)a2 )
  {
    v18 = a1[1];
    if ( v18 )
    {
      v19 = *a1;
      if ( &v18[(_QWORD)v19] > (char *)0x7FFFFFFF0000LL || &v18[(_QWORD)v19] < v19 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( ((_DWORD)v6[2] & 1) != 0
      && !RtlTestProtectedAccess(
            (PS_PROTECTION)SBYTE2(KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[0]),
            (PS_PROTECTION)97) )
    {
      v12 = -1073741790;
      goto LABEL_11;
    }
  }
  v7 = *((_DWORD *)a1 + 7);
  v20 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBlackBoxLock, 0LL);
  v9 = (unsigned __int64)a1[1];
  if ( (v7 & 1) == 0 )
  {
    v10 = 0LL;
    v11 = 4096LL;
    if ( v9 < 0x1000 )
      v11 = (size_t)a1[1];
    v6[12] = (_UNKNOWN *)v9;
    v6[11] = (_UNKNOWN *)v11;
LABEL_7:
    if ( v6[10]
      || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x206D654Du), (v6[10] = PoolWithTag) != 0LL) )
    {
      v6[9] = (_UNKNOWN *)KiQueryUnbiasedInterruptTime();
      if ( v11 )
        memmove((char *)v6[10] + v10, *a1, v11);
      v12 = 0;
    }
    else
    {
      v12 = -1073741670;
    }
    goto LABEL_11;
  }
  v11 = (size_t)a1[1];
  if ( !v9 )
  {
LABEL_25:
    v12 = -1073741811;
    goto LABEL_11;
  }
  v10 = (unsigned __int64)a1[2];
  v15 = v10 + v9;
  v16 = -1LL;
  if ( v15 >= v10 )
    v16 = v15;
  v12 = v15 < v10 ? 0xC0000095 : 0;
  if ( v15 >= v10 )
  {
    if ( v16 <= (unsigned __int64)v6[12] )
    {
      if ( v10 >= 0x1000 )
      {
        v11 = 0LL;
      }
      else if ( v16 > 0x1000 )
      {
        v11 = 4096 - v10;
      }
      goto LABEL_7;
    }
    goto LABEL_25;
  }
LABEL_11:
  if ( v20 )
  {
    v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBlackBoxLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBlackBoxLock, a2, a3, a4);
    KeAbPostRelease((ULONG_PTR)&PopBlackBoxLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v12;
}
