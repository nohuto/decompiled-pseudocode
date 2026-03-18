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

__int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v2; // bp
  __int64 v3; // rbx
  int v4; // esi
  int v5; // eax
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v3 = IopDiskIoAttributionTree;
  v4 = BYTE8(IopDiskIoAttributionTree) & 1;
  if ( (_QWORD)IopDiskIoAttributionTree )
  {
    do
    {
      v5 = IopDiskIoAttributionTreeCompare(&v8, v3);
      if ( v5 < 0 )
      {
        v7 = *(_QWORD *)v3;
      }
      else
      {
        if ( v5 <= 0 )
          break;
        v7 = *(_QWORD *)(v3 + 8);
      }
      if ( v4 && v7 )
        v3 ^= v7;
      else
        v3 = v7;
    }
    while ( v3 );
    if ( v3 )
    {
      v1 = v3;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 32)) <= 1 )
        __fastfail(0xEu);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
  __writecr8(v2);
  return v1;
}
