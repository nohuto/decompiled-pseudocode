/*
 * XREFs of PnpBiosScanForWakeInterrupt @ 0x1C00280D8
 * Callers:
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0028040 (PnpBiosSetFlagsForNotableInterrupts.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpBiosScanForWakeInterrupt(char *a1, unsigned int a2)
{
  __int64 v2; // rsi
  char v4; // dl
  char v5; // r9
  char *v6; // r8
  char v7; // r11
  char v8; // cl
  char v9; // bl
  unsigned __int16 v10; // r10
  char *v11; // r10
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  char v17; // al

  v2 = a2;
  if ( a2 < 5 )
    return 0;
  v4 = 1;
  v5 = 0;
  v6 = a1;
  v7 = 1;
  v8 = *a1;
  v9 = 0;
  while ( 1 )
  {
    if ( v8 < 0 )
    {
      v10 = *(_WORD *)(v6 + 1) + 3;
    }
    else
    {
      v10 = (v8 & 7) + 1;
      v8 &= 0x78u;
    }
    if ( v8 == 120 )
      break;
    v11 = &v6[v10];
    if ( v11 >= &a1[v2] )
      goto LABEL_16;
    v12 = (unsigned __int8)v8 - 32;
    if ( v12 )
    {
      v13 = v12 - 16;
      if ( !v13 )
      {
        v5 = 0;
        goto LABEL_12;
      }
      v14 = v13 - 8;
      if ( !v14 )
      {
        v7 = 0;
        goto LABEL_12;
      }
      v15 = v14 - 81;
      if ( v15 )
      {
        if ( v15 != 3 || v6[4] )
          goto LABEL_12;
        v17 = v6[7];
      }
      else
      {
        v17 = v6[3];
      }
      if ( (v17 & 0x10) != 0 )
        v5 = 1;
    }
    else if ( (*v6 & 7) == 3 && (v6[3] & 0x20) != 0 )
    {
      v5 = 1;
    }
LABEL_12:
    v6 = v11;
    if ( v11 >= &a1[v2] )
      goto LABEL_16;
    v8 = *v11;
  }
  v9 = 1;
  v7 &= -(v5 != 0);
LABEL_16:
  if ( !v7 || !v9 )
    return 0;
  return v4;
}
