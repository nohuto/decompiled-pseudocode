/*
 * XREFs of NtSetDefaultLocale @ 0x1405DD0F4
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x140153840 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x140153864 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ExCheckFullProcessInformationAccess @ 0x14044C8B0 (ExCheckFullProcessInformationAccess.c)
 *     ExpValidateLocale @ 0x140755B08 (ExpValidateLocale.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  __int64 v2; // r8
  __int64 v3; // r9
  NTSTATUS result; // eax
  HANDLE v7; // rax
  ULONG v8; // ecx
  int v9; // ebx
  LCID *v10; // rdx
  unsigned int j; // r11d
  unsigned __int16 v12; // cx
  unsigned int v13; // eax
  _KPROCESS *Process; // rdx
  unsigned __int64 v15; // rcx
  LCID v16; // edx
  __int64 v17; // r10
  _WORD *v18; // rcx
  _WORD *i; // rcx
  unsigned int v20; // eax
  __int16 v21; // ax
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v23; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v26; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _WORD KeyValueInformation[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v29; // [rsp+ACh] [rbp-5Ch]
  unsigned int v30; // [rsp+B0h] [rbp-58h]
  LCID v31; // [rsp+B4h] [rbp-54h] BYREF

  v23 = 0LL;
  if ( UserProfile )
  {
    result = OpenGlobalizationUserSettingsKey(UserProfile, 3u, v2, v3, &v23);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Locale");
    RtlInitUnicodeString(&v26, L"Control Panel\\International");
    v7 = v23;
    v8 = 1600;
  }
  else
  {
    result = ExCheckFullProcessInformationAccess(KeGetCurrentThread()->PreviousMode);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Default");
    RtlInitUnicodeString(&v26, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
    v7 = 0LL;
    v8 = 576;
    v23 = 0LL;
  }
  ObjectAttributes.RootDirectory = v7;
  ObjectAttributes.ObjectName = &v26;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( DefaultLocaleId )
  {
    v9 = ExpValidateLocale(DefaultLocaleId);
    if ( v9 < 0 )
      goto LABEL_17;
    v9 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
    if ( v9 < 0 )
      goto LABEL_17;
    v16 = DefaultLocaleId;
    v17 = UserProfile != 0 ? 8 : 4;
    v18 = &KeyValueInformation[v17];
    *v18 = 0;
    for ( i = v18 - 1; i >= KeyValueInformation; v16 >>= 4 )
    {
      v20 = v16 & 0xF;
      if ( v20 > 9 )
        v21 = v20 + 55;
      else
        v21 = v20 + 48;
      *i-- = v21;
    }
    v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, KeyValueInformation, 2 * v17 + 2);
    goto LABEL_16;
  }
  v9 = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
  if ( v9 >= 0 )
  {
    v9 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x100u,
           &ResultLength);
    if ( v9 >= 0 )
    {
      if ( v29 == 1 )
      {
        v10 = &v31;
        for ( j = 0; j < v30; DefaultLocaleId = v13 | (16 * DefaultLocaleId) )
        {
          v12 = *(_WORD *)v10;
          v10 = (LCID *)((char *)v10 + 2);
          if ( (unsigned __int16)(v12 - 48) > 9u )
          {
            if ( (unsigned __int16)(v12 - 65) <= 5u )
            {
              v13 = v12 - 55;
            }
            else
            {
              if ( (unsigned __int16)(v12 - 97) > 5u )
                break;
              v13 = v12 - 87;
            }
          }
          else
          {
            v13 = v12 - 48;
          }
          if ( v13 >= 0x10 )
            break;
          j += 2;
        }
      }
      else if ( v29 == 4 && v30 == 4 )
      {
        DefaultLocaleId = v31;
      }
      else
      {
        v9 = -1073741823;
      }
    }
LABEL_16:
    ZwClose(KeyHandle);
  }
LABEL_17:
  if ( v23 )
    CloseGlobalizationUserSettingsKey((char *)v23);
  if ( v9 >= 0 )
  {
    if ( UserProfile )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v15 = Process[1].ActiveProcessors.Bitmap[2];
      if ( !v15 || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        PsDefaultThreadLocaleId = DefaultLocaleId;
      else
        *(_DWORD *)(v15 + 112) = DefaultLocaleId;
    }
    else
    {
      PsDefaultSystemLocaleId = DefaultLocaleId;
    }
  }
  return v9;
}
