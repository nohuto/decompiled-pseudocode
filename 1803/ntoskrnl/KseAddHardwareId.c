/*
 * XREFs of KseAddHardwareId @ 0x1405E56F8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KsepPoolFreePaged @ 0x140161A40 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140161A68 (KsepPoolAllocatePaged.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14024D344 (KsepLogError.c)
 *     KsepStringDuplicate @ 0x1405FDEBC (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1405FE3B8 (KsepStringFree.c)
 *     KsepCacheInsert @ 0x140603BF8 (KsepCacheInsert.c)
 *     KsepCacheLookup @ 0x140603CA8 (KsepCacheLookup.c)
 */

__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  volatile signed __int64 *v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdx
  char *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  char *Paged; // rax
  int v9; // ebx
  char v10; // bp
  __int64 v12; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING v14; // [rsp+48h] [rbp-20h] BYREF

  v2 = (volatile signed __int64 *)qword_1403CDF30;
  if ( dword_1403CDEE4 != 2 )
  {
    v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v12 + 1] = -1073741823;
    KsepHistoryErrors[2 * v12] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString(&v14, SourceString);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
  v5 = (char *)KsepCacheLookup(v2, v13);
  if ( v5 )
  {
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  Paged = (char *)KsepPoolAllocatePaged(0x38uLL);
  v5 = Paged;
  if ( Paged && (int)KsepStringDuplicate(Paged + 40, SourceString) >= 0 )
  {
    KsepCacheInsert(v2, v5);
    goto LABEL_7;
  }
  v9 = -1073741801;
LABEL_8:
  v10 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock(v2, v4, v6, v7);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v9 < 0 )
  {
    if ( v5 )
    {
      KsepStringFree(v5 + 40);
      KsepPoolFreePaged(v5);
    }
  }
  return (unsigned int)v9;
}
