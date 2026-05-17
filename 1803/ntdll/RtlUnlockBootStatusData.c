/*
 * XREFs of RtlUnlockBootStatusData @ 0x1800E6F00
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 */

__int64 __fastcall RtlUnlockBootStatusData(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return ZwPowerInformation();
  return result;
}
