/*
 * XREFs of NtSetDefaultLocale @ 0x140587354
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x14014B8A8 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x14014B8CC (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     ExpCheckFullProcessInformationAccess @ 0x14045A830 (ExpCheckFullProcessInformationAccess.c)
 *     MmSetSessionLocaleId @ 0x140587530 (MmSetSessionLocaleId.c)
 *     ExpValidateLocale @ 0x1407163DC (ExpValidateLocale.c)
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
  LCID v14; // edx
  _WORD *v15; // rax
  _WORD *i; // rax
  unsigned int v17; // ecx
  __int16 v18; // cx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v20; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v23; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _WORD KeyValueInformation[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v26; // [rsp+ACh] [rbp-5Ch]
  unsigned int v27; // [rsp+B0h] [rbp-58h]
  LCID v28; // [rsp+B4h] [rbp-54h] BYREF

  v20 = 0LL;
  if ( UserProfile )
  {
    result = OpenGlobalizationUserSettingsKey(UserProfile, 3u, v2, v3, &v20);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Locale");
    RtlInitUnicodeString(&v23, L"Control Panel\\International");
    v7 = v20;
    v8 = 1600;
  }
  else
  {
    result = ExpCheckFullProcessInformationAccess(KeGetCurrentThread()->PreviousMode);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Default");
    RtlInitUnicodeString(&v23, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
    v7 = 0LL;
    v8 = 576;
    v20 = 0LL;
  }
  ObjectAttributes.RootDirectory = v7;
  ObjectAttributes.ObjectName = &v23;
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
    v14 = DefaultLocaleId;
    v15 = &KeyValueInformation[UserProfile != 0 ? 8 : 4];
    *v15 = 0;
    for ( i = v15 - 1; i >= KeyValueInformation; v14 >>= 4 )
    {
      v17 = v14 & 0xF;
      if ( v17 > 9 )
        v18 = v17 + 55;
      else
        v18 = v17 + 48;
      *i-- = v18;
    }
    v9 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, KeyValueInformation, 2 * (UserProfile != 0 ? 8 : 4) + 2);
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
      if ( v26 == 1 )
      {
        v10 = &v28;
        for ( j = 0; j < v27; DefaultLocaleId = v13 | (16 * DefaultLocaleId) )
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
      else if ( v26 == 4 && v27 == 4 )
      {
        DefaultLocaleId = v28;
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
  if ( v20 )
    CloseGlobalizationUserSettingsKey((char *)v20);
  if ( v9 >= 0 )
  {
    if ( UserProfile )
      MmSetSessionLocaleId(DefaultLocaleId);
    else
      PsDefaultSystemLocaleId = DefaultLocaleId;
  }
  return v9;
}
