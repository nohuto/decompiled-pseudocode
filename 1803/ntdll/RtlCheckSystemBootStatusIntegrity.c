/*
 * XREFs of RtlCheckSystemBootStatusIntegrity @ 0x1800E6A00
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 */

__int64 __fastcall RtlCheckSystemBootStatusIntegrity(__int64 a1)
{
  if ( a1 )
    return ZwPowerInformation();
  else
    return 3221225485LL;
}
