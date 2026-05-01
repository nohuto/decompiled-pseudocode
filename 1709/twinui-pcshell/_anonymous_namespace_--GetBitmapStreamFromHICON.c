/*
 * XREFs of _anonymous_namespace_::GetBitmapStreamFromHICON @ 0x1801BC51C
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BCB50 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GUID@@U3@W4EncodingOptions@@PEAPEAUIStream@@@Z @ 0x1800E6E34 (-GetStreamOfWICBitmapSourceWithOptions@@YAJPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@AEBU_GU.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall anonymous_namespace_::GetBitmapStreamFromHICON(_QWORD *a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // eax
  int v6; // eax
  int StreamOfWICBitmapSourceWithOptions; // eax
  IStream *v8; // rbx
  int v9; // eax
  __int64 v10; // rax
  IStream *v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-20h] BYREF
  GUID v15; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  LPVOID ppv; // [rsp+80h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+28h] BYREF

  v14[1] = -2LL;
  ppv = 0LL;
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x1A,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v4);
  v18 = 0LL;
  v5 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 176LL))(ppv, a2, &v18);
  if ( v5 >= 0 )
  {
    v12 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v18)(
           v18,
           &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
           v14);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v6);
    v12 = 0LL;
    v15 = GUID_WICPixelFormat32bppBGRA;
    StreamOfWICBitmapSourceWithOptions = GetStreamOfWICBitmapSourceWithOptions(
                                           ppv,
                                           v14[0],
                                           (__int64)&GUID_ContainerFormatPng,
                                           (__int128 *)&v15,
                                           0,
                                           &v12);
    if ( StreamOfWICBitmapSourceWithOptions < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)StreamOfWICBitmapSourceWithOptions);
    if ( v14[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
    v13 = 0LL;
    v8 = v12;
    v9 = CreateRandomAccessStreamOverStream(v12, 0LL, &GUID_905a0fe1_bc53_11df_8c49_001e4fc686da, &v13);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = v13;
    v13 = 0LL;
    *a1 = v10;
    if ( v8 )
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v5);
    *a1 = 0LL;
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return a1;
}
