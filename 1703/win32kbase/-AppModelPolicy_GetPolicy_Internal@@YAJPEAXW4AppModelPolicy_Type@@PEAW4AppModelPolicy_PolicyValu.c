/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1C007F518
 * Callers:
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C0051614 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, _DWORD *a3, _WORD *a4, __int64 *a5)
{
  int PackageClaims; // ecx
  __int64 v8; // rdx
  unsigned int v9; // eax

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
    v9 = 2;
    if ( (*a5 & 1) != 0 )
    {
      if ( (v8 & 2) != 0 )
      {
        v9 = 4;
        if ( (v8 & 4) == 0 )
        {
          if ( (*(_QWORD *)a4 & 4) != 0 )
            v9 = 1;
          else
            v9 = (*(_QWORD *)a4 & 8) != 0 ? 6 : 0;
        }
      }
      else
      {
        v9 = 5;
      }
    }
    *a3 = dword_1C01644F8[v9];
  }
  return PackageClaims | 0x10000000u;
}
