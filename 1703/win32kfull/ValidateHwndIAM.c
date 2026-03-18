/*
 * XREFs of ValidateHwndIAM @ 0x1C003AF20
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0062F94 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0038B8C (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ValidateHwndIAM()
{
  _BYTE *v0; // r8
  __int64 v1; // r9

  if ( IAMThreadAccessGranted(gptiCurrent) )
    *v0 = 0;
  return ValidateHwnd(v1);
}
