/*
 * XREFs of ACPIPepGetNextPlatformNotification @ 0x1C0085108
 * Callers:
 *     ACPIPepWorker @ 0x1C0085650 (ACPIPepWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall ACPIPepGetNextPlatformNotification(_BYTE *a1, int *a2, _BYTE *a3)
{
  char v4; // r8
  bool v5; // r10
  char v6; // r11
  char v7; // al
  int v8; // r8d
  char v9; // al

  *a2 = -1;
  v4 = a1[242];
  v5 = v4 && a1[243] != a1[244];
  v6 = a1[241];
  if ( !v6 || (v7 = a1[245], v7 == a1[246]) )
  {
    v8 = *a2;
    if ( !v5 )
      goto LABEL_12;
    if ( a1[243] || !a1[245] || !v6 )
    {
      *a2 = 1;
      v8 = 1;
      goto LABEL_21;
    }
    a1[245] = 0;
  }
  else if ( v7 && !a1[243] && v4 )
  {
    *a2 = 1;
    v8 = *a2;
    a1[243] = 1;
LABEL_21:
    v9 = a1[243];
    a1[244] = v9;
    goto LABEL_14;
  }
  *a2 = 0;
  v8 = *a2;
LABEL_12:
  if ( v8 )
  {
    *a3 = 0;
    return v8 != -1;
  }
  v9 = a1[245];
  a1[246] = v9;
LABEL_14:
  *a3 = v9;
  return v8 != -1;
}
