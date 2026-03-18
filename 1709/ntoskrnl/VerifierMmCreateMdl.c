/*
 * XREFs of VerifierMmCreateMdl @ 0x1407C4120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViPoolLogStackTrace @ 0x1407B78E8 (ViPoolLogStackTrace.c)
 *     VfFaultsInjectResourceFailure @ 0x1407B7B44 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierMmCreateMdl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx

  if ( !a1 && (unsigned int)VfFaultsInjectResourceFailure(0) )
    return 0LL;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvMmCreateMdl)(a1, a2, a3);
  v8 = v7;
  if ( KeGetCurrentIrql() <= 2u )
  {
    v9 = 48LL;
    if ( v7 )
      v9 = *(__int16 *)(v7 + 8);
    if ( VfPoolTraces )
      ViPoolLogStackTrace(v7, v9);
  }
  return v8;
}
