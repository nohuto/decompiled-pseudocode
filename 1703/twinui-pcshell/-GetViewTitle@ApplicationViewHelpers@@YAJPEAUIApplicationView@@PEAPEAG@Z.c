/*
 * XREFs of ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x18017FD70
 * Callers:
 *     ?get_DisplayName@AppViewSwitchItem@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180163CC0 (-get_DisplayName@AppViewSwitchItem@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?IImmersiveApplication_GetNormalDisplayNameWithTitle@@YAJPEAUIImmersiveApplication@@PEAPEAG@Z @ 0x18017CA98 (-IImmersiveApplication_GetNormalDisplayNameWithTitle@@YAJPEAUIImmersiveApplication@@PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetViewTitle(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        LPVOID *a2,
        unsigned __int16 **a3)
{
  __int64 (__fastcall **v3)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 (__fastcall **v10)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  __int64 *v11; // rax
  int v12; // eax
  int NormalDisplayNameWithTitle; // eax
  __int64 v14; // rdx
  struct IImmersiveApplication *v15; // rcx
  HWND v16; // rcx
  struct IImmersiveApplication *v17; // rcx
  HWND v18; // rcx
  __int64 v19; // rcx
  HWND hWnd; // [rsp+20h] [rbp-E0h] BYREF
  struct IImmersiveApplication *v22; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pString[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  v3 = *this;
  v23 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v23);
  if ( (int)(*v3)((ApplicationViewHelpers *)this, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v6) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v23 + 24LL))(v23, &hWnd);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x17,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_23;
    }
    InternalGetWindowText(hWnd, pString, 260);
    memset(pv, 0, sizeof(pv));
    v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           (__int64)pv,
           pString,
           0xFFFFFFFFFFFFFFFFuLL);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1D,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
        (const char *)(unsigned int)v9);
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
      goto LABEL_23;
    }
    *a2 = pv[0];
LABEL_22:
    v8 = 0;
    goto LABEL_23;
  }
  hWnd = 0LL;
  v10 = *this;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&hWnd);
  v12 = (*v10)((ApplicationViewHelpers *)this, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v11);
  v8 = v12;
  if ( v12 >= 0 )
  {
    v22 = 0LL;
    NormalDisplayNameWithTitle = (*(__int64 (__fastcall **)(HWND, struct IImmersiveApplication **))(*(_QWORD *)hWnd
                                                                                                  + 24LL))(
                                   hWnd,
                                   &v22);
    v8 = NormalDisplayNameWithTitle;
    if ( NormalDisplayNameWithTitle >= 0 )
    {
      NormalDisplayNameWithTitle = IImmersiveApplication_GetNormalDisplayNameWithTitle(v22, a2);
      v8 = NormalDisplayNameWithTitle;
      if ( NormalDisplayNameWithTitle >= 0 )
      {
        v17 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v18 = hWnd;
        if ( hWnd )
        {
          hWnd = 0LL;
          (*(void (__fastcall **)(HWND))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_22;
      }
      v14 = 41LL;
    }
    else
    {
      v14 = 39LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
      (const char *)(unsigned int)NormalDisplayNameWithTitle);
    v15 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x24,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers_notest.cpp",
      (const char *)(unsigned int)v12);
  }
  v16 = hWnd;
  if ( hWnd )
  {
    hWnd = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_23:
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v8;
}
