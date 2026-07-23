/*
 * XREFs of sub_18006D23C @ 0x18006D23C
 * Callers:
 *     sub_18007F528 @ 0x18007F528 (sub_18007F528.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x18006D3F0 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall sub_18006D23C(__int64 a1, int a2, _DWORD *a3, _PS_PKG_CLAIM *a4, unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // r8d
  int v9; // ecx

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
          v9 = 5;
        }
        else if ( (a4->Flags & 4) != 0 )
        {
          v9 = 2;
        }
        else if ( (a4->Flags & 8) != 0 )
        {
          v9 = 7;
        }
        else if ( (a4->Flags & 0x40) != 0 )
        {
          v9 = 8;
          if ( a2 == 1 )
            __fastfail(5u);
        }
        else
        {
          v9 = 1;
        }
      }
      else
      {
        v9 = 6;
      }
    }
    else
    {
      v9 = 3;
    }
    *a3 = dword_180119DE0[8 * (a2 - 1) + v9 - 1];
  }
  return PackageClaims | 0x10000000u;
}
