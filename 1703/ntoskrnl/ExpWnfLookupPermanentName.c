/*
 * XREFs of ExpWnfLookupPermanentName @ 0x1404C0014
 * Callers:
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1404476C4 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404584F8 (ExpWnfCheckCrossScopeAccess.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404EEDDC (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404EF144 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1404BFE50 (RtlValidRelativeSecurityDescriptor.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1404C01E8 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x1404C0378 (ExpWnfComposeValueName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1404C2B6C (ExpWnfSpecializeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14050E880 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall ExpWnfLookupPermanentName(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdi
  unsigned int v5; // ebx
  __int64 HostSilo; // rax
  __int64 v7; // r14
  char v8; // r15
  int NameStoreRegistryRoot; // ebx
  _DWORD *v10; // rsi
  NTSTATUS i; // eax
  char *v12; // rbx
  ULONG v13; // esi
  ULONG v14; // eax
  unsigned int v15; // esi
  char *v16; // rbx
  _QWORD *PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  char v22; // [rsp+50h] [rbp-30h] BYREF

  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v22;
  v3 = 0LL;
  ExpWnfComposeValueName(a1, &ValueName);
  v5 = (a1 >> 4) & 3;
  if ( v5 )
  {
    v7 = 0LL;
    v8 = 0;
  }
  else
  {
    HostSilo = PsGetHostSilo();
    v7 = PsAttachSiloToCurrentThread(HostSilo);
    v8 = 1;
  }
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot(v5, &KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    ResultLength = 0;
    v10 = 0LL;
    for ( i = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
          ;
          i = ZwQueryValueKey(
                KeyHandle,
                &ValueName,
                KeyValuePartialInformation,
                PoolWithTag + 3,
                ResultLength,
                &ResultLength) )
    {
      NameStoreRegistryRoot = i;
      if ( i != -1073741789 )
        break;
      if ( v3 )
        ExFreePoolWithTag(v3, 0x20666E57u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength + 24, 0x20666E57u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
      {
        NameStoreRegistryRoot = -1073741670;
        goto LABEL_21;
      }
      v10 = PoolWithTag + 3;
    }
    if ( i >= 0 )
    {
      if ( v10[1] == 3 )
      {
        v12 = (char *)(v10 + 3);
        *v3 = 0LL;
        v3[1] = 0LL;
        v3[2] = 0LL;
        v13 = v10[2];
        v3[2] = v12;
        if ( RtlValidRelativeSecurityDescriptor(v12, v13, 0) )
        {
          ExpWnfSpecializeSecurityDescriptor((PSECURITY_DESCRIPTOR)v3[2]);
          v14 = RtlLengthSecurityDescriptor((PSECURITY_DESCRIPTOR)v3[2]);
          v15 = v13 - v14;
          v16 = &v12[v14];
          if ( v15 >= 4 )
          {
            *(_DWORD *)v3 = *(_DWORD *)v16;
            if ( v15 - 4 >= 0x10 )
              v3[1] = v16 + 4;
            else
              v3[1] = 0LL;
            *a2 = v3;
            NameStoreRegistryRoot = 0;
            goto LABEL_13;
          }
        }
      }
      NameStoreRegistryRoot = -1073741823;
    }
LABEL_21:
    if ( v3 )
      ExFreePoolWithTag(v3, 0x20666E57u);
  }
LABEL_13:
  if ( v8 )
    PsDetachSiloFromCurrentThread(v7);
  return (unsigned int)NameStoreRegistryRoot;
}
