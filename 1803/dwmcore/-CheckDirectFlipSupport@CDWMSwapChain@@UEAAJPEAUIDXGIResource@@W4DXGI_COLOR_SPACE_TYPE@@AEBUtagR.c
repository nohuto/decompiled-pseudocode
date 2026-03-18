/*
 * XREFs of ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x1800DD020
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800DCF88 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x18013DBC8 (-ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ.c)
 *     ?DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z @ 0x1801EA624 (-DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDWMSwapChain::CheckDirectFlipSupport(
        CDWMSwapChain *this,
        struct IDXGIResource *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        bool *a6)
{
  float v6; // xmm0_4
  unsigned int v9; // ebx
  char v10; // r14
  int v11; // r13d
  CDWMSwapChain *v12; // rcx
  const struct tagRECT *v13; // r10
  CDWMSwapChain *v14; // rcx
  char v15; // r9
  __int64 v16; // r11
  int v17; // eax
  struct tagRECT v18; // xmm1
  struct tagRECT v19; // xmm0
  int v20; // eax
  __int64 v21; // rax
  __int64 (__fastcall *v22)(CDWMSwapChain *, __int64, int *, bool *, char *); // rax
  int v23; // eax
  char v25[8]; // [rsp+30h] [rbp-B9h] BYREF
  struct IDXGIResource *v26; // [rsp+38h] [rbp-B1h] BYREF
  const struct tagRECT *v27; // [rsp+40h] [rbp-A9h]
  int v28; // [rsp+50h] [rbp-99h] BYREF
  struct IDXGIResource *v29; // [rsp+58h] [rbp-91h]
  int v30; // [rsp+60h] [rbp-89h]
  int v31; // [rsp+6Ch] [rbp-7Dh]
  int v32; // [rsp+70h] [rbp-79h]
  struct tagRECT v33; // [rsp+74h] [rbp-75h]
  struct tagRECT v34; // [rsp+84h] [rbp-65h]
  struct tagRECT v35; // [rsp+94h] [rbp-55h]
  __int64 v36; // [rsp+A4h] [rbp-45h]
  int v37; // [rsp+ACh] [rbp-3Dh]
  __int64 v38; // [rsp+B0h] [rbp-39h]
  int v39; // [rsp+B8h] [rbp-31h]
  enum DXGI_COLOR_SPACE_TYPE v40; // [rsp+BCh] [rbp-2Dh]
  int v41; // [rsp+C0h] [rbp-29h]
  int v42; // [rsp+D0h] [rbp-19h]
  int v43; // [rsp+D8h] [rbp-11h]

  v6 = *((float *)this + 49);
  v26 = a2;
  v27 = a4;
  v9 = 0;
  v10 = 0;
  v11 = ConvertSDRBoostToSDRWhiteLevel(v6, a3);
  CDWMSwapChain::ShouldConvertPresentToMPO(this);
  if ( CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v12, v13)
    || CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v14, a5) )
  {
    v10 = 1;
  }
  *a6 = 0;
  if ( v15 || v10 )
  {
    memset_0(&v28, 0, 0x90uLL);
    v18 = *a5;
    v29 = v26;
    v30 = *((_DWORD *)this + 112);
    v25[0] = 0;
    v28 = 0;
    v31 = 0;
    v19 = *v27;
    v20 = v32;
    if ( v10 )
      v20 = 4;
    v37 = 0;
    v32 = v20;
    v21 = *(_QWORD *)this;
    v38 = 0LL;
    v39 = 0;
    v41 = 0;
    v22 = *(__int64 (__fastcall **)(CDWMSwapChain *, __int64, int *, bool *, char *))(v21 + 200);
    v33 = v19;
    v36 = 1LL;
    v34 = v18;
    v40 = a3;
    v35 = v18;
    v42 = 2;
    v43 = v11;
    v23 = v22(this, 1LL, &v28, a6, v25);
    v9 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x31Au);
  }
  else if ( (unsigned int)a3 <= DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct IDXGIResource **))(**((_QWORD **)this + 53) + 144LL))(
            *((_QWORD *)this + 53),
            0LL,
            v16,
            &v26);
    v9 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x322u);
    else
      *a6 = (_DWORD)v26 != 0;
  }
  return v9;
}
