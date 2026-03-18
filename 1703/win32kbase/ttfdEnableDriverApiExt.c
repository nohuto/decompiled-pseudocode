/*
 * XREFs of ttfdEnableDriverApiExt @ 0x1C0062C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ttfdEnableDriverApiExt(unsigned int a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // r9d

  v6 = IsttfdEnableDriverSupported();
  v7 = 0;
  if ( v6 >= 0 )
    return (unsigned int)ttfdEnableDriver(a1, a2, a3, 0LL);
  return v7;
}
