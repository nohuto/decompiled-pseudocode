/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x140088018
 * Callers:
 *     ObAdjustSecurityQuota @ 0x1404F4E1C (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404F4E9C (ObpChargeQuotaForObject.c)
 *     NtQueryObject @ 0x1404FAD40 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x1406C1730 (ObGetObjectInformation.c)
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
