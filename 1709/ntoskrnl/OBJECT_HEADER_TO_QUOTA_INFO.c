/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x1400191D8
 * Callers:
 *     ObAdjustSecurityQuota @ 0x14048535C (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404853DC (ObpChargeQuotaForObject.c)
 *     NtQueryObject @ 0x14048EB10 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x1406F01B4 (ObGetObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_QUOTA_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF];
  else
    return 0LL;
}
