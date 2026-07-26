/*
 * XREFs of ?ReadAdditionalNetworkInterfaceParameters@BindRegistry@Ndis@@YAJAEAVKRegKey@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C00C7230
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003DD30 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C7114 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z @ 0x1C00B1AD0 (-QueryValueBoolean@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAEW4BooleanDisposition@1@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::ReadAdditionalNetworkInterfaceParameters(
        KRegKey *this,
        struct KRegKey *a2,
        struct _NDIS_INTERFACE_ADDITIONAL_PROPERTIES *a3)
{
  const wchar_t *v4; // rax
  __int64 v6; // r8
  NTSTATUS v7; // ebx
  const wchar_t *v9; // rax
  __int64 v10; // rdx
  NTSTATUS v11; // ecx
  __int16 v12; // ax
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  __int16 v15; // ax
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  __int16 v18; // di
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-28h] BYREF
  int v22; // [rsp+4Ch] [rbp-24h]
  int v23; // [rsp+50h] [rbp-20h]
  int v24; // [rsp+54h] [rbp-1Ch]

  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0LL;
  v4 = L"IfConnectorPresent";
  v6 = 0x7FFFLL;
  while ( *v4 )
  {
    ++v4;
    if ( !--v6 )
      return (unsigned int)-1073741811;
  }
  ValueName.Buffer = L"IfConnectorPresent";
  ValueName.Length = 2 * (0x7FFF - v6);
  ValueName.MaximumLength = ValueName.Length + 2;
  v7 = KRegKey::QueryValueBoolean(this, &ValueName, (unsigned __int8 *)a2, FailIfNotFound);
  if ( v7 < 0 )
    return (unsigned int)v7;
  *(_DWORD *)&ValueName.Length = 0;
  v9 = L"AccessType";
  ValueName.Buffer = 0LL;
  v10 = 0x7FFFLL;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v10;
  }
  while ( v10 );
  v7 = -1073741811;
  v11 = -1073741811;
  if ( v10 )
  {
    v11 = 0;
    v12 = 0x7FFF - v10;
  }
  else
  {
    v12 = 0;
  }
  if ( v10 )
  {
    ValueName.Buffer = L"AccessType";
    ValueName.Length = 2 * v12;
    ValueName.MaximumLength = 2 * v12 + 2;
    v11 = ZwQueryValueKey(
            this->m_ptr,
            &ValueName,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x14u,
            &ResultLength);
    if ( v11 >= 0 )
    {
      if ( v22 == 4 )
      {
        if ( v23 == 4 )
        {
          v11 = 0;
          HIDWORD(a2->m_ptr) = v24;
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
  {
    *(_DWORD *)&ValueName.Length = 0;
    v13 = L"ConnectionType";
    ValueName.Buffer = 0LL;
    v14 = 0x7FFFLL;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v14;
    }
    while ( v14 );
    v11 = -1073741811;
    if ( v14 )
    {
      v11 = 0;
      v15 = 0x7FFF - v14;
    }
    else
    {
      v15 = 0;
    }
    if ( v14 )
    {
      ValueName.Buffer = L"ConnectionType";
      ValueName.Length = 2 * v15;
      ValueName.MaximumLength = 2 * v15 + 2;
      v11 = ZwQueryValueKey(
              this->m_ptr,
              &ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x14u,
              &ResultLength);
      if ( v11 >= 0 )
      {
        if ( v22 == 4 )
        {
          if ( v23 == 4 )
          {
            v11 = 0;
            LODWORD(a2[1].m_ptr) = v24;
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
    {
      *(_DWORD *)&ValueName.Length = 0;
      v16 = L"DirectionType";
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
      if ( v17 )
      {
        v7 = 0;
        v18 = 0x7FFF - v17;
      }
      else
      {
        v18 = 0;
      }
      if ( v17 )
      {
        ValueName.Buffer = L"DirectionType";
        ValueName.Length = 2 * v18;
        ValueName.MaximumLength = 2 * v18 + 2;
        v7 = ZwQueryValueKey(
               this->m_ptr,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
        if ( v7 >= 0 )
        {
          if ( v22 == 4 )
          {
            if ( v23 == 4 )
            {
              v7 = 0;
              HIDWORD(a2[1].m_ptr) = v24;
            }
            else
            {
              return (unsigned int)-1073741789;
            }
          }
          else
          {
            return (unsigned int)-1073741788;
          }
        }
      }
      return (unsigned int)v7;
    }
  }
  return (unsigned int)v11;
}
