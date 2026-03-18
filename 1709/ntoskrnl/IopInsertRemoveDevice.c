/*
 * XREFs of IopInsertRemoveDevice @ 0x1400FAFD8
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400FAE1C (IopCompleteUnloadOrDelete.c)
 *     IoCreateDevice @ 0x140549C50 (IoCreateDevice.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall IopInsertRemoveDevice(__int64 a1, __int64 a2, char a3)
{
  KIRQL v6; // cl
  _QWORD *i; // rdx

  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( a3 )
  {
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = a2;
  }
  else
  {
    for ( i = (_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL); *i != a2; i = (_QWORD *)(*i + 16LL) )
      ;
    *i = *(_QWORD *)(a2 + 16);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
}
