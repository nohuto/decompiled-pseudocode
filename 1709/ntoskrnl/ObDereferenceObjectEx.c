/*
 * XREFs of ObDereferenceObjectEx @ 0x140067B38
 * Callers:
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 *     PspClearProcessThreadCidRefs @ 0x1404D5438 (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 v2; // rbx
  volatile signed __int64 *v3; // rsi
  signed __int64 BugCheckParameter4; // rdi

  v2 = (int)a2;
  v3 = (volatile signed __int64 *)(BugCheckParameter2 - 48);
  ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48, a2, 1953261124LL);
  BugCheckParameter4 = _InterlockedExchangeAdd64(v3, -(int)v2) - v2;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v3);
  }
  return BugCheckParameter4;
}
