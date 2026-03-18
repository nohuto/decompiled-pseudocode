/*
 * XREFs of ObReferenceObjectExWithTag @ 0x1400EB030
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     ObFastReplaceObject @ 0x14004B580 (ObFastReplaceObject.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     MiCreateImageOrDataSection @ 0x1404C24F0 (MiCreateImageOrDataSection.c)
 *     ObInitializeFastReference @ 0x1404F0348 (ObInitializeFastReference.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax

  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), v3);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x10uLL, v3 + v4);
  return v3 + v4;
}
