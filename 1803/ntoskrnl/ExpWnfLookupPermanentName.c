/*
 * XREFs of ExpWnfLookupPermanentName @ 0x1405178D4
 * Callers:
 *     NtUpdateWnfStateData @ 0x1404F53D8 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404F57A0 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404F5B08 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x140567140 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14056F7C0 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14057CC28 (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateData @ 0x14065039C (NtDeleteWnfStateData.c)
 * Callees:
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1404F7A40 (ExpWnfSpecializeSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140517160 (RtlValidRelativeSecurityDescriptor.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x140517AAC (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x140517BE4 (ExpWnfComposeValueName.c)
 */

__int64 __fastcall ExpWnfLookupPermanentName(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rsi
  __int64 v5; // rbx
  __int64 HostSilo; // rax
  __int64 v7; // r15
  int NameStoreRegistryRoot; // edi
  _DWORD *v9; // r14
  NTSTATUS i; // eax
  char *v11; // rdi
  ULONG v12; // r14d
  ULONG v13; // eax
  unsigned int v14; // r14d
  char *v15; // rdi
  _DWORD *v16; // rcx
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
  if ( (_DWORD)v5 )
  {
    v7 = 0LL;
  }
  else
  {
    HostSilo = PsGetHostSilo();
    v7 = PsAttachSiloToCurrentThread(HostSilo);
  }
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((unsigned int)v5, &KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    ResultLength = 0;
    v9 = 0LL;
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
      v9 = PoolWithTag + 3;
    }
    if ( i >= 0 )
    {
      if ( v9[1] == 3 )
      {
        v11 = (char *)(v9 + 3);
        *v3 = 0LL;
        v3[1] = 0LL;
        v3[2] = 0LL;
        v12 = v9[2];
        v3[2] = v11;
        if ( RtlValidRelativeSecurityDescriptor(v11, v12, 0) )
        {
          ExpWnfSpecializeSecurityDescriptor((PSECURITY_DESCRIPTOR)v3[2]);
          v13 = RtlLengthSecurityDescriptor((PSECURITY_DESCRIPTOR)v3[2]);
          v14 = v12 - v13;
          v15 = &v11[v13];
          if ( v14 >= 4 )
          {
            v16 = v15 + 4;
            *(_DWORD *)v3 = *(_DWORD *)v15;
            NameStoreRegistryRoot = 0;
            if ( v14 - 4 < 0x10 )
              v16 = 0LL;
            v3[1] = v16;
            *a2 = v3;
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
  if ( !(_DWORD)v5 )
    PsDetachSiloFromCurrentThread(v7);
  return (unsigned int)NameStoreRegistryRoot;
}
