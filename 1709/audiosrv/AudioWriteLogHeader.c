/*
 * XREFs of AudioWriteLogHeader @ 0x1800B8C0C
 * Callers:
 *     ServiceMain @ 0x1800ABF40 (ServiceMain.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_DDDSSS @ 0x1800B8E48 (WPP_SF_DDDSSS.c)
 *     WPP_SF_ddddddd @ 0x1800B8F88 (WPP_SF_ddddddd.c)
 */

int __fastcall AudioWriteLogHeader(const wchar_t *a1)
{
  const wchar_t *v1; // rdx
  const wchar_t *v2; // rax
  DWORD LastError; // eax
  int result; // eax
  DWORD nSize; // [rsp+58h] [rbp-B0h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-A8h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+78h] [rbp-90h] BYREF
  char v8; // [rsp+190h] [rbp+88h]
  WCHAR Buffer[16]; // [rsp+198h] [rbp+90h] BYREF

  nSize = 16;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_483a8a3c775031d59c363eb705791695_Traceguids, a1);
  }
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) )
  {
    if ( v8 >= 0 )
    {
      v1 = L"AS";
      if ( (v8 & 2) == 0 )
        v1 = &word_180104218;
    }
    else
    {
      v1 = L"DC";
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v2 = L" - ";
      if ( !VersionInformation.szCSDVersion[0] )
        v2 = &word_180104218;
      WPP_SF_DDDSSS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (unsigned int)VersionInformation.szCSDVersion,
        (unsigned int)&word_180104218,
        VersionInformation.dwMajorVersion,
        VersionInformation.dwMinorVersion,
        VersionInformation.dwBuildNumber,
        (__int64)v2,
        (__int64)VersionInformation.szCSDVersion,
        (__int64)v1);
    }
  }
  else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xCu,
      (__int64)&WPP_483a8a3c775031d59c363eb705791695_Traceguids,
      LastError);
  }
  GetSystemTime(&SystemTime);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ddddddd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      SystemTime.wSecond,
      SystemTime.wMinute,
      SystemTime.wYear,
      SystemTime.wMonth,
      SystemTime.wDay,
      SystemTime.wHour,
      SystemTime.wMinute,
      SystemTime.wSecond,
      SystemTime.wMilliseconds,
      nSize);
  }
  result = GetComputerNameExW(ComputerNameNetBIOS, Buffer, &nSize);
  if ( result
    && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    return WPP_SF_S(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             0xEu,
             (__int64)&WPP_483a8a3c775031d59c363eb705791695_Traceguids,
             Buffer);
  }
  return result;
}
