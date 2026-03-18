/*
 * XREFs of ObDereferenceObjectEx @ 0x14005A5F0
 * Callers:
 *     PspClearProcessThreadCidRefs @ 0x1404B7BE4 (PspClearProcessThreadCidRefs.c)
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x14005BAA0 (ObpTraceObjectDereferenceIfActive.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 v2; // rbx
  ULONG_PTR v3; // rsi
  signed __int64 BugCheckParameter4; // rdi

  v2 = (int)a2;
  v3 = BugCheckParameter2 - 48;
  ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48, a2, 1953261124LL);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, -(int)v2) - v2;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(v3 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v3 + 24) ^ (unsigned __int64)BYTE1(v3)],
        BugCheckParameter2,
        6uLL,
        *(_QWORD *)(v3 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v3);
  }
  return BugCheckParameter4;
}
