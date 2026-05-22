/*
 * XREFs of ?ReadConfigValue@DragRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x180046170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DragRecognizer::ReadConfigValue(_WORD *a1, int a2, __int64 a3)
{
  char v3; // r10
  __int16 v4; // ax

  v3 = 1;
  switch ( a2 )
  {
    case 8:
      *(_WORD *)(a3 + 4) = a1[8];
      goto LABEL_15;
    case 9:
      v4 = a1[9];
      goto LABEL_9;
    case 10:
      v4 = a1[11];
      goto LABEL_9;
    case 11:
      v4 = a1[12];
      goto LABEL_9;
    case 12:
      v4 = a1[13];
      goto LABEL_9;
    case 13:
      v4 = a1[14];
LABEL_9:
      *(_WORD *)(a3 + 4) = v4;
LABEL_15:
      *(_DWORD *)a3 = a2;
      return v3;
  }
  return 0;
}
