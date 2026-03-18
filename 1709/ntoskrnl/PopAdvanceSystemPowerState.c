/*
 * XREFs of PopAdvanceSystemPowerState @ 0x1406F751C
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     PopVerifySystemPowerState @ 0x1405B987C (PopVerifySystemPowerState.c)
 */

void __fastcall PopAdvanceSystemPowerState(int *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v8; // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax

  if ( !a1 )
    return;
  v4 = *a1;
  if ( *a1 < 2 )
    return;
  if ( v4 >= 6 )
  {
LABEL_4:
    *a1 = 1;
    return;
  }
  if ( !a2 )
  {
    v9 = v4 - 1;
    v10 = 0;
LABEL_13:
    *a1 = v9;
    PopVerifySystemPowerState(a1, v10);
    goto LABEL_14;
  }
  v8 = a2 - 1;
  if ( !v8 )
  {
    *a1 = v4 - 1;
    PopVerifySystemPowerState(a1, 1);
    if ( *a1 == v4 )
      *a1 = 1;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    if ( v4 == 5 )
      goto LABEL_4;
    v9 = v4 + 1;
    v10 = 2;
    goto LABEL_13;
  }
LABEL_14:
  v11 = *a1;
  if ( *a1 != 1 && (v11 < a3 || v11 > a4) )
    *a1 = 1;
}
