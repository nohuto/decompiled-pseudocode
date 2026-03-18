/*
 * XREFs of ?CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpace@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180197EFC
 * Callers:
 *     ?GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1801A29E0 (-GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::CreateLinearGradientBrush(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  _QWORD v17[2]; // [rsp+58h] [rbp-21h] BYREF
  int v18; // [rsp+68h] [rbp-11h] BYREF
  __int128 v19; // [rsp+6Ch] [rbp-Dh]
  float v20; // [rsp+7Ch] [rbp+3h]
  __int128 v21; // [rsp+80h] [rbp+7h]

  v9 = *a2;
  v18 = 0;
  v19 = v9;
  v10 = *a3;
  v20 = FLOAT_1_0;
  v11 = *a5;
  v12 = *(_QWORD *)(a1 + 176);
  v21 = v10;
  v17[0] = *a4;
  v17[1] = v11;
  v13 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v12 + 512LL))(v12, &v18, 2LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA63u);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 176) + 80LL))(
            *(_QWORD *)(a1 + 176),
            v17,
            a7,
            0LL,
            a8);
    v14 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xA68u);
  }
  return v14;
}
