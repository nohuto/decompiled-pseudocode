/*
 * XREFs of NtQueryOpenSubKeys @ 0x14065EDDC
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpSearchForOpenSubKeys @ 0x1404CAA50 (CmpSearchForOpenSubKeys.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeys(POBJECT_ATTRIBUTES TargetKey, PULONG HandleCount)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  PVOID v9; // rdi
  int v10; // ebx
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  PVOID Object; // [rsp+40h] [rbp-118h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-110h] BYREF
  _BYTE v16[224]; // [rsp+60h] [rbp-F8h] BYREF

  Object = 0LL;
  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    LOBYTE(v5) = KeGetCurrentThread()->PreviousMode;
    if ( (_BYTE)v5 == 1 )
    {
      v7 = (__int64)HandleCount;
      if ( (unsigned __int64)HandleCount >= 0x7FFFFFFF0000LL )
        v7 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v7 = *(_DWORD *)v7;
    }
    v8 = ObReferenceObjectByNameEx(
           (__int64)TargetKey,
           v5,
           0x20019u,
           (__int64)CmKeyObjectType,
           v5,
           (__int64)v16,
           &Object);
    if ( v8 >= 0 )
    {
      CmpLockRegistryExclusive();
      v9 = Object;
      if ( CmpIsKeyDeletedForKeyBody((__int64)Object, 0LL) )
      {
        v10 = *((_DWORD *)v9 + 12);
        CmpUnlockRegistry();
        ObfDereferenceObject(v9);
        v8 = (v10 & 1) != 0 ? -1073740763 : -1073741444;
      }
      else
      {
        v11 = *((_QWORD *)v9 + 1);
        v12 = *(_DWORD *)(v11 + 32);
        v13 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 64LL);
        if ( v12 == *(_DWORD *)(v13 + 36) )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(v13 + 48));
          CmpOpenSubKeys = CmpSearchForOpenSubKeys(*((_QWORD *)v9 + 1), 2LL, 0LL);
          CmpUnlockRegistry();
          ObfDereferenceObject(v9);
          *HandleCount = CmpOpenSubKeys;
        }
        else
        {
          CmpUnlockRegistry();
          ObfDereferenceObject(v9);
          v8 = -1073741811;
        }
      }
    }
    CmpCleanupParseContext((__int64)v16, 0);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v8;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741431;
  }
}
