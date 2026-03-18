/*
 * XREFs of CiThreadUpdatePriorities @ 0x1C000AEB8
 * Callers:
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 *     CiThreadSetRelativePriority @ 0x1C000ADFC (CiThreadSetRelativePriority.c)
 * Callees:
 *     <none>
 */

void __fastcall CiThreadUpdatePriorities(_BYTE *a1, _BYTE *a2, char a3)
{
  unsigned __int8 v4; // al
  char v5; // r11
  char v6; // bl
  char v7; // bl
  char v8; // r8
  char v9; // cl
  char v10; // dl
  char v11; // al

  if ( CiSystemResponsiveness == 100 )
  {
    a1[106] = a3 + 9;
    a1[105] = a3 + 9;
    a1[104] = a3 + 9;
    return;
  }
  v4 = a3 + a2[1];
  if ( v4 )
  {
    v5 = a3 + a2[1];
    if ( v4 >= 8u )
      v5 = 7;
  }
  else
  {
    v5 = 1;
  }
  v6 = a3;
  if ( a2[2] < 8u )
    v6 = a2[2];
  v7 = v6 + 8;
  v8 = a3 + *a2;
  switch ( ((unsigned __int8)a2[3] >> 4) & 7 )
  {
    case 1:
      v8 = v7;
      break;
    case 2:
      if ( (unsigned __int8)v8 >= 0x10u )
      {
        if ( (unsigned __int8)v8 >= 0x18u )
LABEL_18:
          v8 = 23;
      }
      else
      {
        v8 = 16;
      }
      break;
    case 3:
      if ( (unsigned __int8)v8 >= 0x17u )
      {
        if ( (unsigned __int8)v8 > 0x1Au )
          v8 = 26;
        break;
      }
      goto LABEL_18;
  }
  v9 = v7;
  v10 = v5;
  if ( (unsigned __int8)v5 >= 0x1Bu )
    v10 = 26;
  a1[106] = v10;
  if ( (unsigned __int8)v7 >= 0x1Bu )
    v9 = 26;
  v11 = v8;
  if ( (unsigned __int8)v8 >= 0x1Bu )
    v11 = 27;
  a1[105] = v9;
  a1[104] = v11;
}
