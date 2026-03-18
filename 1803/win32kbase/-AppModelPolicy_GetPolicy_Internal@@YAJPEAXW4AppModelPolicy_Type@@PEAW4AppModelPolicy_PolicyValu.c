/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1C0064F7C
 * Callers:
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAH@Z @ 0x1C006445C (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, _WORD *a4, __int64 *a5)
{
  int PackageClaims; // ecx
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // rax
  bool v12; // zf

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
      if ( (v8 & 2) != 0 )
      {
        if ( (v8 & 4) != 0 )
        {
          v9 = 196610;
        }
        else
        {
          v11 = *(_QWORD *)a4;
          if ( (*(_QWORD *)a4 & 4) != 0 )
          {
            v9 = 196608;
          }
          else if ( (v11 & 8) != 0 )
          {
            v9 = 196611;
          }
          else
          {
            v12 = (v11 & 0x40) == 0;
            v9 = 196609;
            if ( !v12 )
              v9 = 196608;
          }
        }
      }
      else
      {
        v9 = 196610;
      }
    }
    else
    {
      v9 = 196608;
    }
    *a3 = v9;
  }
  return PackageClaims | 0x10000000u;
}
