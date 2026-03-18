/*
 * XREFs of PnpMarkDeviceForRemove @ 0x1401F8AF8
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14059AA20 (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400DB970 (IopIncrementDeviceObjectRefCount.c)
 */

ULONG_PTR __fastcall PnpMarkDeviceForRemove(ULONG_PTR a1, int a2, ULONG_PTR *a3)
{
  ULONG_PTR v5; // rdi
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // bp
  void *v9; // rcx
  KIRQL v10; // al
  ULONG_PTR result; // rax

  v5 = a1;
  if ( a2 )
  {
    a3[1] = 0LL;
    *a3 = a1;
  }
  if ( a1 )
  {
    do
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        v6 = KeAcquireQueuedSpinLock(9uLL);
        v7 = *(_QWORD *)(v5 + 56);
        v8 = v6;
        if ( a2 )
        {
          *(_WORD *)(v7 + 4) |= 8u;
          if ( (*(_WORD *)(v7 + 4) & 1) != 0 )
          {
            *a3 = v5;
            v9 = *(void **)(v7 + 8);
            a3[1] = (ULONG_PTR)v9;
            ObfReferenceObjectWithTag(v9, 0x746C6644u);
            IopIncrementDeviceObjectRefCount(a3[1], 1);
          }
        }
        else
        {
          *(_WORD *)(v7 + 4) &= ~8u;
        }
        KeReleaseQueuedSpinLock(9uLL, v8);
      }
      if ( a2 && a3[1] )
        break;
      v10 = KeAcquireQueuedSpinLock(0xAuLL);
      v5 = *(_QWORD *)(v5 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v10);
    }
    while ( v5 );
  }
  result = a3[1];
  if ( !result )
    return *a3;
  return result;
}
