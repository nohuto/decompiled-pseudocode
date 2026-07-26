/*
 * XREFs of ndisIfInitialize @ 0x1C011412C
 * Callers:
 *     DriverEntry @ 0x1C01129E0 (DriverEntry.c)
 * Callees:
 *     ?ndisIsValidIfStringParts@@YAEPEBGK@Z @ 0x1C001691C (-ndisIsValidIfStringParts@@YAEPEBGK@Z.c)
 *     NdisIfRegisterProvider @ 0x1C00225E0 (NdisIfRegisterProvider.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C00AC620 (NdisOpenConfigurationKeyByIndex.c)
 *     NdisCloseConfiguration @ 0x1C00ADB10 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00AE8B0 (NdisReadConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00B06E0 (NdisOpenProtocolConfiguration.c)
 */

__int64 ndisIfInitialize()
{
  int v0; // ebx
  NDIS_HANDLE v1; // rbx
  const unsigned __int16 *v2; // rcx
  ULONG v3; // r12d
  wchar_t *Buffer; // r15
  unsigned int v5; // esi
  char *PoolWithTag; // rax
  char *v7; // rdi
  struct _NDIS_IF_TYPE *v8; // rax
  PVOID v9; // rbx
  size_t v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ecx
  size_t v14; // r8
  __int64 v15; // r9
  PVOID KeyHandle; // [rsp+30h] [rbp-79h] BYREF
  _UNICODE_STRING v17; // [rsp+38h] [rbp-71h] BYREF
  UNICODE_STRING Keyword; // [rsp+48h] [rbp-61h] BYREF
  UNICODE_STRING v19; // [rsp+58h] [rbp-51h] BYREF
  UNICODE_STRING v20; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v21; // [rsp+78h] [rbp-31h] BYREF
  struct _NDIS_IF_PROVIDER_CHARACTERISTICS ProviderCharacteristics; // [rsp+88h] [rbp-21h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+7h] BYREF
  UNICODE_STRING KeyName; // [rsp+C0h] [rbp+17h] BYREF
  unsigned __int16 Length; // [rsp+110h] [rbp+67h]
  int Status; // [rsp+118h] [rbp+6Fh] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+120h] [rbp+77h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+128h] [rbp+7Fh] BYREF

  *(_DWORD *)&v20.Length = 917516;
  Status = 0;
  v20.Buffer = (wchar_t *)L"IfType";
  v21.Buffer = (wchar_t *)L"IfUsedNetLuidIndices";
  Keyword.Buffer = L"DefaultIfLoopbackDesc";
  v19.Buffer = L"DefaultIfLoopbackAlias";
  v17.Buffer = L"Ndis";
  ConfigurationHandle = 0LL;
  KeyHandle = 0LL;
  *(_DWORD *)&v21.Length = 2752552;
  *(_DWORD *)&Keyword.Length = 2883626;
  *(_DWORD *)&v19.Length = 3014700;
  *(_DWORD *)&v17.Length = 655368;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_(0x13u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids);
  KeInitializeSpinLock(&ndisIfProviderListLock);
  KeInitializeSpinLock(&ndisIfListLock);
  KeInitializeSpinLock(&ndisIfStackEntryLock);
  KeInitializeSpinLock(&ndisIfBlockMiniportLinkLock);
  KeInitializeMutex(&ndisUsedIndicesMutex, 0xFFFFu);
  qword_1C0092788 = (__int64)&ndisIfCompartmentList;
  ndisIfCompartmentList.Flink = &ndisIfCompartmentList;
  qword_1C0092890 = (__int64)&ndisIfTypesList;
  qword_1C00928F8 = (__int64)&ndisIfNetworkList;
  ndisIfNetworkList.Flink = &ndisIfNetworkList;
  ndisIfTypesList = (struct _NDIS_IF_TYPE *)&ndisIfTypesList;
  qword_1C00928E8 = (__int64)&ndisIfProviderList;
  ndisIfProviderList.Flink = &ndisIfProviderList;
  qword_1C0092778 = (__int64)&ndisIfList;
  ndisIfList.Flink = &ndisIfList;
  qword_1C0092908 = (__int64)&ndisIfStackEntryList;
  ndisIfStackEntryList = &ndisIfStackEntryList;
  memset(&xmmword_1C0092152, 0, 0x202uLL);
  memset(&xmmword_1C0092362, 0, 0x202uLL);
  NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &v17);
  v0 = Status;
  if ( !Status )
  {
    v1 = ConfigurationHandle;
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterString);
    if ( Status || !ndisIsValidIfStringParts(v2, ParameterValue->ParameterData.StringData.Length) )
    {
      ndisIfLoopbackDescr.Length = 54;
      wmemcpy((wchar_t *)&xmmword_1C0092152, L"Software Loopback Interface", 27);
    }
    else
    {
      ndisIfLoopbackDescr.Length = v11;
      memmove(&xmmword_1C0092152, *(const void **)(v12 + 16), v11);
    }
    NdisReadConfiguration(&Status, &ParameterValue, v1, &v19, NdisParameterString);
    if ( Status
      || !ndisIsValidIfStringParts(
            (const unsigned __int16 *)ParameterValue->ParameterData.StringData.Length,
            ParameterValue->ParameterData.StringData.Length) )
    {
      ndisIfLoopbackAlias.Length = 50;
      wmemcpy((wchar_t *)&xmmword_1C0092362, L"Loopback Pseudo-Interface", 25);
    }
    else
    {
      ndisIfLoopbackAlias.Length = v13;
      if ( (unsigned __int16)v14 >= (unsigned __int16)v13 )
        v14 = v13;
      memmove(&xmmword_1C0092362, *(const void **)(v15 + 16), v14);
    }
    NdisCloseConfiguration(v1);
    ConfigurationHandle = 0LL;
    Status = RtlCheckRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes");
    if ( !Status || (Status = RtlCreateRegistryKey(1u, (PWSTR)L"Ndis\\IfTypes"), v0 = Status, Status >= 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes");
      NdisOpenProtocolConfiguration(&Status, &ConfigurationHandle, &DestinationString);
      v0 = Status;
      if ( !Status )
      {
        NdisOpenConfigurationKeyByIndex(&Status, ConfigurationHandle, 0, &KeyName, &KeyHandle);
        v3 = 1;
        while ( !Status )
        {
          v9 = KeyHandle;
          NdisReadConfiguration(&Status, &ParameterValue, KeyHandle, &v20, NdisParameterInteger);
          if ( !Status )
          {
            Length = ParameterValue->ParameterData.StringData.Length;
            NdisReadConfiguration(&Status, &ParameterValue, v9, &v21, NdisParameterBinary);
            if ( Status )
            {
              Buffer = 0LL;
              v5 = 0;
            }
            else
            {
              Buffer = ParameterValue->ParameterData.StringData.Buffer;
              v5 = ParameterValue->ParameterData.StringData.Length;
            }
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v5 + 64, 0x6669444Eu);
            v7 = PoolWithTag;
            if ( !PoolWithTag )
              goto LABEL_23;
            memset(PoolWithTag, 0, 2 * v5 + 64);
            *((_WORD *)v7 + 8) = Length;
            if ( v5 )
            {
              *((_QWORD *)v7 + 7) = &v7[v5 + 64];
              *((_DWORD *)v7 + 10) = v5;
              *((_QWORD *)v7 + 6) = v7 + 64;
              memmove(v7 + 64, Buffer, v5);
              memmove(*((void **)v7 + 7), Buffer, v5);
            }
            v8 = ndisIfTypesList;
            if ( *((struct _NDIS_IF_TYPE ***)ndisIfTypesList + 1) != &ndisIfTypesList )
              __fastfail(3u);
            *(_QWORD *)v7 = ndisIfTypesList;
            *((_QWORD *)v7 + 1) = &ndisIfTypesList;
            *((_QWORD *)v8 + 1) = v7;
            ndisIfTypesList = (struct _NDIS_IF_TYPE *)v7;
          }
          NdisOpenConfigurationKeyByIndex(&Status, ConfigurationHandle, v3++, &KeyName, &KeyHandle);
        }
        v9 = KeyHandle;
LABEL_23:
        if ( v9 )
          NdisCloseConfiguration(v9);
        if ( ConfigurationHandle )
          NdisCloseConfiguration(ConfigurationHandle);
        memset(&ProviderCharacteristics, 0, sizeof(ProviderCharacteristics));
        ProviderCharacteristics.Header = (_NDIS_OBJECT_HEADER)2621824;
        ProviderCharacteristics.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryObject;
        ProviderCharacteristics.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))ndisIfSetObject;
        v0 = NdisIfRegisterProvider(&ProviderCharacteristics, &ndisIfProviderHandle, &ndisIfProviderHandle);
        if ( v0 >= 0 )
        {
          ProviderCharacteristics.QueryObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int *, void *))ndisIfQueryLoopbackObject;
          ProviderCharacteristics.SetObjectHandler = (int (__fastcall *)(void *, unsigned int, unsigned int, void *))ndisIfSetObject;
          v0 = NdisIfRegisterProvider(
                 &ProviderCharacteristics,
                 &ndisIfLoopbackProviderHandle,
                 &ndisIfLoopbackProviderHandle);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_d(0x14u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v0);
  return (unsigned int)v0;
}
