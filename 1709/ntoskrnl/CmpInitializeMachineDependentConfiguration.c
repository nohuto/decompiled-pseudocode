/*
 * XREFs of CmpInitializeMachineDependentConfiguration @ 0x14083ACD8
 * Callers:
 *     CmInitSystem1 @ 0x14083BF10 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400A73D0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenSection @ 0x14017DFA0 (ZwOpenSection.c)
 *     __report_rangecheckfailure @ 0x1401E00DC (__report_rangecheckfailure.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     NtCreateKey @ 0x1404E2C5C (NtCreateKey.c)
 *     NtOpenKey @ 0x14056FB30 (NtOpenKey.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405C0234 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVideoBiosInformation @ 0x14083B210 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x14083B4EC (CmpSetSystemBiosInformation.c)
 *     CmpInitializeSystemBiosInformation @ 0x140868FE4 (CmpInitializeSystemBiosInformation.c)
 */

NTSTATUS __fastcall CmpInitializeMachineDependentConfiguration(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int SecondLevelCacheSize; // r14d
  unsigned int v3; // ecx
  unsigned __int64 v4; // rax
  NTSTATUS result; // eax
  HANDLE v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rbx
  unsigned int v9; // ecx
  KPCR *Pcr; // rax
  unsigned int v11; // r9d
  unsigned __int8 *v12; // rax
  int v13; // edx
  int v14; // ecx
  bool v15; // zf
  int v16; // edi
  __int64 Table; // rax
  bool v18; // cf
  bool v19; // zf
  bool v20; // al
  HANDLE KeyHandle; // [rsp+40h] [rbp-E8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-E0h] BYREF
  int Data; // [rsp+50h] [rbp-D8h] BYREF
  ULONG Disposition; // [rsp+54h] [rbp-D4h] BYREF
  HANDLE SectionHandle; // [rsp+58h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-B8h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-78h]
  UNICODE_STRING v30; // [rsp+B8h] [rbp-70h] BYREF
  UNICODE_STRING v31; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-50h] BYREF
  int v33; // [rsp+E0h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+E8h] [rbp-40h] BYREF

  v29 = a1;
  v1 = a1;
  SecondLevelCacheSize = 0;
  v3 = 0;
  v4 = 0LL;
  do
  {
    if ( v4 >= 0x54 )
      _report_rangecheckfailure();
    *(_WORD *)((char *)&CmpDeviceIndexTable + v4) = 0;
    ++v3;
    v4 += 2LL;
  }
  while ( v3 < 0x2A );
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
  {
    Data = 1;
    RtlInitUnicodeString(&DestinationString, L"PhysicalAddressExtension");
    NtSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    NtClose(KeyHandle);
  }
  ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  result = NtCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result < 0 )
    return result;
  RtlInitUnicodeString(&v30, L"CentralProcessor");
  ObjectAttributes.Length = 48;
  v6 = Handle;
  ObjectAttributes.ObjectName = &v30;
  ObjectAttributes.RootDirectory = Handle;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  NtClose(KeyHandle);
  if ( Disposition != 1 )
    goto LABEL_26;
  CmpConfigurationData = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
  v7 = 0;
  if ( !(_DWORD)KeNumberProcessors_0 )
    goto LABEL_23;
  do
  {
    v8 = KiProcessorBlock[v7];
    v9 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v8 + 36)];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v9 >> 6);
    Affinity.Mask = 1LL << (v9 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    CmpAddProcessorConfigurationEntry(v8, v7, (int)Handle);
    Pcr = KeGetPcr();
    if ( !v7 )
    {
      SecondLevelCacheSize = Pcr->SecondLevelCacheSize;
      goto LABEL_21;
    }
    v11 = Pcr->SecondLevelCacheSize;
    if ( !*(_BYTE *)(v8 + 65) )
    {
      v15 = *(_BYTE *)(KiProcessorBlock[0] + 65) == 0;
LABEL_20:
      if ( v15 )
        goto LABEL_21;
      goto LABEL_43;
    }
    v12 = (unsigned __int8 *)(v8 + 25232);
    do
    {
      v13 = v12[KiProcessorBlock[0] - v8];
      v14 = *v12 - v13;
      if ( v14 )
        break;
      ++v12;
    }
    while ( v13 );
    if ( v14 )
      CmProcessorMismatch |= 1u;
    if ( v11 != SecondLevelCacheSize )
      CmProcessorMismatch |= 4u;
    if ( *(_BYTE *)(v8 + 64) == *(_BYTE *)(KiProcessorBlock[0] + 64) )
    {
      v15 = *(_WORD *)(v8 + 66) == *(_WORD *)(KiProcessorBlock[0] + 66);
      goto LABEL_20;
    }
LABEL_43:
    CmProcessorMismatch |= 2u;
LABEL_21:
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    ++v7;
  }
  while ( v7 < (unsigned int)KeNumberProcessors_0 );
  v1 = v29;
LABEL_23:
  if ( CmpConfigurationData )
  {
    ExFreePoolWithTag(CmpConfigurationData, 0);
    CmpConfigurationData = 0LL;
  }
  v6 = Handle;
LABEL_26:
  RtlInitUnicodeString(&v31, L"\\Device\\PhysicalMemory");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v31;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenSection(&SectionHandle, 0xF001Fu, &ObjectAttributes) >= 0 )
  {
    v16 = dword_14035E690;
    if ( dword_14035E690 == 1 )
      CmpSetSystemBiosInformation(v1, SectionHandle, v6);
    else
      CmpInitializeSystemBiosInformation(v1);
    v32 = 0LL;
    v33 = 0;
    Table = HalAcpiGetTableEx(v1, 1346584902LL, 0LL, 0LL);
    if ( Table )
    {
      v18 = *(_BYTE *)(Table + 8) == 0;
      v19 = *(_BYTE *)(Table + 8) == 1;
      if ( *(_BYTE *)(Table + 8) > 1u )
      {
        LODWORD(v32) = *(unsigned __int16 *)(Table + 109);
        v33 = *(_DWORD *)(Table + 112);
        HIDWORD(v32) = *(unsigned __int8 *)(Table + 45);
        v18 = *(_BYTE *)(Table + 8) == 0;
        v19 = *(_BYTE *)(Table + 8) == 1;
      }
      v20 = !v18 && !v19;
    }
    else
    {
      v20 = 0;
    }
    if ( v20 )
    {
      RtlInitUnicodeString(&DestinationString, L"BootArchitecture");
      NtSetValueKey(v6, &DestinationString, 0, 4u, &v32, 4u);
      RtlInitUnicodeString(&DestinationString, L"PreferredProfile");
      NtSetValueKey(v6, &DestinationString, 0, 4u, (char *)&v32 + 4, 4u);
      RtlInitUnicodeString(&DestinationString, L"Capabilities");
      NtSetValueKey(v6, &DestinationString, 0, 4u, &v33, 4u);
    }
    if ( v16 == 1 )
      CmpSetVideoBiosInformation(SectionHandle, v6);
    ZwClose(SectionHandle);
  }
  NtClose(v6);
  return 0;
}
