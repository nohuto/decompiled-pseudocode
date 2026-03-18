/*
 * XREFs of ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x1801AFC70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ @ 0x18011B36C (-ShouldConvertPresentToMPO@CDWMSwapChain@@AEBA_NXZ.c)
 *     ?DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z @ 0x1801B0324 (-DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDWMSwapChain::CheckDirectFlipSupport(
        CDWMSwapChain *this,
        struct IDXGIResource *a2,
        unsigned int a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        bool *a6)
{
  unsigned int v9; // ebx
  CDWMSwapChain *v10; // rcx
  bool v11; // si
  __int64 v12; // rcx
  signed int v13; // eax
  struct tagRECT v14; // xmm1
  struct tagRECT v15; // xmm0
  int v16; // eax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(CDWMSwapChain *, __int64, int *, bool *, char *); // rax
  signed int v19; // eax
  char v21[8]; // [rsp+30h] [rbp-A9h] BYREF
  const struct tagRECT *v22; // [rsp+38h] [rbp-A1h] BYREF
  int v23; // [rsp+40h] [rbp-99h] BYREF
  struct IDXGIResource *v24; // [rsp+48h] [rbp-91h]
  int v25; // [rsp+50h] [rbp-89h]
  int v26; // [rsp+5Ch] [rbp-7Dh]
  int v27; // [rsp+60h] [rbp-79h]
  struct tagRECT v28; // [rsp+64h] [rbp-75h]
  struct tagRECT v29; // [rsp+74h] [rbp-65h]
  struct tagRECT v30; // [rsp+84h] [rbp-55h]
  __int64 v31; // [rsp+94h] [rbp-45h]
  int v32; // [rsp+9Ch] [rbp-3Dh]
  __int64 v33; // [rsp+A0h] [rbp-39h]
  int v34; // [rsp+A8h] [rbp-31h]
  unsigned int v35; // [rsp+ACh] [rbp-2Dh]
  int v36; // [rsp+B0h] [rbp-29h]
  int v37; // [rsp+C0h] [rbp-19h]

  v22 = a4;
  v9 = 0;
  v11 = CDWMSwapChain::DirectFlipRectRequiresPanelFitter(this, a4)
     || CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v10, a5);
  *a6 = 0;
  if ( v11 || CDWMSwapChain::ShouldConvertPresentToMPO(v10) )
  {
    memset_0(&v23, 0, 0x90uLL);
    v14 = *a5;
    v25 = *((_DWORD *)this + 110);
    v21[0] = 0;
    v23 = 0;
    v26 = 0;
    v15 = *v22;
    v16 = v27;
    if ( v11 )
      v16 = 4;
    v32 = 0;
    v27 = v16;
    v17 = *(_QWORD *)this;
    v33 = 0LL;
    v34 = 0;
    v36 = 0;
    v18 = *(__int64 (__fastcall **)(CDWMSwapChain *, __int64, int *, bool *, char *))(v17 + 192);
    v24 = a2;
    v28 = v15;
    v31 = 1LL;
    v29 = v14;
    v35 = a3;
    v30 = v14;
    v37 = 2;
    v19 = v18(this, 1LL, &v23, a6, v21);
    v9 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x336u);
  }
  else if ( a3 <= 1 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IDXGIResource *, const struct tagRECT **))(**(_QWORD **)(v12 + 416) + 144LL))(
            *(_QWORD *)(v12 + 416),
            0LL,
            a2,
            &v22);
    v9 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x33Eu);
    else
      *a6 = (_DWORD)v22 != 0;
  }
  return v9;
}
