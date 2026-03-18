/*
 * XREFs of ExpWnfGetNameStoreRegistryRoot @ 0x140517AAC
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1405178D4 (ExpWnfLookupPermanentName.c)
 *     ExpWnfDeletePermanentName @ 0x1405679F4 (ExpWnfDeletePermanentName.c)
 *     ExpWnfRegisterPermanentName @ 0x140583CA8 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1406511D4 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1407CA2E0 (ExpWnfAllocateNextPersistentNameSequence.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1401A7860 (ZwCreateKey.c)
 */

NTSTATUS __fastcall ExpWnfGetNameStoreRegistryRoot(int a1, volatile signed __int64 *a2)
{
  __int64 *v3; // rdi
  volatile signed __int64 *v4; // rbx
  NTSTATUS result; // eax
  UNICODE_STRING *v6; // rax
  ACCESS_MASK v7; // edx
  __int64 v8; // rcx
  int v9; // edi
  BOOL CreateOptions; // [rsp+28h] [rbp-48h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Disposition; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

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
  {
LABEL_4:
    *a2 = *v4;
    return 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  v6 = (UNICODE_STRING *)(v3 + 3);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( !CmStateSeparationEnabled )
    v6 = (UNICODE_STRING *)(v3 + 1);
  ObjectAttributes.ObjectName = v6;
  CreateOptions = *((_DWORD *)v3 + 11) != 0;
  v7 = *((_DWORD *)v3 + 10) != 0 ? 131097 : 983103;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, v7, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  if ( result >= 0 )
  {
    if ( Disposition == 1 )
    {
      LOBYTE(v8) = CmStateSeparationEnabled != 0;
      v9 = ExpInitializeStateSeparationPhase2(v8, v3 + 1, v3 + 3);
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741637 )
      {
        ZwClose(KeyHandle);
        return v9;
      }
    }
    if ( _InterlockedCompareExchange64(v4, (signed __int64)KeyHandle, 0LL) )
      ZwClose(KeyHandle);
    goto LABEL_4;
  }
  return result;
}
