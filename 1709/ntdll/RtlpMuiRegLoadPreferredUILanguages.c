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
  unsigned __int64 v10; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  HANDLE v13; // rcx
  int UserUIByPolicy; // ebx
  const WCHAR *v15; // rdx
  int v16; // ecx
  unsigned __int64 Heap; // rsi
  int v19; // eax
  __int64 v20; // r8
  __int64 LanguageList; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v25; // [rsp+58h] [rbp-A8h] BYREF
  char *v26; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v27; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING v29; // [rsp+80h] [rbp-80h] BYREF
  int v30; // [rsp+90h] [rbp-70h] BYREF
  __int64 v31; // [rsp+98h] [rbp-68h]
  UNICODE_STRING *p_DestinationString; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+C0h] [rbp-40h] BYREF
  char *v36; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  __int128 v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-10h] BYREF
  char *v41; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING *v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+120h] [rbp+20h] BYREF
  __int64 v46; // [rsp+128h] [rbp+28h]
  UNICODE_STRING *v47; // [rsp+130h] [rbp+30h]
  int v48; // [rsp+138h] [rbp+38h]
  __int128 v49; // [rsp+140h] [rbp+40h]
  unsigned int v50; // [rsp+190h] [rbp+90h] BYREF
  int v51; // [rsp+198h] [rbp+98h] BYREF
  int v52; // [rsp+1A0h] [rbp+A0h] BYREF

  v51 = a2;
  v6 = a5;
  v26 = 0LL;
  Handle = 0LL;
  v8 = a3;
  v25 = 0LL;
  v52 = 7;
  v10 = 0LL;
  v50 = 0;
  LanguageList = 0LL;
  LOBYTE(v51) = 0;
  if ( !a1 || !a5 || !a6 )
  {
    UserUIByPolicy = -1073741811;
LABEL_52:
    if ( UserUIByPolicy )
    {
LABEL_22:
      if ( v10 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
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
    v27 = 0LL;
    v23 = 0;
    if ( a1 && v6 )
    {
      RtlInitUnicodeString(&v29, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v27 = 0LL;
      v47 = &v29;
      v45 = 48;
      v46 = 0LL;
      v48 = 64;
      v49 = 0LL;
      if ( (int)NtOpenKey(&v27, 131097LL, &v45) < 0 )
        goto LABEL_39;
      RtlInitUnicodeString(&v29, L"PreferredUILanguages");
      v19 = LdrpQueryValueKey(v27, &v29, &v22, 0LL, &v23);
      a2 = 3221225524LL;
      if ( v19 == -1073741772 || !v23 )
        goto LABEL_39;
      if ( v19 == -2147483643 )
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v23 + 2);
        if ( !Heap )
        {
          UserUIByPolicy = -1073741801;
          goto LABEL_40;
        }
        UserUIByPolicy = LdrpQueryValueKey(v27, &v29, &v22, Heap, &v23);
        if ( UserUIByPolicy >= 0 )
        {
          if ( v22 != 7 && v22 != 1 )
          {
            UserUIByPolicy = 0;
LABEL_39:
            *v6 = 1;
            goto LABEL_40;
          }
          v20 = v23 >> 1;
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
    if ( v27 )
      NtClose(v27);
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    if ( UserUIByPolicy )
      goto LABEL_21;
    goto LABEL_18;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  v25 = 0LL;
  p_DestinationString = &DestinationString;
  v30 = 48;
  v31 = 0LL;
  v33 = 64;
  v34 = 0LL;
  if ( (int)NtOpenKey(&v25, 131097LL, &v30) >= 0 )
  {
    UserUIByPolicy = RtlpLoadMachineUIByPolicy(v25, a1, &LanguageList);
    if ( !UserUIByPolicy && LanguageList )
      goto LABEL_17;
    v13 = v25;
  }
  else
  {
    v13 = 0LL;
    v25 = 0LL;
  }
  if ( v8 && v13 && (int)RtlpHasMachineUILock(v13, &v51) >= 0 )
    v8 = (_BYTE)v51 != 1;
  UserUIByPolicy = OpenGlobalizationUserSettingsKey(0x2000000u, 0, v11, v12, (__int64)&v26);
  if ( UserUIByPolicy < 0 )
  {
LABEL_54:
    *v6 = 1;
    goto LABEL_52;
  }
  if ( v8 )
  {
    UserUIByPolicy = RtlpLoadUserUIByPolicy((__int64)v26, a1, (__int64)&LanguageList);
    if ( !UserUIByPolicy && LanguageList )
    {
LABEL_21:
      *a6 = LanguageList;
      goto LABEL_22;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    v36 = v26;
    Handle = 0LL;
    v37 = &DestinationString;
    v35 = 48;
    v38 = 64;
    v39 = 0LL;
    UserUIByPolicy = NtOpenKey(&Handle, 131097LL, &v35);
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
  v41 = v26;
  Handle = 0LL;
  v42 = &DestinationString;
  v40 = 48;
  v43 = 64;
  v44 = 0LL;
  if ( (int)NtOpenKey(&Handle, 131097LL, &v40) < 0 )
    goto LABEL_16;
  v15 = L"MachinePreferredUILanguages";
LABEL_15:
  RtlInitUnicodeString(&DestinationString, v15);
  UserUIByPolicy = -1073741772;
  v16 = LdrpQueryValueKey(Handle, &DestinationString, &v52, 0LL, &v50);
  if ( v16 == -1073741772 || !v50 )
    goto LABEL_16;
  if ( v16 == -2147483643 )
  {
    v10 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v50 + 2);
    if ( v10 )
    {
      UserUIByPolicy = LdrpQueryValueKey(Handle, &DestinationString, &v52, v10, &v50);
      if ( UserUIByPolicy < 0 )
        goto LABEL_52;
      if ( v52 == 7 || v52 == 1 )
      {
        UserUIByPolicy = RtlpMuiRegAddMultiSzToLangFallbackList(
                           a1,
                           v10,
                           v50 >> 1,
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
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v26 )
  {
    CloseGlobalizationUserSettingsKey(v26);
    v26 = 0LL;
  }
  if ( v25 )
    NtClose(v25);
  return (unsigned int)UserUIByPolicy;
}
