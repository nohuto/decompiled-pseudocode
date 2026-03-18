/*
 * XREFs of VerifierMmFreePagesFromMdl @ 0x1407C4340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ViTargetAddToCounter @ 0x1407B6F9C (ViTargetAddToCounter.c)
 *     ViMmValidateIrql @ 0x1407C4FC0 (ViMmValidateIrql.c)
 */

__int64 __fastcall VerifierMmFreePagesFromMdl(__int64 a1)
{
  __int64 v2; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = (unsigned int)MmVerifierData >> 17;
  LOBYTE(v2) = (MmVerifierData & 0x20000) != 0;
  ViMmValidateIrql(v2);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, -(__int64)*(unsigned int *)(a1 + 40));
  return ((__int64 (__fastcall *)(__int64))pXdvMmFreePagesFromMdl)(a1);
}
