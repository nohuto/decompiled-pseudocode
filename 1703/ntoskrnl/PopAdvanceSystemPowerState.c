/*
 * XREFs of PopAdvanceSystemPowerState @ 0x14057A1E0
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     PopVerifySystemPowerState @ 0x140581AE8 (PopVerifySystemPowerState.c)
 */

void __fastcall PopAdvanceSystemPowerState(int *a1, __int64 a2, int a3, int a4)
{
  int v4; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edx

  if ( !a1 )
    return;
  v4 = *a1;
  if ( *a1 < 2 )
    return;
  if ( v4 >= 6 )
    goto LABEL_11;
  if ( !(_DWORD)a2 )
  {
    v8 = v4 - 1;
LABEL_6:
    *a1 = v8;
    PopVerifySystemPowerState(a1, a2);
    goto LABEL_7;
  }
  v10 = a2 - 1;
  if ( !v10 )
  {
    *a1 = v4 - 1;
    PopVerifySystemPowerState(a1, 1LL);
    if ( *a1 == v4 )
      *a1 = 1;
    goto LABEL_7;
  }
  if ( v10 == 1 )
  {
    if ( v4 != 5 )
    {
      v8 = v4 + 1;
      a2 = 2LL;
      goto LABEL_6;
    }
LABEL_11:
    *a1 = 1;
    return;
  }
LABEL_7:
  v9 = *a1;
  if ( *a1 != 1 && (v9 < a3 || v9 > a4) )
    *a1 = 1;
}
