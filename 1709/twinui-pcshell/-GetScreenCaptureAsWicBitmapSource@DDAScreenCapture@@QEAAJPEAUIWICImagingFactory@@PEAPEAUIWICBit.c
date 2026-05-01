/*
 * XREFs of ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800ED368
 * Callers:
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800E709C (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x1800ED0B8 (-InitializeDuplication@DDAScreenCapture@@AEAAJXZ.c)
 *     ?TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z @ 0x1800ED93C (-TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall DDAScreenCapture::GetScreenCaptureAsWicBitmapSource(
        DDAScreenCapture *this,
        struct IWICImagingFactory *a2,
        struct IWICBitmapSource **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  struct IDXGIResource *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  int v14; // eax
  struct IWICBitmapSource *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  struct IWICBitmapSource *v18; // rcx
  struct IWICBitmapSource *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  struct IWICBitmapSource *v22; // rax
  struct IWICBitmapSource *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  struct IDXGIResource *v27; // rcx
  struct IDXGIResource *v29; // [rsp+50h] [rbp-B0h] BYREF
  struct IWICBitmapSource *v30; // [rsp+58h] [rbp-A8h] BYREF
  struct IWICBitmapSource *v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  struct IWICBitmapSource *v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  int v35; // [rsp+80h] [rbp-80h] BYREF
  struct IWICBitmapSource *v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  int v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  DDAScreenCapture *v40; // [rsp+A8h] [rbp-58h]
  char v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+B8h] [rbp-48h]
  DDAScreenCapture *v43; // [rsp+C0h] [rbp-40h]
  char v44; // [rsp+C8h] [rbp-38h]
  unsigned int v45; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v46; // [rsp+D4h] [rbp-2Ch]
  __int64 v47; // [rsp+ECh] [rbp-14h]
  __int64 v48; // [rsp+F4h] [rbp-Ch]
  GUID v49; // [rsp+100h] [rbp+0h] BYREF
  GUID v50; // [rsp+110h] [rbp+10h] BYREF
  DXGI_OUTDUPL_FRAME_INFO v51; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v39 = -2LL;
  *a3 = 0LL;
  v29 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 80LL))(*((_QWORD *)this + 15));
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 126LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_63;
  }
  v6 = DDAScreenCapture::TryAcquireFrame(this, &v51, &v29);
  v7 = v6;
  if ( v6 == -2005270490 )
  {
    v6 = DDAScreenCapture::InitializeDuplication(this);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 132LL;
      goto LABEL_12;
    }
    v9 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      ((void (__fastcall *)(struct IDXGIResource *))v9->lpVtbl->Release)(v9);
    }
    v6 = DDAScreenCapture::TryAcquireFrame(this, &v51, &v29);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 133LL;
      goto LABEL_12;
    }
  }
  else if ( v6 < 0 )
  {
    v8 = 137LL;
    goto LABEL_12;
  }
  v40 = this;
  v41 = 1;
  if ( v51.AccumulatedFrames )
  {
    v34 = 0LL;
    v10 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))v29->lpVtbl->QueryInterface)(
            v29,
            &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
            &v34);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x98,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v10);
LABEL_59:
      v25 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      }
      goto LABEL_61;
    }
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 80LL))(v34, &v45);
    v32 = 0LL;
    v47 = 3LL;
    v48 = 0x20000LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, __int64 *))(**((_QWORD **)this + 13) + 40LL))(
            *((_QWORD *)this + 13),
            &v45,
            0LL,
            &v32);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 162LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v11);
LABEL_57:
      v24 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      goto LABEL_59;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 14) + 376LL))(
      *((_QWORD *)this + 14),
      v32,
      v34);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int64 *))(**((_QWORD **)this + 14)
                                                                                         + 112LL))(
            *((_QWORD *)this + 14),
            v32,
            0LL,
            1LL,
            0,
            &v37);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 167LL;
      goto LABEL_21;
    }
    v13 = v32;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
    v42 = v13;
    v43 = this;
    v44 = 1;
    v33 = 0LL;
    v49 = GUID_WICPixelFormat32bppBGRA;
    v14 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, _QWORD, _QWORD, GUID *, int, unsigned int, __int64, struct IWICBitmapSource **))a2->lpVtbl->CreateBitmapFromMemory)(
            a2,
            v45,
            v46,
            &v49,
            v38,
            v38 * v46,
            v37,
            &v33);
    v7 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xB7,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v14);
LABEL_53:
      v23 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        ((void (__fastcall *)(struct IWICBitmapSource *))v23->lpVtbl->Release)(v23);
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 14) + 120LL))(
        *((_QWORD *)this + 14),
        v13,
        0LL);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      goto LABEL_57;
    }
    v15 = 0LL;
    v36 = 0LL;
    if ( v46 <= v45 )
    {
      v15 = v33;
      if ( v33 )
        ((void (__fastcall *)(struct IWICBitmapSource *))v33->lpVtbl->AddRef)(v33);
      v36 = v15;
    }
    else
    {
      v30 = 0LL;
      v16 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))a2->lpVtbl->CreateBitmapFlipRotator)(
              a2,
              &v30);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 190LL;
LABEL_31:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
          (const char *)(unsigned int)v16);
        v18 = v30;
        if ( !v30 )
          goto LABEL_51;
        v30 = 0LL;
        goto LABEL_50;
      }
      v16 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, __int64))v30->lpVtbl[1].QueryInterface)(
              v30,
              v33,
              3LL);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 191LL;
        goto LABEL_31;
      }
      v19 = v30;
      v15 = v30;
      if ( v30 )
      {
        ((void (__fastcall *)(struct IWICBitmapSource *))v30->lpVtbl->AddRef)(v30);
        v19 = v30;
      }
      v36 = v15;
      if ( v19 )
      {
        v30 = 0LL;
        ((void (__fastcall *)(struct IWICBitmapSource *))v19->lpVtbl->Release)(v19);
      }
    }
    v50 = GUID_WICPixelFormat24bppBGR;
    v31 = 0LL;
    v20 = ((__int64 (__fastcall *)(struct IWICImagingFactory *, struct IWICBitmapSource **))a2->lpVtbl->CreateFormatConverter)(
            a2,
            &v31);
    v7 = v20;
    if ( v20 >= 0 )
    {
      v35 = 0;
      v20 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, GUID *, GUID *, int *))v31->lpVtbl[1].AddRef)(
              v31,
              &v49,
              &v50,
              &v35);
      v7 = v20;
      if ( v20 >= 0 )
      {
        v20 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct IWICBitmapSource *, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))v31->lpVtbl[1].QueryInterface)(
                v31,
                v15,
                &v50,
                0LL,
                0LL,
                0LL,
                0);
        v7 = v20;
        if ( v20 >= 0 )
        {
          v22 = v31;
          v18 = 0LL;
          v31 = 0LL;
          *a3 = v22;
          v7 = 0;
          goto LABEL_48;
        }
        v21 = 205LL;
      }
      else
      {
        v21 = 204LL;
      }
    }
    else
    {
      v21 = 202LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v20);
    v18 = v31;
LABEL_48:
    if ( !v18 )
      goto LABEL_51;
    v31 = 0LL;
LABEL_50:
    ((void (__fastcall *)(struct IWICBitmapSource *))v18->lpVtbl->Release)(v18);
LABEL_51:
    if ( v15 )
      ((void (__fastcall *)(struct IWICBitmapSource *))v15->lpVtbl->Release)(v15);
    goto LABEL_53;
  }
  v7 = -2147483638;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x94,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
    (const char *)0x8000000ALL);
LABEL_61:
  v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
  if ( v26 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v26);
LABEL_63:
  v27 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    ((void (__fastcall *)(struct IDXGIResource *))v27->lpVtbl->Release)(v27);
  }
  return v7;
}
