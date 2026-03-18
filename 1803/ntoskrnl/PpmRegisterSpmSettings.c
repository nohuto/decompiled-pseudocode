/*
 * XREFs of PpmRegisterSpmSettings @ 0x14076F130
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     PpmEnableProfile @ 0x14064A9B4 (PpmEnableProfile.c)
 *     PpmAllocateQueryTable @ 0x14076EB24 (PpmAllocateQueryTable.c)
 *     PpmProcessSettingsFromQueryTable @ 0x14076EF20 (PpmProcessSettingsFromQueryTable.c)
 */

__int64 __fastcall PpmRegisterSpmSettings(void *a1)
{
  char *QueryTable; // rdi
  __int64 v3; // rcx
  const wchar_t *v4; // rax
  const WCHAR *v5; // rax
  __int64 v6; // rcx
  int RegistryValues; // ebx
  unsigned __int8 i; // si
  _QWORD *v9; // r15
  __int64 v10; // rax
  _WORD *v11; // rdx
  __int64 v12; // rcx
  _WORD *v13; // rax
  const wchar_t *v14; // rax
  NTSTATUS v15; // ebx
  char v16; // bl
  char v17; // r14
  __int64 v18; // rdx
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t *v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  const wchar_t *v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+60h] [rbp-A0h] BYREF
  const WCHAR *v27; // [rsp+68h] [rbp-98h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v29; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v31; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v32; // [rsp+E0h] [rbp-20h] BYREF

  v22 = -1;
  KeyHandle = 0LL;
  QueryTable = 0LL;
  v24 = 0;
  v25 = 0LL;
  v3 = 0x7FFFLL;
  v4 = L"v1";
  while ( *v4 )
  {
    ++v4;
    if ( !--v3 )
      goto LABEL_6;
  }
  v25 = L"v1";
  LOWORD(v24) = 2 * (0x7FFF - v3);
  HIWORD(v24) = v24 + 2;
LABEL_6:
  v26 = 0;
  v5 = L"Default";
  v27 = 0LL;
  v6 = 0x7FFFLL;
  while ( *v5 )
  {
    ++v5;
    if ( !--v6 )
      goto LABEL_11;
  }
  v27 = L"Default";
  LOWORD(v26) = 2 * (0x7FFF - v6);
  HIWORD(v26) = v26 + 2;
LABEL_11:
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    QueryTable = PpmAllocateQueryTable((__int64)&v22);
    if ( !QueryTable )
    {
      RegistryValues = -1073741670;
      goto LABEL_38;
    }
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    for ( i = 0; i < (unsigned __int8)PpmProfileCount; ++i )
    {
      v9 = (_QWORD *)(PpmProfiles + 5456LL * i);
      v10 = *(_QWORD *)((char *)v9 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
      v32 = *(_OWORD *)((char *)v9 + 12);
      if ( !v10 )
        v10 = *((_QWORD *)&v32 + 1) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
      if ( v10 )
      {
        v11 = (_WORD *)*v9;
        v20 = 0;
        v21 = 0LL;
        if ( !v11 )
          goto LABEL_30;
        v12 = 0x7FFFLL;
        v13 = v11;
        while ( *v13 )
        {
          ++v13;
          if ( !--v12 )
            goto LABEL_30;
        }
        v21 = v11;
      }
      else
      {
        v20 = 0;
        v12 = 0x7FFFLL;
        v21 = 0LL;
        v14 = L"VideoBatching";
        while ( *v14 )
        {
          ++v14;
          if ( !--v12 )
            goto LABEL_30;
        }
        v21 = L"VideoBatching";
      }
      LOWORD(v20) = 2 * (0x7FFF - v12);
      HIWORD(v20) = v20 + 2;
LABEL_30:
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v20;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 8u, &ObjectAttributes) >= 0 )
      {
        v31.RootDirectory = Handle;
        v31.Length = 48;
        v31.ObjectName = (PUNICODE_STRING)&v26;
        v31.Attributes = 576;
        *(_OWORD *)&v31.SecurityDescriptor = 0LL;
        v15 = ZwOpenKey(&v29, 8u, &v31);
        ZwClose(Handle);
        if ( v15 >= 0 )
        {
          RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)v29, (__int64)QueryTable, 0LL);
          ZwClose(v29);
          PpmReleaseLock(&PpmPerfPolicyLock);
          if ( RegistryValues < 0 )
            goto LABEL_38;
          v16 = PpmProcessSettingsFromQueryTable(&v32, 0, (__int64)QueryTable);
          v17 = PpmProcessSettingsFromQueryTable(&v32, 1, (__int64)QueryTable);
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
          if ( v16 || v17 )
            PpmEnableProfile((__int64)v9, v18);
        }
      }
    }
    PpmReleaseLock(&PpmPerfPolicyLock);
    PpmProfileStatus |= 2u;
    RegistryValues = 0;
  }
LABEL_38:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( QueryTable )
    ExFreePoolWithTag(QueryTable, 0x704D5053u);
  return (unsigned int)RegistryValues;
}
