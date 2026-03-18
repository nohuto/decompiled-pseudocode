/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1C0084C00
 * Callers:
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C00808DC (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, _WORD *a4, __int64 *a5)
{
  int PackageClaims; // edx
  __int64 v8; // rax
  int v9; // ecx

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    PackageClaims = 0;
    *a4 = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    v8 = *a5;
    if ( (*a5 & 1) != 0 )
    {
      if ( (v8 & 2) == 0 || (v8 & 4) != 0 )
      {
        v9 = 196610;
        goto LABEL_6;
      }
      if ( (*(_QWORD *)a4 & 4) == 0 )
      {
        if ( (*(_QWORD *)a4 & 8) != 0 )
          v9 = 196611;
        else
          v9 = ((unsigned __int8)~*(_BYTE *)a4 >> 6) & 1 | 0x30000;
        goto LABEL_6;
      }
    }
    v9 = 196608;
LABEL_6:
    *a3 = v9;
  }
  return PackageClaims | 0x10000000u;
}
