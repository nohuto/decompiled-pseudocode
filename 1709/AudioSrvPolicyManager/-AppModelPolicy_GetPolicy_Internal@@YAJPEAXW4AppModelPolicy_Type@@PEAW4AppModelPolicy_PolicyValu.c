/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180016C48
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012F34 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  int PackageClaims; // r8d
  _DWORD *v9; // rdx

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
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 2) != 0 )
      {
        if ( (*(_BYTE *)a5 & 4) != 0 )
        {
          v9 = &unk_18002E370;
        }
        else if ( (*(_BYTE *)a4 & 4) != 0 )
        {
          v9 = &unk_18002E364;
        }
        else if ( (*(_BYTE *)a4 & 8) != 0 )
        {
          v9 = &unk_18002E378;
        }
        else
        {
          v9 = &unk_18002E37C;
          if ( (*(_BYTE *)a4 & 0x40) == 0 )
            v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
        }
      }
      else
      {
        v9 = &unk_18002E374;
      }
    }
    else
    {
      v9 = &unk_18002E368;
    }
    *a3 = v9[8 * (a2 - 1)];
  }
  return PackageClaims | 0x10000000u;
}
