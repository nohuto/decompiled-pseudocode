/*
 * XREFs of ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00EAEEC
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00B6980 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00BADAC (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00DD388 (ndisIfCreateInterfaceForiScsi.c)
 *     KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4___ @ 0x1C00EA858 (KRegKey--QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11b.c)
 */

__int64 __fastcall ndisReadAddDeviceParametersV1(
        struct _DEVICE_OBJECT *a1,
        struct KRegKey *a2,
        struct NDIS_ADDDEVICE_PARAMETERS *a3)
{
  void *m_ptr; // r10
  unsigned __int8 v4; // bl
  __int64 v7; // rdx
  const wchar_t *v8; // rax
  HANDLE v9; // rcx
  NTSTATUS v10; // r15d
  int v11; // r8d
  __int16 v12; // ax
  NTSTATUS v13; // eax
  const wchar_t *v14; // rax
  __int64 v15; // rdx
  NTSTATUS v16; // ecx
  __int16 v17; // ax
  const wchar_t *v18; // rax
  __int64 v19; // rdx
  NTSTATUS v20; // ecx
  __int16 v21; // ax
  bool v22; // al
  const wchar_t *v23; // rax
  unsigned __int16 v24; // r12
  __int64 v25; // rdx
  NTSTATUS v26; // ecx
  __int16 v27; // ax
  const wchar_t *v28; // rax
  ULONG v29; // edi
  __int64 v30; // rcx
  __int16 v31; // ax
  ULONG64 v32; // rax
  __int64 v33; // rdx
  const wchar_t *v34; // rax
  __int16 v35; // r14
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  ULONG v40; // [rsp+58h] [rbp-39h] BYREF
  _DEVICE_OBJECT *v41; // [rsp+60h] [rbp-31h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-29h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp+7h] BYREF
  int v44; // [rsp+9Ch] [rbp+Bh]
  int v45; // [rsp+A0h] [rbp+Fh]
  unsigned __int32 v46; // [rsp+A4h] [rbp+13h]

  m_ptr = a2->m_ptr;
  v4 = 0;
  v7 = 0x7FFFLL;
  v41 = a1;
  v8 = L"Linkage";
  KeyHandle = 0LL;
  v9 = 0LL;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  v10 = -1073741811;
  v11 = -1073741811;
  if ( v7 )
    v11 = 0;
  v12 = 0x7FFF - v7;
  if ( v7 )
  {
    ValueName.Buffer = L"Linkage";
    ValueName.Length = 2 * v12;
    ValueName.MaximumLength = 2 * v12 + 2;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &ValueName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = m_ptr;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    v9 = KeyHandle;
    v11 = v13;
  }
  if ( v11 >= 0 )
  {
    KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4___((__int64)&KeyHandle);
    if ( !a3->ExportName._Myptr )
      goto LABEL_73;
    *(_DWORD *)&ValueName.Length = 0;
    v14 = L"Characteristics";
    ValueName.Buffer = 0LL;
    v15 = 0x7FFFLL;
    do
    {
      if ( !*v14 )
        break;
      ++v14;
      --v15;
    }
    while ( v15 );
    v16 = -1073741811;
    if ( v15 )
      v16 = 0;
    v17 = 0x7FFF - v15;
    if ( v15 )
    {
      ValueName.Buffer = L"Characteristics";
      ValueName.Length = 2 * v17;
      ValueName.MaximumLength = 2 * v17 + 2;
      v16 = ZwQueryValueKey(
              a2->m_ptr,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x14u,
              &ResultLength);
      if ( v16 >= 0 )
      {
        if ( v44 == 4 )
        {
          if ( v45 == 4 )
          {
            v16 = 0;
            a3->Characteristics = v46;
          }
          else
          {
            v16 = -1073741789;
          }
        }
        else
        {
          v16 = -1073741788;
        }
      }
    }
    if ( v16 < 0 )
      a3->Characteristics = 0;
    *(_DWORD *)&ValueName.Length = 0;
    v18 = L"*PhysicalMediaType";
    ValueName.Buffer = 0LL;
    v19 = 0x7FFFLL;
    do
    {
      if ( !*v18 )
        break;
      ++v18;
      --v19;
    }
    while ( v19 );
    v20 = -1073741811;
    if ( v19 )
      v20 = 0;
    v21 = 0x7FFF - v19;
    if ( v19 )
    {
      ValueName.Buffer = L"*PhysicalMediaType";
      ValueName.Length = 2 * v21;
      ValueName.MaximumLength = 2 * v21 + 2;
      v20 = ZwQueryValueKey(
              a2->m_ptr,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x14u,
              &ResultLength);
      if ( v20 >= 0 )
      {
        if ( v44 == 4 )
        {
          if ( v45 == 4 )
          {
            v20 = 0;
            a3->PhysicalMedium = v46;
          }
          else
          {
            v20 = -1073741789;
          }
        }
        else
        {
          v20 = -1073741788;
        }
      }
    }
    if ( v20 >= 0 )
    {
      v22 = 1;
    }
    else
    {
      a3->PhysicalMedium = NdisPhysicalMediumUnspecified;
      v22 = 0;
    }
    a3->IsPhysicalMediumAvailable = v22;
    v23 = L"*IfType";
    *(_DWORD *)&ValueName.Length = 0;
    v24 = 0;
    ValueName.Buffer = 0LL;
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
      v26 = 0;
    v27 = 0x7FFF - v25;
    if ( v25 )
    {
      ValueName.Buffer = L"*IfType";
      ValueName.Length = 2 * v27;
      ValueName.MaximumLength = 2 * v27 + 2;
      v26 = ZwQueryValueKey(
              a2->m_ptr,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x14u,
              &ResultLength);
      if ( v26 >= 0 )
      {
        if ( v44 == 4 )
        {
          if ( v45 == 4 )
          {
            v24 = v46;
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
      goto LABEL_73;
    ResultLength = 0;
    v28 = L"NetLuidIndex";
    *(_DWORD *)&ValueName.Length = 0;
    v29 = 0;
    ValueName.Buffer = 0LL;
    v30 = 0x7FFFLL;
    do
    {
      if ( !*v28 )
        break;
      ++v28;
      --v30;
    }
    while ( v30 );
    if ( v30 )
      v10 = 0;
    v31 = 0x7FFF - v30;
    if ( v30 )
    {
      ValueName.Buffer = L"NetLuidIndex";
      ValueName.Length = 2 * v31;
      ValueName.MaximumLength = 2 * v31 + 2;
      v10 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v40);
      if ( v10 >= 0 )
      {
        if ( v44 == 4 )
        {
          if ( v45 == 4 )
          {
            v29 = v46;
            v10 = 0;
            ResultLength = v46;
          }
          else
          {
            v10 = -1073741789;
          }
        }
        else
        {
          v10 = -1073741788;
        }
      }
    }
    if ( v10 < 0 )
    {
      if ( (unsigned int)ndisIfCreateInterfaceForiScsi((WCHAR *)a2->m_ptr, v41, v24, (__int128 *)a3, &ResultLength) )
      {
LABEL_73:
        v9 = KeyHandle;
        goto LABEL_74;
      }
      v29 = ResultLength;
    }
    *((_WORD *)&a3->NetLuid.Info + 3) = v24;
    v32 = a3->NetLuid.Value & 0xFFFF000000000000uLL;
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    a3->NetLuid.Value = v32 | ((unsigned __int64)(v29 & 0xFFFFFF) << 24);
    v33 = 0x7FFFLL;
    v34 = L"FilterClass";
    do
    {
      if ( !*v34 )
        break;
      ++v34;
      --v33;
    }
    while ( v33 );
    v35 = 0x7FFF - v33;
    if ( v33 )
    {
      ValueName.Buffer = L"FilterClass";
      ValueName.Length = 2 * v35;
      ValueName.MaximumLength = 2 * v35 + 2;
      KRegKey::QueryValueString(&a2->m_ptr, &ValueName, (void **)&a3->LegacyImFilterClass._Myptr);
    }
    v4 = 1;
    goto LABEL_73;
  }
LABEL_74:
  if ( v9 )
    ZwClose(v9);
  return v4;
}
