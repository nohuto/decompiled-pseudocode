/*
 * XREFs of PnpBiosScanForWakeInterrupt @ 0x1C0038374
 * Callers:
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0038484 (PnpBiosSetFlagsForNotableInterrupts.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpBiosScanForWakeInterrupt(char *a1, unsigned int a2)
{
  __int64 v2; // rax
  char v5; // cl
  char v6; // dl
  char v7; // r9
  char *v8; // r8
  char v9; // r11
  char v10; // bl
  __int64 v11; // r14
  unsigned __int16 v12; // r10
  char *v13; // r10
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  char v18; // al

  v2 = a2;
  if ( a2 < 5 )
    return 0;
  v5 = *a1;
  v6 = 1;
  v7 = 0;
  v8 = a1;
  v9 = 1;
  v10 = 0;
  v11 = v2;
  while ( 1 )
  {
    if ( v5 < 0 )
    {
      v12 = *(_WORD *)(v8 + 1) + 3;
    }
    else
    {
      v12 = (v5 & 7) + 1;
      v5 &= 0x78u;
    }
    if ( v5 == 120 )
      break;
    v13 = &v8[v12];
    if ( v13 >= &a1[v11] )
      goto LABEL_27;
    v14 = (unsigned __int8)v5 - 32;
    if ( v14 )
    {
      v15 = v14 - 16;
      if ( !v15 )
      {
        v7 = 0;
        goto LABEL_24;
      }
      v16 = v15 - 8;
      if ( !v16 )
      {
        v9 = 0;
        goto LABEL_24;
      }
      v17 = v16 - 81;
      if ( v17 )
      {
        if ( v17 != 3 || v8[4] )
          goto LABEL_24;
        v18 = v8[7];
      }
      else
      {
        v18 = v8[3];
      }
      if ( (v18 & 0x10) != 0 )
        v7 = 1;
    }
    else if ( (*v8 & 7) == 3 && (v8[3] & 0x20) != 0 )
    {
      v7 = 1;
    }
LABEL_24:
    v8 = v13;
    if ( v13 >= &a1[v11] )
      goto LABEL_27;
    v5 = *v13;
  }
  v10 = 1;
  v9 &= -(v7 != 0);
LABEL_27:
  if ( !v9 || !v10 )
    return 0;
  return v6;
}
