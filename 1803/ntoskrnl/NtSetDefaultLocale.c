/*
 * XREFs of NtSetDefaultLocale @ 0x14060E4A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     CloseGlobalizationUserSettingsKey @ 0x14016A2DC (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x14016A300 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     ExCheckFullProcessInformationAccess @ 0x140540610 (ExCheckFullProcessInformationAccess.c)
 *     ExpValidateLocale @ 0x1407BC5D4 (ExpValidateLocale.c)
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
  unsigned int i; // r10d
  unsigned __int16 v12; // cx
  unsigned int v13; // eax
  _KPROCESS *Process; // rdx
  unsigned __int64 v15; // rcx
  LCID v16; // edx
  __int64 v17; // r10
  _WORD *v18; // rcx
  _WORD *v19; // rcx
  _WORD *v20; // r8
  unsigned int v21; // eax
  __int16 v22; // ax
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v24; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v27; // [rsp+60h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _WORD KeyValueInformation[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v30; // [rsp+ACh] [rbp-5Ch]
  unsigned int v31; // [rsp+B0h] [rbp-58h]
  LCID v32; // [rsp+B4h] [rbp-54h] BYREF

  v24 = 0LL;
  if ( UserProfile )
  {
    result = OpenGlobalizationUserSettingsKey(UserProfile, 3u, v2, v3, &v24);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Locale");
    RtlInitUnicodeString(&v27, L"Control Panel\\International");
    v7 = v24;
    v8 = 1600;
  }
  else
  {
    result = ExCheckFullProcessInformationAccess(KeGetCurrentThread()->PreviousMode);
    if ( result < 0 )
      return result;
    RtlInitUnicodeString(&DestinationString, L"Default");
    RtlInitUnicodeString(&v27, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
    v7 = 0LL;
    v8 = 576;
    v24 = 0LL;
  }
  ObjectAttributes.RootDirectory = v7;
  ObjectAttributes.ObjectName = &v27;
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
    v19 = v18 - 1;
    if ( v19 >= KeyValueInformation )
    {
      do
      {
        v20 = v19 - 1;
        v21 = v16 & 0xF;
        if ( v21 > 9 )
          v22 = v21 + 55;
        else
          v22 = v21 + 48;
        *v19-- = v22;
        v16 >>= 4;
      }
      while ( v20 >= KeyValueInformation );
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
      if ( v30 == 1 )
      {
        v10 = &v32;
        for ( i = 0; i < v31; DefaultLocaleId = v13 | (16 * DefaultLocaleId) )
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
          i += 2;
        }
      }
      else if ( v30 == 4 && v31 == 4 )
      {
        DefaultLocaleId = v32;
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
  if ( v24 )
    CloseGlobalizationUserSettingsKey((char *)v24);
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
