/*
 * XREFs of ObDereferenceObjectEx @ 0x140024B3C
 * Callers:
 *     PspClearProcessThreadCidRefs @ 0x1404F8D74 (PspClearProcessThreadCidRefs.c)
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140049B60 (ObpTraceObjectDereferenceIfActive.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
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
