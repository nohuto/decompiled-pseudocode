/*
 * XREFs of ObReferenceObjectExWithTag @ 0x14008AAD0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     ObInitializeFastReference @ 0x14048C56C (ObInitializeFastReference.c)
 *     MiCreateImageOrDataSection @ 0x14049BB80 (MiCreateImageOrDataSection.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
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
