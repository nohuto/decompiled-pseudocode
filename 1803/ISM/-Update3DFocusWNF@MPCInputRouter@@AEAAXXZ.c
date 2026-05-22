/*
 * XREFs of ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x180086D80
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x180086834 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z.c)
 *     _lambda_b4e39e6c596c6c16e4eb60f4733859c1_::_lambda_invoker_cdecl_ @ 0x180086D30 (_lambda_b4e39e6c596c6c16e4eb60f4733859c1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18001950C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180019640 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?_Tidy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXXZ @ 0x18002576C (-_Tidy@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@AEAAXXZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x18008458C (-MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCInputRouter::Update3DFocusWNF(MPCInputRouter *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  struct IViewHierarchy *v9; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  HWND WindowIdFromViewId; // rbx
  struct IViewHierarchy *v12; // rax
  __int64 v13; // rdi
  struct IViewHierarchy *v14; // rax
  int v15; // eax
  _DWORD *v16; // rcx
  ISMTracing *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+48h] [rbp+7h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+58h] [rbp+17h]
  __int64 v22; // [rsp+68h] [rbp+27h]
  unsigned __int64 v23; // [rsp+70h] [rbp+2Fh] BYREF
  unsigned __int64 Ancestor; // [rsp+78h] [rbp+37h]
  unsigned int v25; // [rsp+80h] [rbp+3Fh] BYREF
  char v26[4]; // [rsp+84h] [rbp+43h] BYREF
  char v27[4]; // [rsp+88h] [rbp+47h] BYREF
  char v28[4]; // [rsp+8Ch] [rbp+4Bh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v22 = -2LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 91);
  if ( v2 )
  {
    memset_0(&v23, 0, 0x20uLL);
    v19 = 0LL;
    v3 = (**v2)(v2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v19);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3E6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 32LL))(v19, &v25);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3E8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 40LL))(v19, v26);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3E9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 48LL))(v19, v27);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3EA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v19 + 64LL))(v19, &v23);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3EB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    Ancestor = v23;
    if ( *((_BYTE *)this + 816) )
      v8 = *((_DWORD *)this + 205);
    else
      v8 = v25;
    *(_DWORD *)v28 = v8;
    if ( *(_DWORD *)v27
      || (v9 = ISMStatics::GetViewHierarchy(), (*(_DWORD *)v27 = ViewHelper::GetViewIdFromWindowId(v9, v23)) != 0) )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = (HWND)ViewHelper::GetWindowIdFromViewId(ViewHierarchy, *(unsigned int *)v27);
      v12 = ISMStatics::GetViewHierarchy();
      (*(void (__fastcall **)(struct IViewHierarchy *, unsigned __int64 *, _QWORD))(*(_QWORD *)v12 + 48LL))(
        v12,
        &v20,
        *(unsigned int *)v27);
      v13 = v21;
      if ( v20 != v21 )
      {
        v14 = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = (HWND)ViewHelper::GetWindowIdFromViewId(v14, *(_DWORD *)(v13 - 4));
      }
      if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
        Ancestor = (unsigned __int64)GetAncestor(WindowIdFromViewId, 2u);
      else
        Ancestor = (unsigned __int64)WindowIdFromViewId;
      std::vector<enum _Button>::_Tidy(&v20);
    }
    else
    {
      Ancestor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 91) + 64LL))(*((_QWORD *)this + 91));
    }
    v15 = RtlPublishWnfStateData(WNF_HOLO_INPUT_FOCUS_CHANGE, 0LL, &v23, 32LL, 0LL) | 0x10000000;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x406,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v15);
      JUMPOUT(0x180087086LL);
    }
    v16 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v16 && *v16 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_Update3DFocusWNF_(v17, v23, Ancestor, v25, v26[0], v27[0], v28[0]);
    }
    v18 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
}
