/*
 * XREFs of ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800A92A8
 * Callers:
 *     ?HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800A8F3C (-HitTestInternal@MPCInputRouter@@AEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPE.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800198FC (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x180035448 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800355A4 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180059198 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     _lambda_87ad6a4a33ed41043fffaca4615abc7a_::operator() @ 0x1800A9768 (_lambda_87ad6a4a33ed41043fffaca4615abc7a_--operator().c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x1800A9D30 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCInputRouter::HitTest3D(
        MPCInputRouter *this,
        struct InputInfo *a2,
        struct IInputTarget *a3,
        struct IInputTarget **a4)
{
  int v7; // eax
  struct InputInfo *v8; // rdx
  bool v9; // si
  bool v10; // r12
  bool v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IInputTarget **); // rcx
  int v16; // eax
  struct InputInfo *v17; // rcx
  __int64 v18; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  int ViewIdFromWindowId; // eax
  char v21; // al
  int v22; // eax
  char v23; // al
  int v24; // eax
  int MPCTarget; // eax
  struct IMPCInputTarget *v26; // rdi
  int v27; // eax
  unsigned int v28; // r15d
  struct IViewHierarchy *v29; // rax
  HWND WindowIdFromViewId; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+28h] [rbp-38h]
  struct InputInfo **v33; // [rsp+40h] [rbp-20h] BYREF
  struct IInputTarget *v34; // [rsp+48h] [rbp-18h] BYREF
  struct IMPCInputTarget *v35[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct InputInfo *v37; // [rsp+A8h] [rbp+48h] BYREF
  LPARAM lParam; // [rsp+B8h] [rbp+58h] BYREF

  v37 = a2;
  v35[1] = (struct IMPCInputTarget *)-2LL;
  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      0LL);
    __debugbreak();
  }
  if ( !*((_BYTE *)this + 812) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x182,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)a4);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 95) + 40LL))(
         *((_QWORD *)this + 95),
         (__int64)v37 + 712,
         (__int64)v37 + 776);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x188,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = v37;
  *((_DWORD *)this + 202) = *((_DWORD *)v37 + 202);
  v9 = 1;
  v10 = !*((_BYTE *)v8 + 777)
     && (*(_DWORD *)v8 & 0x2600) != 0
     && ((unsigned int)(*((_DWORD *)v8 + 174) - 1) <= 1 || *((_DWORD *)v8 + 175) == 2);
  v11 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    if ( *((_BYTE *)v8 + 848) )
      goto LABEL_25;
    if ( v10 && *((_BYTE *)v8 + 1074) )
    {
      MPCHolographicInputManager::GetInstance();
      v11 = *(_BYTE *)(v12 + 3129) == 0;
      v8 = v37;
    }
  }
  if ( !*((_BYTE *)v8 + 848) )
  {
    MPCHolographicInputManager::GetInstance();
    if ( *(_BYTE *)(v13 + 3129) )
    {
      v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 94))(
              *((_QWORD *)this + 94),
              &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
              a4);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x1A3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
    }
    else
    {
      v15 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IInputTarget **))*((_QWORD *)this + 92);
      if ( v15 )
      {
        v16 = (**v15)(v15, &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3, a4);
        if ( v16 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x1A7,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v16);
          __debugbreak();
        }
      }
    }
    goto LABEL_51;
  }
LABEL_25:
  *((_QWORD *)v8 + 69) = *((_QWORD *)v8 + 102);
  *((_DWORD *)v37 + 156) = 1;
  v33 = &v37;
  v17 = v37;
  v18 = *((unsigned int *)v37 + 263);
  if ( !(_DWORD)v18 || v18 == *((_QWORD *)v37 + 102) )
  {
    ViewHierarchy = ISMStatics::GetViewHierarchy();
    ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, *((_QWORD *)v37 + 102));
    *((_DWORD *)v37 + 263) = ViewIdFromWindowId;
    v17 = v37;
    if ( !ViewIdFromWindowId )
    {
      LODWORD(lParam) = 0;
      EnumChildWindows(
        *((HWND *)v37 + 102),
        lambda_39145382b85a56bf0c3f442b4c54cd44_::_lambda_invoker_cdecl_,
        (LPARAM)&lParam);
      *((_DWORD *)v37 + 263) = lParam;
      v17 = v37;
    }
  }
  if ( *((_QWORD *)this + 92) )
  {
    v21 = lambda_87ad6a4a33ed41043fffaca4615abc7a_::operator()(&v33);
    v17 = v37;
  }
  else
  {
    v21 = 0;
  }
  if ( v21 )
  {
    v22 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IInputTarget **))this + 92))(
            *((_QWORD *)this + 92),
            &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
            a4);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x1E0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
  }
  else
  {
    if ( a3 )
    {
      v23 = lambda_87ad6a4a33ed41043fffaca4615abc7a_::operator()(&v33);
      v17 = v37;
    }
    else
    {
      v23 = 0;
    }
    if ( v23 )
    {
      if ( a3 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 8LL))(a3);
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 8LL))(a3);
        v17 = v37;
      }
      *a4 = a3;
      if ( !a3 )
        goto LABEL_52;
    }
    else
    {
      v34 = 0LL;
      v24 = DWMInputRouter::CreateAndRegisterTarget(
              this,
              *((_DWORD *)v17 + 206),
              0,
              *((_DWORD *)v17 + 263),
              0,
              *((_QWORD *)v17 + 102),
              &v34);
      if ( v24 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x1F2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v24);
        __debugbreak();
      }
      v35[0] = 0LL;
      a3 = v34;
      MPCTarget = MPCInputRouter::CreateMPCTarget(this, v34, *((_QWORD *)v37 + 102), v35);
      if ( MPCTarget < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x1F9,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)MPCTarget);
        __debugbreak();
      }
      v26 = v35[0];
      v27 = (**(__int64 (__fastcall ***)(struct IMPCInputTarget *, GUID *, struct IInputTarget **))v35[0])(
              v35[0],
              &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
              a4);
      if ( v27 < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x1FB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v27);
      (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v26 + 16LL))(v26);
      if ( !a3 )
        goto LABEL_51;
    }
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 16LL))(a3);
  }
LABEL_51:
  v17 = v37;
LABEL_52:
  if ( !v10 )
    return;
  if ( v11 )
    goto LABEL_57;
  if ( !*((_BYTE *)v17 + 848) )
    return;
  if ( !*((_BYTE *)v17 + 776) || *((_DWORD *)v17 + 202) )
LABEL_57:
    v9 = 0;
  v28 = 0;
  if ( v11 )
  {
    WindowIdFromViewId = (HWND)*((_QWORD *)v17 + 135);
  }
  else
  {
    v28 = *((_DWORD *)v17 + 263);
    v29 = ISMStatics::GetViewHierarchy();
    WindowIdFromViewId = (HWND)ViewHelper::GetWindowIdFromViewId(v29, *((_DWORD *)v37 + 263));
  }
  MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::RequestForegroundChange(
    v31,
    WindowIdFromViewId,
    v28,
    (const char *)*((unsigned int *)v37 + 1),
    *(_DWORD *)v37,
    v32,
    0LL,
    v9);
}
