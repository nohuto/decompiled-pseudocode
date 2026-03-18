/*
 * XREFs of ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C00F24CC
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C0027BDC (EngMapFontFileFDInternal.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0091960 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C02699B8 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMapRoutine(__int64 *a1, __int64 *a2, int a3, int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  __int64 result; // rax
  __int64 v13; // rax

  v5 = 0;
  v6 = *a1;
  if ( !*a1 )
    goto LABEL_4;
  if ( *((_DWORD *)a1 + 6) == *((_DWORD *)a2 + 6) )
  {
    if ( v6 == *a2 )
      goto LABEL_4;
    if ( a4 )
    {
      v13 = v6 - *a2;
      if ( *a2 - v6 >= 0 )
        v13 = *a2 - v6;
      if ( v13 == 36000000000LL )
        goto LABEL_4;
    }
    if ( gbGUISetup )
    {
LABEL_4:
      v5 = 1;
      if ( (a2[5] & 0x10) != 0 || (a1[5] & 0x10) == 0 )
      {
        if ( a3 == 1 )
          a1[2] = a2[2];
        else
          a1[1] = a2[1];
        v8 = *((_DWORD *)a1 + 10);
        *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
        *a1 = *a2;
        a1[4] = a2[4];
        a1[6] = a2[6];
        v9 = *((_DWORD *)a1 + 10) ^ (*((_DWORD *)a2 + 10) ^ v8) & 4 | 1;
        *((_DWORD *)a1 + 10) = v9;
        v10 = v9 ^ (*((_DWORD *)a2 + 10) ^ v9) & 8;
        *((_DWORD *)a1 + 10) = v10;
        v11 = v10 ^ (*((_DWORD *)a2 + 10) ^ v10) & 0x10;
        *((_DWORD *)a1 + 10) = v11;
        *((_DWORD *)a1 + 10) = v11 ^ (*((_DWORD *)a2 + 10) ^ v11) & 0x20;
        a1[9] = a2[9];
        goto LABEL_8;
      }
      v5 = 0;
    }
  }
  if ( a3 == 1 )
  {
    --*((_DWORD *)a1 + 25);
    a1[2] = 0LL;
  }
  else
  {
    --*((_DWORD *)a1 + 24);
    a1[1] = 0LL;
  }
  *((_DWORD *)a1 + 10) &= ~1u;
LABEL_8:
  result = v5;
  *((_DWORD *)a1 + 10) ^= (*((_DWORD *)a1 + 10) ^ *((_DWORD *)a2 + 10)) & 2;
  a1[7] = a2[7];
  return result;
}
