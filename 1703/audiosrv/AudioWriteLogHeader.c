/*
 * XREFs of AudioWriteLogHeader @ 0x1800375F0
 * Callers:
 *     ServiceMain @ 0x1800345F0 (ServiceMain.c)
 * Callees:
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_DDDSSS @ 0x1800BF454 (WPP_SF_DDDSSS.c)
 *     WPP_SF_ddddddd @ 0x1800BF594 (WPP_SF_ddddddd.c)
 */

int __fastcall AudioWriteLogHeader(__int64 a1)
{
  const wchar_t *v1; // rdx
  int result; // eax
  const wchar_t *v3; // rax
  DWORD LastError; // eax
  DWORD nSize; // [rsp+58h] [rbp-B0h] BYREF
  _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-A8h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+78h] [rbp-90h] BYREF
  char v8; // [rsp+190h] [rbp+88h]
  WCHAR Buffer[16]; // [rsp+198h] [rbp+90h] BYREF

  nSize = 16;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_483a8a3c775031d59c363eb705791695_Traceguids, a1);
  }
  VersionInformation.dwOSVersionInfoSize = 284;
  if ( GetVersionExW(&VersionInformation) )
  {
    if ( v8 < 0 )
    {
      v1 = L"DC";
    }
    else
    {
      v1 = L"AS";
      if ( (v8 & 2) == 0 )
        v1 = &word_1800EAD74;
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v3 = L" - ";
      if ( !VersionInformation.szCSDVersion[0] )
        v3 = &word_1800EAD74;
      WPP_SF_DDDSSS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (unsigned int)VersionInformation.szCSDVersion,
        (unsigned int)&word_1800EAD74,
        VersionInformation.dwMajorVersion,
        VersionInformation.dwMinorVersion,
        VersionInformation.dwBuildNumber,
        (__int64)v3,
        (__int64)VersionInformation.szCSDVersion,
        (__int64)v1);
    }
  }
  else if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
         && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LastError = GetLastError();
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_483a8a3c775031d59c363eb705791695_Traceguids, LastError);
  }
  GetSystemTime(&SystemTime);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
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
    && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    return WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_483a8a3c775031d59c363eb705791695_Traceguids, Buffer);
  }
  return result;
}
