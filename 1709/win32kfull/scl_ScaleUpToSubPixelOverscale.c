/*
 * XREFs of scl_ScaleUpToSubPixelOverscale @ 0x1C02B99B0
 * Callers:
 *     fs__Contour @ 0x1C02B60DC (fs__Contour.c)
 * Callees:
 *     FixMul @ 0x1C02B6FFC (FixMul.c)
 */

__int64 __fastcall scl_ScaleUpToSubPixelOverscale(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  int fixed; // eax
  __int64 v8; // r10
  int v9; // eax
  __int64 v10; // r10
  int v11; // r11d

  result = *(_QWORD *)(a1 + 64);
  if ( *(_WORD *)(result + 2LL * (*(__int16 *)(a1 + 80) - 1)) != 0xFFF7 )
  {
    v6 = 0LL;
    do
    {
      fixed = FixMul(*(_DWORD *)(*(_QWORD *)a1 + v6), 393216);
      *(_DWORD *)(v8 + v6) = fixed;
      v9 = FixMul(*(_DWORD *)(*(_QWORD *)(a1 + 8) + v6), a3);
      *(_DWORD *)(v10 + v6) = v9;
      v6 += 4LL;
      result = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a1 + 64) + 2LL * (*(__int16 *)(a1 + 80) - 1)) + 9);
    }
    while ( v11 + 1 < (int)result );
  }
  return result;
}
