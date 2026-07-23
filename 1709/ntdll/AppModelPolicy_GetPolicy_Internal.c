/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x1800710A0
 * Callers:
 *     LdrpInitializePolicy @ 0x180082224 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180071250 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _PS_PKG_CLAIM *a4,
        unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // r8d
  _DWORD *v9; // rdx

  PackageClaims = RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    PackageClaims = 0;
    LOWORD(a4->Flags) = 0;
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
        else if ( (a4->Flags & 4) != 0 )
        {
          v9 = &unk_18011D164;
        }
        else if ( (a4->Flags & 8) != 0 )
        {
          v9 = &unk_18011D178;
        }
        else
        {
          v9 = &unk_18011D17C;
          if ( (a4->Flags & 0x40) == 0 )
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
