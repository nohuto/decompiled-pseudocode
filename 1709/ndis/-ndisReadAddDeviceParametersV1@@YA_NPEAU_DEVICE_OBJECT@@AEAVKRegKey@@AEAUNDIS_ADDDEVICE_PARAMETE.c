/*
 * XREFs of ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00E8F74
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00AF8C0 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B1994 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00DB7C8 (ndisIfCreateInterfaceForiScsi.c)
 *     KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4___ @ 0x1C00E8C50 (KRegKey--QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11b.c)
 */

__int64 __fastcall ndisReadAddDeviceParametersV1(
        struct _DEVICE_OBJECT *a1,
        struct KRegKey *a2,
        struct NDIS_ADDDEVICE_PARAMETERS *a3)
{
  void *m_ptr; // r9
  ULONG v4; // ebx
  HANDLE v8; // rcx
  __int64 v9; // rdx
  const wchar_t *v10; // rax
  NTSTATUS v11; // r14d
  int v12; // r8d
  __int16 v13; // ax
  NTSTATUS v14; // eax
  const wchar_t *v15; // rax
  __int64 v16; // rcx
  NTSTATUS v17; // edx
  __int16 v18; // ax
  const wchar_t *v19; // rax
  __int64 v20; // rdx
  NTSTATUS v21; // ecx
  __int16 v22; // ax
  const wchar_t *v23; // rax
  unsigned __int16 v24; // r15
  __int64 v25; // rdx
  NTSTATUS v26; // ecx
  __int16 v27; // ax
  const wchar_t *v28; // rax
  __int64 v29; // rcx
  __int16 v30; // ax
  ULONG64 v31; // rax
  __int64 v32; // rcx
  const wchar_t *v33; // rax
  __int16 v34; // di
  unsigned __int8 v35; // bl
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  ULONG v40; // [rsp+58h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-1h] BYREF
  int v43; // [rsp+94h] [rbp+3h]
  int v44; // [rsp+98h] [rbp+7h]
  unsigned __int32 v45; // [rsp+9Ch] [rbp+Bh]

  m_ptr = a2->m_ptr;
  v4 = 0;
  v8 = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)&ValueName.Length = 0;
  v9 = 0x7FFFLL;
  ValueName.Buffer = 0LL;
  v10 = L"Linkage";
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v9;
  }
  while ( v9 );
  v11 = -1073741811;
  v12 = -1073741811;
  if ( v9 )
  {
    v12 = 0;
    v13 = 0x7FFF - v9;
  }
  else
  {
    v13 = 0;
  }
  if ( v9 )
  {
    ValueName.Buffer = L"Linkage";
    ValueName.Length = 2 * v13;
    ValueName.MaximumLength = 2 * v13 + 2;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &ValueName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = m_ptr;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v14 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    v8 = KeyHandle;
    v12 = v14;
  }
  if ( v12 < 0 )
    goto LABEL_82;
  KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4___((__int64)&KeyHandle);
  if ( !a3->ExportName._Myptr )
    goto LABEL_81;
  *(_DWORD *)&ValueName.Length = 0;
  v15 = L"Characteristics";
  ValueName.Buffer = 0LL;
  v16 = 0x7FFFLL;
  do
  {
    if ( !*v15 )
      break;
    ++v15;
    --v16;
  }
  while ( v16 );
  v17 = -1073741811;
  if ( v16 )
  {
    v17 = 0;
    v18 = 0x7FFF - v16;
  }
  else
  {
    v18 = 0;
  }
  if ( v16 )
  {
    ValueName.Buffer = L"Characteristics";
    ValueName.Length = 2 * v18;
    ValueName.MaximumLength = 2 * v18 + 2;
    v17 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v17 >= 0 )
    {
      if ( v43 == 4 )
      {
        if ( v44 == 4 )
        {
          v17 = 0;
          a3->Characteristics = v45;
        }
        else
        {
          v17 = -1073741789;
        }
      }
      else
      {
        v17 = -1073741788;
      }
    }
  }
  if ( v17 < 0 )
    a3->Characteristics = 0;
  *(_DWORD *)&ValueName.Length = 0;
  v19 = L"*PhysicalMediaType";
  ValueName.Buffer = 0LL;
  v20 = 0x7FFFLL;
  do
  {
    if ( !*v19 )
      break;
    ++v19;
    --v20;
  }
  while ( v20 );
  v21 = -1073741811;
  if ( v20 )
  {
    v21 = 0;
    v22 = 0x7FFF - v20;
  }
  else
  {
    v22 = 0;
  }
  if ( v20 )
  {
    ValueName.Buffer = L"*PhysicalMediaType";
    ValueName.Length = 2 * v22;
    ValueName.MaximumLength = 2 * v22 + 2;
    v21 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v21 >= 0 )
    {
      if ( v43 == 4 )
      {
        if ( v44 == 4 )
        {
          v21 = 0;
          a3->PhysicalMedium = v45;
        }
        else
        {
          v21 = -1073741789;
        }
      }
      else
      {
        v21 = -1073741788;
      }
    }
  }
  if ( v21 >= 0 )
  {
    a3->IsPhysicalMediumAvailable = 1;
  }
  else
  {
    a3->IsPhysicalMediumAvailable = 0;
    a3->PhysicalMedium = NdisPhysicalMediumUnspecified;
  }
  *(_DWORD *)&ValueName.Length = 0;
  v23 = L"*IfType";
  ValueName.Buffer = 0LL;
  v24 = 0;
  v25 = 0x7FFFLL;
  do
  {
    if ( !*v23 )
      break;
    ++v23;
    --v25;
  }
  while ( v25 );
  v26 = -1073741811;
  if ( v25 )
  {
    v26 = 0;
    v27 = 0x7FFF - v25;
  }
  else
  {
    v27 = 0;
  }
  if ( v25 )
  {
    ValueName.Buffer = L"*IfType";
    ValueName.Length = 2 * v27;
    ValueName.MaximumLength = 2 * v27 + 2;
    v26 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    if ( v26 >= 0 )
    {
      if ( v43 == 4 )
      {
        if ( v44 == 4 )
        {
          v24 = v45;
          v26 = 0;
        }
        else
        {
          v26 = -1073741789;
        }
      }
      else
      {
        v26 = -1073741788;
      }
    }
  }
  if ( v26 < 0 )
    goto LABEL_81;
  ResultLength = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v28 = L"NetLuidIndex";
  v29 = 0x7FFFLL;
  do
  {
    if ( !*v28 )
      break;
    ++v28;
    --v29;
  }
  while ( v29 );
  if ( v29 )
  {
    v11 = 0;
    v30 = 0x7FFF - v29;
  }
  else
  {
    v30 = 0;
  }
  if ( v29 )
  {
    ValueName.Buffer = L"NetLuidIndex";
    ValueName.Length = 2 * v30;
    ValueName.MaximumLength = 2 * v30 + 2;
    v11 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v40);
    if ( v11 >= 0 )
    {
      if ( v43 == 4 )
      {
        if ( v44 == 4 )
        {
          v4 = v45;
          v11 = 0;
          ResultLength = v45;
        }
        else
        {
          v11 = -1073741789;
        }
      }
      else
      {
        v11 = -1073741788;
      }
    }
  }
  if ( v11 >= 0 )
    goto LABEL_72;
  if ( (unsigned int)ndisIfCreateInterfaceForiScsi((WCHAR *)a2->m_ptr, a1, v24, (__int128 *)a3, &ResultLength) )
  {
LABEL_81:
    v8 = KeyHandle;
LABEL_82:
    v35 = 0;
    goto LABEL_83;
  }
  v4 = ResultLength;
LABEL_72:
  *((_WORD *)&a3->NetLuid.Info + 3) = v24;
  v31 = a3->NetLuid.Value & 0xFFFF000000000000uLL;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  a3->NetLuid.Value = v31 | ((unsigned __int64)(v4 & 0xFFFFFF) << 24);
  v32 = 0x7FFFLL;
  v33 = L"FilterClass";
  do
  {
    if ( !*v33 )
      break;
    ++v33;
    --v32;
  }
  while ( v32 );
  if ( v32 )
    v34 = 0x7FFF - v32;
  else
    v34 = 0;
  if ( v32 )
  {
    ValueName.Buffer = L"FilterClass";
    ValueName.Length = 2 * v34;
    ValueName.MaximumLength = 2 * v34 + 2;
    KRegKey::QueryValueString(&a2->m_ptr, &ValueName, (void **)&a3->LegacyImFilterClass._Myptr);
  }
  v8 = KeyHandle;
  v35 = 1;
LABEL_83:
  if ( v8 )
    ZwClose(v8);
  return v35;
}
