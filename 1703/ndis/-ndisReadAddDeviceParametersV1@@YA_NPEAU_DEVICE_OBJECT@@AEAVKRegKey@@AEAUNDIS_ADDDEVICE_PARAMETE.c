/*
 * XREFs of ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00DF0F0
 * Callers:
 *     ndisPnPAddDevice @ 0x1C00A9500 (ndisPnPAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B0E30 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00D0F3C (ndisIfCreateInterfaceForiScsi.c)
 *     KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4___ @ 0x1C00DECB0 (KRegKey--QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11b.c)
 */

__int64 __fastcall ndisReadAddDeviceParametersV1(
        struct _DEVICE_OBJECT *a1,
        struct KRegKey *a2,
        struct NDIS_ADDDEVICE_PARAMETERS *a3)
{
  void *m_ptr; // r9
  ULONG v4; // ebx
  HANDLE v8; // rcx
  __int64 v9; // rax
  const wchar_t *v10; // rdx
  int v11; // r15d
  int v12; // edx
  __int16 v13; // r8
  NTSTATUS v14; // eax
  const wchar_t *v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int16 v18; // dx
  NTSTATUS v19; // ecx
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  __int16 v23; // dx
  NTSTATUS v24; // ecx
  const wchar_t *v25; // rcx
  unsigned __int16 v26; // r14
  __int64 v27; // rax
  int v28; // ecx
  __int16 v29; // dx
  NTSTATUS v30; // ecx
  const wchar_t *v31; // rcx
  __int64 v32; // rax
  int v33; // ecx
  __int16 v34; // dx
  NTSTATUS v35; // ecx
  ULONG64 v36; // rax
  const wchar_t *v37; // rcx
  __int64 v38; // rax
  __int16 v39; // di
  unsigned __int8 v40; // bl
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-59h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  ULONG v45; // [rsp+58h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-31h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-1h] BYREF
  int v48; // [rsp+94h] [rbp+3h]
  int v49; // [rsp+98h] [rbp+7h]
  unsigned __int32 v50; // [rsp+9Ch] [rbp+Bh]

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
  }
  if ( v12 >= 0 )
  {
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
    goto LABEL_94;
  KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4___((__int64)&KeyHandle);
  if ( !a3->ExportName._Myptr )
    goto LABEL_93;
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
  }
  if ( v17 < 0 )
    goto LABEL_29;
  v19 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( v19 >= 0 )
  {
    if ( v48 == 4 )
    {
      if ( v49 == 4 )
      {
        v19 = 0;
        a3->Characteristics = v50;
      }
      else
      {
        v19 = -1073741789;
      }
    }
    else
    {
      v19 = -1073741788;
    }
  }
  if ( v19 < 0 )
LABEL_29:
    a3->Characteristics = 0;
  *(_DWORD *)&ValueName.Length = 0;
  v20 = L"*PhysicalMediaType";
  ValueName.Buffer = 0LL;
  v21 = 0x7FFFLL;
  do
  {
    if ( !*v20 )
      break;
    ++v20;
    --v21;
  }
  while ( v21 );
  v22 = -1073741811;
  if ( v21 )
  {
    v22 = 0;
    v23 = 0x7FFF - v21;
  }
  else
  {
    v23 = 0;
  }
  if ( v21 )
  {
    ValueName.Buffer = L"*PhysicalMediaType";
    ValueName.Length = 2 * v23;
    ValueName.MaximumLength = 2 * v23 + 2;
  }
  if ( v22 < 0 )
    goto LABEL_46;
  v24 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( v24 >= 0 )
  {
    if ( v48 == 4 )
    {
      if ( v49 == 4 )
      {
        v24 = 0;
        a3->PhysicalMedium = v50;
      }
      else
      {
        v24 = -1073741789;
      }
    }
    else
    {
      v24 = -1073741788;
    }
  }
  if ( v24 >= 0 )
  {
    a3->IsPhysicalMediumAvailable = 1;
  }
  else
  {
LABEL_46:
    a3->IsPhysicalMediumAvailable = 0;
    a3->PhysicalMedium = NdisPhysicalMediumUnspecified;
  }
  *(_DWORD *)&ValueName.Length = 0;
  v25 = L"*IfType";
  ValueName.Buffer = 0LL;
  v26 = 0;
  v27 = 0x7FFFLL;
  do
  {
    if ( !*v25 )
      break;
    ++v25;
    --v27;
  }
  while ( v27 );
  v28 = -1073741811;
  if ( v27 )
  {
    v28 = 0;
    v29 = 0x7FFF - v27;
  }
  else
  {
    v29 = 0;
  }
  if ( v27 )
  {
    ValueName.Buffer = L"*IfType";
    ValueName.Length = 2 * v29;
    ValueName.MaximumLength = 2 * v29 + 2;
  }
  if ( v28 < 0 )
    goto LABEL_93;
  v30 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  if ( v30 >= 0 )
  {
    if ( v48 == 4 )
    {
      if ( v49 == 4 )
      {
        v26 = v50;
        v30 = 0;
      }
      else
      {
        v30 = -1073741789;
      }
    }
    else
    {
      v30 = -1073741788;
    }
  }
  if ( v30 < 0 )
    goto LABEL_93;
  ResultLength = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v31 = L"NetLuidIndex";
  v32 = 0x7FFFLL;
  do
  {
    if ( !*v31 )
      break;
    ++v31;
    --v32;
  }
  while ( v32 );
  v33 = -1073741811;
  if ( v32 )
  {
    v33 = 0;
    v34 = 0x7FFF - v32;
  }
  else
  {
    v34 = 0;
  }
  if ( v32 )
  {
    ValueName.Buffer = L"NetLuidIndex";
    ValueName.Length = 2 * v34;
    ValueName.MaximumLength = 2 * v34 + 2;
  }
  if ( v33 >= 0 )
  {
    v35 = ZwQueryValueKey(a2->m_ptr, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &v45);
    if ( v35 >= 0 )
    {
      if ( v48 == 4 )
      {
        if ( v49 == 4 )
        {
          v4 = v50;
          v35 = 0;
          ResultLength = v50;
        }
        else
        {
          v35 = -1073741789;
        }
      }
      else
      {
        v35 = -1073741788;
      }
    }
    if ( v35 >= 0 )
      goto LABEL_82;
  }
  if ( (unsigned int)ndisIfCreateInterfaceForiScsi((WCHAR *)a2->m_ptr, a1, v26, (__int128 *)a3, &ResultLength) )
  {
LABEL_93:
    v8 = KeyHandle;
LABEL_94:
    v40 = 0;
    goto LABEL_95;
  }
  v4 = ResultLength;
LABEL_82:
  *((_WORD *)&a3->NetLuid.Info + 3) = v26;
  v36 = a3->NetLuid.Value & 0xFFFF000000000000uLL;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  a3->NetLuid.Value = v36 | ((unsigned __int64)(v4 & 0xFFFFFF) << 24);
  v37 = L"FilterClass";
  v38 = 0x7FFFLL;
  do
  {
    if ( !*v37 )
      break;
    ++v37;
    --v38;
  }
  while ( v38 );
  if ( v38 )
  {
    v11 = 0;
    v39 = 0x7FFF - v38;
  }
  else
  {
    v39 = 0;
  }
  if ( v38 )
  {
    ValueName.Buffer = L"FilterClass";
    ValueName.Length = 2 * v39;
    ValueName.MaximumLength = 2 * v39 + 2;
  }
  if ( v11 >= 0 )
    KRegKey::QueryValueString(&a2->m_ptr, &ValueName, (void **)&a3->LegacyImFilterClass._Myptr);
  v8 = KeyHandle;
  v40 = 1;
LABEL_95:
  if ( v8 )
    ZwClose(v8);
  return v40;
}
