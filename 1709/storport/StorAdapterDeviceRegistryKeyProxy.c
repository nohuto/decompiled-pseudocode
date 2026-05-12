/*
 * XREFs of StorAdapterDeviceRegistryKeyProxy @ 0x1C00332D8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1C001D06C (RaidNtStatusToStorStatus.c)
 *     PortRegistryReadDeviceKey @ 0x1C0062A4C (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C0062EBC (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall StorAdapterDeviceRegistryKeyProxy(__int64 a1, char a2, __int64 a3)
{
  const char *v3; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  int v8; // r13d
  __int64 v10; // rdi
  NTSTATUS v11; // eax
  int v12; // ecx
  __int64 v13; // rcx
  int DeviceKey; // eax
  int v15; // ebx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING v17; // [rsp+40h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+A8h] [rbp+48h]
  const char *SourceString; // [rsp+B0h] [rbp+50h]

  v3 = *(const char **)a3;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  SourceString = *(const char **)(a3 + 8);
  v19 = *(_DWORD *)(a3 + 16);
  if ( a2 )
  {
    v5 = *(_QWORD *)(a3 + 24);
    v6 = *(_QWORD *)(a3 + 32);
    v7 = *(_QWORD *)(a3 + 8);
    v8 = *(_DWORD *)(a3 + 16);
  }
  else
  {
    v7 = *(_QWORD *)(a3 + 24);
    v8 = *(_DWORD *)(a3 + 32);
    v5 = *(_QWORD *)(a3 + 8);
    v6 = v5;
  }
  if ( KeGetCurrentIrql() )
    return 3238002696LL;
  v10 = **(_QWORD **)(a1 - 16);
  if ( !v10 )
    return 3238002694LL;
  if ( v3
    && (RtlInitAnsiString(&DestinationString, v3),
        v11 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u),
        v11 < 0)
    || (RtlInitAnsiString(&DestinationString, SourceString),
        v11 = RtlAnsiStringToUnicodeString(&v17, &DestinationString, 1u),
        v11 < 0) )
  {
    v12 = v11;
  }
  else
  {
    v13 = *(_QWORD *)(v10 + 32);
    if ( a2 )
      DeviceKey = PortRegistryReadDeviceKey(
                    v13,
                    (unsigned __int64)&UnicodeString & -(__int64)(v3 != 0LL),
                    (unsigned int)&v17,
                    v19,
                    v5,
                    v6);
    else
      DeviceKey = PortRegistryWriteDeviceKey(
                    v13,
                    (unsigned __int64)&UnicodeString & -(__int64)(v3 != 0LL),
                    (unsigned int)&v17,
                    v19,
                    v7,
                    v8);
    v15 = DeviceKey;
    if ( UnicodeString.Buffer )
      RtlFreeUnicodeString(&UnicodeString);
    if ( v17.Buffer )
      RtlFreeUnicodeString(&v17);
    v12 = v15;
  }
  return RaidNtStatusToStorStatus(v12);
}
