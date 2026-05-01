/*
 * XREFs of _lambda_b322da6b43750fc8b19fab06879e6370_::operator() @ 0x180291B8C
 * Callers:
 *     ??$LambdaCustomPaintProc@V_lambda_b322da6b43750fc8b19fab06879e6370_@@PEAUID2D1DeviceContext@@@@YAXPEAUID2D1DeviceContext@@AEBUtagSIZE@@_J@Z @ 0x180291780 (--$LambdaCustomPaintProc@V_lambda_b322da6b43750fc8b19fab06879e6370_@@PEAUID2D1DeviceContext@@@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x180288564 (-ConvertColor@D2DUtil@@YA-AU_D3DCOLORVALUE@@KM@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180288768 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x180291B68 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 */

__int64 __fastcall lambda_b322da6b43750fc8b19fab06879e6370_::operator()(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        float a4)
{
  unsigned __int64 v5; // r14
  int v6; // ebx
  unsigned int Color; // edi
  struct _D3DCOLORVALUE *v9; // rax
  float *v10; // rcx
  float v11; // xmm6_4
  float v12; // xmm7_4
  __int128 v13; // xmm1
  int v14; // eax
  unsigned int v15; // edi
  int v16; // ecx
  float v17; // xmm7_4
  int v18; // eax
  int v19; // eax
  void (__fastcall *v20)(__int64 *, struct _D3DCOLORVALUE *, __int64); // rax
  __int64 v21; // rax
  __int64 v22; // rax
  void (__fastcall *v23)(__int64 *, struct _D3DCOLORVALUE *, __int64); // rax
  __int64 v25; // [rsp+48h] [rbp-79h] BYREF
  int v26[2]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v27; // [rsp+58h] [rbp-69h] BYREF
  struct _D3DCOLORVALUE v28; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v29[4]; // [rsp+70h] [rbp-51h] BYREF
  __int128 v30; // [rsp+80h] [rbp-41h] BYREF
  __int128 v31; // [rsp+90h] [rbp-31h] BYREF
  int v32; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v33; // [rsp+A4h] [rbp-1Dh]
  int v34; // [rsp+B4h] [rbp-Dh]
  __int128 v35; // [rsp+B8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v5 = HIDWORD(a3);
  v6 = a3;
  Color = CImmersiveColor::GetColor(0xABu);
  v9 = D2DUtil::ConvertColor(&v28, (struct _D3DCOLORVALUE *)Color, 0.0, a4);
  v10 = (float *)(*(_QWORD *)a1 + 352LL);
  v30 = *(_OWORD *)&v9->r;
  v11 = 1.0 - HighContrastAwareOpacity<float>::operator float(v10);
  v12 = 1.0
      - (float)(v11 / (float)(1.0 - HighContrastAwareOpacity<float>::operator float((float *)(*(_QWORD *)a1 + 340LL))));
  v13 = *(_OWORD *)&D2DUtil::ConvertColor(&v28, (struct _D3DCOLORVALUE *)Color, v12, a4)->r;
  v32 = 0;
  v27 = 0LL;
  v31 = v13;
  v34 = 1065353216;
  v35 = v13;
  v33 = v30;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v14 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64))(*a2 + 72))(a2, &v32, 2LL);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v16 = v5 - *(_DWORD *)(*(_QWORD *)a1 + 360LL);
    v29[0] = 0;
    v29[1] = 0;
    v29[2] = 0;
    *(_QWORD *)v26 = 0LL;
    v17 = (float)v16;
    *(float *)&v29[3] = (float)v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
    v18 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, __int64, int *))(*a2 + 80))(a2, v29, 0LL, v27, v26);
    v15 = v18;
    if ( v18 >= 0 )
    {
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
      v19 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int64 *))(*a2 + 64))(a2, &v30, 0LL, &v25);
      v15 = v19;
      if ( v19 >= 0 )
      {
        *(_QWORD *)&v28.r = 0LL;
        v20 = *(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, __int64))(*a2 + 136);
        *(_QWORD *)&v28.b = COERCE_UNSIGNED_INT((float)v6);
        v20(a2, &v28, v25);
        *(_QWORD *)&v28.r = 0LL;
        v21 = *a2;
        v28.b = (float)v6;
        v28.a = v17;
        (*(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, _QWORD))(v21 + 136))(a2, &v28, *(_QWORD *)v26);
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 64LL))(v25, &v31);
        v28.r = 0.0;
        v22 = *a2;
        v28.g = v17;
        v28.b = (float)v6;
        v23 = *(void (__fastcall **)(__int64 *, struct _D3DCOLORVALUE *, __int64))(v22 + 136);
        v28.a = (float)(int)v5;
        v23(a2, &v28, v25);
        v15 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3A3,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
          (const char *)(unsigned int)v19);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A0,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v18);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v26);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x398,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  return v15;
}
