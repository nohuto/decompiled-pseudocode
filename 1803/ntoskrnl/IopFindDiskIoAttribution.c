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

__int64 __fastcall IopFindDiskIoAttribution(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // bp
  int v5; // esi
  int v6; // eax
  __int64 v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v1 = 0LL;
  v2 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  v3 = IopDiskIoAttributionTree;
  v4 = v2;
  if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 )
  {
    if ( (_QWORD)IopDiskIoAttributionTree )
      v3 = (unsigned __int64)&IopDiskIoAttributionTree ^ IopDiskIoAttributionTree;
    else
      v3 = 0LL;
  }
  v5 = BYTE8(IopDiskIoAttributionTree) & 1;
  if ( v3 )
  {
    do
    {
      v6 = IopDiskIoAttributionTreeCompare(&v9, v3);
      if ( v6 >= 0 )
      {
        if ( v6 <= 0 )
          break;
        v7 = *(_QWORD *)(v3 + 8);
      }
      else
      {
        v7 = *(_QWORD *)v3;
      }
      if ( v5 && v7 )
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
  __writecr8(v4);
  return v1;
}
