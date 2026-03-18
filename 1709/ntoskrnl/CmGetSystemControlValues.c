/*
 * XREFs of CmGetSystemControlValues @ 0x140836B78
 * Callers:
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     HvInitializeHive @ 0x140470A40 (HvInitializeHive.c)
 *     CmpInitSecurityCache @ 0x14047115C (CmpInitSecurityCache.c)
 *     CmpFindSubKeyByName @ 0x1405BC614 (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x1405BC7FC (CmpFindControlSet.c)
 *     CmpWalkPath @ 0x1405BCBD4 (CmpWalkPath.c)
 *     CmpFindValueByName @ 0x1405BCD40 (CmpFindValueByName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140835FC0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetBootValueData @ 0x140837138 (CmpGetBootValueData.c)
 *     CmpConvertLangId @ 0x1408373F4 (CmpConvertLangId.c)
 */

__int64 __fastcall CmGetSystemControlValues(_DWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int ControlSet; // eax
  __int64 result; // rax
  ULONG_PTR v6; // rbx
  unsigned int SubKeyByName; // r15d
  __int64 v8; // rcx
  __int64 *i; // rbx
  unsigned int v10; // edi
  unsigned int v11; // eax
  int v12; // esi
  unsigned int ValueByName; // esi
  unsigned int v14; // eax
  __int16 v15; // cx
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rsi
  _DWORD *v19; // rcx
  int v20; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+6Ch] [rbp-9Ch] BYREF
  _DWORD v22[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v23[2]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v25[44]; // [rsp+98h] [rbp-70h] BYREF

  v23[1] = 0;
  v23[0] = -1;
  v22[0] = -1;
  v22[1] = 0;
  memset(&v25[1], 0, 0x158uLL);
  memset(&CmControlHive, 0, 0x17A8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  v25[0] = &CmControlHive;
  qword_14087FFA8 = (__int64)v25;
  v2 = HvInitializeHive((ULONG_PTR)&CmControlHive, 4u, 1, 0, a1, 0LL, 1, 0LL, 0LL, 0LL, &v20, 0LL);
  if ( v2 < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, v2);
  qword_14087FFA8 = 0LL;
  v3 = a1[9];
  RtlInitUnicodeString(&DestinationString, L"current");
  ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v3, (int)&DestinationString, &v20);
  if ( ControlSet == -1 )
    KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
  result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_14087FF78)(&CmControlHive, ControlSet, v22);
  v6 = result;
  if ( result )
  {
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((__int64)&CmControlHive, v6, (__int64)&DestinationString);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v6, (ULONG_PTR)&DestinationString);
    ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_14087FF80)(&CmControlHive, v22);
    if ( CmControlVector[0] )
    {
      for ( i = qword_1408717B8; *(i - 3); i += 5 )
      {
        v10 = -1;
        v11 = CmpWalkPath((__int64)&CmControlHive, SubKeyByName, (const WCHAR *)*(i - 3));
        if ( v11 != -1 )
        {
          result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_14087FF78)(&CmControlHive, v11, v22);
          v12 = result;
          if ( !result )
            return result;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)*(i - 2));
          ValueByName = CmpFindValueByName((int)&CmControlHive, v12, (int)&DestinationString);
          ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_14087FF80)(&CmControlHive, v22);
          if ( ValueByName != -1 )
          {
            v16 = 4;
            if ( *i )
              v16 = *(_DWORD *)*i;
            result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_14087FF78)(
                       &CmControlHive,
                       ValueByName,
                       v23);
            v18 = result;
            if ( !result )
              return result;
            v10 = *(_DWORD *)(result + 4);
            if ( v10 >= 0x80000000 )
              v10 += 0x80000000;
            if ( v16 < v10 )
              v10 = v16;
            if ( v10 && !(unsigned __int8)CmpGetBootValueData(v17, result, *(i - 1), v10) )
              return ((__int64 (__fastcall *)(ULONG_PTR *, _DWORD *))qword_14087FF80)(&CmControlHive, v23);
            v19 = (_DWORD *)i[1];
            if ( v19 )
              *v19 = *(_DWORD *)(v18 + 12);
            ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_14087FF80)(&CmControlHive, v23);
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
      *(_WORD *)((char *)&NlsMbCodePageTag + 3) = CmpConvertLangId(
                                                    CmInstallUILanguageId,
                                                    (unsigned int)CmInstallUILanguageIdLength);
    v14 = CmSelectQualifiedInstallLanguage(v8, SubKeyByName, &v21, *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3));
    if ( v14 )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, v14, 0LL, 0LL);
      v15 = PsDefaultSystemLocaleId;
    }
    else
    {
      v15 = *(_WORD *)((char *)&NlsMbCodePageTag + 3);
      if ( *(unsigned __int16 *)((char *)&NlsMbCodePageTag + 3) == v21 )
        goto LABEL_19;
      v15 = v21;
      CmInstallUILanguageFallbackToOOBm = 1;
    }
    *(_WORD *)((char *)&NlsMbCodePageTag + 3) = v15;
LABEL_19:
    result = (unsigned int)PsDefaultSystemLocaleId;
    PsDefaultThreadLocaleId = PsDefaultSystemLocaleId;
    PsDefaultUILanguageId = v15;
    if ( !PsMachineUILanguageId )
      PsMachineUILanguageId = v15;
  }
  return result;
}
