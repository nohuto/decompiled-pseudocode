/*
 * XREFs of atmfdEnableDriverApiExt @ 0x1C0062CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall atmfdEnableDriverApiExt(unsigned int a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // r9d

  v6 = IsatmfdEnableDriverSupported();
  v7 = 0;
  if ( v6 >= 0 )
    return (unsigned int)atmfdEnableDriver(a1, a2, a3, 0LL);
  return v7;
}
