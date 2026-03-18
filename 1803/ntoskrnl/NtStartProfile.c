/*
 * XREFs of NtStartProfile @ 0x1407C7D2C
 * Callers:
 *     <none>
 * Callees:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     MmSizeOfMdl @ 0x1400B9140 (MmSizeOfMdl.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     KeStartProfile @ 0x140245F7C (KeStartProfile.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     KeInitializeProfile @ 0x140742414 (KeInitializeProfile.c)
 */

NTSTATUS __stdcall NtStartProfile(HANDLE ProfileHandle)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  _QWORD *v3; // rbx
  NTSTATUS v4; // edi
  SIZE_T v5; // rax
  char *PoolWithTag; // rax
  void *v7; // rsi
  struct _MDL *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r8
  PVOID v11; // r14
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(ProfileHandle, 1u, ExProfileObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&ExpProfileStateMutex, Executive, 0, 0, 0LL);
    v3 = Object;
    if ( *((_QWORD *)Object + 6) )
    {
      v4 = -1073741640;
LABEL_8:
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      ObfDereferenceObject(v3);
      return v4;
    }
    if ( ExpCurrentProfileUsage == KeQueryActiveProcessorCountEx(0xFFFFu) << 13 )
    {
      v4 = -1073741613;
      goto LABEL_8;
    }
    v5 = MmSizeOfMdl((PVOID)v3[3], *((unsigned int *)v3 + 8));
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5 + 248, 0x666F7250u);
    v7 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      v4 = -1073741670;
      goto LABEL_8;
    }
    v8 = (struct _MDL *)(PoolWithTag + 248);
    v3[7] = PoolWithTag + 248;
    v3[5] = PoolWithTag;
    v9 = *((unsigned int *)v3 + 8);
    v10 = v3[3];
    *((_QWORD *)PoolWithTag + 31) = 0LL;
    *((_WORD *)PoolWithTag + 128) = 8 * ((((unsigned __int64)(v10 & 0xFFF) + v9 + 4095) >> 12) + 6);
    *((_WORD *)PoolWithTag + 129) = 0;
    *((_QWORD *)PoolWithTag + 35) = v10 & 0xFFFFFFFFFFFFF000uLL;
    *((_DWORD *)PoolWithTag + 73) = v10 & 0xFFF;
    *((_DWORD *)PoolWithTag + 72) = v9;
    MmProbeAndLockPages((PMDL)(PoolWithTag + 248), PreviousMode, IoWriteAccess);
    v11 = MmMapLockedPagesSpecifyCache((PMDL)v3[7], 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v11 )
    {
      KeInitializeProfile(
        (__int64)v7,
        *v3,
        (__int64)v11,
        v3[1],
        v3[2],
        *((_DWORD *)v3 + 9),
        *((_DWORD *)v3 + 16),
        *((_DWORD *)v3 + 17),
        (unsigned __int16 *)v3 + 36);
      KeStartProfile((ULONG_PTR)v7);
      v3[6] = v11;
      ++ExpCurrentProfileUsage;
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      ObfDereferenceObject(v3);
      return 0;
    }
    else
    {
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      MmUnlockPages(v8);
      ExFreePoolWithTag(v7, 0);
      ObfDereferenceObject(v3);
      return -1073741670;
    }
  }
  return result;
}
