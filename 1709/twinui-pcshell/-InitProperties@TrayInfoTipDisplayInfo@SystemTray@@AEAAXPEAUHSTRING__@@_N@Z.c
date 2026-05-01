/*
 * XREFs of ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x1801BD02C
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x1801BCB50 (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x1801BD3E0 (--$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SystemTray::TrayInfoTipDisplayInfo::InitProperties(
        SystemTray::TrayInfoTipDisplayInfo *this,
        HSTRING a2,
        unsigned __int8 a3)
{
  HRESULT Instance; // eax
  LPVOID v7; // rbx
  __int64 v8; // rdi
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  unsigned int v13; // eax
  UINT32 v14; // edx
  HRESULT v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-B8h]
  LPVOID ppv[2]; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING string; // [rsp+78h] [rbp-88h] BYREF
  WCHAR sourceString[264]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+1D8h]

  ppv[1] = (LPVOID)-2LL;
  v24 = 0;
  ppv[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_561df0d0_72eb_46f1_8d0a_5597dbbe6578,
               0LL,
               4u,
               &GUID_63672622_6d18_42ce_9cef_7a0118cd4dfe,
               ppv);
  if ( Instance < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)Instance);
    __debugbreak();
  }
  v23 = 0LL;
  v7 = ppv[0];
  v8 = *(_QWORD *)ppv[0];
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( (*(int (__fastcall **)(LPVOID, PCWSTR, _QWORD, WCHAR *, int))(v8 + 24))(
         v7,
         StringRawBuffer,
         a3,
         sourceString,
         260) >= 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( sourceString[v10] );
    v11 = -1;
    if ( v10 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException(v10 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0);
      __debugbreak();
    }
    v12 = v10;
    v13 = v10 + 1;
    if ( v12 + 1 >= v12 )
      v11 = v12 + 1;
    if ( v13 < v12 )
    {
      Microsoft::WRL::Details::RaiseException(v13 < v12 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
      __debugbreak();
    }
    v14 = v11 - 1;
    if ( v12 < v11 )
      v14 = v12;
    v15 = WindowsCreateStringReference(sourceString, v14, &hstringHeader, &string);
    if ( v15 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
    PropertySetAssembler::InsertHString<wchar_t const *>((PropertySetAssembler *)&v23);
  }
  v16 = 0LL;
  v22 = 0LL;
  v24 = 2;
  v17 = v23;
  if ( (_QWORD)v23 )
  {
    v18 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v23)(
            v23,
            &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
            &v22);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xF1,
        (__int64)"internal\\shellcommonshell\\inc\\propertysetassembler.h",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
    v17 = v23;
    v16 = v22;
  }
  if ( v16 )
  {
    v19 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v20 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v16 + 72LL))(v16, (char *)this + 96);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xBC,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
    v17 = v23;
    v16 = v22;
  }
  if ( v16 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = v23;
  }
  v21 = *((_QWORD *)&v23 + 1);
  if ( *((_QWORD *)&v23 + 1) )
  {
    *((_QWORD *)&v23 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v17 = v23;
  }
  if ( v17 )
  {
    *(_QWORD *)&v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
}
