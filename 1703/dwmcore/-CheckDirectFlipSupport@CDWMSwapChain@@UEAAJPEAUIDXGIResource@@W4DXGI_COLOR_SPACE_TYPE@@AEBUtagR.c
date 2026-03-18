/*
 * XREFs of ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2PEA_N@Z @ 0x18019CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z @ 0x18019D3E0 (-DirectFlipRectRequiresPanelFitter@CDWMSwapChain@@AEBA_NAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDWMSwapChain::CheckDirectFlipSupport(
        CDWMSwapChain *this,
        struct IDXGIResource *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        bool *a6)
{
  unsigned int v8; // edi
  CDWMSwapChain *v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r11
  char v12; // r14
  int v13; // eax
  struct tagRECT v14; // xmm1
  struct tagRECT v15; // xmm0
  int v16; // eax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(CDWMSwapChain *, __int64, int *, bool *, char *); // rax
  int v19; // eax
  char v21[8]; // [rsp+30h] [rbp-B9h] BYREF
  struct IDXGIResource *v22; // [rsp+38h] [rbp-B1h] BYREF
  const struct tagRECT *v23; // [rsp+40h] [rbp-A9h]
  int v24; // [rsp+50h] [rbp-99h] BYREF
  struct IDXGIResource *v25; // [rsp+58h] [rbp-91h]
  int v26; // [rsp+60h] [rbp-89h]
  int v27; // [rsp+6Ch] [rbp-7Dh]
  int v28; // [rsp+70h] [rbp-79h]
  struct tagRECT v29; // [rsp+74h] [rbp-75h]
  struct tagRECT v30; // [rsp+84h] [rbp-65h]
  struct tagRECT v31; // [rsp+94h] [rbp-55h]
  __int64 v32; // [rsp+A4h] [rbp-45h]
  int v33; // [rsp+ACh] [rbp-3Dh]
  __int64 v34; // [rsp+B0h] [rbp-39h]
  int v35; // [rsp+B8h] [rbp-31h]
  enum DXGI_COLOR_SPACE_TYPE v36; // [rsp+BCh] [rbp-2Dh]
  int v37; // [rsp+C0h] [rbp-29h]
  int v38; // [rsp+D0h] [rbp-19h]

  v23 = a4;
  v22 = a2;
  *a6 = 0;
  v8 = 0;
  if ( *((_QWORD *)this + 38) )
  {
    if ( CDWMSwapChain::DirectFlipRectRequiresPanelFitter(this, a4)
      || (v12 = 0, CDWMSwapChain::DirectFlipRectRequiresPanelFitter(v9, a5)) )
    {
      v12 = 1;
    }
    if ( ((a3 - 12) & 0xFFFFFFFD) == 0 && *((_BYTE *)this + 463) || v12 )
    {
      memset_0(&v24, 0, 0x88uLL);
      v14 = *a5;
      v25 = v22;
      v26 = *((_DWORD *)this + 82);
      v21[0] = 0;
      v24 = 0;
      v27 = 0;
      v15 = *v23;
      v16 = v28;
      if ( v12 )
        v16 = 4;
      v32 = 1LL;
      v28 = v16;
      v17 = *(_QWORD *)this;
      v29 = v15;
      v33 = 0;
      v18 = *(__int64 (__fastcall **)(CDWMSwapChain *, __int64, int *, bool *, char *))(v17 + 176);
      v30 = v14;
      v34 = 0LL;
      v31 = v14;
      v35 = 0;
      v36 = a3;
      v37 = 0;
      v38 = 2;
      v19 = v18(this, 1LL, &v24, a6, v21);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x3D0u);
    }
    else if ( ((a3 - 12) & 0xFFFFFFFD) != 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct IDXGIResource **))(*(_QWORD *)v10 + 144LL))(
              v10,
              0LL,
              v11,
              &v22);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3DEu);
      else
        *a6 = (_DWORD)v22 != 0;
    }
  }
  return v8;
}
