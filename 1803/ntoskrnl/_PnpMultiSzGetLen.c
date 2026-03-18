/*
 * XREFs of _PnpMultiSzGetLen @ 0x140565834
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140565484 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceSiblings @ 0x1407EEB24 (_CmGetDeviceSiblings.c)
 *     _PnpMultiSzDeleteString @ 0x1407F08C8 (_PnpMultiSzDeleteString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMultiSzGetLen(_WORD *a1)
{
  unsigned int v1; // edx
  _WORD *i; // rax
  __int64 v3; // r8

  v1 = 0;
  if ( a1 )
  {
    for ( i = a1; *i; i += v3 + 1 )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( i[v3] );
    }
    return (unsigned int)(i - a1) + 1;
  }
  return v1;
}
