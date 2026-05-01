/*
 * XREFs of ?LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ @ 0x18013ABF4
 * Callers:
 *     ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x18013AB88 (-RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180084890 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1801C0C08 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall LegacyViewWrapper::LoadQuirksForApp(LegacyViewWrapper *this)
{
  HSTRING v2; // rcx
  const unsigned __int16 *StringRawBuffer; // rax
  unsigned __int64 v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int PackagesByPackageFamily; // eax
  PCWSTR v9; // rax
  UINT32 *bufferLength; // [rsp+20h] [rbp-E0h]
  UINT32 count; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  PWSTR packageFullNames; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR buffer[128]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  packageFullNames = 0LL;
  v2 = (HSTRING)*((_QWORD *)this + 21);
  v12 = 128;
  count = 1;
  StringRawBuffer = WindowsGetStringRawBuffer(v2, 0LL);
  v5 = ParseAppUserModelId(StringRawBuffer, packageFamilyName, v4, 0LL, 0LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x31,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  PackagesByPackageFamily = FindPackagesByPackageFamily(
                              packageFamilyName,
                              0x10u,
                              &count,
                              &packageFullNames,
                              &v12,
                              buffer,
                              0LL);
  if ( PackagesByPackageFamily )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x3A,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
             (const char *)PackagesByPackageFamily);
  if ( count != 1 )
  {
    v6 = -2147221165;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
      (const char *)0x80040153LL);
    return v6;
  }
  v9 = WindowsGetStringRawBuffer(*((HSTRING *)this + 21), 0LL);
  if ( (int)QuirkIsEnabledForPackage(packageFullNames, v9, 851969LL, &v13, bufferLength) >= 0 )
  {
    if ( v13 )
      *((_BYTE *)this + 572) = 1;
  }
  return 0LL;
}
