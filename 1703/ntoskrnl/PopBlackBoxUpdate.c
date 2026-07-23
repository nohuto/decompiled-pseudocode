/*
 * XREFs of PopBlackBoxUpdate @ 0x1405744A4
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlTestProtectedAccess @ 0x1405463A0 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PopBlackBoxUpdate(char **a1, char a2)
{
  __int64 v3; // rax
  _UNKNOWN **v4; // r14
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  size_t v7; // rsi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  char *v12; // rax
  char *v13; // rcx
  unsigned __int64 v14; // rax
  PVOID PoolWithTag; // rax
  char v16; // [rsp+50h] [rbp+8h]

  v16 = 0;
  v3 = *((int *)a1 + 6);
  if ( (unsigned int)v3 > 1 )
  {
    v10 = -1073741811;
    goto LABEL_16;
  }
  v4 = &PopBlackBoxEntries + 13 * v3;
  if ( a2 )
  {
    v12 = a1[1];
    if ( v12 )
    {
      v13 = *a1;
      if ( &v12[(_QWORD)v13] > (char *)0x7FFFFFFF0000LL || &v12[(_QWORD)v13] < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( ((_DWORD)v4[2] & 1) != 0
      && !RtlTestProtectedAccess(
            (PS_PROTECTION)SBYTE2(KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[0]),
            (PS_PROTECTION)97) )
    {
      v10 = -1073741790;
      goto LABEL_16;
    }
  }
  v5 = *((_DWORD *)a1 + 7);
  v16 = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopBlackBoxLock, 0LL);
  if ( (v5 & 1) == 0 )
  {
    v8 = 0LL;
    v14 = (unsigned __int64)a1[1];
    v7 = 4096LL;
    if ( v14 < 0x1000 )
      v7 = (size_t)a1[1];
    v4[12] = (_UNKNOWN *)v14;
    v4[11] = (_UNKNOWN *)v7;
    goto LABEL_12;
  }
  v7 = (size_t)a1[1];
  if ( !v7 )
  {
LABEL_27:
    v10 = -1073741811;
    goto LABEL_16;
  }
  v8 = (unsigned __int64)a1[2];
  v9 = -1LL;
  if ( v8 + v7 >= v8 )
    v9 = v8 + v7;
  v10 = v8 + v7 < v8 ? 0xC0000095 : 0;
  if ( v8 + v7 >= v8 )
  {
    if ( v9 <= (unsigned __int64)v4[12] )
    {
      if ( v8 >= 0x1000 )
      {
        v7 = 0LL;
      }
      else if ( v9 > 0x1000 )
      {
        v7 = 4096 - v8;
      }
LABEL_12:
      if ( v4[10]
        || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x206D654Du), (v4[10] = PoolWithTag) != 0LL) )
      {
        v4[9] = (_UNKNOWN *)KiQueryUnbiasedInterruptTime();
        if ( v7 )
          memmove((char *)v4[10] + v8, *a1, v7);
        v10 = 0;
      }
      else
      {
        v10 = -1073741670;
      }
      goto LABEL_16;
    }
    goto LABEL_27;
  }
LABEL_16:
  if ( v16 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBlackBoxLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBlackBoxLock);
    KeAbPostRelease((ULONG_PTR)&PopBlackBoxLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v10;
}
