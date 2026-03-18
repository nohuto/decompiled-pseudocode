/*
 * XREFs of KseAddHardwareId @ 0x1404B3594
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14006D8D8 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14006D900 (KsepPoolAllocatePaged.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KsepDebugPrint @ 0x140208448 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020848C (KsepLogError.c)
 *     KsepCacheLookup @ 0x1404B3690 (KsepCacheLookup.c)
 *     KsepCacheInsert @ 0x1404B3780 (KsepCacheInsert.c)
 *     KsepStringDuplicate @ 0x1404B4AAC (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x1404B4E70 (KsepStringFree.c)
 */

__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  volatile signed __int64 *v2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rsi
  char *Paged; // rax
  int v6; // edi
  __int64 v8; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING v10; // [rsp+48h] [rbp-20h] BYREF

  v2 = (volatile signed __int64 *)qword_14036BCD0;
  if ( dword_14036BC84 != 2 )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = -1073741823;
    KsepHistoryErrors[2 * v8] = 656075;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString(&v10, SourceString);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v2, 0LL);
  v4 = (char *)KsepCacheLookup(v2, v9);
  if ( !v4 )
  {
    Paged = (char *)KsepPoolAllocatePaged(0x38uLL);
    v4 = Paged;
    if ( !Paged || (int)KsepStringDuplicate(Paged + 40, SourceString) < 0 )
    {
      v6 = -1073741801;
      goto LABEL_8;
    }
    KsepCacheInsert(v2, v4);
  }
  v6 = 0;
LABEL_8:
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v6 < 0 )
  {
    if ( v4 )
    {
      KsepStringFree(v4 + 40);
      KsepPoolFreePaged(v4);
    }
  }
  return (unsigned int)v6;
}
