/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x1405ED870
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1404AD468 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     CmpSearchForOpenSubKeys @ 0x14054CAAC (CmpSearchForOpenSubKeys.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // si
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  size_t v14; // r14
  PVOID TransientPoolWithQuotaTag; // rax
  _QWORD *v16; // rdi
  char *v17; // rdx
  signed __int64 v18; // r10
  unsigned int v19; // r9d
  NTSTATUS v21; // ebx
  char v22; // [rsp+41h] [rbp-1E7h]
  PVOID Object; // [rsp+48h] [rbp-1E0h] BYREF
  size_t Size[6]; // [rsp+50h] [rbp-1D8h] BYREF
  _BYTE v25[48]; // [rsp+80h] [rbp-1A8h] BYREF
  _QWORD v26[38]; // [rsp+B0h] [rbp-178h] BYREF

  v6 = BufferLength;
  Object = 0LL;
  memset(v26, 0, 0x128uLL);
  v26[19] = &v26[18];
  v26[18] = &v26[18];
  memset(&v26[27], 0, 0x50uLL);
  memset(Size, 0, sizeof(Size));
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v21 = -1073741431;
    goto LABEL_18;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v21 = -1073741727;
    goto LABEL_18;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v21 = -1073741789;
    goto LABEL_18;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_29;
  if ( PreviousMode == 1 )
  {
    v12 = (__int64)RequiredSize;
    if ( (unsigned __int64)RequiredSize >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    ProbeForWrite(Buffer, v6, 4u);
  }
  v21 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          v11,
          0x20019u,
          (__int64)CmKeyObjectType,
          PreviousMode,
          (__int64)v26,
          &Object);
  if ( v21 >= 0 )
  {
    LODWORD(Size[0]) = v6;
    v14 = v6;
    TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v13, v6, 0x31384D43u);
    Size[1] = (size_t)TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v21 = -1073741670;
      goto LABEL_18;
    }
    memset(TransientPoolWithQuotaTag, 0, LODWORD(Size[0]));
    CmpLockRegistryExclusive();
    v22 = 1;
    v16 = Object;
    v21 = CmpPerformKeyBodyDeletionCheck((__int64)Object, 0LL);
    if ( v21 < 0 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v16[1] + 176LL) & 0x40000) != 0 )
    {
      *(_DWORD *)Size[1] = 0;
      Size[2] = 8LL;
      LODWORD(Size[3]) = 8;
      Size[5] = v14 + Size[1];
      Size[4] = (size_t)v16;
      CmpAttachToRegistryProcess((__int64)v25);
      CmpSearchForOpenSubKeys(v16[1], 0, (__int64)Size);
      KiUnstackDetachProcess((__int64)v25, 0LL);
      v21 = HIDWORD(Size[2]);
      CmpUnlockRegistry();
      v22 = 0;
      *RequiredSize = Size[2];
      v17 = (char *)Size[1];
      *(_DWORD *)Buffer = *(_DWORD *)Size[1];
      if ( v21 >= 0 )
      {
        v18 = v17 - (_BYTE *)Buffer;
        v19 = 0;
        if ( *(_DWORD *)v17 )
        {
          do
          {
            *(_QWORD *)&v17[24 * ++v19] -= v18;
            v17 = (char *)Size[1];
          }
          while ( v19 < *(_DWORD *)Size[1] );
        }
        memmove(Buffer, v17, v14);
        v21 = 0;
      }
      goto LABEL_18;
    }
LABEL_29:
    v21 = -1073741811;
  }
LABEL_18:
  if ( v22 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v26, 0);
  if ( v9 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Size[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Size[1]);
  return v21;
}
