/*
 * XREFs of NtQueryOpenSubKeys @ 0x140687BF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
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
  PVOID Object; // [rsp+40h] [rbp-128h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-120h] BYREF
  _QWORD v16[30]; // [rsp+60h] [rbp-108h] BYREF

  Object = 0LL;
  memset(v16, 0, sizeof(v16));
  v16[19] = &v16[18];
  v16[18] = &v16[18];
  memset(&v16[20], 0, 0x50uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v8;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
}
