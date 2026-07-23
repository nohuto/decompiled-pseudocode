/*
 * XREFs of PopBlackBoxUpdate @ 0x140599AD8
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlTestProtectedAccess @ 0x1405391F8 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PopBlackBoxUpdate(char **a1, char a2)
{
  __int64 v3; // rax
  _UNKNOWN **v4; // r14
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  size_t v9; // rsi
  unsigned int v10; // edi
  char v11; // bl
  unsigned __int64 v13; // rcx
  PVOID PoolWithTag; // rax
  char *v15; // rax
  char *v16; // rcx
  char v17; // [rsp+50h] [rbp+8h]

  v17 = 0;
  v3 = *((int *)a1 + 6);
  if ( (unsigned int)v3 > 5 )
  {
    v10 = -1073741811;
    goto LABEL_11;
  }
  v4 = &PopBlackBoxEntries + 13 * v3;
  if ( a2 )
  {
    v15 = a1[1];
    if ( v15 )
    {
      v16 = *a1;
      if ( &v15[(_QWORD)v16] > (char *)0x7FFFFFFF0000LL || &v15[(_QWORD)v16] < v16 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( ((_DWORD)v4[2] & 1) != 0
      && !RtlTestProtectedAccess(
            (PS_PROTECTION)SBYTE2(KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[0]),
            (PS_PROTECTION)97) )
    {
      v10 = -1073741790;
      goto LABEL_11;
    }
  }
  v5 = *((_DWORD *)a1 + 7);
  v17 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBlackBoxLock, 0LL);
  if ( (v5 & 1) == 0 )
  {
    v7 = 0LL;
    v8 = (unsigned __int64)a1[1];
    v9 = 4096LL;
    if ( v8 < 0x1000 )
      v9 = (size_t)a1[1];
    v4[12] = (_UNKNOWN *)v8;
    v4[11] = (_UNKNOWN *)v9;
LABEL_7:
    if ( v4[10]
      || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x206D654Du), (v4[10] = PoolWithTag) != 0LL) )
    {
      v4[9] = (_UNKNOWN *)KiQueryUnbiasedInterruptTime();
      if ( v9 )
        memmove((char *)v4[10] + v7, *a1, v9);
      v10 = 0;
    }
    else
    {
      v10 = -1073741670;
    }
    goto LABEL_11;
  }
  v9 = (size_t)a1[1];
  if ( !v9 )
  {
LABEL_25:
    v10 = -1073741811;
    goto LABEL_11;
  }
  v7 = (unsigned __int64)a1[2];
  v13 = -1LL;
  if ( v7 + v9 >= v7 )
    v13 = v7 + v9;
  v10 = v7 + v9 < v7 ? 0xC0000095 : 0;
  if ( v7 + v9 >= v7 )
  {
    if ( v13 <= (unsigned __int64)v4[12] )
    {
      if ( v7 >= 0x1000 )
      {
        v9 = 0LL;
      }
      else if ( v13 > 0x1000 )
      {
        v9 = 4096 - v7;
      }
      goto LABEL_7;
    }
    goto LABEL_25;
  }
LABEL_11:
  if ( v17 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopBlackBoxLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBlackBoxLock);
    KeAbPostRelease((ULONG_PTR)&PopBlackBoxLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v10;
}
