/*
 * XREFs of ?_GetAngle@RIMDeadzone@@CAKUtagPOINT@@0@Z @ 0x1C011675C
 * Callers:
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z @ 0x1C011632C (-IsInDeadzone@RIMDeadzone@@QEAAHPEAUtagHPD_CONTACT@@@Z.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01164F8 (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeadzone::_GetAngle(struct tagPOINT a1, struct tagPOINT a2)
{
  int v2; // r10d
  int v3; // r11d
  int v4; // r9d
  int v5; // ecx
  unsigned int v6; // r8d
  int *v7; // rdx
  int v8; // r8d
  unsigned int i; // eax
  bool v10; // cc
  int v11; // r9d
  int v12; // r9d
  int v13; // eax

  v2 = 0;
  v3 = a1.x - a2.x;
  v4 = 4;
  v5 = a1.y - a2.y;
  if ( v3 )
  {
    v7 = (int *)&RIMDeadzone::s_adwTangentLookup;
    v8 = -(100 * v5 / v3);
    if ( 100 * v5 / v3 >= 0 )
      v8 = 100 * v5 / v3;
    for ( i = 0; i < 0x12; ++i )
    {
      if ( v8 <= *v7 )
        break;
      ++v7;
    }
    v6 = 90;
    if ( i != 18 )
      v6 = 5 * i;
    v10 = v3 <= 0;
    if ( v3 < 0 )
      goto LABEL_13;
  }
  else
  {
    v6 = 90;
  }
  if ( v5 >= 0 )
    goto LABEL_16;
  v10 = v3 <= 0;
LABEL_13:
  if ( v10 )
  {
    LOBYTE(v2) = v5 >= 0;
    v4 = v2 + 2;
  }
  else
  {
    v4 = 1;
  }
LABEL_16:
  v11 = v4 - 2;
  if ( !v11 )
  {
    v13 = 180;
    goto LABEL_22;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v13 = 360;
LABEL_22:
      v6 = v13 - v6;
    }
  }
  else
  {
    v6 += 180;
  }
  return v6 % 0x168;
}
