/*
 * XREFs of IopInsertRemoveDevice @ 0x140066840
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
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
