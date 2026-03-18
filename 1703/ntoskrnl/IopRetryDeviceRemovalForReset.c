/*
 * XREFs of IopRetryDeviceRemovalForReset @ 0x140694C30
 * Callers:
 *     <none>
 * Callees:
 *     PipIsDevNodeEffectivelyRemoved @ 0x1401F8C34 (PipIsDevNodeEffectivelyRemoved.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     PnpSetTargetDeviceRemove @ 0x14056E408 (PnpSetTargetDeviceRemove.c)
 *     IopFreeResetRemovalContext @ 0x140694BA8 (IopFreeResetRemovalContext.c)
 */

void __fastcall IopRetryDeviceRemovalForReset(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  BOOL IsDevNodeEffectivelyRemoved; // ebx
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 184);
  if ( v1 )
    v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  else
    v3 = 0LL;
  PpDevNodeLockTree(0);
  IsDevNodeEffectivelyRemoved = PipIsDevNodeEffectivelyRemoved(v3);
  PpDevNodeUnlockTree(0);
  if ( IsDevNodeEffectivelyRemoved )
    v5 = -1073741823;
  else
    v5 = PnpSetTargetDeviceRemove(
           *(_QWORD **)(a1 + 184),
           0,
           1,
           0,
           1,
           54,
           0,
           0LL,
           (__int64)IopDeviceRemovalForResetComplete,
           a1,
           (_DWORD *)(a1 + 164),
           a1 + 192,
           a1 + 200,
           (__int64 *)(a1 + 168));
  if ( v5 < 0 )
    IopFreeResetRemovalContext(a1);
}
