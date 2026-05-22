/*
 * XREFs of ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085C34
 * Callers:
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x180085090 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800857B8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18008598C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18001950C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180019640 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@Z @ 0x1800198EC (-GetFrameworkViewTypeFromViewId@ViewHelper@@SA-AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18005AC54 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K1PEAUIMPCInputTarget@@@Z @ 0x1800840F4 (-MPCInputRouter_CreateMPCTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K1PEAUIMPCInputTarget@@@Z.c)
 *     ?Initialize@MPCExclusiveInputTarget@@IEAAJXZ @ 0x180087408 (-Initialize@MPCExclusiveInputTarget@@IEAAJXZ.c)
 *     ?Create@MPCSharedWorldInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2PEAPEAUIMPCInputTarget@@@Z @ 0x180088768 (-Create@MPCSharedWorldInputTarget@@SAJPEAUIInputTarget@@AEBUtagMsgRoutingInfo@@_K2PEAPEAUIMPCInp.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall MPCInputRouter::CreateMPCTarget(
        MPCInputRouter *this,
        struct IInputTarget *a2,
        unsigned __int64 a3,
        struct IMPCInputTarget **a4)
{
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  int v11; // eax
  int FrameworkViewTypeFromViewId; // r14d
  HWND v13; // rsi
  unsigned int v14; // r13d
  _QWORD *v15; // rax
  const char *v16; // r9
  _QWORD *v17; // rbx
  struct IViewHierarchy *v18; // rax
  __int64 v19; // rcx
  struct IViewHierarchy *v20; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 v22; // r8
  struct IViewHierarchy *v23; // rax
  struct IViewHierarchy *v24; // rax
  __int64 v25; // r8
  int v26; // eax
  int v27; // eax
  int v28; // esi
  int v29; // eax
  _DWORD *v30; // rcx
  ISMTracing *v31; // rcx
  __int64 v32; // rcx
  struct IMPCInputTarget *v34; // [rsp+30h] [rbp-50h]
  unsigned int v35; // [rsp+40h] [rbp-40h] BYREF
  HWND hWnd; // [rsp+48h] [rbp-38h] BYREF
  __int64 v37; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v38[5]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int ViewIdFromWindowId; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v41; // [rsp+D8h] [rbp+58h] BYREF

  v38[1] = -2LL;
  *a4 = 0LL;
  if ( !*((_BYTE *)this + 800) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x297,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)a4);
    goto LABEL_48;
  }
  v38[2] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v37 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v37);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_48:
    wil::details::in1diag3::FailFast_Hr(
      v9,
      (void *)0x29C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v41 = 0;
  ViewIdFromWindowId = 0;
  hWnd = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 56LL))(v37, &v41);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v37 + 48LL))(v37, &ViewIdFromWindowId);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  if ( !*((_QWORD *)this + 93) )
  {
    FrameworkViewTypeFromViewId = 5;
    goto LABEL_9;
  }
  if ( !v41 )
  {
    if ( ViewIdFromWindowId )
    {
LABEL_29:
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId(
                                      (__int64)ViewHierarchy,
                                      ViewIdFromWindowId,
                                      v22);
      v23 = ISMStatics::GetViewHierarchy();
      hWnd = (HWND)ViewHelper::GetWindowIdFromViewId(v23, ViewIdFromWindowId);
      goto LABEL_9;
    }
    if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v37 + 64LL))(v37, &hWnd) >= 0
      && ((1LL << gdwDeviceFamily) & 0x400) == 0
      && GetPropW(hWnd, L"Windows.Graphics.Holographic.HolographicSpace") )
    {
      FrameworkViewTypeFromViewId = 1;
      goto LABEL_9;
    }
    if ( !v41 )
    {
      if ( !ViewIdFromWindowId )
      {
        v20 = ISMStatics::GetViewHierarchy();
        ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(v20, (__int64)hWnd);
        wil::details::in1diag3::Log_HrIfMsg(
          retaddr,
          (void *)0x2BD,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)0x80004005LL,
          ViewIdFromWindowId == 0,
          (unsigned __int16 *)"View id not found",
          (const char *)v34);
      }
      goto LABEL_29;
    }
  }
  v24 = ISMStatics::GetViewHierarchy();
  FrameworkViewTypeFromViewId = ViewHelper::GetFrameworkViewTypeFromViewId((__int64)v24, v41, v25);
  v26 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v37 + 64LL))(v37, &hWnd);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v26);
    __debugbreak();
  }
LABEL_9:
  if ( FrameworkViewTypeFromViewId == 1 )
  {
    v13 = hWnd;
    v14 = ViewIdFromWindowId;
    v15 = malloc(0x58uLL);
    v17 = v15;
    if ( v15 )
      memset_0(v15, 0, 0x58uLL);
    v38[3] = v17;
    if ( v17 )
    {
      v17[3] = &RefCountedObject::`vftable';
      *((_DWORD *)v17 + 8) = 1;
      *v17 = &MPCExclusiveInputTarget::`vftable'{for `IMPCInputTarget'};
      v17[1] = &MPCExclusiveInputTarget::`vftable'{for `IFocusInputTarget'};
      v17[2] = &MPCExclusiveInputTarget::`vftable'{for `IDCompInputTarget'};
      v17[3] = &MPCExclusiveInputTarget::`vftable'{for `RefCountedObject'};
      v17[5] = 0LL;
      v17[6] = a2;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      *((_DWORD *)v17 + 14) = v14;
      v17[8] = v13;
      v17[9] = 0LL;
      v38[0] = 0LL;
      v35 = 0;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, _QWORD *))v17[6])(
             v17[6],
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             v38) >= 0
        && (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v38[0] + 48LL))(v38[0], &v35) >= 0
        && v35 )
      {
        v18 = ISMStatics::GetViewHierarchy();
        v17[9] = ViewHelper::GetWindowIdFromViewId(v18, v35);
      }
      v19 = v38[0];
      if ( v38[0] )
      {
        v38[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    else
    {
      v17 = 0LL;
    }
    if ( !v17 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
        v16);
      __debugbreak();
    }
    v27 = MPCExclusiveInputTarget::Initialize((MPCExclusiveInputTarget *)v17);
    v28 = v27;
    if ( v27 >= 0 )
    {
      *a4 = (struct IMPCInputTarget *)v17;
      v28 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x71,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcexclusiveinputtarget.cpp",
        (const char *)(unsigned int)v27);
    }
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v28);
      goto LABEL_44;
    }
  }
  else
  {
    v29 = MPCSharedWorldInputTarget::Create(a2, (MPCInputRouter *)((char *)this + 760), (unsigned __int64)hWnd, a3, a4);
    if ( v29 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2E0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v29);
      __debugbreak();
    }
  }
  v30 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v30 && *v30 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputRouter_CreateMPCTarget_(
      v31,
      a2,
      ViewIdFromWindowId,
      FrameworkViewTypeFromViewId,
      (unsigned __int64)hWnd,
      a3,
      *a4);
  }
  v28 = 0;
LABEL_44:
  v32 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v28;
}
