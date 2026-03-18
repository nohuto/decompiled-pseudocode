/*
 * XREFs of NtGdiGetRasterizerCaps @ 0x1C028A7D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     GreGetRasterizerCaps @ 0x1C0293A7C (GreGetRasterizerCaps.c)
 */

__int64 __fastcall NtGdiGetRasterizerCaps(char *a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebx
  char Src; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0;
  if ( a1 && a2 )
  {
    if ( a2 >= 6 )
      v2 = 6LL;
    if ( (unsigned int)GreGetRasterizerCaps(&Src) )
    {
      if ( (unsigned __int64)&a1[v2] > MmUserProbeAddress || &a1[v2] <= a1 || ((unsigned __int8)a1 & 3) != 0 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a1, &Src, (unsigned int)v2);
      return 1;
    }
  }
  return v4;
}
