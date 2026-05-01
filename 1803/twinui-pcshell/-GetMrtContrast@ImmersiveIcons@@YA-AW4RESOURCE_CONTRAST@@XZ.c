/*
 * XREFs of ?GetMrtContrast@ImmersiveIcons@@YA?AW4RESOURCE_CONTRAST@@XZ @ 0x180303CF0
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180303EB4 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 ImmersiveIcons::GetMrtContrast()
{
  unsigned int v0; // edi
  int v1; // ebx
  int v2; // ebx
  int v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+24h] [rbp-14h]
  __int64 v6; // [rsp+28h] [rbp-10h]

  v0 = 0;
  v5 = 0;
  v6 = 0LL;
  v4 = 16;
  if ( SystemParametersInfoW(0x42u, 0x10u, &v4, 0) && (v5 & 1) != 0 )
  {
    v1 = 5 * (unsigned __int8)((unsigned __int16)GetSysColor(5) >> 8);
    v2 = (unsigned __int8)(GetSysColor(5) >> 16) + v1;
    LOBYTE(v0) = v2 + 2 * (unsigned int)(unsigned __int8)GetSysColor(5) > 0x400;
    v0 += 2;
  }
  return v0;
}
