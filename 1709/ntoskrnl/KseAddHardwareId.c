/*
 * XREFs of KseAddHardwareId @ 0x140551E88
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x1400F9FD8 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400FA000 (KsepPoolAllocatePaged.c)
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020EFB4 (KsepLogError.c)
 *     KsepStringDuplicate @ 0x1405464B4 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x140546878 (KsepStringFree.c)
 *     KsepCacheLookup @ 0x140551D9C (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x140594884 (KsepCacheInsert.c)
 */

__int64 __fastcall KseAddHardwareId(WCHAR *SourceString)
{
  volatile signed __int64 *v2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rsi
  int v5; // edi
  char v6; // bl
  _QWORD *Paged; // rax
  __int64 v9; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING v11; // [rsp+48h] [rbp-20h] BYREF

  v2 = (volatile signed __int64 *)qword_140387FD0;
  if ( dword_140387F84 != 2 )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073741823;
    KsepHistoryErrors[2 * v9] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString(&v11, SourceString);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
  v4 = KsepCacheLookup((__int64)v2, (__int64)v10);
  if ( v4 )
  {
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  Paged = KsepPoolAllocatePaged(0x38uLL);
  v4 = Paged;
  if ( Paged && (int)KsepStringDuplicate((__int64)(Paged + 5), SourceString) >= 0 )
  {
    KsepCacheInsert(v2, v4);
    goto LABEL_4;
  }
  v5 = -1073741801;
LABEL_5:
  v6 = _InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 < 0 )
  {
    if ( v4 )
    {
      KsepStringFree(v4 + 5);
      KsepPoolFreePaged(v4);
    }
  }
  return (unsigned int)v5;
}
