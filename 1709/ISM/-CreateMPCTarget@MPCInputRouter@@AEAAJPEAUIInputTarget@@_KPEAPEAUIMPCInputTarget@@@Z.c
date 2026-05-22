/*
 * XREFs of ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x1800A9D30
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800A92A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800A98D8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9AA4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800355A4 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@Z @ 0x1800358D0 (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K1PEAUIMPCInputTarget@@@Z @ 0x1800A83BC (-MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K1PEAUIMPCInputTarget@@@Z.c)
 *     ??0MPCExclusiveInputTarget@@IEAA@PEAUIInputTarget@@I_K@Z @ 0x1800AB120 (--0MPCExclusiveInputTarget@@IEAA@PEAUIInputTarget@@I_K@Z.c)
 *     ?Initialize@MPCExclusiveInputTarget@@IEAAJXZ @ 0x1800AB2F0 (-Initialize@MPCExclusiveInputTarget@@IEAAJXZ.c)
 *     ?Create@MPCSharedWorldInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2PEAPEAUIMPCInputTarget@@@Z @ 0x1800AC810 (-Create@MPCSharedWorldInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2PEAPEAUIMPCInp.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCInputRouter::CreateMPCTarget(
        MPCInputRouter *this,
        struct IInputTarget *a2,
        unsigned __int64 a3,
        struct IMPCInputTarget **a4)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int FrameworkViewTypeFromViewId; // r14d
  struct IViewHierarchy *v12; // rax
  __int64 v13; // r8
  struct IViewHierarchy *v14; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 v16; // r8
  int v17; // eax
  HWND v18; // rsi
  unsigned int v19; // r12d
  MPCExclusiveInputTarget *v20; // rax
  const char *v21; // r9
  MPCExclusiveInputTarget *v22; // rbx
  MPCExclusiveInputTarget *v23; // rsi
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  _DWORD *v27; // rcx
  ISMTracing *v28; // rcx
  __int64 v29; // rcx
  HWND hWnd; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v32[5]; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v34; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+C8h] [rbp+58h] BYREF

  v32[1] = -2LL;
  *a4 = 0LL;
  if ( !*((_BYTE *)this + 812) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)a4);
    __debugbreak();
  }
  v32[2] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v32[0] = 0LL;
  v8 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         v32);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2A0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v35 = 0;
  v34 = 0;
  hWnd = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v32[0] + 56LL))(v32[0], &v35);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2A9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v32[0] + 48LL))(v32[0], &v34);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2AA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( !*((_QWORD *)this + 94) )
  {
    FrameworkViewTypeFromViewId = 5;
    goto LABEL_22;
  }
  if ( v35 )
    goto LABEL_20;
  if ( v34 )
    goto LABEL_19;
  if ( (*(int (__fastcall **)(_QWORD, HWND *))(*(_QWORD *)v32[0] + 64LL))(v32[0], &hWnd) >= 0
    && GetPropW(hWnd, L"Windows.Graphics.Holographic.HolographicSpace") )
  {
    FrameworkViewTypeFromViewId = 1;
    goto LABEL_22;
  }
  if ( v35 )
  {
LABEL_20:
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId((__int64)ViewHierarchy, v35, v16);
    v17 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(*(_QWORD *)v32[0] + 64LL))(v32[0], &hWnd);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2C4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
  }
  else
  {
LABEL_19:
    v12 = ISMStatics::GetViewHierarchy();
    FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId((__int64)v12, v34, v13);
    v14 = ISMStatics::GetViewHierarchy();
    hWnd = (HWND)ViewHelper::GetWindowIdFromViewId(v14, v34);
  }
LABEL_22:
  if ( FrameworkViewTypeFromViewId == 1 )
  {
    v18 = hWnd;
    v19 = v34;
    v20 = (MPCExclusiveInputTarget *)malloc(0x58uLL);
    v22 = v20;
    if ( v20 )
      memset(v20, 0, 0x58uLL);
    v32[3] = v22;
    if ( v22 )
      v23 = MPCExclusiveInputTarget::MPCExclusiveInputTarget(v22, a2, v19, (unsigned __int64)v18);
    else
      v23 = 0LL;
    if ( !v23 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x75,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
        v21);
      __debugbreak();
    }
    v24 = MPCExclusiveInputTarget::Initialize(v23);
    v25 = v24;
    if ( v24 >= 0 )
    {
      *a4 = v23;
      v25 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x77,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
        (const char *)(unsigned int)v24);
    }
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2CF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v25);
      goto LABEL_41;
    }
  }
  else
  {
    v26 = MPCSharedWorldInputTarget::Create(a2, (MPCInputRouter *)((char *)this + 768), (unsigned __int64)hWnd, a3, a4);
    if ( v26 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2DE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v26);
      __debugbreak();
    }
  }
  v27 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v27 && *v27 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputRouter_CreateMPCTarget_(
      v28,
      a2,
      v34,
      FrameworkViewTypeFromViewId,
      (unsigned __int64)hWnd,
      a3,
      *a4);
  }
  v25 = 0;
LABEL_41:
  v29 = v32[0];
  if ( v32[0] )
  {
    v32[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v25;
}
