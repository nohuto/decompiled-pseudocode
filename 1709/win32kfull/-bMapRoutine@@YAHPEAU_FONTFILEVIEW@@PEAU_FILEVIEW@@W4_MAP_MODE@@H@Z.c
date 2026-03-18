/*
 * XREFs of ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C0101884
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0037790 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00B644C (EngMapFontFileFDInternal.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C02686F4 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMapRoutine(__int64 *a1, __int64 *a2, int a3, int a4)
{
  __int64 v6; // rdx
  unsigned int v8; // r8d
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  __int64 result; // rax
  __int64 v14; // rax

  v6 = *a1;
  if ( *a1 )
  {
    if ( *((_DWORD *)a1 + 6) != *((_DWORD *)a2 + 6) )
      goto LABEL_14;
    if ( v6 != *a2 )
    {
      if ( !a4 )
        goto LABEL_13;
      v14 = v6 - *a2;
      if ( *a2 - v6 >= 0 )
        v14 = *a2 - v6;
      if ( v14 != 36000000000LL )
      {
LABEL_13:
        if ( !gbGUISetup )
          goto LABEL_14;
      }
    }
  }
  if ( (a2[5] & 0x10) != 0 || (a1[5] & 0x10) == 0 )
  {
    v8 = 1;
    if ( a3 == 1 )
      a1[2] = a2[2];
    else
      a1[1] = a2[1];
    v9 = *((_DWORD *)a1 + 10);
    *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
    *a1 = *a2;
    a1[4] = a2[4];
    a1[6] = a2[6];
    v10 = *((_DWORD *)a1 + 10) ^ (*((_DWORD *)a2 + 10) ^ v9) & 4 | 1;
    *((_DWORD *)a1 + 10) = v10;
    v11 = v10 ^ (*((_DWORD *)a2 + 10) ^ v10) & 8;
    *((_DWORD *)a1 + 10) = v11;
    v12 = v11 ^ (*((_DWORD *)a2 + 10) ^ v11) & 0x10;
    *((_DWORD *)a1 + 10) = v12;
    *((_DWORD *)a1 + 10) = v12 ^ (*((_DWORD *)a2 + 10) ^ v12) & 0x20;
    a1[9] = a2[9];
  }
  else
  {
LABEL_14:
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
    v8 = 0;
  }
  result = v8;
  *((_DWORD *)a1 + 10) ^= (*((_DWORD *)a1 + 10) ^ *((_DWORD *)a2 + 10)) & 2;
  a1[7] = a2[7];
  return result;
}
