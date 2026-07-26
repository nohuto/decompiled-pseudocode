/*
 * XREFs of ndisCheckNetworkInterfaceDataMismatch @ 0x1C00B0330
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C00040CC (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C0004100 (--1KRegKey@@QEAA@XZ.c)
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0024910 (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00B14CC (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z @ 0x1C00B18D8 (-QueryValueUshort@KRegKey@@QEAAJPEBGPEAG@Z.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z @ 0x1C00F9C50 (-SetValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@K@Z.c)
 */

__int64 __fastcall ndisCheckNetworkInterfaceDataMismatch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  char v4; // r15
  NTSTATUS v5; // ebx
  const unsigned __int16 *v6; // rdx
  unsigned __int16 IfType; // bx
  unsigned __int16 v8; // di
  unsigned int v9; // r8d
  const wchar_t *v10; // rax
  __int64 v11; // rcx
  __int16 v12; // ax
  unsigned int v13; // eax
  unsigned __int16 v14; // cx
  unsigned int MediaType; // r9d
  const wchar_t *v16; // rax
  __int64 v17; // rcx
  __int16 v18; // ax
  unsigned __int8 MajorNdisVersion; // cl
  __int64 v20; // rcx
  const wchar_t *v21; // rax
  __int16 v22; // ax
  const wchar_t *v23; // rax
  __int64 v24; // rcx
  __int16 v25; // ax
  unsigned __int8 v26; // al
  __int64 v27; // rcx
  const wchar_t *v28; // rax
  __int16 v29; // ax
  const wchar_t *v30; // rax
  __int64 v31; // rcx
  __int16 v32; // si
  void *ExplicitScope; // [rsp+20h] [rbp-30h]
  struct _UNICODE_STRING v35; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+40h] BYREF
  KRegKey v37; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE DeviceRegKey; // [rsp+A8h] [rbp+58h] BYREF

  v37.m_ptr = 0LL;
  v4 = 0;
  v5 = IoOpenDeviceRegistryKey(a1->PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey);
  if ( v5 < 0 )
    goto LABEL_84;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &v37.m_ptr,
    DeviceRegKey);
  v5 = KRegKey::QueryValueUshort(&v37, v6, (unsigned __int16 *)&v36);
  if ( v5 < 0 )
    goto LABEL_84;
  IfType = a2->IfType;
  v8 = v36;
  if ( (_WORD)v36 != IfType )
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
      if ( ndisCheckDeviceNeedReinstallWithNewIfType(a1, a2) != 1 )
      {
        if ( (unsigned __int8)byte_1C0098754 < 2u )
        {
LABEL_17:
          v5 = -1073741823;
          goto LABEL_84;
        }
        v13 = v8;
        v14 = 199;
        MediaType = IfType;
        goto LABEL_15;
      }
      if ( (unsigned __int8)byte_1C0098754 >= 3u )
        WPP_SF_qdD(0xC6u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)a1, IfType, v8);
    }
    v9 = a2->IfType;
    v10 = L"*IfType";
    *(_DWORD *)&v35.Length = 0;
    v35.Buffer = 0LL;
    v11 = 0x7FFFLL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v11;
    }
    while ( v11 );
    v5 = -1073741811;
    if ( v11 )
    {
      v5 = 0;
      v12 = 0x7FFF - v11;
    }
    else
    {
      v12 = 0;
    }
    if ( v11 )
    {
      v35.Buffer = L"*IfType";
      v35.Length = 2 * v12;
      v35.MaximumLength = 2 * v12 + 2;
      v5 = KRegKey::SetValueUlong(&v37, &v35, v9);
    }
    if ( v5 < 0 )
      goto LABEL_84;
    v4 = 1;
  }
  *(_DWORD *)&v35.Length = 0;
  v16 = L"*MediaType";
  v35.Buffer = 0LL;
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
    v35.Buffer = L"*MediaType";
    v35.Length = 2 * v18;
    v35.MaximumLength = 2 * v18 + 2;
    v5 = KRegKey::QueryValueUlong(&v37, &v35, &v36);
  }
  if ( v5 < 0 )
    goto LABEL_84;
  MediaType = a2->MediaType;
  v13 = v36;
  if ( v36 != MediaType )
  {
    MajorNdisVersion = a1->MajorNdisVersion;
    if ( MajorNdisVersion <= 6u && (MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x3Cu) )
    {
      if ( v4 )
      {
        *(_DWORD *)&v35.Length = 0;
        v20 = 0x7FFFLL;
        v35.Buffer = 0LL;
        v21 = L"*MediaType";
        do
        {
          if ( !*v21 )
            break;
          ++v21;
          --v20;
        }
        while ( v20 );
        v5 = -1073741811;
        if ( v20 )
        {
          v5 = 0;
          v22 = 0x7FFF - v20;
        }
        else
        {
          v22 = 0;
        }
        if ( v20 )
        {
          v35.Buffer = L"*MediaType";
          v35.Length = 2 * v22;
          v35.MaximumLength = 2 * v22 + 2;
          v5 = KRegKey::SetValueUlong(&v37, &v35, MediaType);
        }
        if ( v5 < 0 )
          goto LABEL_84;
      }
      goto LABEL_46;
    }
    if ( (unsigned __int8)byte_1C0098754 < 2u )
      goto LABEL_17;
    v14 = 200;
LABEL_15:
    LODWORD(ExplicitScope) = v13;
LABEL_16:
    WPP_SF_qdD(v14, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)a1, MediaType, ExplicitScope);
    goto LABEL_17;
  }
LABEL_46:
  *(_DWORD *)&v35.Length = 0;
  v23 = L"*PhysicalMediaType";
  v35.Buffer = 0LL;
  v24 = 0x7FFFLL;
  do
  {
    if ( !*v23 )
      break;
    ++v23;
    --v24;
  }
  while ( v24 );
  v5 = -1073741811;
  if ( v24 )
  {
    v5 = 0;
    v25 = 0x7FFF - v24;
  }
  else
  {
    v25 = 0;
  }
  if ( v24 )
  {
    v35.Buffer = L"*PhysicalMediaType";
    v35.Length = 2 * v25;
    v35.MaximumLength = 2 * v25 + 2;
    v5 = KRegKey::QueryValueUlong(&v37, &v35, &v36);
  }
  if ( v5 < 0 )
    goto LABEL_84;
  MediaType = a2->PhysicalMediumType;
  if ( v36 == MediaType )
  {
LABEL_71:
    if ( v4 )
    {
      *(_DWORD *)&v35.Length = 0;
      v30 = L"NdisUpdatedNetworkInterface";
      v35.Buffer = 0LL;
      v31 = 0x7FFFLL;
      do
      {
        if ( !*v30 )
          break;
        ++v30;
        --v31;
      }
      while ( v31 );
      v5 = -1073741811;
      if ( v31 )
      {
        v5 = 0;
        v32 = 0x7FFF - v31;
      }
      else
      {
        v32 = 0;
      }
      if ( v31 )
      {
        v35.Buffer = L"NdisUpdatedNetworkInterface";
        v35.Length = 2 * v32;
        v35.MaximumLength = 2 * v32 + 2;
        v5 = KRegKey::SetValueUlong(&v37, &v35, 1u);
      }
      if ( v5 >= 0 )
        ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    goto LABEL_84;
  }
  v26 = a1->MajorNdisVersion;
  if ( v26 > 6u || v26 == 6 && a1->MinorNdisVersion >= 0x3Cu )
  {
    if ( (unsigned __int8)byte_1C0098754 < 2u )
      goto LABEL_17;
    v14 = 201;
    LODWORD(ExplicitScope) = v36;
    goto LABEL_16;
  }
  if ( v4 )
  {
    *(_DWORD *)&v35.Length = 0;
    v27 = 0x7FFFLL;
    v35.Buffer = 0LL;
    v28 = L"*PhysicalMediaType";
    do
    {
      if ( !*v28 )
        break;
      ++v28;
      --v27;
    }
    while ( v27 );
    v5 = -1073741811;
    if ( v27 )
    {
      v5 = 0;
      v29 = 0x7FFF - v27;
    }
    else
    {
      v29 = 0;
    }
    if ( v27 )
    {
      v35.Buffer = L"*PhysicalMediaType";
      v35.Length = 2 * v29;
      v35.MaximumLength = 2 * v29 + 2;
      v5 = KRegKey::SetValueUlong(&v37, &v35, MediaType);
    }
    if ( v5 >= 0 )
      goto LABEL_71;
  }
LABEL_84:
  KRegKey::~KRegKey(&v37);
  return (unsigned int)v5;
}
