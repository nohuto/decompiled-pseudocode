/*
 * XREFs of ?CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpace@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801A9850
 * Callers:
 *     ?GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1801BC2D0 (-GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateLinearGradientBrush(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        _DWORD *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rcx
  __int128 v10; // xmm0
  int v11; // xmm1_4
  int v12; // xmm1_4
  signed int v13; // eax
  unsigned int v14; // ebx
  signed int v15; // eax
  _DWORD v17[4]; // [rsp+58h] [rbp-21h] BYREF
  int v18; // [rsp+68h] [rbp-11h] BYREF
  __int128 v19; // [rsp+6Ch] [rbp-Dh]
  float v20; // [rsp+7Ch] [rbp+3h]
  __int128 v21; // [rsp+80h] [rbp+7h]

  v9 = *(_QWORD *)(a1 + 176);
  v19 = *a2;
  v10 = *a3;
  v18 = 0;
  v21 = v10;
  LODWORD(v10) = *a4;
  v20 = FLOAT_1_0;
  v11 = a4[1];
  v17[0] = v10;
  LODWORD(v10) = *a5;
  v17[1] = v11;
  v12 = a5[1];
  v17[2] = v10;
  v17[3] = v12;
  v13 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v9 + 512LL))(v9, &v18, 2LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x817u);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 176) + 80LL))(
            *(_QWORD *)(a1 + 176),
            v17,
            a7,
            0LL,
            a8);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x81Cu);
  }
  return v14;
}
