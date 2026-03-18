/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x1400BB350
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1401346A0 (FsRtlAcquireFileForModWriteEx.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     NtMapCMFModule @ 0x1405F39CC (NtMapCMFModule.c)
 *     CmpReplicateKeyToVirtual @ 0x1406F5730 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExpConvertExclusiveToSharedLite @ 0x1400BB3D8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x140157D78 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // r8
  __int16 v2; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // r10

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v2 = Flag & 1;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v2 )
    ExpFastResourceLegacyConvertExclusiveToShared(Resource, 0LL);
  else
    ExpConvertExclusiveToSharedLite(Resource, 0LL);
}
