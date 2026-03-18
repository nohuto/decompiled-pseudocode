/*
 * XREFs of VerifierMmAllocatePagesForMdlEx @ 0x140781C30
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

__int64 __fastcall VerifierMmAllocatePagesForMdlEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  struct _MDL *v11; // rax
  __int64 v12; // rbx
  __int64 Size; // rdi
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  ViMmValidateIrql(((unsigned int)MmVerifierData >> 17) & 1);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v11 = (struct _MDL *)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int))pXdvMmAllocatePagesForMdlEx)(
                         a1,
                         a2,
                         a3,
                         a4,
                         a5,
                         a6);
  v12 = (__int64)v11;
  if ( v11 )
  {
    Size = v11->Size;
    VfFillAllocatePagesForMdl(v11);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 200LL, 0xD0u, *(unsigned int *)(v12 + 40));
  }
  else
  {
    Size = 48LL;
  }
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v12, Size);
  return v12;
}
