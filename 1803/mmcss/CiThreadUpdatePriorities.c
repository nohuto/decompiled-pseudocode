/*
 * XREFs of CiThreadUpdatePriorities @ 0x1C000AF10
 * Callers:
 *     CiThreadCreate @ 0x1C000AA4C (CiThreadCreate.c)
 *     CiThreadSetRelativePriority @ 0x1C000AE54 (CiThreadSetRelativePriority.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiThreadUpdatePriorities(_BYTE *a1, char *a2, unsigned __int8 a3)
{
  char v5; // r9
  char v6; // dl
  __int64 result; // rax
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r10
  unsigned __int8 v10; // r8
  char v11; // cl
  unsigned int v12; // edx
  char v13; // r8
  char v14; // cl
  int v15; // edx
  int v16; // edx

  if ( CiSystemResponsiveness == 100 )
  {
    v5 = a3 + 9;
    v6 = a3 + 9;
    result = (unsigned __int8)(a3 + 9);
    goto LABEL_26;
  }
  v8 = a3 + a2[1];
  if ( v8 )
  {
    v9 = a3 + a2[1];
    if ( v8 >= 8u )
      v9 = 7;
  }
  else
  {
    v9 = 1;
  }
  v10 = a2[2];
  v11 = *a2;
  v12 = (unsigned __int8)a2[3];
  if ( v10 >= 8u )
    v10 = a3;
  v13 = v10 + 8;
  v14 = a3 + v11;
  v15 = ((v12 >> 4) & 7) - 1;
  if ( !v15 )
  {
    v14 = v13;
    goto LABEL_20;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      if ( (unsigned __int8)v14 >= 0x17u )
      {
        if ( (unsigned __int8)v14 > 0x1Au )
          v14 = 26;
        goto LABEL_20;
      }
      goto LABEL_18;
    }
  }
  else if ( (unsigned __int8)v14 >= 0x10u )
  {
    if ( (unsigned __int8)v14 >= 0x18u )
LABEL_18:
      v14 = 23;
  }
  else
  {
    v14 = 16;
  }
LABEL_20:
  v6 = v13;
  result = v9;
  if ( v9 >= 0x1Bu )
    result = 26LL;
  if ( (unsigned __int8)v13 >= 0x1Bu )
    v6 = 26;
  v5 = v14;
  if ( (unsigned __int8)v14 >= 0x1Bu )
    v5 = 27;
LABEL_26:
  a1[106] = result;
  a1[105] = v6;
  a1[104] = v5;
  return result;
}
