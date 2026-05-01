/*
 * XREFs of ?ScaleMetricsByDPI@MultitaskingViewConfigHelpers@@YAXAEBUMultitaskingViewConfig@@IPEAU2@@Z @ 0x18027FB44
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1802814B0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ??$_ScaleByDPI@U_MARGINS@@@MultitaskingViewConfigHelpers@@YAXPEAU_MARGINS@@II@Z @ 0x18027F744 (--$_ScaleByDPI@U_MARGINS@@@MultitaskingViewConfigHelpers@@YAXPEAU_MARGINS@@II@Z.c)
 */

void __fastcall MultitaskingViewConfigHelpers::ScaleMetricsByDPI(
        MultitaskingViewConfigHelpers *this,
        const struct MultitaskingViewConfig *a2,
        _DWORD *a3,
        struct MultitaskingViewConfig *a4)
{
  int v4; // esi
  _OWORD *v6; // rax
  MultitaskingViewConfigHelpers *v7; // r9
  __int64 v8; // r8
  __int128 v9; // xmm1
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx

  v4 = (int)a2;
  v6 = a3;
  v7 = this;
  v8 = 9LL;
  do
  {
    *v6 = *(_OWORD *)v7;
    v6[1] = *((_OWORD *)v7 + 1);
    v6[2] = *((_OWORD *)v7 + 2);
    v6[3] = *((_OWORD *)v7 + 3);
    v6[4] = *((_OWORD *)v7 + 4);
    v6[5] = *((_OWORD *)v7 + 5);
    v6[6] = *((_OWORD *)v7 + 6);
    v6 += 8;
    v9 = *((_OWORD *)v7 + 7);
    v7 = (MultitaskingViewConfigHelpers *)((char *)v7 + 128);
    *(v6 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v6 = *(_OWORD *)v7;
  v6[1] = *((_OWORD *)v7 + 1);
  v10 = *((_DWORD *)this + 1);
  if ( (_DWORD)a2 != v10 )
  {
    a3[1] = (_DWORD)a2;
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 2, (int)a2, v10);
    a3[14] = MulDiv(a3[14], v4, v10);
    a3[15] = MulDiv(a3[15], v4, v10);
    a3[18] = MulDiv(a3[18], v4, v10);
    a3[22] = MulDiv(a3[22], v4, v10);
    a3[26] = MulDiv(a3[26], v4, v10);
    v11 = MulDiv(a3[30], v4, v10);
    v12 = a3[31];
    a3[30] = v11;
    a3[31] = MulDiv(v12, v4, v10);
    v13 = MulDiv(a3[32], v4, v10);
    v14 = a3[33];
    a3[32] = v13;
    a3[33] = MulDiv(v14, v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 34, v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 38, v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 42, v4, v10);
    a3[46] = MulDiv(a3[46], v4, v10);
    a3[47] = MulDiv(a3[47], v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 52, v4, v10);
    a3[56] = MulDiv(a3[56], v4, v10);
    a3[57] = MulDiv(a3[57], v4, v10);
    a3[58] = MulDiv(a3[58], v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 93, v4, v10);
    a3[92] = MulDiv(a3[92], v4, v10);
    a3[97] = MulDiv(a3[97], v4, v10);
    v15 = MulDiv(a3[98], v4, v10);
    v16 = a3[99];
    a3[98] = v15;
    a3[99] = MulDiv(v16, v4, v10);
    a3[100] = MulDiv(a3[100], v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 176, v4, v10);
    a3[181] = MulDiv(a3[181], v4, v10);
    a3[180] = MulDiv(a3[180], v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 182, v4, v10);
    a3[196] = MulDiv(a3[196], v4, v10);
    a3[197] = MulDiv(a3[197], v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 204, v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 213, v4, v10);
    a3[212] = MulDiv(a3[212], v4, v10);
    a3[217] = MulDiv(a3[217], v4, v10);
    v17 = MulDiv(a3[218], v4, v10);
    v18 = a3[219];
    a3[218] = v17;
    a3[219] = MulDiv(v18, v4, v10);
    a3[220] = MulDiv(a3[220], v4, v10);
    a3[251] = MulDiv(a3[251], v4, v10);
    a3[258] = MulDiv(a3[258], v4, v10);
    a3[259] = MulDiv(a3[259], v4, v10);
    MultitaskingViewConfigHelpers::_ScaleByDPI<_MARGINS>(a3 + 260, v4, v10);
    v19 = MulDiv(a3[264], v4, v10);
    v20 = a3[265];
    a3[264] = v19;
    a3[265] = MulDiv(v20, v4, v10);
    a3[266] = MulDiv(a3[266], v4, v10);
    v21 = MulDiv(a3[138], v4, v10);
    v22 = a3[139];
    a3[138] = v21;
    a3[139] = MulDiv(v22, v4, v10);
    a3[143] = MulDiv(a3[143], v4, v10);
    a3[146] = MulDiv(a3[146], v4, v10);
    a3[147] = MulDiv(a3[147], v4, v10);
    a3[148] = MulDiv(a3[148], v4, v10);
    v23 = MulDiv(a3[168], v4, v10);
    v24 = a3[169];
    a3[168] = v23;
    a3[169] = MulDiv(v24, v4, v10);
  }
}
