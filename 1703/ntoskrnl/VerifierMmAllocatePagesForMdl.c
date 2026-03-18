/*
 * XREFs of VerifierMmAllocatePagesForMdl @ 0x140781B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ViTargetAddToCounter @ 0x1407751DC (ViTargetAddToCounter.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x140775D48 (VfFaultsInjectResourceFailure.c)
 *     ViMmValidateIrql @ 0x140782C30 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmAllocatePagesForMdl(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViMmValidateIrql(((unsigned int)MmVerifierData >> 17) & 1);
  if ( (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))pXdvMmAllocatePagesForMdl)(a1, a2, a3, a4);
  v10 = v9;
  if ( v9 )
  {
    v11 = *(__int16 *)(v9 + 8);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetAddToCounter(retaddr, 200LL, 0xD0u, *(unsigned int *)(v9 + 40));
  }
  else
  {
    v11 = 48LL;
  }
  if ( VfPoolTraces )
    ViPoolLogStackTrace(v10, v11);
  return v10;
}
