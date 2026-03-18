/*
 * XREFs of ?GetSquareRoot@@YA_K_K@Z @ 0x1C01AEA64
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall GetSquareRoot(unsigned __int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 i; // rcx
  unsigned __int64 v5; // rcx

  result = 0LL;
  v2 = a1;
  if ( a1 )
  {
    if ( a1 < 0xFFFFFFFE00000001uLL )
    {
      while ( 1 )
      {
        a1 >>= 1;
        if ( !a1 )
          break;
        ++result;
      }
      v3 = 1LL << (result >> 1);
      for ( i = v3 + v2 / v3; ; i = v2 / v5 + v5 )
      {
        v5 = i >> 1;
        if ( v5 == v3 || v5 == v3 + 1 && v3 * v3 <= v2 && v5 * v5 > v2 )
          break;
        v3 = v5;
      }
      return v3;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
