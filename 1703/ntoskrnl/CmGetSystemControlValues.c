/*
 * XREFs of CmGetSystemControlValues @ 0x14080E8DC
 * Callers:
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x14043A5B8 (CmpInitSecurityCache.c)
 *     CmpFindSubKeyByName @ 0x1405B67BC (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x1405B68E4 (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x1405B6CBC (CmpWalkPath.c)
 *     CmpFindValueByName @ 0x1405B6E28 (CmpFindValueByName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14080DD28 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetBootValueData @ 0x14080EE9C (CmpGetBootValueData.c)
 *     CmpConvertLangId @ 0x1408100D8 (CmpConvertLangId.c)
 */

__int64 __fastcall CmGetSystemControlValues(_DWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int ControlSet; // eax
  __int64 result; // rax
  __int64 v6; // rbx
  unsigned int SubKeyByName; // r15d
  __int64 v8; // rcx
  __int64 *i; // rbx
  unsigned int v10; // edi
  unsigned int v11; // eax
  int v12; // esi
  unsigned int ValueByName; // esi
  unsigned __int16 v14; // ax
  __int16 v15; // cx
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rsi
  _DWORD *v19; // rcx
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD v21[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v22[2]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v24[44]; // [rsp+98h] [rbp-70h] BYREF

  v22[1] = 0;
  v22[0] = -1;
  v21[0] = -1;
  v21[1] = 0;
  memset(&v24[1], 0, 0x158uLL);
  memset(&CmControlHive, 0, 0x17A8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  v24[0] = &CmControlHive;
  qword_1407C8F18 = (__int64)v24;
  v2 = HvInitializeHive((ULONG_PTR)&CmControlHive, 4u, 1, 0, a1, 0LL, 1, 0LL, 0LL, 0LL, &v20, 0LL);
  if ( v2 < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, v2);
  qword_1407C8F18 = 0LL;
  v3 = a1[9];
  RtlInitUnicodeString(&DestinationString, L"current");
  ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v3, (int)&DestinationString, &v20);
  if ( ControlSet == -1 )
    KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
  result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_1407C8EE8)(&CmControlHive, ControlSet, v21);
  v6 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((__int64)&CmControlHive, v6, (__int64)&DestinationString);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v6, (ULONG_PTR)&DestinationString);
    ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_1407C8EF0)(&CmControlHive, v21);
    if ( CmControlVector[0] )
    {
      for ( i = qword_14083A358; *(i - 3); i += 5 )
      {
        v10 = -1;
        v11 = CmpWalkPath((__int64)&CmControlHive, SubKeyByName, (const WCHAR *)*(i - 3));
        if ( v11 != -1 )
        {
          result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_1407C8EE8)(&CmControlHive, v11, v21);
          v12 = result;
          if ( !result )
            return result;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)*(i - 2));
          ValueByName = CmpFindValueByName((int)&CmControlHive, v12, (int)&DestinationString);
          ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_1407C8EF0)(&CmControlHive, v21);
          if ( ValueByName != -1 )
          {
            v16 = 4;
            if ( *i )
              v16 = *(_DWORD *)*i;
            result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_1407C8EE8)(
                       &CmControlHive,
                       ValueByName,
                       v22);
            v18 = result;
            if ( !result )
              return result;
            v10 = *(_DWORD *)(result + 4);
            if ( v10 >= 0x80000000 )
              v10 += 0x80000000;
            if ( v16 < v10 )
              v10 = v16;
            if ( v10 && !(unsigned __int8)CmpGetBootValueData(v17, result, *(i - 1), v10) )
              return ((__int64 (__fastcall *)(ULONG_PTR *, _DWORD *))qword_1407C8EF0)(&CmControlHive, v22);
            v19 = (_DWORD *)i[1];
            if ( v19 )
              *v19 = *(_DWORD *)(v18 + 12);
            ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_1407C8EF0)(&CmControlHive, v22);
          }
        }
        if ( *i )
          *(_DWORD *)*i = v10;
      }
    }
    if ( CmDefaultLanguageIdType == 1 )
      PsDefaultSystemLocaleId = (unsigned __int16)CmpConvertLangId(
                                                    CmDefaultLanguageId,
                                                    (unsigned int)CmDefaultLanguageIdLength);
    else
      PsDefaultSystemLocaleId = 1033;
    if ( CmInstallUILanguageIdType == 1 )
    {
      v14 = CmpConvertLangId(CmInstallUILanguageId, (unsigned int)CmInstallUILanguageIdLength);
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v14;
    }
    else
    {
      v14 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
    }
    result = CmSelectQualifiedInstallLanguage(v8, SubKeyByName, (_DWORD *)&v20 + 1, v14);
    if ( (_DWORD)result )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, (unsigned int)result, 0LL, 0LL);
      v15 = PsDefaultSystemLocaleId;
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = PsDefaultSystemLocaleId;
    }
    else
    {
      v15 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
      if ( *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3) != HIDWORD(v20) )
      {
        v15 = WORD2(v20);
        *(_WORD *)((char *)&NlsMbCodePageTag + 3) = WORD2(v20);
        CmInstallUILanguageFallbackToOOBm = 1;
      }
    }
    PsDefaultThreadLocaleId = PsDefaultSystemLocaleId;
    PsDefaultUILanguageId = v15;
    if ( !PsMachineUILanguageId )
      PsMachineUILanguageId = v15;
  }
  return result;
}
