/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x1800710A0
 * Callers:
 *     LdrpInitializePolicy @ 0x180082224 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180071250 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  int PackageClaims; // r8d
  _DWORD *v9; // rdx

  PackageClaims = RtlQueryPackageClaims(-4, 0, 0, 0, 0LL, 0LL, (__int64)a4, (__int64)a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    PackageClaims = 0;
    *a4 = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 2) != 0 )
      {
        if ( (*(_BYTE *)a5 & 4) != 0 )
        {
          v9 = &unk_18011D170;
        }
        else if ( (*(_BYTE *)a4 & 4) != 0 )
        {
          v9 = &unk_18011D164;
        }
        else if ( (*(_BYTE *)a4 & 8) != 0 )
        {
          v9 = &unk_18011D178;
        }
        else
        {
          v9 = &unk_18011D17C;
          if ( (*(_BYTE *)a4 & 0x40) == 0 )
            v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
        }
      }
      else
      {
        v9 = &unk_18011D174;
      }
    }
    else
    {
      v9 = &unk_18011D168;
    }
    *a3 = v9[8 * (a2 - 1)];
  }
  return PackageClaims | 0x10000000u;
}
