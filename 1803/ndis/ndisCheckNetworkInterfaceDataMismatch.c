/*
 * XREFs of ndisCheckNetworkInterfaceDataMismatch @ 0x1C00C3820
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C001F110 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C005E0D0 (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     ndisIfOpenInterfacePersistedStorage @ 0x1C00B6F6C (ndisIfOpenInterfacePersistedStorage.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z @ 0x1C00BAC4C (-QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z @ 0x1C00BB128 (-QueryValueUlong@KRegKey@@QEAAJPEBGPEAK@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBGK@Z @ 0x1C00FC814 (-SetValueUlong@KRegKey@@QEAAJPEBGK@Z.c)
 */

__int64 __fastcall ndisCheckNetworkInterfaceDataMismatch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  bool v2; // zf
  unsigned __int16 *v5; // r14
  unsigned __int16 *v6; // r12
  unsigned __int16 *v7; // r13
  int ValueUshort; // ebx
  unsigned __int16 IfType; // bx
  unsigned __int16 v10; // si
  char v11; // si
  unsigned int MediaType; // r9d
  unsigned int v13; // eax
  unsigned __int8 v15; // cl
  unsigned __int16 v16; // cx
  unsigned __int8 MajorNdisVersion; // cl
  int v18; // eax
  __int64 v19; // rcx
  const wchar_t *v20; // rdx
  __int16 v21; // ax
  PVOID Data; // [rsp+28h] [rbp-79h]
  unsigned int v23; // [rsp+48h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-51h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-49h] BYREF
  HANDLE DeviceRegKey; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int16 v27[8]; // [rsp+70h] [rbp-31h] BYREF
  int v28; // [rsp+80h] [rbp-21h]
  wchar_t v29; // [rsp+84h] [rbp-1Dh]
  unsigned __int16 v30[8]; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int16 v31[8]; // [rsp+98h] [rbp-9h] BYREF
  __int128 v32; // [rsp+A8h] [rbp+7h]
  int v33; // [rsp+B8h] [rbp+17h]
  wchar_t v34; // [rsp+BCh] [rbp+1Bh]

  v2 = (a1->Flags & 0x100) == 0;
  Handle = 0LL;
  v28 = *(_DWORD *)L"pe";
  v29 = aMediatype_0[10];
  *(_OWORD *)v30 = *(_OWORD *)L"*IfType";
  v33 = *(_DWORD *)L"pe";
  *(_OWORD *)v27 = *(_OWORD *)L"*MediaType";
  v34 = aPhysicalmediat[18];
  *(_OWORD *)v31 = *(_OWORD *)L"*PhysicalMediaType";
  v32 = *(_OWORD *)L"lMediaType";
  if ( v2 )
  {
    v5 = v30;
    v6 = v27;
    v7 = v31;
    ValueUshort = IoOpenDeviceRegistryKey(a1->PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( ValueUshort < 0 )
      goto LABEL_12;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &Handle,
      DeviceRegKey);
  }
  else
  {
    v5 = &v30[1];
    v6 = &v27[1];
    v7 = &v31[1];
    ValueUshort = ndisIfOpenInterfacePersistedStorage(&a1->InterfaceGuid.Data1, (KRegKey *)&Handle, 1u);
    if ( ValueUshort < 0 )
      goto LABEL_12;
  }
  ValueUshort = KRegKey::QueryValueUshort((KRegKey *)&Handle, v5, (unsigned __int16 *)&v23);
  if ( ValueUshort < 0 )
    goto LABEL_12;
  IfType = a2->IfType;
  v10 = v23;
  if ( (_WORD)v23 == IfType )
  {
    v11 = 0;
  }
  else
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
      if ( ndisCheckDeviceNeedReinstallWithNewIfType(a1, a2) != 1 )
      {
        if ( (unsigned __int8)byte_1C0099614 >= 2u )
        {
          v13 = v10;
          v16 = 202;
          MediaType = IfType;
LABEL_30:
          LODWORD(Data) = v13;
          WPP_SF_qdD(v16, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1, MediaType, Data);
        }
LABEL_31:
        ValueUshort = -1073741823;
        goto LABEL_12;
      }
      if ( (unsigned __int8)byte_1C0099614 >= 3u )
      {
        WPP_SF_qdD(0xC9u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1, IfType, v10);
        IfType = a2->IfType;
      }
    }
    ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, v5, IfType);
    if ( ValueUshort < 0 )
      goto LABEL_12;
    v11 = 1;
  }
  ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, v6, &v23);
  if ( ValueUshort < 0 )
    goto LABEL_12;
  MediaType = a2->MediaType;
  v13 = v23;
  if ( v23 != MediaType )
  {
    MajorNdisVersion = a1->MajorNdisVersion;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x3Cu )
    {
      if ( (unsigned __int8)byte_1C0099614 < 2u )
        goto LABEL_31;
      v16 = 203;
      goto LABEL_30;
    }
    if ( v11 )
    {
      ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, v6, MediaType);
      if ( ValueUshort < 0 )
        goto LABEL_12;
    }
  }
  ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, v7, &v23);
  if ( ValueUshort < 0 )
    goto LABEL_12;
  MediaType = a2->PhysicalMediumType;
  v13 = v23;
  if ( v23 != MediaType )
  {
    v15 = a1->MajorNdisVersion;
    if ( v15 <= 6u && (v15 != 6 || a1->MinorNdisVersion < 0x3Cu) )
    {
      if ( !v11 )
        goto LABEL_12;
      v18 = KRegKey::SetValueUlong((KRegKey *)&Handle, v7, MediaType);
      ValueUshort = v18;
      if ( v18 < 0 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( (unsigned __int8)byte_1C0099614 >= 2u )
    {
      v16 = 204;
      goto LABEL_30;
    }
    goto LABEL_31;
  }
LABEL_11:
  if ( v11 )
  {
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0LL;
    v19 = 0x7FFFLL;
    v20 = L"NdisUpdatedNetworkInterface";
    do
    {
      if ( !*v20 )
        break;
      ++v20;
      --v19;
    }
    while ( v19 );
    ValueUshort = -1073741811;
    if ( v19 )
    {
      ValueUshort = 0;
      v21 = 0x7FFF - v19;
    }
    else
    {
      v21 = 0;
    }
    if ( v19 )
    {
      ValueName.Buffer = L"NdisUpdatedNetworkInterface";
      ValueName.Length = 2 * v21;
      ValueName.MaximumLength = 2 * v21 + 2;
      v23 = 1;
      ValueUshort = ZwSetValueKey(Handle, &ValueName, 0, 4u, &v23, 4u);
    }
    if ( ValueUshort >= 0 )
      ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ValueUshort;
}
