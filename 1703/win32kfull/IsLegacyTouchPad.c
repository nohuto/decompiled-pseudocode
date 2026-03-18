/*
 * XREFs of IsLegacyTouchPad @ 0x1C019BEDC
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0104B68 (CheckPointerDeviceConfiguration.c)
 *     GetTelemDeviceData @ 0x1C019BD1C (GetTelemDeviceData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLegacyTouchPad(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 48) )
    return 0LL;
  result = 1LL;
  if ( *(_WORD *)(a1 + 732) != 1 )
    return 0LL;
  return result;
}
