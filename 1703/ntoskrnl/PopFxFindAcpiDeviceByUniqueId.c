/*
 * XREFs of PopFxFindAcpiDeviceByUniqueId @ 0x14015EFF8
 * Callers:
 *     PopFxAcpiPrepareDevice @ 0x140238100 (PopFxAcpiPrepareDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1404A6F28 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1400692E0 (IoAcquireRemoveLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopFxFindAcpiDeviceByUniqueId(PCUNICODE_STRING String2, __int64 **a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rbx
  NTSTATUS v6; // edi
  __int64 *i; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxDeviceListLock, 0LL);
  for ( i = (__int64 *)PopFxAcpiDeviceList; i != &PopFxAcpiDeviceList; i = (__int64 *)*i )
  {
    v5 = i - 23;
    if ( i[3] && !RtlCompareUnicodeString((PCUNICODE_STRING)(v5 + 25), String2, 0) )
    {
      if ( a2 )
        v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 31), (PVOID)0x66466F50, File, 1u, 0x20u);
      else
        v6 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxDeviceListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v6 >= 0 && a2 )
    *a2 = v5;
  return (unsigned int)v6;
}
