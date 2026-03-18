/*
 * XREFs of PopBatteryEtwCallback @ 0x140763C20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140074E68 (PopAcquireRwLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x14016B004 (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((ULONG_PTR)&PopCB);
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
}
