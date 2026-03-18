/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14006A188
 * Callers:
 *     NtQueryObject @ 0x1404A7270 (NtQueryObject.c)
 *     ObAdjustSecurityQuota @ 0x1404EBC20 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404EBCA0 (ObpChargeQuotaForObject.c)
 *     ObGetObjectInformation @ 0x14075956C (ObGetObjectInformation.c)
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
