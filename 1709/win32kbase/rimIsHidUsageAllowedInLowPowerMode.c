/*
 * XREFs of rimIsHidUsageAllowedInLowPowerMode @ 0x1C0113588
 * Callers:
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01134A0 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C01137E8 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimIsHidUsageAllowedInLowPowerMode(__int64 a1, __int16 a2)
{
  int v2; // r9d
  unsigned int v3; // r8d
  int v4; // r9d
  int v5; // r9d

  v2 = *(_DWORD *)(a1 + 372);
  v3 = 0;
  if ( !v2 || (v4 = v2 - 1) == 0 )
  {
    LOBYTE(v3) = a2 == 104;
    return v3;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( a2 == 41 )
      return v3;
    if ( a2 != 59 )
      return a2 != 60;
    goto LABEL_6;
  }
  if ( v5 == 1 && a2 == 59 )
LABEL_6:
    LOBYTE(v3) = *(_DWORD *)(a1 + 432) != 0;
  return v3;
}
