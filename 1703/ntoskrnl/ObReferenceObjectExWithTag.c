/*
 * XREFs of ObReferenceObjectExWithTag @ 0x1400445F0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 *     ObInitializeFastReference @ 0x1404A11D4 (ObInitializeFastReference.c)
 *     MiCreateImageOrDataSection @ 0x14050E960 (MiCreateImageOrDataSection.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(__int64 a1, int a2)
{
  volatile signed __int64 *v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax

  v2 = (volatile signed __int64 *)(a1 - 48);
  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  v4 = _InterlockedExchangeAdd64(v2, v3);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v2 + 6), 0x10uLL, v4 + v3);
  return v3 + v4;
}
