/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x180004460
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     CloseGlobalizationUserSettingsKey @ 0x18000623C (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004D3CC (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180052B54 (RtlpMuiRegCreateLanguageList.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FB8E4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800FCDF0 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 a3)
{
  NTSTATUS PolicyLanguageSpec; // ebx
  __int64 LanguageList; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE CurrentUserKey; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  CurrentUserKey = 0LL;
  KeyHandle = 0LL;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      ObjectAttributes.RootDirectory = a1;
    }
    else
    {
      PolicyLanguageSpec = OpenGlobalizationUserSettingsKey(0x2000000u, &CurrentUserKey);
      if ( PolicyLanguageSpec < 0 )
        goto LABEL_6;
      ObjectAttributes.RootDirectory = CurrentUserKey;
    }
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PolicyLanguageSpec = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( PolicyLanguageSpec >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
      if ( !PolicyLanguageSpec )
      {
        if ( *(_QWORD *)a3 )
        {
          if ( *(_WORD *)(*(_QWORD *)a3 + 4LL) < *(_WORD *)(*(_QWORD *)a3 + 6LL) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)a3 + 24LL) + 6LL * *(unsigned __int16 *)(*(_QWORD *)a3 + 4LL)) = 0;
            *(_WORD *)(*(_QWORD *)(*(_QWORD *)a3 + 24LL)
                     + 6LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)a3 + 4LL))++
                     + 4) = 0;
            goto LABEL_6;
          }
          LanguageList = RtlpMuiRegGrowLanguageList();
        }
        else
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1LL, 0LL, a2);
        }
        *(_QWORD *)a3 = LanguageList;
        if ( !LanguageList )
        {
          PolicyLanguageSpec = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_6:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( CurrentUserKey )
    CloseGlobalizationUserSettingsKey();
  return (unsigned int)PolicyLanguageSpec;
}
