/*
 * XREFs of ndisIdleCancelWorkItem @ 0x1C0070950
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelIdleRequest @ 0x1C007052C (ndisCancelIdleRequest.c)
 */

char __fastcall ndisIdleCancelWorkItem(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al

  v2 = a2[560];
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  *(_DWORD *)(v2 + 504) &= ~0x40u;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v4);
  return ndisCancelIdleRequest(a2, 0, 0);
}
