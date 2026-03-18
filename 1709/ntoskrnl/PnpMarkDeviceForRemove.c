/*
 * XREFs of PnpMarkDeviceForRemove @ 0x140157DE8
 * Callers:
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14055E96C (PiIrpQueryRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140085AF0 (IopIncrementDeviceObjectRefCount.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

ULONG_PTR __fastcall PnpMarkDeviceForRemove(ULONG_PTR a1, int a2, ULONG_PTR *a3)
{
  ULONG_PTR v5; // rdi
  KIRQL v6; // al
  ULONG_PTR result; // rax
  KIRQL v8; // al
  __int64 v9; // rdx
  KIRQL v10; // bp
  void *v11; // rcx

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
        v8 = KeAcquireQueuedSpinLock(9uLL);
        v9 = *(_QWORD *)(v5 + 56);
        v10 = v8;
        if ( a2 )
        {
          *(_WORD *)(v9 + 4) |= 8u;
          if ( (*(_WORD *)(v9 + 4) & 1) != 0 )
          {
            *a3 = v5;
            v11 = *(void **)(v9 + 8);
            a3[1] = (ULONG_PTR)v11;
            ObfReferenceObjectWithTag(v11, 0x746C6644u);
            IopIncrementDeviceObjectRefCount(a3[1], 1);
          }
        }
        else
        {
          *(_WORD *)(v9 + 4) &= ~8u;
        }
        KeReleaseQueuedSpinLock(9uLL, v10);
      }
      if ( a2 && a3[1] )
        break;
      v6 = KeAcquireQueuedSpinLock(0xAuLL);
      v5 = *(_QWORD *)(v5 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v6);
    }
    while ( v5 );
  }
  result = a3[1];
  if ( !result )
    return *a3;
  return result;
}
