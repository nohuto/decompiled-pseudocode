/*
 * XREFs of ?EnsureDDisplayResources@CDisplay@@QEBAJXZ @ 0x1801C7F50
 * Callers:
 *     ?EnsureDDisplayResources@CPlaneCaptureRenderTargetEngine@@IEAAJPEBVCDisplay@@@Z @ 0x18015BBE8 (-EnsureDDisplayResources@CPlaneCaptureRenderTargetEngine@@IEAAJPEBVCDisplay@@@Z.c)
 *     ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x18021D9CC (-Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x1801B3050 (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 */

__int64 __fastcall CDisplay::EnsureDDisplayResources(CDisplay *this)
{
  unsigned int v1; // r15d
  HRESULT v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // esi
  int ActivationFactory; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  char v14; // r12
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  HSTRING string; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[12]; // [rsp+B0h] [rbp-50h] BYREF
  int v38; // [rsp+BCh] [rbp-44h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v1 = 0;
  if ( *((_QWORD *)this + 7) )
    return 0LL;
  if ( *((_DWORD *)this + 16) != -1 )
    goto LABEL_9;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), v37);
  if ( v4 < 0 )
  {
    v5 = 245LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v6 = v38;
  *((_DWORD *)this + 16) = v38;
  if ( v6 != -1 )
  {
LABEL_9:
    v4 = WindowsCreateStringReference(L"Windows.Graphics.DirectDisplay.DisplayManager", 0x2Du, &hstringHeader, &string);
    if ( v4 < 0 )
    {
      v5 = 263LL;
      goto LABEL_6;
    }
    v31 = 0LL;
    ActivationFactory = RoGetActivationFactory(string, &GUID_00000035_0000_0000_c000_000000000046, &v31);
    v7 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_48:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v31);
      return v7;
    }
    v30 = 0LL;
    v9 = (**v31)(v31, &GUID_160f680c_5391_4f11_960a_0ff11662ce66, &v30);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10F,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
        (const char *)(unsigned int)v9);
LABEL_47:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v30);
      goto LABEL_48;
    }
    v27 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, 0LL, &v27);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
        (const char *)(unsigned int)v10);
LABEL_46:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v27);
      goto LABEL_47;
    }
    v26 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 64LL))(v27, &v26);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 56LL))(v26, &v23);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v13 = 0LL;
        v33 = 0LL;
        v14 = 0;
        v15 = 0LL;
        v25 = 0LL;
        if ( v23 )
        {
          while ( 1 )
          {
            if ( v14 )
              goto LABEL_59;
            v22 = 0LL;
            v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, v1, &v22);
            v7 = v16;
            if ( v16 < 0 )
              break;
            v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 64LL))(v22, &v28);
            v7 = v16;
            if ( v16 < 0 )
            {
              v20 = 294LL;
              goto LABEL_55;
            }
            if ( v28 == *((_DWORD *)this + 16) )
            {
              v24 = 0LL;
              v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v24);
              v7 = v17;
              if ( v17 < 0 )
              {
                v19 = 299LL;
                goto LABEL_52;
              }
              v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 48LL))(v24, &v35);
              v7 = v17;
              if ( v17 < 0 )
              {
                v19 = 302LL;
LABEL_52:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v19,
                  (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
                  (const char *)(unsigned int)v17);
                wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v24);
                goto LABEL_56;
              }
              v32 = *((_QWORD *)this + 31);
              if ( v32 == v35 )
              {
                v18 = v15;
                v14 = 1;
                v15 = v24;
                v33 = v24;
                if ( v24 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
                if ( v18 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
                wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=(&v25, v22);
              }
              wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v24);
            }
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            if ( ++v1 >= v23 )
            {
              if ( !v14 )
              {
                v13 = v25;
                goto LABEL_41;
              }
LABEL_59:
              v29 = 0LL;
              v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v27 + 128LL))(v27, v15, &v29);
              v13 = v25;
              v7 = v21;
              if ( v21 >= 0 )
              {
                wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 6, v25);
                wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((__int64 *)this + 7, v29);
                v7 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x140,
                  (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
                  (const char *)(unsigned int)v21);
              }
              if ( v29 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
              goto LABEL_42;
            }
          }
          v20 = 291LL;
LABEL_55:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
            (const char *)(unsigned int)v16);
LABEL_56:
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          v13 = v25;
        }
        else
        {
LABEL_41:
          v7 = -2147024809;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x13C,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
            (const char *)0x80070057LL);
        }
LABEL_42:
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v33);
        goto LABEL_45;
      }
      v12 = 282LL;
    }
    else
    {
      v12 = 279LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
      (const char *)(unsigned int)v11);
LABEL_45:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v26);
    goto LABEL_46;
  }
  v7 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFD,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\display.cpp",
    (const char *)0x80070057LL);
  return v7;
}
