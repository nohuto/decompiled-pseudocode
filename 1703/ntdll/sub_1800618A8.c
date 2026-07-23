/*
 * XREFs of sub_1800618A8 @ 0x1800618A8
 * Callers:
 *     sub_1800841E4 @ 0x1800841E4 (sub_1800841E4.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180061A40 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall sub_1800618A8(__int64 a1, int a2, _DWORD *a3, _PS_PKG_CLAIM *a4, unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // r9d
  unsigned int v9; // r8d

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
    v9 = 2;
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 2) != 0 )
      {
        v9 = 4;
        if ( (*(_BYTE *)a5 & 4) == 0 )
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
    *a3 = dword_180119D80[7 * (a2 - 1) + v9];
  }
  return PackageClaims | 0x10000000u;
}
