/*
 * XREFs of mth_90degClosestRotationFactor @ 0x1C02B72E4
 * Callers:
 *     scl_InitializeScaling @ 0x1C02B8724 (scl_InitializeScaling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall mth_90degClosestRotationFactor(int *a1)
{
  int v1; // edx
  bool v2; // zf
  int v3; // r8d
  bool v4; // sf
  int v6; // eax
  bool v7; // sf
  bool v8; // zf
  bool v9; // cc
  int v10; // eax
  bool v11; // cc
  bool v12; // sf
  int v13; // eax
  bool v14; // zf
  bool v15; // sf

  v1 = *a1;
  v2 = *a1 == 0;
  if ( *a1 > 0 )
  {
    v3 = a1[1];
    v4 = v3 < 0;
    if ( !v3 )
    {
      if ( a1[3] > 0 && a1[4] > 0 )
        return 0LL;
      v4 = 0;
    }
    if ( v4 && !a1[3] && a1[4] > 0 )
      return 0LL;
    v2 = v1 == 0;
  }
  if ( v2 )
  {
    v6 = a1[1];
    if ( v6 <= 0 || a1[3] >= 0 )
      goto LABEL_25;
    if ( a1[4] > 0 )
      return 1LL;
  }
  v7 = v1 < 0;
  if ( v1 > 0 )
  {
    if ( a1[1] > 0 && a1[3] < 0 && !a1[4] )
      return 1LL;
    v7 = v1 < 0;
  }
  if ( !v7 )
  {
LABEL_30:
    v8 = v1 == 0;
    goto LABEL_31;
  }
  v6 = a1[1];
  if ( !v6 && a1[3] < 0 && a1[4] < 0 )
    return 2LL;
LABEL_25:
  v8 = v1 == 0;
  if ( v1 < 0 )
  {
    if ( v6 > 0 && !a1[3] && a1[4] < 0 )
      return 2LL;
    goto LABEL_30;
  }
LABEL_31:
  if ( v8 && a1[1] < 0 && a1[3] > 0 && a1[4] < 0 )
    return 3LL;
  v9 = v1 <= 0;
  if ( v1 < 0 )
  {
    if ( a1[1] < 0 && a1[3] > 0 && !a1[4] )
      return 3LL;
    v9 = v1 <= 0;
  }
  if ( !v9 )
  {
    v10 = a1[1];
    v11 = v10 <= 0;
    if ( !v10 )
    {
      if ( a1[3] > 0 && a1[4] < 0 )
        return 4LL;
      v11 = 1;
    }
    if ( !v11 && !a1[3] && a1[4] < 0 )
      return 4LL;
  }
  v12 = v1 < 0;
  if ( !v1 )
  {
    v13 = a1[1];
    if ( v13 <= 0 || a1[3] <= 0 )
      goto LABEL_60;
    if ( a1[4] > 0 )
      return 5LL;
    v12 = 0;
  }
  if ( !v12 )
    goto LABEL_69;
  v13 = a1[1];
  if ( v13 > 0 && a1[3] > 0 && !a1[4] )
    return 5LL;
LABEL_60:
  v14 = v1 == 0;
  if ( v1 >= 0 )
    goto LABEL_70;
  v15 = v13 < 0;
  if ( !v13 )
  {
    if ( a1[3] < 0 && a1[4] > 0 )
      return 6LL;
    v15 = 0;
  }
  if ( v15 && !a1[3] && a1[4] > 0 )
    return 6LL;
LABEL_69:
  v14 = v1 == 0;
LABEL_70:
  if ( v14 )
  {
    if ( a1[1] >= 0 || a1[3] >= 0 )
      return 8LL;
    if ( a1[4] < 0 )
      return 7LL;
  }
  if ( v1 > 0 && a1[1] < 0 && a1[3] < 0 && !a1[4] )
    return 7LL;
  return 8LL;
}
