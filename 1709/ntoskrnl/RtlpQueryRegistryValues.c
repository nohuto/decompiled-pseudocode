/*
 * XREFs of RtlpQueryRegistryValues @ 0x140520470
 * Callers:
 *     RtlQueryRegistryValues @ 0x14051CD00 (RtlQueryRegistryValues.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140520354 (WmipGetGuidSecurityDescriptor.c)
 *     WmipQueryWmiDataBlock @ 0x140570A50 (WmipQueryWmiDataBlock.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140578AF4 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlQueryRegistryValuesEx @ 0x140590C10 (RtlQueryRegistryValuesEx.c)
 *     PiDevCfgQueryDriverNode @ 0x1405A1890 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405A8348 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405A8A70 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405C25EC (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1405C2814 (RtlSetActiveTimeBias.c)
 *     PspQueryForwardersEnabled @ 0x1405C31F4 (PspQueryForwardersEnabled.c)
 *     VRegSetup @ 0x1405C7A40 (VRegSetup.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1405E69A0 (IopQueryPassiveInterruptRegistryOptions.c)
 *     ExIsMultiSessionSku @ 0x1405EFECC (ExIsMultiSessionSku.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406C4FEC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1406C6A28 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406D56F0 (PiCreateDriverSwDeviceCallback.c)
 *     PpmRegisterSpmSettings @ 0x14070BC60 (PpmRegisterSpmSettings.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x140715774 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140715804 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     SmKmRegParamsLoad @ 0x14073AC64 (SmKmRegParamsLoad.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x14073E9A4 (PerfDiagpUpdateCKCLEnableFlags.c)
 *     ExpPcwDisabledStatus @ 0x14075EFE8 (ExpPcwDisabledStatus.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14017DB20 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlpCallQueryRegistryRoutine @ 0x1405208B0 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x140520BA4 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpGetRegistryHandle @ 0x140521EDC (RtlpGetRegistryHandle.c)
 */

__int64 RtlpQueryRegistryValues(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4, ...)
{
  __int64 v4; // r13
  int v7; // r12d
  __int64 result; // rax
  int v9; // r12d
  const WCHAR *v10; // rdx
  ULONG v11; // esi
  NTSTATUS v12; // edi
  _DWORD *PoolWithTag; // rax
  __int64 v14; // rbx
  ULONG Length; // r15d
  int v16; // eax
  int v17; // eax
  const WCHAR *v18; // rdx
  int v19; // eax
  NTSTATUS v20; // eax
  __int64 v21; // r8
  int v22; // eax
  ULONG v23; // edi
  int v24; // r13d
  NTSTATUS v25; // eax
  __int64 v26; // r8
  ULONG v27; // edi
  __int64 v28; // rax
  int v29; // eax
  int ResultLength; // [rsp+28h] [rbp-61h]
  int ResultLengtha; // [rsp+28h] [rbp-61h]
  ULONG v32; // [rsp+40h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-39h] BYREF
  __int64 v35; // [rsp+58h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  __int64 v40; // [rsp+100h] [rbp+77h] BYREF
  va_list va; // [rsp+100h] [rbp+77h]
  __int64 v42; // [rsp+108h] [rbp+7Fh]
  va_list va1; // [rsp+110h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v40 = va_arg(va1, _QWORD);
  v42 = va_arg(va1, _QWORD);
  v4 = a4;
  v7 = a1;
  result = RtlpGetRegistryHandle(a1, a2, 0LL, &Handle);
  if ( (int)result >= 0 )
  {
    v9 = v7 & 0x40000000;
    if ( v9 )
      v10 = 0LL;
    else
      v10 = a2;
    RtlInitUnicodeString(&DestinationString, v10);
    v11 = 0;
    v12 = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x76727152u);
    v14 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741801;
      if ( !v9 )
        ZwClose(Handle);
      return (unsigned int)v12;
    }
    PoolWithTag[2] = 0;
    Length = 134;
    KeyHandle = Handle;
LABEL_6:
    if ( !*(_QWORD *)a3 && (*(_DWORD *)(a3 + 8) & 0x21) == 0 )
    {
LABEL_28:
      if ( Handle && !v9 )
        ZwClose(Handle);
      if ( KeyHandle && KeyHandle != Handle )
        ZwClose(KeyHandle);
      if ( v14 )
        ExFreePoolWithTag((PVOID)v14, 0);
      return (unsigned int)v12;
    }
    v16 = *(_DWORD *)(a3 + 8);
    if ( (v16 & 0x20) != 0 && (!*(_QWORD *)(a3 + 16) || (v16 & 1) != 0 || *(_QWORD *)a3) )
    {
LABEL_77:
      v12 = -1073741811;
      goto LABEL_28;
    }
    if ( (v16 & 3) != 0 && KeyHandle != Handle )
    {
      ZwClose(KeyHandle);
      KeyHandle = Handle;
    }
    v17 = *(_DWORD *)(a3 + 8);
    v18 = *(const WCHAR **)(a3 + 16);
    if ( (v17 & 1) != 0 )
    {
      if ( !v18 )
        goto LABEL_77;
      RtlInitUnicodeString(&DestinationString, v18);
      ObjectAttributes.RootDirectory = Handle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwOpenKey(&KeyHandle, 0x2000000u, &ObjectAttributes);
      if ( v12 < 0 )
        goto LABEL_28;
      if ( !*(_QWORD *)a3 )
        goto LABEL_22;
    }
    else
    {
      if ( v18 )
      {
        RtlInitUnicodeString(&ValueName, v18);
        while ( 1 )
        {
          v19 = v11++;
          if ( v19 > 4 )
          {
            DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1275);
            goto LABEL_28;
          }
          v20 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformation, (PVOID)v14, Length, &v32);
          LODWORD(v40) = v20;
          v12 = v20;
          if ( v20 == -2147483643 )
          {
            LODWORD(v40) = -1073741789;
          }
          else if ( v20 < 0 )
          {
            if ( v20 == -1073741772 )
            {
              *(_DWORD *)(v14 + 4) = 0;
              *(_DWORD *)(v14 + 12) = 0;
              v32 = Length;
              v12 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v14, (unsigned int)&v32, v4, ResultLength, v42);
              LODWORD(v40) = v12;
            }
            if ( v12 != -1073741789 )
              goto LABEL_21;
          }
          else
          {
            if ( *(_DWORD *)(v14 + 4) == 7 )
            {
              *(_WORD *)(v32 + v14) = 0;
              *(_DWORD *)(v14 + 12) += 2;
            }
            v32 = Length;
            v22 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v14, (unsigned int)&v32, v4, ResultLength, v42);
            LODWORD(v40) = v22;
            v12 = v22;
            if ( v22 != -1073741789 )
            {
              if ( v22 < 0 )
                goto LABEL_28;
              if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
                ZwDeleteValueKey(KeyHandle, &ValueName);
LABEL_21:
              v11 = 0;
LABEL_22:
              if ( v12 >= 0 )
              {
LABEL_23:
                a3 += 56LL;
                goto LABEL_6;
              }
              goto LABEL_28;
            }
          }
          v23 = v32 + 10;
          v35 = v32 + 10LL;
          v14 = RtlpAllocDeallocQueryBuffer(&v35, v14, v21, (__int64 *)va);
          if ( !v14 )
          {
            v12 = v40;
            goto LABEL_28;
          }
          Length = v23 - 2;
          v12 = v40;
          *(_DWORD *)(v14 + 8) = 0;
        }
      }
      if ( (v17 & 8) != 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _QWORD))a3)(
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
      v25 = ZwEnumerateValueKey(KeyHandle, v11, KeyValueFullInformation, (PVOID)v14, Length, &v32);
      LODWORD(v40) = v25;
      v12 = v25;
      if ( v25 == -2147483643 )
      {
        LODWORD(v40) = -1073741789;
      }
      else
      {
        if ( v25 == -2147483622 )
        {
          if ( v11 || (*(_DWORD *)(a3 + 8) & 4) == 0 )
          {
            v4 = a4;
            v11 = 0;
            v12 = 0;
            goto LABEL_23;
          }
          v12 = -1073741772;
          goto LABEL_28;
        }
        if ( v25 >= 0 )
        {
          v32 = Length;
          v12 = RtlpCallQueryRegistryRoutine((_DWORD)KeyHandle, a3, v14, (unsigned int)&v32, a4, ResultLengtha, v42);
          LODWORD(v40) = v12;
        }
        if ( v12 != -1073741789 )
        {
          if ( v12 < 0 )
            goto LABEL_28;
          v24 = 0;
          if ( (*(_DWORD *)(a3 + 8) & 0x40) != 0 )
          {
            ValueName.Buffer = (wchar_t *)(v14 + 20);
            ValueName.Length = *(_WORD *)(v14 + 16);
            ValueName.MaximumLength = *(_WORD *)(v14 + 16);
            if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
              --v11;
          }
          goto LABEL_56;
        }
      }
      v27 = v32 + 10;
      v35 = v32 + 10LL;
      v28 = RtlpAllocDeallocQueryBuffer(&v35, v14, v26, (__int64 *)va);
      v14 = v28;
      if ( !v28 )
        goto LABEL_74;
      Length = v27 - 2;
      *(_DWORD *)(v28 + 8) = 0;
      --v11;
      v29 = v24++;
      if ( v29 > 4 )
      {
        DbgPrint("RtlpQueryRegistryValues: Miscomputed buffer size at line %d\n", 1456);
LABEL_74:
        v4 = a4;
        v12 = v40;
        goto LABEL_21;
      }
LABEL_56:
      ++v11;
    }
  }
  return result;
}
