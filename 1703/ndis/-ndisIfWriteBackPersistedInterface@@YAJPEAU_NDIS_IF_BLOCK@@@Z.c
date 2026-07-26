/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00D070C
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D500 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00D1614 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x1C00441AC (WPP_SF__guid_d.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00BCB94 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  unsigned int v1; // esi
  int v3; // eax
  HANDLE v4; // rbx
  NTSTATUS v5; // edi
  __int64 DataSize; // rdx
  __int64 v7; // rax
  const wchar_t *v8; // rcx
  __int16 v9; // cx
  unsigned __int16 v10; // cx
  const wchar_t *v11; // rcx
  __int64 v12; // rax
  __int16 v13; // cx
  const wchar_t *v14; // rcx
  __int64 v15; // rax
  __int16 v16; // cx
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  __int16 v19; // r14
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+20h] BYREF

  v1 = 0;
  KeyHandle = 0LL;
  v3 = ndisIfOpenInterfacePersistedStorage(&a1->InterfaceGuid, (struct KRegKey *)&KeyHandle, 2u);
  v4 = KeyHandle;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_51;
  DataSize = (unsigned int)a1->MediaType;
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
  {
    v5 = 0;
    v9 = 0x7FFF - v7;
  }
  else
  {
    v9 = 0;
  }
  if ( v7 )
  {
    ValueName.Buffer = L"MediaType";
    ValueName.Length = 2 * v9;
    ValueName.MaximumLength = 2 * v9 + 2;
  }
  if ( v5 < 0 || (LODWORD(KeyHandle) = DataSize, v5 = ZwSetValueKey(v4, &ValueName, 0, 4u, &KeyHandle, 4u), v5 < 0) )
  {
    if ( (unsigned __int8)byte_1C009261D >= 2u )
    {
      v10 = 178;
LABEL_50:
      WPP_SF__guid_d(v10, DataSize, (__int64)&a1->InterfaceGuid, v5);
      goto LABEL_51;
    }
    goto LABEL_51;
  }
  DataSize = (unsigned int)a1->PhysicalMediumType;
  v11 = L"PhysicalMediaType";
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v12 = 0x7FFFLL;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v12;
  }
  while ( v12 );
  v5 = -1073741811;
  if ( v12 )
  {
    v5 = 0;
    v13 = 0x7FFF - v12;
  }
  else
  {
    v13 = 0;
  }
  if ( v12 )
  {
    ValueName.Buffer = L"PhysicalMediaType";
    ValueName.Length = 2 * v13;
    ValueName.MaximumLength = 2 * v13 + 2;
  }
  if ( v5 < 0 || (LODWORD(KeyHandle) = DataSize, v5 = ZwSetValueKey(v4, &ValueName, 0, 4u, &KeyHandle, 4u), v5 < 0) )
  {
    if ( (unsigned __int8)byte_1C009261D >= 2u )
    {
      v10 = 179;
      goto LABEL_50;
    }
LABEL_51:
    v1 = v5;
    goto LABEL_52;
  }
  DataSize = a1->ifPhysAddress.Length;
  v14 = L"CurrentAddress";
  *(_DWORD *)&ValueName.Length = 0;
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
  v5 = -1073741811;
  if ( v15 )
  {
    v5 = 0;
    v16 = 0x7FFF - v15;
  }
  else
  {
    v16 = 0;
  }
  if ( v15 )
  {
    ValueName.Buffer = L"CurrentAddress";
    ValueName.Length = 2 * v16;
    ValueName.MaximumLength = 2 * v16 + 2;
  }
  if ( v5 < 0 || (v5 = ZwSetValueKey(v4, &ValueName, 0, 3u, a1->ifPhysAddress.Address, DataSize), v5 < 0) )
  {
    if ( (unsigned __int8)byte_1C009261D >= 2u )
    {
      v10 = 180;
      goto LABEL_50;
    }
    goto LABEL_51;
  }
  DataSize = a1->PermanentPhysAddress.Length;
  v17 = L"PermanentAddress";
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v18 = 0x7FFFLL;
  do
  {
    if ( !*v17 )
      break;
    ++v17;
    --v18;
  }
  while ( v18 );
  v5 = -1073741811;
  if ( v18 )
  {
    v5 = 0;
    v19 = 0x7FFF - v18;
  }
  else
  {
    v19 = 0;
  }
  if ( v18 )
  {
    ValueName.Buffer = L"PermanentAddress";
    ValueName.Length = 2 * v19;
    ValueName.MaximumLength = 2 * v19 + 2;
  }
  if ( v5 < 0 || (v5 = ZwSetValueKey(v4, &ValueName, 0, 3u, a1->PermanentPhysAddress.Address, DataSize), v5 < 0) )
  {
    if ( (unsigned __int8)byte_1C009261D >= 2u )
    {
      v10 = 181;
      goto LABEL_50;
    }
    goto LABEL_51;
  }
LABEL_52:
  if ( v4 )
    ZwClose(v4);
  return v1;
}
