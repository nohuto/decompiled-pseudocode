/*
 * XREFs of ndisCheckNetworkInterfaceDataMismatch @ 0x1C00B8AB0
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001D3E4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z @ 0x1C00B0BF8 (-QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z.c)
 */

__int64 __fastcall ndisCheckNetworkInterfaceDataMismatch(__int64 a1, __int64 a2)
{
  void *v3; // rbx
  char v5; // r12
  NTSTATUS v6; // edi
  const unsigned __int16 *v7; // rdx
  NTSTATUS ValueUshort; // eax
  unsigned __int16 v9; // cx
  const wchar_t *v10; // rax
  __int64 v11; // rcx
  ULONG v12; // eax
  ULONG v13; // r9d
  const wchar_t *v14; // rax
  __int64 v15; // rcx
  unsigned __int8 v17; // cl
  ULONG v18; // edx
  const wchar_t *v19; // rcx
  __int64 v20; // rax
  __int16 v21; // cx
  unsigned __int8 v22; // cl
  const wchar_t *v23; // rcx
  __int64 v24; // rax
  __int16 v25; // cx
  unsigned __int16 v26; // cx
  const wchar_t *v27; // rcx
  __int64 v28; // rax
  __int16 v29; // cx
  const wchar_t *v30; // rcx
  __int64 v31; // rax
  __int16 v32; // r14
  ULONG Length[2]; // [rsp+28h] [rbp-39h]
  ULONG Data; // [rsp+48h] [rbp-19h] BYREF
  _UNICODE_STRING KeyHandle; // [rsp+50h] [rbp-11h] BYREF
  HANDLE DeviceRegKey; // [rsp+60h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+68h] [rbp+7h] BYREF
  int v38; // [rsp+6Ch] [rbp+Bh]
  int v39; // [rsp+70h] [rbp+Fh]
  ULONG v40; // [rsp+74h] [rbp+13h]

  v3 = 0LL;
  *(_QWORD *)&KeyHandle.Length = 0LL;
  v5 = 0;
  v6 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 3856), 2u, 0xC2000000, &DeviceRegKey);
  if ( v6 < 0 )
    goto LABEL_25;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    (void **)&KeyHandle,
    DeviceRegKey);
  ValueUshort = KRegKey::QueryValueUshort((KRegKey *)&KeyHandle, v7, (unsigned __int16 *)&Data);
  v3 = *(void **)&KeyHandle.Length;
  v6 = ValueUshort;
  if ( ValueUshort < 0 )
    goto LABEL_25;
  v9 = *(_WORD *)(a2 + 180);
  if ( (_WORD)Data == v9 )
  {
LABEL_4:
    *(_DWORD *)&KeyHandle.Length = 0;
    v10 = L"*MediaType";
    KeyHandle.Buffer = 0LL;
    v11 = 0x7FFFLL;
    while ( *v10 )
    {
      ++v10;
      if ( !--v11 )
      {
LABEL_96:
        v6 = -1073741811;
        goto LABEL_25;
      }
    }
    KeyHandle.Buffer = L"*MediaType";
    KeyHandle.Length = 2 * (0x7FFF - v11);
    KeyHandle.MaximumLength = KeyHandle.Length + 2;
    v6 = ZwQueryValueKey(v3, &KeyHandle, KeyValuePartialInformation, KeyValueInformation, 0x14u, &Data);
    if ( v6 < 0 )
    {
      v12 = Data;
    }
    else if ( v38 == 4 )
    {
      if ( v39 == 4 )
      {
        v12 = v40;
        v6 = 0;
      }
      else
      {
        v12 = Data;
        v6 = -1073741789;
      }
    }
    else
    {
      v12 = Data;
      v6 = -1073741788;
    }
    if ( v6 < 0 )
      goto LABEL_25;
    v13 = *(_DWORD *)(a2 + 8);
    if ( v12 != v13 )
    {
      v22 = *(_BYTE *)(a1 + 32);
      if ( v22 > 6u || v22 == 6 && *(_BYTE *)(a1 + 33) >= 0x3Cu )
      {
        if ( (unsigned __int8)byte_1C0092614 >= 2u )
        {
          v26 = 187;
LABEL_69:
          Length[0] = v12;
          WPP_SF_qdD(v26, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v13, *(_QWORD *)Length);
        }
LABEL_70:
        v6 = -1073741823;
        goto LABEL_25;
      }
      if ( v5 )
      {
        *(_DWORD *)&KeyHandle.Length = 0;
        v23 = L"*MediaType";
        KeyHandle.Buffer = 0LL;
        v24 = 0x7FFFLL;
        do
        {
          if ( !*v23 )
            break;
          ++v23;
          --v24;
        }
        while ( v24 );
        v6 = -1073741811;
        if ( v24 )
        {
          v6 = 0;
          v25 = 0x7FFF - v24;
        }
        else
        {
          v25 = 0;
        }
        if ( v24 )
        {
          KeyHandle.Buffer = L"*MediaType";
          KeyHandle.Length = 2 * v25;
          KeyHandle.MaximumLength = 2 * v25 + 2;
        }
        if ( v6 < 0 )
          goto LABEL_25;
        Data = v13;
        v6 = ZwSetValueKey(v3, &KeyHandle, 0, 4u, &Data, 4u);
        if ( v6 < 0 )
          goto LABEL_25;
      }
    }
    *(_DWORD *)&KeyHandle.Length = 0;
    v14 = L"*PhysicalMediaType";
    KeyHandle.Buffer = 0LL;
    v15 = 0x7FFFLL;
    while ( *v14 )
    {
      ++v14;
      if ( !--v15 )
        goto LABEL_96;
    }
    KeyHandle.Buffer = L"*PhysicalMediaType";
    KeyHandle.Length = 2 * (0x7FFF - v15);
    KeyHandle.MaximumLength = KeyHandle.Length + 2;
    v6 = ZwQueryValueKey(v3, &KeyHandle, KeyValuePartialInformation, KeyValueInformation, 0x14u, &Data);
    if ( v6 < 0 )
    {
      v12 = Data;
    }
    else if ( v38 == 4 )
    {
      if ( v39 == 4 )
      {
        v12 = v40;
        v6 = 0;
      }
      else
      {
        v12 = Data;
        v6 = -1073741789;
      }
    }
    else
    {
      v12 = Data;
      v6 = -1073741788;
    }
    if ( v6 < 0 )
      goto LABEL_25;
    v13 = *(_DWORD *)(a2 + 12);
    if ( v12 == v13 )
    {
LABEL_24:
      if ( v5 )
      {
        *(_DWORD *)&KeyHandle.Length = 0;
        v30 = L"NdisUpdatedNetworkInterface";
        KeyHandle.Buffer = 0LL;
        v31 = 0x7FFFLL;
        do
        {
          if ( !*v30 )
            break;
          ++v30;
          --v31;
        }
        while ( v31 );
        v6 = -1073741811;
        if ( v31 )
        {
          v6 = 0;
          v32 = 0x7FFF - v31;
        }
        else
        {
          v32 = 0;
        }
        if ( v31 )
        {
          KeyHandle.Buffer = L"NdisUpdatedNetworkInterface";
          KeyHandle.Length = 2 * v32;
          KeyHandle.MaximumLength = 2 * v32 + 2;
        }
        if ( v6 >= 0 )
        {
          Data = 1;
          v6 = ZwSetValueKey(v3, &KeyHandle, 0, 4u, &Data, 4u);
          if ( v6 >= 0 )
            ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
        }
      }
      goto LABEL_25;
    }
    v17 = *(_BYTE *)(a1 + 32);
    if ( v17 <= 6u && (v17 != 6 || *(_BYTE *)(a1 + 33) < 0x3Cu) )
    {
      if ( v5 )
      {
        *(_DWORD *)&KeyHandle.Length = 0;
        v27 = L"*PhysicalMediaType";
        KeyHandle.Buffer = 0LL;
        v28 = 0x7FFFLL;
        do
        {
          if ( !*v27 )
            break;
          ++v27;
          --v28;
        }
        while ( v28 );
        v6 = -1073741811;
        if ( v28 )
        {
          v6 = 0;
          v29 = 0x7FFF - v28;
        }
        else
        {
          v29 = 0;
        }
        if ( v28 )
        {
          KeyHandle.Buffer = L"*PhysicalMediaType";
          KeyHandle.Length = 2 * v29;
          KeyHandle.MaximumLength = 2 * v29 + 2;
        }
        if ( v6 >= 0 )
        {
          Data = v13;
          v6 = ZwSetValueKey(v3, &KeyHandle, 0, 4u, &Data, 4u);
          if ( v6 >= 0 )
            goto LABEL_24;
        }
      }
      goto LABEL_25;
    }
    if ( (unsigned __int8)byte_1C0092614 >= 2u )
    {
      v26 = 188;
      goto LABEL_69;
    }
    goto LABEL_70;
  }
  if ( *(_BYTE *)(a1 + 32) >= 6u )
  {
    if ( (unsigned __int8)byte_1C0092614 >= 2u )
      WPP_SF_qdD(0xBAu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v9, (unsigned __int16)Data);
    v3 = *(void **)&KeyHandle.Length;
    v6 = -1073741823;
    goto LABEL_25;
  }
  v18 = v9;
  v19 = L"*IfType";
  *(_DWORD *)&KeyHandle.Length = 0;
  KeyHandle.Buffer = 0LL;
  v20 = 0x7FFFLL;
  do
  {
    if ( !*v19 )
      break;
    ++v19;
    --v20;
  }
  while ( v20 );
  v6 = -1073741811;
  if ( v20 )
  {
    v6 = 0;
    v21 = 0x7FFF - v20;
  }
  else
  {
    v21 = 0;
  }
  if ( v20 )
  {
    KeyHandle.Buffer = L"*IfType";
    KeyHandle.Length = 2 * v21;
    KeyHandle.MaximumLength = 2 * v21 + 2;
  }
  if ( v6 >= 0 )
  {
    Data = v18;
    v6 = ZwSetValueKey(v3, &KeyHandle, 0, 4u, &Data, 4u);
    if ( v6 >= 0 )
    {
      v5 = 1;
      goto LABEL_4;
    }
  }
LABEL_25:
  if ( v3 )
    ZwClose(v3);
  return (unsigned int)v6;
}
