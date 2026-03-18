/*
 * XREFs of IopInterlockedRemoveHeadList @ 0x140015B40
 * Callers:
 *     IoShutdownSystem @ 0x14042A6B4 (IoShutdownSystem.c)
 *     IopCallDriverReinitializationRoutines @ 0x14046F300 (IopCallDriverReinitializationRoutines.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1408539E8 (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 */

_QWORD *__fastcall IopInterlockedRemoveHeadList(_QWORD **a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *a1;
  if ( *a1 == a1 )
  {
    v3 = 0LL;
  }
  else
  {
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
