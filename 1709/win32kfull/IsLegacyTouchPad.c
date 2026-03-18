/*
 * XREFs of IsLegacyTouchPad @ 0x1C01A7B88
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0043BB4 (CheckPointerDeviceConfiguration.c)
 *     GetTelemDeviceData @ 0x1C01A79CC (GetTelemDeviceData.c)
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
