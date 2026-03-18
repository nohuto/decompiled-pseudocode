/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x1404E1054
 * Callers:
 *     ExpWnfDeletePermanentName @ 0x140451204 (ExpWnfDeletePermanentName.c)
 *     ExpWnfLookupPermanentName @ 0x1404E0E80 (ExpWnfLookupPermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x14059E368 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405EFCA0 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407627FC (ExpWnfAllocateNextPersistentNameSequence.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, volatile signed __int64 *a2)
{
  __int64 *v3; // rdi
  volatile signed __int64 *v4; // rbx
  NTSTATUS result; // eax
  UNICODE_STRING *v6; // rax
  ULONG CreateOptions; // ecx
  bool v8; // cf
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+18h] BYREF

  v3 = &ExpWnfNameStoreDescriptors[6 * a1];
  if ( a1 )
  {
    if ( a1 == 1 )
      v4 = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 912);
    else
      v4 = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 920);
  }
  else
  {
    v4 = (volatile signed __int64 *)&ExpWnfWellKnownNameStoreRootKey;
  }
  if ( *v4 )
    goto LABEL_4;
  ObjectAttributes.RootDirectory = 0LL;
  v6 = (UNICODE_STRING *)(v3 + 3);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( !CmStateSeparationEnabled )
    v6 = (UNICODE_STRING *)(v3 + 1);
  ObjectAttributes.ObjectName = v6;
  CreateOptions = *((_DWORD *)v3 + 11) != 0;
  v8 = *((_DWORD *)v3 + 10) != 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v8 ? 131097 : 983103, &ObjectAttributes, 0, 0LL, CreateOptions, 0LL);
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(v4, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
LABEL_4:
    *a2 = *v4;
    return 0;
  }
  return result;
}
