/*
 * XREFs of ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0039B48
 * Callers:
 *     ?ValidateDynamicRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z @ 0x1C003A1E4 (-ValidateDynamicRequirements@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     RtlStringCchCopyNExW @ 0x1C003A388 (RtlStringCchCopyNExW.c)
 *     KappxParsePackageFullNameFromToken @ 0x1C01C12A0 (KappxParsePackageFullNameFromToken.c)
 */

__int64 __fastcall DefaultMultiScreenConfig::DisjointExperienceConfig::RegQueryControllerInstallKey(
        NTSTRSAFE_PWSTR pszDest,
        unsigned __int16 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  _OWORD *v6; // rax
  const wchar_t *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  NTSTATUS v16; // ebx
  ULONG v17; // edi
  NTSTATUS v18; // eax
  size_t v19; // rdx
  size_t *ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG v22; // [rsp+30h] [rbp-D0h]
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING String1; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v25; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v26; // [rsp+68h] [rbp-98h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+78h] [rbp-88h] BYREF
  _BYTE *v29; // [rsp+80h] [rbp-80h]
  _WORD v30[4]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t *v31; // [rsp+90h] [rbp-70h]
  UNICODE_STRING String2; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING v33; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE KeyInformation[12]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v36; // [rsp+FCh] [rbp-4h]
  wchar_t pszSrc[264]; // [rsp+100h] [rbp+0h] BYREF
  __int128 v38; // [rsp+310h] [rbp+210h] BYREF
  __int64 v39; // [rsp+320h] [rbp+220h]
  int v40; // [rsp+328h] [rbp+228h]
  _OWORD v41[4]; // [rsp+330h] [rbp+230h] BYREF
  __int64 v42; // [rsp+370h] [rbp+270h]
  wchar_t v43; // [rsp+378h] [rbp+278h]
  _BYTE v44[256]; // [rsp+380h] [rbp+280h] BYREF
  char v45; // [rsp+480h] [rbp+380h] BYREF
  char v46; // [rsp+690h] [rbp+590h] BYREF

  *pszDest = 0;
  *a3 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v6 = v44;
  v7 = L"\\Registry\\Machine\\Software\\Classes\\Local Settings\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\P"
        "ackageRepository\\Packages";
  v8 = 2LL;
  do
  {
    v9 = *((_OWORD *)v7 + 1);
    *v6 = *(_OWORD *)v7;
    v10 = *((_OWORD *)v7 + 2);
    v6[1] = v9;
    v11 = *((_OWORD *)v7 + 3);
    v6[2] = v10;
    v12 = *((_OWORD *)v7 + 4);
    v6[3] = v11;
    v13 = *((_OWORD *)v7 + 5);
    v6[4] = v12;
    v14 = *((_OWORD *)v7 + 6);
    v6[5] = v13;
    v15 = *((_OWORD *)v7 + 7);
    v7 += 64;
    v6[6] = v14;
    v6 += 8;
    *(v6 - 1) = v15;
    --v8;
  }
  while ( v8 );
  v28 = 16777470;
  v29 = v44;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v28;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v16 >= 0 )
  {
    v17 = 0;
    v41[0] = *(_OWORD *)L"42EB8343-F0BF-4208-BCC6-52F5E308E81B";
    v43 = a42eb8343F0bf42[36];
    v41[2] = *(_OWORD *)L"08-BCC6-52F5E308E81B";
    v41[1] = *(_OWORD *)L"-F0BF-4208-BCC6-52F5E308E81B";
    String2.Buffer = (wchar_t *)v41;
    v42 = *(_QWORD *)L"E81B";
    v40 = *(_DWORD *)L"e";
    v41[3] = *(_OWORD *)L"52F5E308E81B";
    v38 = *(_OWORD *)L"8wekyb3d8bbwe";
    *(_DWORD *)&String2.Length = 4849736;
    v39 = *(_QWORD *)L"8bbwe";
    *(_DWORD *)&v33.Length = 1835034;
    v33.Buffer = (wchar_t *)&v38;
    while ( 1 )
    {
      v18 = ZwEnumerateKey(KeyHandle, v17, KeyBasicInformation, KeyInformation, 0x220u, &v26);
      v16 = v18;
      if ( v18 == -2147483622 )
        break;
      if ( v18 >= 0 )
      {
        v30[0] = v36;
        v30[1] = v36;
        *(_DWORD *)&String1.Length = 34078720;
        v31 = pszSrc;
        String1.Buffer = (wchar_t *)&v45;
        v25.Buffer = (wchar_t *)&v46;
        *(_DWORD *)&v25.Length = 34078720;
        v16 = KappxParsePackageFullNameFromToken(v30, &String1, &v25);
        if ( v16 >= 0 && !RtlCompareUnicodeString(&String1, &String2, 1u) && !RtlCompareUnicodeString(&v25, &v33, 1u) )
        {
          v16 = RtlStringCchCopyNExW(pszDest, v19, pszSrc, (unsigned __int64)v36 >> 1, &ppszDestEnd, ResultLength, v22);
          if ( v16 >= 0 )
          {
            *a3 = ppszDestEnd - pszDest;
            goto LABEL_15;
          }
        }
      }
      ++v17;
      if ( v16 < 0 )
        goto LABEL_15;
    }
    v16 = 0;
LABEL_15:
    ZwClose(KeyHandle);
  }
  return (unsigned int)v16;
}
