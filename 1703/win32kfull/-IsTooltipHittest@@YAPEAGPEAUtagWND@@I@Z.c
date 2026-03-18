/*
 * XREFs of ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C00C6A3C
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall IsTooltipHittest(struct tagWND *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  unsigned __int16 *result; // rax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  bool v10; // zf
  void *v11; // rcx

  v2 = a2 - 2;
  if ( !v2 )
  {
    if ( (*((_BYTE *)a1 + 63) & 8) != 0 )
      return (unsigned __int16 *)&gszCAPTIONTOOLTIP;
    return 0LL;
  }
  v3 = v2 - 6;
  if ( !v3 )
  {
    if ( (*((_BYTE *)a1 + 70) & 2) != 0 )
    {
      v10 = (*((_BYTE *)a1 + 71) & 0x20) == 0;
      result = (unsigned __int16 *)&gszRESUP;
      v11 = &gszMIN;
LABEL_20:
      if ( v10 )
        return (unsigned __int16 *)v11;
      return result;
    }
    return 0LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( (*((_BYTE *)a1 + 70) & 1) != 0 )
    {
      v10 = (*((_BYTE *)a1 + 71) & 1) == 0;
      result = (unsigned __int16 *)&gszRESDOWN;
      v11 = &gszMAX;
      goto LABEL_20;
    }
    return 0LL;
  }
  v5 = v4 - 11;
  if ( !v5 )
    return (unsigned __int16 *)&gszSCLOSE;
  v7 = v5 - 1;
  if ( !v7 )
    return (unsigned __int16 *)&gszHELP;
  v8 = v7 - 45;
  if ( !v8 )
    return (unsigned __int16 *)&gszRESDOWN;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      return (unsigned __int16 *)&gszSCLOSE;
    return 0LL;
  }
  return (unsigned __int16 *)&gszMIN;
}
