/*
 * XREFs of ?IsAppBeingDebugged@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801C23E4
 * Callers:
 *     _lambda_e749f471b43b5c52416cbe595e41d9dc_::operator() @ 0x18013B678 (_lambda_e749f471b43b5c52416cbe595e41d9dc_--operator().c)
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1801C2594 (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801C26C4 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1801E12A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     IsWPDeveloperAppAllowedPresent @ 0x1801E5A64 (IsWPDeveloperAppAllowedPresent.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsAppBeingDebugged(
        CallerIdentity::ApiPolicyChecker *this,
        unsigned __int16 *a2,
        int *a3)
{
  signed int v4; // ebx
  LONG PackagesByPackageFamily; // eax
  int v6; // eax
  const WCHAR *v7; // rbx
  char v8; // si
  LSTATUS v9; // eax
  signed int v10; // ecx
  UINT32 count; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  UINT32 bufferLength; // [rsp+50h] [rbp-B8h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-B4h] BYREF
  __int64 pvData; // [rsp+58h] [rbp-B0h] BYREF
  PWSTR packageFullNames; // [rsp+60h] [rbp-A8h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp-A0h] BYREF
  PCWSTR packageFamilyName[3]; // [rsp+70h] [rbp-98h] BYREF
  WCHAR buffer[128]; // [rsp+88h] [rbp-80h] BYREF

  *(_DWORD *)a2 = 0;
  packageFamilyName[0] = 0LL;
  packageFamilyName[1] = (PCWSTR)-1LL;
  packageFamilyName[2] = (PCWSTR)-1LL;
  v4 = ParseAppUserModelId((const unsigned __int16 *)this, (unsigned __int16 **)packageFamilyName, 0LL);
  if ( v4 >= 0 )
  {
    count = 1;
    bufferLength = 128;
    PackagesByPackageFamily = GetPackagesByPackageFamily(
                                packageFamilyName[0],
                                &count,
                                &packageFullNames,
                                &bufferLength,
                                buffer);
    v4 = (unsigned __int16)PackagesByPackageFamily | 0x80070000;
    if ( PackagesByPackageFamily <= 0 )
      v4 = PackagesByPackageFamily;
    if ( v4 >= 0 && count == 1 )
    {
      v6 = (unsigned __int8)IsWPDeveloperAppAllowedPresent()
         ? WPDeveloperAppAllowed(packageFullNames, &v13)
         : IsDeveloperModeEnabled(&v13);
      v4 = v6;
      if ( v6 >= 0 )
      {
        if ( v13 )
        {
          v7 = packageFullNames;
          v8 = 0;
          v9 = RegOpenCurrentUser(0x20019u, &phkResult);
          v10 = (unsigned __int16)v9 | 0x80070000;
          if ( v9 <= 0 )
            v10 = v9;
          if ( v10 >= 0 )
          {
            pcbData = 4;
            if ( !RegGetValueW(
                    phkResult,
                    L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\PackageActivate",
                    v7,
                    0x18u,
                    0LL,
                    &pvData,
                    &pcbData) )
              v8 = pvData;
            RegCloseKey(phkResult);
          }
          v4 = 0;
          if ( (v8 & 2) != 0 )
            *(_DWORD *)a2 = 1;
        }
      }
    }
  }
  if ( packageFamilyName[0] )
    CoTaskMemFree((LPVOID)packageFamilyName[0]);
  return (unsigned int)v4;
}
