/*
 * XREFs of ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800860FC
 * Callers:
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z @ 0x1800857B8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18001950C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004A1E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z @ 0x180084488 (-MPCInputRouter_IsTargetHolographic_@ISMTracing@@QEAAXPEAUIInputTarget@@K_K_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall MPCInputRouter::IsTargetHolographic(
        MPCInputRouter *this,
        __int64 (__fastcall ***a2)(struct IInputTarget *, GUID *, __int64 *))
{
  __int64 (__fastcall **v3)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int ViewIdFromWindowId; // ebx
  int v9; // eax
  struct IViewHierarchy *ViewHierarchy; // rax
  bool v11; // di
  struct IViewHierarchy *v12; // rax
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  ISMTracing *v18; // rcx
  __int64 v19; // rcx
  unsigned int v21; // [rsp+38h] [rbp-9h] BYREF
  __int64 v22; // [rsp+40h] [rbp-1h] BYREF
  __int64 v23; // [rsp+48h] [rbp+7h] BYREF
  HWND hWnd[2]; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v25[32]; // [rsp+60h] [rbp+1Fh] BYREF
  int v26; // [rsp+80h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  hWnd[1] = (HWND)-2LL;
  v22 = 0LL;
  v3 = *a2;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(&v22);
  v5 = (*v3)((struct IInputTarget *)a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v21 = 0;
  hWnd[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v22 + 64LL))(v22, hWnd);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 56LL))(v22, &v21);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  ViewIdFromWindowId = v21;
  if ( !v21 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 48LL))(v22, &v21);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2FE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x1800863D0LL);
    }
    ViewIdFromWindowId = v21;
    if ( !v21 )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, (__int64)hWnd[0]);
      v21 = ViewIdFromWindowId;
    }
  }
  v11 = 0;
  if ( ViewIdFromWindowId )
  {
    memset_0(v25, 0, 0x2CuLL);
    if ( ((1LL << gdwDeviceFamily) & 0x400) != 0 )
      goto LABEL_20;
    v12 = ISMStatics::GetViewHierarchy();
    (*(void (__fastcall **)(struct IViewHierarchy *, __int64 *, _QWORD))(*(_QWORD *)v12 + 32LL))(
      v12,
      &v23,
      ViewIdFromWindowId);
    if ( v23 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 168LL))(v23, v25);
      v14 = v13;
      if ( v13 >= 0 )
      {
        v16 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
LABEL_18:
        if ( v26 != 1 )
          goto LABEL_19;
LABEL_20:
        v11 = 1;
        goto LABEL_24;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF3,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v13);
      v15 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    else
    {
      v14 = -2147467259;
    }
    if ( v14 < 0 )
    {
LABEL_19:
      v11 = 0;
      goto LABEL_24;
    }
    goto LABEL_18;
  }
  if ( hWnd[0] && ((1LL << gdwDeviceFamily) & 0x400) == 0 )
    v11 = GetPropW(hWnd[0], L"Windows.Graphics.Holographic.HolographicSpace") != 0LL;
LABEL_24:
  v17 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v17 && *v17 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputRouter_IsTargetHolographic_(v18, (struct IInputTarget *)a2, v21, (__int64)hWnd[0], v11);
  }
  v19 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v11;
}
