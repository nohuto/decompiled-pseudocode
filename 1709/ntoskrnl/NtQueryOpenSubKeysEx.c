/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x140687E00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByNameEx @ 0x140467F24 (ObReferenceObjectByNameEx.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     CmpSearchForOpenSubKeys @ 0x14046E954 (CmpSearchForOpenSubKeys.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  PVOID v14; // rdi
  int v15; // ebx
  _DWORD *PoolWithTag; // rax
  unsigned int *v17; // rdx
  unsigned int i; // r8d
  PVOID Object; // [rsp+40h] [rbp-168h] BYREF
  _DWORD v20[14]; // [rsp+48h] [rbp-160h] BYREF
  _QWORD v21[30]; // [rsp+80h] [rbp-128h] BYREF

  v6 = BufferLength;
  Object = 0LL;
  v20[0] = 0;
  memset(&v20[2], 0, 0x28uLL);
  memset(v21, 0, sizeof(v21));
  v21[19] = &v21[18];
  v21[18] = &v21[18];
  memset(&v21[20], 0, 0x50uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      if ( (unsigned int)v6 >= 8 )
      {
        if ( (v6 & 1) != 0 )
        {
          v12 = -1073741811;
        }
        else
        {
          v20[0] = v6;
          if ( PreviousMode == 1 )
          {
            v13 = (__int64)RequiredSize;
            if ( (unsigned __int64)RequiredSize >= 0x7FFFFFFF0000LL )
              v13 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v13 = *(_DWORD *)v13;
            ProbeForWrite(Buffer, v6, 4u);
          }
          v12 = ObReferenceObjectByNameEx(
                  (__int64)TargetKey,
                  v11,
                  0x20019u,
                  (__int64)CmKeyObjectType,
                  PreviousMode,
                  (__int64)v21,
                  &Object);
          if ( v12 >= 0 )
          {
            CmpLockRegistryExclusive();
            v14 = Object;
            if ( CmpIsKeyDeletedForKeyBody((__int64)Object, 0LL) )
            {
              v15 = *((_DWORD *)v14 + 12);
              CmpUnlockRegistry();
              ObfDereferenceObject(v14);
              v12 = (v15 & 1) != 0 ? -1073740763 : -1073741444;
            }
            else if ( *(_DWORD *)(*((_QWORD *)v14 + 1) + 32LL) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 1) + 24LL)
                                                                                        + 64LL)
                                                                            + 36LL) )
            {
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20204D43u);
              *(_QWORD *)&v20[2] = PoolWithTag;
              if ( PoolWithTag )
              {
                *PoolWithTag = 0;
                v20[4] = 8;
                v20[6] = 8;
                *(_QWORD *)&v20[10] = v6 + *(_QWORD *)&v20[2];
                *(_QWORD *)&v20[8] = v14;
                v20[5] = 0;
                CmpSearchForOpenSubKeys(*((_QWORD *)v14 + 1), 2LL, (__int64)v20);
                v12 = v20[5];
                CmpUnlockRegistry();
                ObfDereferenceObject(v14);
                if ( v12 >= 0 )
                {
                  v17 = *(unsigned int **)&v20[2];
                  for ( i = 0; i < *v17; ++i )
                    *(_QWORD *)&v17[6 * i + 6] += (char *)Buffer - *(_QWORD *)&v20[2];
                }
                *RequiredSize = v20[4];
                if ( v12 < 0 )
                  *(_DWORD *)Buffer = **(_DWORD **)&v20[2];
                else
                  memmove(Buffer, *(const void **)&v20[2], v6);
                ExFreePoolWithTag(*(PVOID *)&v20[2], 0);
              }
              else
              {
                CmpUnlockRegistry();
                ObfDereferenceObject(v14);
                v12 = -1073741670;
              }
            }
            else
            {
              CmpUnlockRegistry();
              ObfDereferenceObject(v14);
              v12 = -1073741811;
            }
          }
          CmpCleanupParseContext((__int64)v21, 0);
        }
      }
      else
      {
        v12 = -1073741789;
      }
    }
    else
    {
      v12 = -1073741727;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v12;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return -1073741431;
  }
}
