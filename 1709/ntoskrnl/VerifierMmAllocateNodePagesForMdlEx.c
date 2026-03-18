/*
 * XREFs of VerifierMmAllocateNodePagesForMdlEx @ 0x1407C3C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1407B6F9C (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x1407B78E8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1407B7B44 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x1407C4E28 (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x1407C4FC0 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocateNodePagesForMdlEx(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        ULONG_PTR a4,
        int a5,
        int a6,
        int a7)
{
  struct _MDL *v12; // rax
  __int64 v13; // rbx
  __int64 Size; // rdi
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  ViMmValidateIrql(0LL);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  if ( (MmVerifierData & 0x4000000) != 0 && a2 < 0x100000000LL )
    VerifierBugCheckIfAppropriate(0xC4u, 0x141uLL, a2, a4, 0LL);
  v12 = (struct _MDL *)((__int64 (__fastcall *)(__int64, ULONG_PTR, __int64, ULONG_PTR, int, int, int))pXdvMmAllocateNodePagesForMdlEx)(
                         a1,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6,
                         a7);
  v13 = (__int64)v12;
  if ( v12 )
  {
    Size = v12->Size;
    VfFillAllocatePagesForMdl(v12);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 200LL, 0xD0u, *(unsigned int *)(v13 + 40));
  }
  else
  {
    Size = 48LL;
  }
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v13, Size);
  return v13;
}
