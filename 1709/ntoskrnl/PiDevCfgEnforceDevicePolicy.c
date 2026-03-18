/*
 * XREFs of PiDevCfgEnforceDevicePolicy @ 0x1405A498C
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x1406C7280 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x1406C72F4 (PiDevCfgQueryPolicyStringList.c)
 */

__int64 __fastcall PiDevCfgEnforceDevicePolicy(__int64 a1, __int64 a2, const wchar_t *a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  bool v9; // r12
  int v10; // eax
  wchar_t *v11; // r15
  int v12; // eax
  wchar_t *v13; // r13
  const wchar_t *v14; // rbx
  __int64 v15; // rax
  const wchar_t *v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  wchar_t *v19; // r14
  int v20; // eax
  wchar_t *v21; // rsi
  const wchar_t **v22; // rax
  __int64 v23; // rcx
  char v24; // r15
  char v25; // r13
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rbx
  __int64 v28; // rax
  const wchar_t *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[8]; // [rsp+20h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  __int64 v35; // [rsp+38h] [rbp-41h] BYREF
  const wchar_t **v36; // [rsp+40h] [rbp-39h] BYREF
  int v37; // [rsp+48h] [rbp-31h] BYREF
  const wchar_t *v38; // [rsp+50h] [rbp-29h]
  wchar_t *v39; // [rsp+58h] [rbp-21h] BYREF
  wchar_t *v40; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  char v43; // [rsp+F8h] [rbp+7Fh]

  v37 = 8913030;
  Handle = 0LL;
  v38 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\DeviceInstall";
  v39 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v37;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 == -1073741772 )
  {
    if ( !PnpBootMode )
    {
LABEL_3:
      v7 = 0;
      goto LABEL_4;
    }
    v37 = 6422624;
    v38 = L"\\Registry\\Machine\\System\\DriverDatabase\\Policies";
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v37;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v6 < 0 )
    goto LABEL_3;
  v37 = 1703960;
  v38 = L"Restrictions";
  ObjectAttributes.RootDirectory = KeyHandle;
  Handle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v37;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_3;
  v43 = 0;
  v9 = 0;
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyRemovableDevices", v32) >= 0 && v32[0] )
    v9 = (*(_BYTE *)(a1 + 560) & 0x10) != 0;
  v10 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceClasses", &v39);
  v11 = v39;
  if ( v10 < 0 )
    v11 = 0LL;
  v39 = v11;
  v12 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceClasses", &v40);
  v13 = v40;
  if ( v12 < 0 )
    v13 = 0LL;
  v40 = v13;
  if ( a3 )
  {
    if ( v11 )
    {
      v14 = v11;
      if ( *v11 )
      {
        while ( wcsicmp(v14, a3) )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v14[v15] );
          v14 += v15 + 1;
          if ( !*v14 )
            goto LABEL_30;
        }
        v43 = 1;
      }
    }
    else if ( !v13 )
    {
      goto LABEL_38;
    }
LABEL_30:
    if ( v13 )
    {
      v16 = v13;
      if ( *v13 )
      {
        while ( wcsicmp(v16, a3) )
        {
          v17 = -1LL;
          do
            ++v17;
          while ( v16[v17] );
          v16 += v17 + 1;
          if ( !*v16 )
            goto LABEL_38;
        }
        v9 = 1;
      }
    }
  }
LABEL_38:
  v18 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceIDs", &v35);
  v19 = (wchar_t *)v35;
  if ( v18 < 0 )
    v19 = 0LL;
  v20 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceIDs", &v36);
  v21 = (wchar_t *)v36;
  if ( v20 < 0 )
    v21 = 0LL;
  if ( v19 || v21 )
  {
    v22 = (const wchar_t **)(a2 + 32);
    v23 = 2LL;
    v36 = (const wchar_t **)(a2 + 32);
    v24 = 0;
    v35 = 2LL;
    v25 = 0;
    do
    {
      v26 = *v22;
      if ( *v22 && *v26 )
      {
        do
        {
          if ( v19 )
          {
            if ( !v25 )
            {
              v27 = v19;
              if ( *v19 )
              {
                while ( wcsicmp(v27, v26) )
                {
                  v28 = -1LL;
                  do
                    ++v28;
                  while ( v27[v28] );
                  v27 += v28 + 1;
                  if ( !*v27 )
                    goto LABEL_56;
                }
                v25 = 1;
                v43 = 1;
              }
            }
          }
LABEL_56:
          if ( v21 )
          {
            if ( !v24 )
            {
              v29 = v21;
              if ( *v21 )
              {
                while ( wcsicmp(v29, v26) )
                {
                  v30 = -1LL;
                  do
                    ++v30;
                  while ( v29[v30] );
                  v29 += v30 + 1;
                  if ( !*v29 )
                    goto LABEL_65;
                }
                v24 = 1;
                v9 = 1;
              }
            }
          }
LABEL_65:
          v31 = -1LL;
          do
            ++v31;
          while ( v26[v31] );
          v26 += v31 + 1;
        }
        while ( *v26 );
        v22 = v36;
        v23 = v35;
      }
      v22 += 2;
      --v23;
      v36 = v22;
      v35 = v23;
    }
    while ( v23 );
    v11 = v39;
    v13 = v40;
  }
  if ( v9 || !v43 && (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyUnspecified", v32) >= 0 && v32[0] && (a3 || !v11) )
    v7 = -1073740959;
  else
    v7 = 0;
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
LABEL_4:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v7;
}
