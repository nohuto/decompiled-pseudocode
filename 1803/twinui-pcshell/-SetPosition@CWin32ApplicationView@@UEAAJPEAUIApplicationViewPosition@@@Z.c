/*
 * XREFs of ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1801409F0
 * Callers:
 *     ?ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18013EB80 (-ApplyOperation@CWin32ApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800198CC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180092E5C (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator() @ 0x18013E260 (_lambda_3862d1887d3f5208accb0e0621fd5fc4_--operator().c)
 *     _lambda_a869f7513e8efdf703e23387751d77d1_::operator() @ 0x18013E320 (_lambda_a869f7513e8efdf703e23387751d77d1_--operator().c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@UtagWINDOWPLACEMENT@@@Z @ 0x180140E58 (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@UtagWINDOWPLACEMENT@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::SetPosition(CWin32ApplicationView *this, struct IApplicationViewPosition *a2)
{
  HWND v3; // rdi
  int v4; // eax
  int LastError; // ebx
  __int64 v6; // rdx
  CWin32ApplicationView *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  volatile int *v10; // rdx
  unsigned __int64 v11; // r9
  volatile int *v12; // rdx
  const char *v13; // r9
  UINT showCmd; // eax
  CWin32ApplicationView *v15; // rcx
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  volatile int *v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v23; // [rsp+68h] [rbp-A0h] BYREF
  WINDOWPLACEMENT v24; // [rsp+78h] [rbp-90h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-60h]
  WINDOWPLACEMENT wndpl; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v27[2]; // [rsp+E0h] [rbp-28h] BYREF
  POINT v28; // [rsp+E8h] [rbp-20h]
  POINT v29; // [rsp+F0h] [rbp-18h]
  __m128i v30; // [rsp+F8h] [rbp-10h]
  _BYTE v31[16]; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v25 = -2LL;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 26) + 24LL))(*((_QWORD *)this + 26));
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
         a2,
         &GUID_a2d5db46_2d5e_4f51_b7b2_5c713b7b9aa1,
         &v19) < 0 )
    goto LABEL_7;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 72LL))(v19, v27);
  LastError = v4;
  if ( v4 >= 0 )
  {
    memset_0(&wndpl, 0, sizeof(wndpl));
    wndpl.length = 44;
    wndpl.flags = v27[0];
    wndpl.showCmd = v27[1];
    wndpl.ptMinPosition = v28;
    wndpl.ptMaxPosition = v29;
    wndpl.rcNormalPosition = (RECT)v30;
    *(_OWORD *)&v24.length = *(_OWORD *)&wndpl.length;
    *(_OWORD *)&v24.ptMinPosition.y = *(_OWORD *)&wndpl.ptMinPosition.y;
    *(_QWORD *)&v24.rcNormalPosition.top = *(__int64 *)((char *)v30.m128i_i64 + 4);
    v24.rcNormalPosition.bottom = _mm_cvtsi128_si32(_mm_srli_si128(v30, 12));
    v4 = CWin32ApplicationView::SetWindowPosition(v7, v3, &v24);
    LastError = v4;
    if ( v4 < 0 )
    {
      v6 = 445LL;
      goto LABEL_6;
    }
LABEL_7:
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v17);
    if ( (**(int (__fastcall ***)(struct IApplicationViewPosition *, GUID *, __int64 *))a2)(
           a2,
           &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2,
           &v17) >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, &v20);
      LastError = v8;
      if ( v8 < 0 )
      {
        v9 = 454LL;
LABEL_35:
        v11 = (unsigned int)v8;
        goto LABEL_36;
      }
      if ( (_DWORD)v20 == 4 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 24LL))(v17, v31);
        LastError = v8;
        if ( v8 < 0 )
        {
          v9 = 460LL;
          goto LABEL_35;
        }
        v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 40LL))(v17, &v22);
        LastError = v8;
        if ( v8 < 0 )
        {
          v9 = 463LL;
          goto LABEL_35;
        }
        v18 = 0LL;
        v23 = &v18;
        GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v21);
        v10 = v21;
        if ( v21 )
          lambda_a869f7513e8efdf703e23387751d77d1_::operator()(&v23, (__int64)v21);
        Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease((__int64 *)&v21, v10);
        LastError = (*(__int64 (__fastcall **)(__int64, HWND, _BYTE *, _QWORD, _DWORD))(*(_QWORD *)v18 + 24LL))(
                      v18,
                      v3,
                      v31,
                      0LL,
                      v22);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        if ( LastError < 0 )
        {
          v11 = (unsigned int)LastError;
          v9 = 464LL;
LABEL_36:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v9,
            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
            (const char *)v11);
          goto LABEL_38;
        }
      }
      else
      {
        if ( v19 )
          goto LABEL_37;
        if ( (_DWORD)v20 != 3 )
        {
LABEL_26:
          if ( !v17 )
          {
            wndpl.length = 44;
            memset_0(&wndpl.flags, 0, 0x28uLL);
            if ( !GetWindowPlacement(v3, &wndpl) )
            {
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x1E0,
                            (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                            v13);
LABEL_38:
              Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(&v17);
              goto LABEL_39;
            }
            showCmd = wndpl.showCmd;
            if ( wndpl.showCmd == 3 )
              showCmd = 9;
            wndpl.showCmd = showCmd;
            v8 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, RECT *))(*(_QWORD *)a2 + 24LL))(
                   a2,
                   &wndpl.rcNormalPosition);
            LastError = v8;
            if ( v8 < 0 )
            {
              v9 = 485LL;
              goto LABEL_35;
            }
            v24 = wndpl;
            v8 = CWin32ApplicationView::SetWindowPosition(v15, v3, &v24);
            LastError = v8;
            if ( v8 < 0 )
            {
              v9 = 486LL;
              goto LABEL_35;
            }
          }
LABEL_37:
          LastError = 0;
          goto LABEL_38;
        }
        v18 = 0LL;
        v23 = &v18;
        GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v21);
        v12 = v21;
        if ( v21 )
          lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator()(&v23, (__int64)v21);
        Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease((__int64 *)&v21, v12);
        LastError = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v18 + 32LL))(v18, v3, 5LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        if ( LastError < 0 )
        {
          v11 = (unsigned int)LastError;
          v9 = 471LL;
          goto LABEL_36;
        }
      }
    }
    if ( v19 )
      goto LABEL_37;
    goto LABEL_26;
  }
  v6 = 442LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v4);
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  return (unsigned int)LastError;
}
