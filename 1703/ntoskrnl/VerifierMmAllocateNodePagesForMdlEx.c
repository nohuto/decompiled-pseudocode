/*
 * XREFs of VerifierMmAllocateNodePagesForMdlEx @ 0x1407819E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViTargetAddToCounter @ 0x1407751DC (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140775D48 (VfFaultsInjectResourceFailure.c)
 *     VfFillAllocatePagesForMdl @ 0x140782A98 (VfFillAllocatePagesForMdl.c)
 *     ViMmValidateIrql @ 0x140782C30 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocateNodePagesForMdlEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  v12 = (struct _MDL *)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int, int))pXdvMmAllocateNodePagesForMdlEx)(
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
