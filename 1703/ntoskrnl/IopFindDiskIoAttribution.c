/*
 * XREFs of IopFindDiskIoAttribution @ 0x1400ADF94
 * Callers:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14002589C (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoRecordIoAttribution @ 0x1400ADF00 (IoRecordIoAttribution.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     IopDiskIoAttributionTreeCompare @ 0x1400AE054 (IopDiskIoAttributionTreeCompare.c)
 */

unsigned __int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  unsigned __int64 v1; // rdi
  KIRQL v2; // bp
  unsigned __int64 Root; // rbx
  int v4; // esi
  int v5; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  Root = (unsigned __int64)IopDiskIoAttributionTree.Root;
  v4 = *(_BYTE *)&IopDiskIoAttributionTree.0 & 1;
  if ( IopDiskIoAttributionTree.Root )
  {
    do
    {
      v5 = IopDiskIoAttributionTreeCompare(&v8, Root);
      if ( v5 < 0 )
      {
        v7 = *(_QWORD *)Root;
      }
      else
      {
        if ( v5 <= 0 )
          break;
        v7 = *(_QWORD *)(Root + 8);
      }
      if ( v4 && v7 )
        Root ^= v7;
      else
        Root = v7;
    }
    while ( Root );
    if ( Root )
    {
      v1 = Root;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(Root + 32)) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  __writecr8(v2);
  return v1;
}
