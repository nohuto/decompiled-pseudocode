/*
 * XREFs of vtfdEnableDriverApiExt @ 0x1C0062CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vtfdEnableDriverApiExt(unsigned int a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // r9d

  v6 = IsvtfdEnableDriverSupported();
  v7 = 0;
  if ( v6 >= 0 )
    return (unsigned int)vtfdEnableDriver(a1, a2, a3, 0LL);
  return v7;
}
