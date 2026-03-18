/*
 * XREFs of CcRepinBcb @ 0x1401DDC20
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall CcRepinBcb(PVOID Bcb)
{
  struct _FAST_MUTEX *v2; // rcx

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1ED5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquireFastMutex((PFAST_MUTEX)(*((_QWORD *)Bcb + 22) + 280LL));
  v2 = (struct _FAST_MUTEX *)*((_QWORD *)Bcb + 22);
  ++*((_DWORD *)Bcb + 16);
  KeReleaseGuardedMutex(v2 + 5);
}
