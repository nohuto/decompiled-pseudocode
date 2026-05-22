/*
 * XREFs of ?ReadConfigValue@TwoFingerClickRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x1800479A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall TwoFingerClickRecognizer::ReadConfigValue(_WORD *a1, int a2, __int64 a3)
{
  char v3; // r10
  __int16 v4; // ax

  v3 = 1;
  switch ( a2 )
  {
    case 19:
      *(_WORD *)(a3 + 4) = a1[31];
      goto LABEL_15;
    case 20:
      v4 = a1[32];
      goto LABEL_9;
    case 21:
      v4 = a1[33];
      goto LABEL_9;
    case 22:
      v4 = a1[35];
      goto LABEL_9;
    case 23:
      v4 = a1[34];
      goto LABEL_9;
    case 24:
      v4 = a1[30];
LABEL_9:
      *(_WORD *)(a3 + 4) = v4;
LABEL_15:
      *(_DWORD *)a3 = a2;
      return v3;
  }
  return 0;
}
