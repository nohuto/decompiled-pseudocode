/*
 * XREFs of ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x180085090
 * Callers:
 *     ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x180084DB4 (-HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x1800190B8 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x18001950C (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x180019640 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004A1E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180050574 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x18007DE48 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     _lambda_4ee44cc5a3973d3b6a4c49a0a38c85e3_::operator() @ 0x180085660 (_lambda_4ee44cc5a3973d3b6a4c49a0a38c85e3_--operator().c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x180085C34 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCInputRouter::HitTest3D(
        MPCInputRouter *this,
        struct InputInfo *a2,
        struct IInputTarget *a3,
        struct IInputTarget **a4)
{
  int v7; // eax
  bool v8; // r14
  struct InputInfo *v9; // rdx
  bool v10; // r13
  bool v11; // r15
  __int64 v12; // rbx
  __int64 (__fastcall **v13)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, struct IInputTarget **); // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, struct IInputTarget **); // r9
  int v23; // eax
  int v24; // eax
  struct InputInfo *v25; // rcx
  __int64 v26; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  int ViewIdFromWindowId; // eax
  char v29; // al
  int v30; // eax
  char v31; // al
  __int64 (__fastcall **v32)(struct IInputTarget *, GUID *, __int64 *); // rax
  struct IInputTarget *v33; // rcx
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  struct IInputTarget *v36; // rbx
  int MPCTarget; // eax
  wil::details::in1diag3 *v38; // rcx
  struct IMPCInputTarget *v39; // rdi
  int v40; // eax
  unsigned int v41; // esi
  HWND WindowIdFromViewId; // rdi
  struct IViewHierarchy *v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // [rsp+28h] [rbp-58h]
  __int64 v46; // [rsp+50h] [rbp-30h] BYREF
  struct InputInfo **v47; // [rsp+58h] [rbp-28h] BYREF
  struct IInputTarget *v48; // [rsp+60h] [rbp-20h] BYREF
  struct IMPCInputTarget *v49[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  LPARAM lParam; // [rsp+C8h] [rbp+48h] BYREF
  struct InputInfo *v52; // [rsp+D8h] [rbp+58h] BYREF

  v49[1] = (struct IMPCInputTarget *)-2LL;
  v52 = a2;
  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x166,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      0LL);
    __debugbreak();
  }
  if ( !*((_BYTE *)this + 800) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x169,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)a4);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 94) + 40LL))(
         *((_QWORD *)this + 94),
         (__int64)v52 + 536,
         (__int64)v52 + 600);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x16F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_74;
  }
  v8 = 1;
  v9 = v52;
  v10 = !*((_BYTE *)v52 + 601)
     && (*(_DWORD *)v52 & 0x2600) != 0
     && ((unsigned int)(*((_DWORD *)v52 + 130) - 1) <= 1 || *((_DWORD *)v52 + 131) == 2);
  v11 = 0;
  v12 = 0LL;
  if ( !a3 )
    goto LABEL_15;
  v46 = 0LL;
  v13 = *(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3;
  v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(&v46);
  v15 = (*v13)(a3, &GUID_0ffb2569_1e11_4fce_b7f2_9d15d794e042, v14);
  v16 = retaddr;
  if ( v15 < 0 )
  {
LABEL_74:
    wil::details::in1diag3::FailFast_Hr(
      v16,
      (void *)0x17C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_75;
  }
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 80LL))(v46);
  v17 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v9 = v52;
LABEL_15:
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    if ( *((_BYTE *)v9 + 672) )
      goto LABEL_32;
    if ( v10 && *((_BYTE *)v9 + 898) && !v12 )
    {
      MPCHolographicInputManager::GetInstance();
      v11 = *(_BYTE *)(v18 + 2009) == 0;
      v9 = v52;
    }
  }
  if ( *((_BYTE *)v9 + 672) )
  {
LABEL_32:
    *((_QWORD *)v9 + 48) = *((_QWORD *)v9 + 80);
    *((_DWORD *)v52 + 114) = 1;
    v47 = &v52;
    v25 = v52;
    v26 = *((unsigned int *)v52 + 219);
    if ( !(_DWORD)v26 || v26 == *((_QWORD *)v52 + 80) )
    {
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, *((_QWORD *)v52 + 80));
      *((_DWORD *)v52 + 219) = ViewIdFromWindowId;
      v25 = v52;
      if ( !ViewIdFromWindowId )
      {
        LODWORD(lParam) = 0;
        EnumChildWindows(
          *((HWND *)v52 + 80),
          lambda_44ea6c42bf870d75ce9c33fd848cc99e_::_lambda_invoker_cdecl_,
          (LPARAM)&lParam);
        *((_DWORD *)v52 + 219) = lParam;
        v25 = v52;
      }
    }
    if ( *((_QWORD *)this + 91) )
    {
      v29 = lambda_4ee44cc5a3973d3b6a4c49a0a38c85e3_::operator()(&v47);
      v25 = v52;
    }
    else
    {
      v29 = 0;
    }
    if ( v29 )
    {
      v30 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 91))(
              *((_QWORD *)this + 91),
              &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
              a4);
      if ( v30 >= 0 )
        goto LABEL_56;
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1D8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v30);
      goto LABEL_79;
    }
    if ( a3 )
    {
      v31 = lambda_4ee44cc5a3973d3b6a4c49a0a38c85e3_::operator()(&v47);
      v25 = v52;
    }
    else
    {
      v31 = 0;
    }
    if ( v31 )
    {
      if ( a3 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 8LL))(a3);
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 8LL))(a3);
        v25 = v52;
      }
      *a4 = a3;
      if ( !a3 )
        goto LABEL_57;
      v32 = *(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3;
      v33 = a3;
    }
    else
    {
      v48 = 0LL;
      v34 = DWMInputRouter::CreateAndRegisterTarget(
              this,
              *((_DWORD *)v25 + 162),
              0,
              *((_DWORD *)v25 + 219),
              0,
              *((_QWORD *)v25 + 80),
              0,
              0,
              &v48);
      v35 = retaddr;
      if ( v34 < 0 )
      {
LABEL_79:
        wil::details::in1diag3::FailFast_Hr(
          v35,
          (void *)0x1EC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v34);
LABEL_80:
        wil::details::in1diag3::FailFast_Hr(
          v38,
          (void *)0x1F3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)MPCTarget);
        __debugbreak();
      }
      v49[0] = 0LL;
      v36 = v48;
      MPCTarget = MPCInputRouter::CreateMPCTarget(this, v48, *((_QWORD *)v52 + 80), v49);
      v38 = retaddr;
      if ( MPCTarget < 0 )
        goto LABEL_80;
      v39 = v49[0];
      v40 = (**(__int64 (__fastcall ***)(struct IMPCInputTarget *, GUID *, struct IInputTarget **))v49[0])(
              v49[0],
              &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
              a4);
      if ( v40 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1F5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v40);
        __debugbreak();
      }
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v39 + 16LL))(v39);
      if ( !v36 )
        goto LABEL_56;
      v32 = *(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v36;
      v33 = v36;
    }
    ((void (__fastcall *)(struct IInputTarget *))v32[2])(v33);
    goto LABEL_56;
  }
  MPCHolographicInputManager::GetInstance();
  if ( !*(_BYTE *)(v19 + 2009) )
  {
    v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*((_QWORD *)this + 91);
    if ( v21 )
    {
      if ( *((_BYTE *)v52 + 898)
        || (v22 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*((_QWORD *)this + 93)) == 0LL )
      {
        v24 = (**v21)(v21, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a4);
        if ( v24 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x198,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v24);
          __debugbreak();
        }
      }
      else
      {
        v23 = (**v22)(*((_QWORD *)this + 93), &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a4);
        if ( v23 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x19E,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v23);
          __debugbreak();
        }
      }
    }
    goto LABEL_56;
  }
  v20 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 93))(
          *((_QWORD *)this + 93),
          &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
          a4);
  if ( v20 < 0 )
  {
LABEL_75:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x192,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
LABEL_56:
  v25 = v52;
LABEL_57:
  if ( !v10 )
    return;
  if ( v11 )
    goto LABEL_62;
  if ( !*((_BYTE *)v25 + 672) )
    return;
  if ( !*((_BYTE *)v25 + 600) || *((_DWORD *)v25 + 158) )
LABEL_62:
    v8 = 0;
  if ( v11 )
    v41 = 0;
  else
    v41 = *((_DWORD *)v25 + 219);
  if ( v11 )
  {
    WindowIdFromViewId = (HWND)*((_QWORD *)v25 + 113);
  }
  else
  {
    v43 = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = (HWND)ViewHelper::GetWindowIdFromViewId(v43, *((_DWORD *)v52 + 219));
  }
  MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RequestForegroundChange(
    v44,
    WindowIdFromViewId,
    v41,
    (const char *)*((unsigned int *)v52 + 1),
    *(_DWORD *)v52,
    v45,
    0LL,
    v8);
}
