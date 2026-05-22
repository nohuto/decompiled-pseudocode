/*
 * XREFs of ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800AAB90
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z @ 0x1800AA68C (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCInputTarget@@@Z.c)
 *     _lambda_b4e39e6c596c6c16e4eb60f4733859c1_::_lambda_invoker_cdecl_ @ 0x1800AAB40 (_lambda_b4e39e6c596c6c16e4eb60f4733859c1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAA@XZ @ 0x18002B640 (--1-$vector@W4GamepadButtons@Input@Gaming@Windows@@V-$allocator@W4GamepadButtons@Input@Gaming@Wi.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x180035448 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800355A4 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x1800A8750 (-MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCInputRouter::Update3DFocusWNF(MPCInputRouter *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  struct IViewHierarchy *v8; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  HWND WindowIdFromViewId; // rbx
  struct IViewHierarchy *v11; // rax
  __int64 v12; // rdi
  struct IViewHierarchy *v13; // rax
  int v14; // eax
  _DWORD *v15; // rcx
  ISMTracing *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+48h] [rbp+7h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+58h] [rbp+17h]
  __int64 v21; // [rsp+68h] [rbp+27h]
  unsigned __int64 v22[4]; // [rsp+70h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v21 = -2LL;
  if ( *((_QWORD *)this + 92) )
  {
    memset(v22, 0, sizeof(v22));
    v18 = 0LL;
    v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 92))(
           *((_QWORD *)this + 92),
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v18);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3DA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v2);
      __debugbreak();
    }
    v3 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v18 + 32LL))(v18, &v22[2]);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3DC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v18 + 40LL))(v18, (char *)&v22[2] + 4);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3DD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v18 + 48LL))(v18, &v22[3]);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3DE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v18 + 64LL))(v18, v22);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3DF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v22[1] = v22[0];
    if ( *((_BYTE *)this + 828) )
      v7 = *((_DWORD *)this + 208);
    else
      v7 = v22[2];
    HIDWORD(v22[3]) = v7;
    if ( LODWORD(v22[3])
      || (v8 = ISMStatics::GetViewHierarchy(), (LODWORD(v22[3]) = ViewHelper::GetViewIdFromWindowId(v8, v22[0])) != 0) )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      WindowIdFromViewId = (HWND)ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v22[3]);
      v11 = ISMStatics::GetViewHierarchy();
      (*(void (__fastcall **)(struct IViewHierarchy *, unsigned __int64 *, _QWORD))(*(_QWORD *)v11 + 48LL))(
        v11,
        &v19,
        LODWORD(v22[3]));
      v12 = v20;
      if ( v19 != v20 )
      {
        v13 = ISMStatics::GetViewHierarchy();
        WindowIdFromViewId = (HWND)ViewHelper::GetWindowIdFromViewId(v13, *(_DWORD *)(v12 - 4));
      }
      v22[1] = (unsigned __int64)GetAncestor(WindowIdFromViewId, 2u);
      std::vector<enum Windows::Gaming::Input::GamepadButtons>::~vector<enum Windows::Gaming::Input::GamepadButtons>(&v19);
    }
    else
    {
      v22[1] = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 64LL))(*((_QWORD *)this + 92));
    }
    v14 = RtlPublishWnfStateData(WNF_HOLO_INPUT_FOCUS_CHANGE, 0LL, v22, 32LL, 0LL) | 0x10000000;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x3FA,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v15 && *v15 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_Update3DFocusWNF_(v16, v22[0], v22[1], v22[2], SBYTE4(v22[2]), v22[3], SBYTE4(v22[3]));
    }
    v17 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
}
