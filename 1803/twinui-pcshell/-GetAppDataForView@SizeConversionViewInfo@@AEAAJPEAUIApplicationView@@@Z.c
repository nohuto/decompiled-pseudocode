/*
 * XREFs of ?GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z @ 0x1802B68FC
 * Callers:
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z @ 0x1802B7324 (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@@Z.c)
 *     ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1802B73CC (-RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIUnknown@@PEAUIApplicationView@@PEAUIIm.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z @ 0x180136EDC (-GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SizeConversionViewInfo::GetAppDataForView(SizeConversionViewInfo *this, struct IApplicationView *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rbx
  int ScaleFactorForWindow; // eax
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h] BYREF
  HWND v17[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v19; // [rsp+88h] [rbp+38h] BYREF
  int v20; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v17[1] = (HWND)-2LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v4 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_e99a73b1_cde0_477b_91b8_e995fa037387,
         &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    v6 = v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v15);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 82LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)v7);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      goto LABEL_26;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 368LL))(v15, &v19);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 86LL;
      goto LABEL_9;
    }
    v7 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 408LL))(a2, &v20);
    v5 = v7;
    if ( v7 < 0 )
    {
      v8 = 92LL;
      goto LABEL_9;
    }
    v9 = v19;
    if ( v20 )
      v9 = 0;
    v19 = v9;
    if ( v9 )
      *((_DWORD *)this + 6) |= 2u;
    v21 = 0LL;
    v10 = v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v10 + 24LL))(
           v10,
           0LL,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           &v21) < 0
      || (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v21 + 32LL))(v21, v17) < 0 )
    {
      v11 = v15;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v11 + 24LL))(
                               v11,
                               5LL,
                               &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
                               &v21);
      v5 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow < 0 )
      {
        v13 = 112LL;
        goto LABEL_22;
      }
      ScaleFactorForWindow = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v21 + 32LL))(v21, v17);
      v5 = ScaleFactorForWindow;
      if ( ScaleFactorForWindow < 0 )
      {
        v13 = 113LL;
        goto LABEL_22;
      }
    }
    ScaleFactorForWindow = GetScaleFactorForWindow(v17[0], (unsigned int *)this + 10);
    v5 = ScaleFactorForWindow;
    if ( ScaleFactorForWindow >= 0 )
    {
      v5 = 0;
      goto LABEL_24;
    }
    v13 = 118LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)ScaleFactorForWindow);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4F,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v4);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v5;
}
