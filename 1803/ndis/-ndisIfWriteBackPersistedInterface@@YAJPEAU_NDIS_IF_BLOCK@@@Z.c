/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00DCB40
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D6D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00DDB78 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x1C0041F44 (WPP_SF__guid_d.c)
 *     ndisIfOpenInterfacePersistedStorage @ 0x1C00B6F6C (ndisIfOpenInterfacePersistedStorage.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  unsigned int v1; // esi
  int v3; // eax
  HANDLE v4; // rbx
  NTSTATUS v5; // edi
  _NDIS_MEDIUM MediaType; // r8d
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  __int16 v9; // ax
  unsigned __int16 v10; // cx
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // edx
  const wchar_t *v12; // rax
  __int64 v13; // rcx
  __int16 v14; // ax
  ULONG DataSize; // edx
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  __int16 v18; // ax
  ULONG Length; // edx
  const wchar_t *v20; // rax
  __int64 v21; // rcx
  __int16 v22; // r14
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+20h] BYREF

  v1 = 0;
  KeyHandle = 0LL;
  v3 = ndisIfOpenInterfacePersistedStorage(&a1->InterfaceGuid.Data1, (KRegKey *)&KeyHandle, 2u);
  v4 = KeyHandle;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_46;
  MediaType = a1->MediaType;
  *(_DWORD *)&ValueName.Length = 0;
  v7 = 0x7FFFLL;
  ValueName.Buffer = 0LL;
  v8 = L"MediaType";
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  v5 = -1073741811;
  if ( v7 )
    v5 = 0;
  v9 = 0x7FFF - v7;
  if ( v7 )
  {
    ValueName.Buffer = L"MediaType";
    ValueName.Length = 2 * v9;
    ValueName.MaximumLength = 2 * v9 + 2;
    LODWORD(KeyHandle) = MediaType;
    v5 = ZwSetValueKey(v4, &ValueName, 0, 4u, &KeyHandle, 4u);
  }
  if ( v5 < 0 )
  {
    if ( (unsigned __int8)byte_1C009961D >= 2u )
    {
      v10 = 178;
LABEL_45:
      WPP_SF__guid_d(v10, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)&a1->InterfaceGuid, v5);
      goto LABEL_46;
    }
    goto LABEL_46;
  }
  PhysicalMediumType = a1->PhysicalMediumType;
  v12 = L"PhysicalMediaType";
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v13 = 0x7FFFLL;
  do
  {
    if ( !*v12 )
      break;
    ++v12;
    --v13;
  }
  while ( v13 );
  v5 = -1073741811;
  if ( v13 )
  {
    v5 = 0;
    v14 = 0x7FFF - v13;
  }
  else
  {
    v14 = 0;
  }
  if ( v13 )
  {
    ValueName.Buffer = L"PhysicalMediaType";
    ValueName.Length = 2 * v14;
    ValueName.MaximumLength = 2 * v14 + 2;
    LODWORD(KeyHandle) = PhysicalMediumType;
    v5 = ZwSetValueKey(v4, &ValueName, 0, 4u, &KeyHandle, 4u);
  }
  if ( v5 < 0 )
  {
    if ( (unsigned __int8)byte_1C009961D >= 2u )
    {
      v10 = 179;
      goto LABEL_45;
    }
LABEL_46:
    v1 = v5;
    goto LABEL_47;
  }
  DataSize = a1->ifPhysAddress.Length;
  v16 = L"CurrentAddress";
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v17 = 0x7FFFLL;
  do
  {
    if ( !*v16 )
      break;
    ++v16;
    --v17;
  }
  while ( v17 );
  v5 = -1073741811;
  if ( v17 )
  {
    v5 = 0;
    v18 = 0x7FFF - v17;
  }
  else
  {
    v18 = 0;
  }
  if ( v17 )
  {
    ValueName.Buffer = L"CurrentAddress";
    ValueName.Length = 2 * v18;
    ValueName.MaximumLength = 2 * v18 + 2;
    v5 = ZwSetValueKey(v4, &ValueName, 0, 3u, a1->ifPhysAddress.Address, DataSize);
  }
  if ( v5 < 0 )
  {
    if ( (unsigned __int8)byte_1C009961D >= 2u )
    {
      v10 = 180;
      goto LABEL_45;
    }
    goto LABEL_46;
  }
  Length = a1->PermanentPhysAddress.Length;
  v20 = L"PermanentAddress";
  *(_DWORD *)&ValueName.Length = 0;
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
  v5 = -1073741811;
  if ( v21 )
  {
    v5 = 0;
    v22 = 0x7FFF - v21;
  }
  else
  {
    v22 = 0;
  }
  if ( v21 )
  {
    ValueName.Buffer = L"PermanentAddress";
    ValueName.Length = 2 * v22;
    ValueName.MaximumLength = 2 * v22 + 2;
    v5 = ZwSetValueKey(v4, &ValueName, 0, 3u, a1->PermanentPhysAddress.Address, Length);
  }
  if ( v5 < 0 )
  {
    if ( (unsigned __int8)byte_1C009961D >= 2u )
    {
      v10 = 181;
      goto LABEL_45;
    }
    goto LABEL_46;
  }
LABEL_47:
  if ( v4 )
    ZwClose(v4);
  return v1;
}
