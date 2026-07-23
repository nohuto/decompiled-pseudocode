/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38
 * Callers:
 *     InitializeUserOrMachineLangList @ 0x180005C60 (InitializeUserOrMachineLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180005D20 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpLoadUserUIByPolicy @ 0x180004460 (RtlpLoadUserUIByPolicy.c)
 *     CloseGlobalizationUserSettingsKey @ 0x18000623C (CloseGlobalizationUserSettingsKey.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004D3CC (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180051984 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180052B54 (RtlpMuiRegCreateLanguageList.c)
 *     LdrpQueryValueKey @ 0x1800537A0 (LdrpQueryValueKey.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180084BB0 (RtlpLoadMachineUIByPolicy.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800FB850 (RtlpHasMachineUILock.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        __int64 *a6)
{
  _BYTE *v6; // rdi
  BOOL v8; // r15d
  PVOID v10; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  HANDLE v13; // rcx
  int UserUIByPolicy; // ebx
  const WCHAR *v15; // rdx
  int v16; // ecx
  PVOID Heap; // rsi
  int v19; // eax
  __int64 v20; // r8
  __int64 LanguageList; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h]
  _DWORD v23[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE CurrentUserKey; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v26; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _UNICODE_STRING ValueName; // [rsp+80h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES v30; // [rsp+C0h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES v31; // [rsp+F0h] [rbp-10h] BYREF
  _OBJECT_ATTRIBUTES v32; // [rsp+120h] [rbp+20h] BYREF
  __int64 v33; // [rsp+190h] [rbp+90h] BYREF
  int v34; // [rsp+198h] [rbp+98h]
  int v35; // [rsp+1A0h] [rbp+A0h]

  v34 = a2;
  v6 = a5;
  CurrentUserKey = 0LL;
  *(_QWORD *)&v23[1] = 0LL;
  v8 = a3;
  KeyHandle = 0LL;
  v35 = 7;
  v10 = 0LL;
  LODWORD(v33) = 0;
  LanguageList = 0LL;
  LOBYTE(v34) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    UserUIByPolicy = -1073741811;
LABEL_52:
    if ( UserUIByPolicy )
    {
LABEL_22:
      if ( v10 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      goto LABEL_24;
    }
LABEL_17:
    Heap = 0LL;
    if ( v8 || LanguageList && *(_WORD *)(LanguageList + 4) )
    {
LABEL_18:
      if ( !LanguageList )
      {
        LOBYTE(a2) = !v8;
        LanguageList = RtlpMuiRegCreateLanguageList(1LL, a2, a1);
        if ( !LanguageList )
          UserUIByPolicy = -1073741801;
      }
      goto LABEL_21;
    }
    UserUIByPolicy = 0;
    v22 = 7;
    v26 = 0LL;
    v23[0] = 0;
    if ( a1 && v6 )
    {
      RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v26 = 0LL;
      v32.ObjectName = &ValueName;
      v32.Length = 48;
      v32.RootDirectory = 0LL;
      v32.Attributes = 64;
      *(_OWORD *)&v32.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&v26, 0x20019u, &v32) < 0 )
        goto LABEL_39;
      RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
      v19 = LdrpQueryValueKey(v26, &ValueName, (__int64)v23);
      a2 = 3221225524LL;
      if ( v19 == -1073741772 || !v23[0] )
        goto LABEL_39;
      if ( v19 == -2147483643 )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v23[0] + 2));
        if ( !Heap )
        {
          UserUIByPolicy = -1073741801;
          goto LABEL_40;
        }
        UserUIByPolicy = LdrpQueryValueKey(v26, &ValueName, (__int64)v23);
        if ( UserUIByPolicy >= 0 )
        {
          if ( v22 != 7 && v22 != 1 )
          {
            UserUIByPolicy = 0;
LABEL_39:
            *v6 = 1;
            goto LABEL_40;
          }
          v20 = v23[0] >> 1;
          *v6 = 0;
          UserUIByPolicy = RtlpMuiRegAddMultiSzToLangFallbackList(a1, Heap, v20, 8LL, 3, 1, &LanguageList);
        }
      }
      else
      {
        UserUIByPolicy = -1073741772;
      }
    }
    else
    {
      UserUIByPolicy = -1073741811;
    }
LABEL_40:
    if ( v26 )
      NtClose(v26);
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( UserUIByPolicy )
      goto LABEL_21;
    goto LABEL_18;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    UserUIByPolicy = RtlpLoadMachineUIByPolicy(KeyHandle, a1, &LanguageList);
    if ( !UserUIByPolicy && LanguageList )
      goto LABEL_17;
    v13 = KeyHandle;
  }
  else
  {
    v13 = 0LL;
    KeyHandle = 0LL;
  }
  if ( v8 && v13 && (int)RtlpHasMachineUILock(v13) >= 0 )
    v8 = (_BYTE)v34 != 1;
  UserUIByPolicy = OpenGlobalizationUserSettingsKey(0x2000000u, 0LL, v11, v12, &CurrentUserKey);
  if ( UserUIByPolicy < 0 )
  {
LABEL_54:
    *v6 = 1;
    goto LABEL_52;
  }
  if ( v8 )
  {
    UserUIByPolicy = RtlpLoadUserUIByPolicy(CurrentUserKey, a1, (__int64)&LanguageList);
    if ( !UserUIByPolicy && LanguageList )
    {
LABEL_21:
      *a6 = LanguageList;
      goto LABEL_22;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v30.RootDirectory = CurrentUserKey;
    *(_QWORD *)&v23[1] = 0LL;
    v30.ObjectName = &DestinationString;
    v30.Length = 48;
    v30.Attributes = 64;
    *(_OWORD *)&v30.SecurityDescriptor = 0LL;
    UserUIByPolicy = NtOpenKey((PHANDLE)&v23[1], 0x20019u, &v30);
    if ( UserUIByPolicy >= 0 )
    {
      v15 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v15 = L"PreferredUILanguagesPending";
      goto LABEL_15;
    }
    goto LABEL_54;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  v31.RootDirectory = CurrentUserKey;
  *(_QWORD *)&v23[1] = 0LL;
  v31.ObjectName = &DestinationString;
  v31.Length = 48;
  v31.Attributes = 64;
  *(_OWORD *)&v31.SecurityDescriptor = 0LL;
  if ( NtOpenKey((PHANDLE)&v23[1], 0x20019u, &v31) < 0 )
    goto LABEL_16;
  v15 = L"MachinePreferredUILanguages";
LABEL_15:
  RtlInitUnicodeString(&DestinationString, v15);
  UserUIByPolicy = -1073741772;
  v16 = LdrpQueryValueKey(*(HANDLE *)&v23[1], &DestinationString, (__int64)&v33);
  if ( v16 == -1073741772 || !(_DWORD)v33 )
    goto LABEL_16;
  if ( v16 == -2147483643 )
  {
    v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v33 + 2));
    if ( v10 )
    {
      UserUIByPolicy = LdrpQueryValueKey(*(HANDLE *)&v23[1], &DestinationString, (__int64)&v33);
      if ( UserUIByPolicy < 0 )
        goto LABEL_52;
      if ( v35 == 7 || v35 == 1 )
      {
        UserUIByPolicy = RtlpMuiRegAddMultiSzToLangFallbackList(
                           a1,
                           v10,
                           (unsigned int)v33 >> 1,
                           8LL,
                           (unsigned int)!v8 + 2,
                           1,
                           &LanguageList);
        goto LABEL_52;
      }
LABEL_16:
      UserUIByPolicy = 0;
      *v6 = 1;
      goto LABEL_17;
    }
    UserUIByPolicy = -1073741801;
  }
LABEL_24:
  if ( *(_QWORD *)&v23[1] )
  {
    NtClose(*(HANDLE *)&v23[1]);
    *(_QWORD *)&v23[1] = 0LL;
  }
  if ( CurrentUserKey )
  {
    CloseGlobalizationUserSettingsKey((char *)CurrentUserKey);
    CurrentUserKey = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)UserUIByPolicy;
}
