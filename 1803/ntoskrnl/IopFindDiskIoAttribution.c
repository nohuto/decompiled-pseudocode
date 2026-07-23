/*
 * XREFs of IopFindDiskIoAttribution @ 0x14008D0B0
 * Callers:
 *     IoRecordIoAttribution @ 0x14008D020 (IoRecordIoAttribution.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400A42D4 (IopAcquireReferencesFromIoAttributionHandle.c)
 * Callees:
 *     IopDiskIoAttributionTreeCompare @ 0x14008E0DC (IopDiskIoAttributionTreeCompare.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

unsigned __int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  unsigned __int64 v1; // rdi
  KIRQL v2; // al
  unsigned __int64 Root; // rbx
  KIRQL v4; // bp
  int v5; // esi
  int v6; // eax
  unsigned __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  Root = (unsigned __int64)IopDiskIoAttributionTree.Root;
  v4 = v2;
  if ( (*(_BYTE *)&IopDiskIoAttributionTree.0 & 1) != 0 )
  {
    if ( IopDiskIoAttributionTree.Root )
      Root = (unsigned __int64)&IopDiskIoAttributionTree ^ (unsigned __int64)IopDiskIoAttributionTree.Root;
    else
      Root = 0LL;
  }
  v5 = *(_BYTE *)&IopDiskIoAttributionTree.0 & 1;
  if ( Root )
  {
    do
    {
      v6 = IopDiskIoAttributionTreeCompare(&v9, Root);
      if ( v6 >= 0 )
      {
        if ( v6 <= 0 )
          break;
        v7 = *(_QWORD *)(Root + 8);
      }
      else
      {
        v7 = *(_QWORD *)Root;
      }
      if ( v5 && v7 )
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
  __writecr8(v4);
  return v1;
}
