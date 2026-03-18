/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x1404C01E8
 * Callers:
 *     ExpWnfDeletePermanentName @ 0x1404390F4 (ExpWnfDeletePermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x14045CAAC (ExpWnfRegisterPermanentName.c)
 *     ExpWnfLookupPermanentName @ 0x1404C0014 (ExpWnfLookupPermanentName.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1405D3B68 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140722D4C (ExpWnfAllocateNextPersistentNameSequence.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateKey @ 0x14017E2E0 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, volatile signed __int64 *a2)
{
  __int64 *v3; // rdi
  volatile signed __int64 *v4; // rbx
  NTSTATUS result; // eax
  int v6; // eax
  ULONG CreateOptions; // ecx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+18h] BYREF

  v3 = &ExpWnfNameStoreDescriptors[4 * a1];
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
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v3 + 1);
  v6 = *((_DWORD *)v3 + 6);
  CreateOptions = *((_DWORD *)v3 + 7) != 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v6 != 0 ? 131097 : 983103, &ObjectAttributes, 0, 0LL, CreateOptions, 0LL);
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
