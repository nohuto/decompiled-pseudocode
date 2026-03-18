/*
 * XREFs of RtlpQueryRegistryValues @ 0x140502B1C
 * Callers:
 *     WmipGetGuidSecurityDescriptor @ 0x1405024F4 (WmipGetGuidSecurityDescriptor.c)
 *     RtlQueryRegistryValues @ 0x14057D5A0 (RtlQueryRegistryValues.c)
 *     RtlQueryRegistryValuesEx @ 0x14057ECE0 (RtlQueryRegistryValuesEx.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140588E84 (RtlpQueryTimeZoneInformationWorker.c)
 *     WmipQueryWmiDataBlock @ 0x140589E50 (WmipQueryWmiDataBlock.c)
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405D6820 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgQueryDriverNode @ 0x1405D8B48 (PiDevCfgQueryDriverNode.c)
 *     VRegSetup @ 0x140621500 (VRegSetup.c)
 *     PiDrvDbInit @ 0x140622800 (PiDrvDbInit.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140629F3C (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpEnableAutoLoggerProviders @ 0x14062A638 (EtwpEnableAutoLoggerProviders.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1406300CC (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1406302F4 (RtlSetActiveTimeBias.c)
 *     PspQueryForwardersEnabled @ 0x140630CC4 (PspQueryForwardersEnabled.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140649F60 (PerfDiagpUpdateCKCLEnableFlags.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x14064CC94 (IopQueryPassiveInterruptRegistryOptions.c)
 *     ExIsMultiSessionSku @ 0x1406533B4 (ExIsMultiSessionSku.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14072B498 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14072D4C4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 *     PpmRegisterSpmSettings @ 0x14076F130 (PpmRegisterSpmSettings.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x140779904 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140779994 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     SmKmRegParamsLoad @ 0x14079DC68 (SmKmRegParamsLoad.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1407AB810 (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407AB938 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1407ABBD8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     ExpPcwDisabledStatus @ 0x1407C62E8 (ExpPcwDisabledStatus.c)
 * Callees:
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401A7720 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x140502F48 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpCallQueryRegistryRoutine @ 0x140502FC8 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpGetRegistryHandle @ 0x140506008 (RtlpGetRegistryHandle.c)
 */

__int64 RtlpQueryRegistryValues(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // r15
  int v7; // r12d
  __int64 result; // rax
  ULONG v9; // r14d
  int v10; // r12d
  const WCHAR *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdi
  NTSTATUS v16; // ebx
  ULONG Length; // r13d
  int v18; // eax
  const WCHAR *v19; // rdx
  int v20; // eax
  int v21; // eax
  char v22; // al
  ULONG v23; // ebx
  int v24; // r15d
  ULONG v25; // ebx
  __int64 v26; // rax
  int v27; // eax
  int ResultLength; // [rsp+30h] [rbp-61h]
  int ResultLengtha; // [rsp+30h] [rbp-61h]
  ULONG v30; // [rsp+48h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-41h] BYREF
  __int64 v32; // [rsp+58h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-9h] BYREF
  __int64 v38; // [rsp+108h] [rbp+77h] BYREF
  va_list va; // [rsp+108h] [rbp+77h]
  __int64 v40; // [rsp+110h] [rbp+7Fh]
  va_list va1; // [rsp+118h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v4 = a4;
  v7 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  v9 = 0;
  LODWORD(v38) = result;
  if ( (int)result < 0 )
    return result;
  v10 = v7 & 0x40000000;
  if ( v10 )
    v11 = 0LL;
  else
    v11 = a2;
  RtlInitUnicodeString(&DestinationString, v11);
  v32 = 136LL;
  v13 = RtlpAllocDeallocQueryBuffer(&v32, 0LL, v12, (__int64 *)va);
  v15 = v13;
  if ( v13 )
  {
    v16 = v38;
    Length = 134;
    *(_DWORD *)(v13 + 8) = 0;
    KeyHandle = Handle;
LABEL_6:
    if ( !*(_QWORD *)a3 && (*(_DWORD *)(a3 + 8) & 0x21) == 0 )
    {
LABEL_29:
      if ( Handle && !v10 )
        ZwClose(Handle);
      if ( KeyHandle )
      {
        if ( KeyHandle != Handle )
          ZwClose(KeyHandle);
      }
      RtlpAllocDeallocQueryBuffer(0LL, v15, v14, 0LL);
      return (unsigned int)v16;
    }
    v18 = *(_DWORD *)(a3 + 8);
    if ( (v18 & 0x20) != 0 && (!*(_QWORD *)(a3 + 16) || (v18 & 1) != 0 || *(_QWORD *)a3) )
    {
LABEL_76:
      v16 = -1073741811;
      goto LABEL_29;
    }
    if ( (v18 & 3) != 0 && KeyHandle != Handle )
    {
      ZwClose(KeyHandle);
      KeyHandle = Handle;
      v18 = *(_DWORD *)(a3 + 8);
    }
    v19 = *(const WCHAR **)(a3 + 16);
    if ( (v18 & 1) != 0 )
    {
      if ( !v19 )
        goto LABEL_76;
      RtlInitUnicodeString(&DestinationString, v19);
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
      if ( v16 < 0 )
        goto LABEL_29;
      if ( !*(_QWORD *)a3 )
        goto LABEL_22;
    }
    else
    {
      if ( v19 )
      {
        RtlInitUnicodeString(&ValueName, v19);
        while ( 1 )
        {
          v20 = v9++;
          if ( v20 > 4 )
          {
            DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1276);
            goto LABEL_29;
          }
          v16 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v15, Length, &v30);
          if ( v16 == -2147483643 )
            v16 = -1073741789;
          LODWORD(v38) = v16;
          if ( v16 < 0 )
          {
            if ( v16 == -1073741772 )
            {
              v22 = v40;
              *(_DWORD *)(v15 + 4) = 0;
              *(_DWORD *)(v15 + 12) = 0;
              v30 = Length;
              v16 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&v30, v4, ResultLength, v22);
              LODWORD(v38) = v16;
            }
            if ( v16 != -1073741789 )
              goto LABEL_27;
          }
          else
          {
            if ( *(_DWORD *)(v15 + 4) == 7 )
            {
              *(_WORD *)(v30 + v15) = 0;
              *(_DWORD *)(v15 + 12) += 2;
            }
            v30 = Length;
            v21 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&v30, v4, ResultLength, v40);
            LODWORD(v38) = v21;
            v16 = v21;
            if ( v21 != -1073741789 )
            {
              v9 = 0;
              if ( v21 < 0 )
                goto LABEL_29;
              if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
                ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_22:
              if ( v16 >= 0 )
              {
                a3 += 56LL;
                goto LABEL_6;
              }
              goto LABEL_29;
            }
          }
          v23 = v30 + 10;
          v32 = v30 + 10LL;
          v15 = RtlpAllocDeallocQueryBuffer(&v32, v15, v14, (__int64 *)va);
          if ( !v15 )
          {
            v16 = v38;
            goto LABEL_29;
          }
          Length = v23 - 2;
          *(_DWORD *)(v15 + 8) = 0;
          v16 = v38;
        }
      }
      if ( (v18 & 8) != 0 )
      {
        v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
                0LL,
                0LL,
                0LL,
                0LL,
                v4,
                *(_QWORD *)(a3 + 24));
        goto LABEL_22;
      }
    }
    v24 = 0;
    while ( 1 )
    {
      v16 = ZwEnumerateValueKey(KeyHandle, v9, KeyValueFullInformation, (PVOID)v15, Length, &v30);
      if ( v16 == -2147483643 )
        v16 = -1073741789;
      LODWORD(v38) = v16;
      if ( v16 == -2147483622 )
      {
        if ( v9 || (*(_DWORD *)(a3 + 8) & 4) == 0 )
        {
          v9 = 0;
          v16 = 0;
        }
        else
        {
          v16 = -1073741772;
          v9 = 0;
        }
        v4 = a4;
        goto LABEL_22;
      }
      if ( v16 >= 0 )
      {
        v30 = Length;
        v16 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v15, (unsigned int)&v30, a4, ResultLengtha, v40);
        LODWORD(v38) = v16;
      }
      if ( v16 == -1073741789 )
      {
        v25 = v30 + 10;
        v32 = v30 + 10LL;
        v26 = RtlpAllocDeallocQueryBuffer(&v32, v15, v14, (__int64 *)va);
        v15 = v26;
        if ( !v26 )
          goto LABEL_75;
        *(_DWORD *)(v26 + 8) = 0;
        Length = v25 - 2;
        v27 = v24;
        --v9;
        ++v24;
        if ( v27 > 4 )
        {
          DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1457);
LABEL_75:
          v16 = v38;
          v4 = a4;
LABEL_27:
          v9 = 0;
          goto LABEL_22;
        }
      }
      else
      {
        if ( v16 < 0 )
          goto LABEL_29;
        v24 = 0;
        if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
        {
          ValueName.Buffer = (wchar_t *)(v15 + 20);
          ValueName.Length = *(_WORD *)(v15 + 16);
          ValueName.MaximumLength = *(_WORD *)(v15 + 16);
          if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
            --v9;
        }
      }
      ++v9;
    }
  }
  if ( !v10 )
    ZwClose(Handle);
  return (unsigned int)v38;
}
