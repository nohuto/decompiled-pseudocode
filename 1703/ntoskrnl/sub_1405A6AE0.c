/*
 * XREFs of sub_1405A6AE0 @ 0x1405A6AE0
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1404A85DC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExInitLicenseData @ 0x140808950 (ExInitLicenseData.c)
 * Callees:
 *     <none>
 */

__int64 sub_1405A6AE0()
{
  unsigned int v0; // ecx
  unsigned int v1; // edx
  unsigned int v2; // r10d
  unsigned int v3; // r9d

  v0 = 0;
  if ( off_1407AC028 )
  {
    if ( dword_1407C513C != 3 )
      return (unsigned int)-1073741762;
    if ( (unsigned int)dword_1407C5124 < 0x18 )
      return (unsigned int)-1073741762;
    v1 = *(_DWORD *)off_1407AC028;
    if ( (unsigned int)dword_1407C5124 < *(_DWORD *)off_1407AC028 )
      return (unsigned int)-1073741762;
    if ( v1 < 0x18 )
      return (unsigned int)-1073741762;
    v2 = *((_DWORD *)off_1407AC028 + 1);
    if ( dword_1407C5124 < v2 )
      return (unsigned int)-1073741762;
    if ( v1 < v2 )
      return (unsigned int)-1073741762;
    v3 = *((_DWORD *)off_1407AC028 + 2);
    if ( dword_1407C5124 < v3 || v1 < v3 || v3 + v2 > v1 )
      return (unsigned int)-1073741762;
  }
  return v0;
}
