/*
 * XREFs of sub_14062E3D8 @ 0x14062E3D8
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140549988 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x1408AFFA0 (ExInitLicenseData.c)
 * Callees:
 *     <none>
 */

__int64 sub_14062E3D8()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx
  unsigned int v2; // r10d
  unsigned int v3; // r9d

  v0 = 0;
  if ( off_140861030 )
  {
    if ( dword_1408F216C != 3 )
      return (unsigned int)-1073741762;
    if ( (unsigned int)dword_1408F2154 < 0x18 )
      return (unsigned int)-1073741762;
    v1 = *(_DWORD *)off_140861030;
    if ( (unsigned int)dword_1408F2154 < *(_DWORD *)off_140861030 )
      return (unsigned int)-1073741762;
    if ( v1 < 0x18 )
      return (unsigned int)-1073741762;
    v2 = *((_DWORD *)off_140861030 + 1);
    if ( dword_1408F2154 < v2 )
      return (unsigned int)-1073741762;
    if ( v1 < v2 )
      return (unsigned int)-1073741762;
    v3 = *((_DWORD *)off_140861030 + 2);
    if ( dword_1408F2154 < v3 || v1 < v3 || v3 + v2 > v1 )
      return (unsigned int)-1073741762;
  }
  return v0;
}
