/*
 * XREFs of SetKeyboardRate @ 0x1C000FA78
 * Callers:
 *     xxxInitWindowStation @ 0x1C000F9C0 (xxxInitWindowStation.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetKeyboardRate()
{
  unsigned int v0; // r9d
  __int64 result; // rax

  v0 = ((unsigned int)gnKeyboardSpeed >> 5) & 3;
  WORD1(gktp) = gKeyboardInfo[9]
              + (gnKeyboardSpeed & 0x1F) * (gKeyboardInfo[12] - (unsigned int)gKeyboardInfo[9]) / 0x1F;
  WORD2(gktp) = gKeyboardInfo[10] + v0 * (gKeyboardInfo[13] - gKeyboardInfo[10]) / 3;
  result = gdwUpdateKeyboard;
  gdwUpdateKeyboard |= 1u;
  return result;
}
