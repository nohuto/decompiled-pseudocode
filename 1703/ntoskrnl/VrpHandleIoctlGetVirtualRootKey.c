/*
 * XREFs of VrpHandleIoctlGetVirtualRootKey @ 0x140679C08
 * Callers:
 *     IoctlDeviceDispatch @ 0x140678B40 (IoctlDeviceDispatch.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     PsGetJobSilo @ 0x140239490 (PsGetJobSilo.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     VrpTranslatePath @ 0x14067D470 (VrpTranslatePath.c)
 */

__int64 __fastcall VrpHandleIoctlGetVirtualRootKey(
        __int64 a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6)
{
  int JobSilo; // ebx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rbx
  signed __int64 *v12; // rdi
  ULONG v13; // eax
  HANDLE v14; // rcx
  unsigned __int64 v16; // [rsp+50h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-1h] BYREF
  PVOID Object; // [rsp+E0h] [rbp+6Fh] BYREF

  Object = 0LL;
  v16 = 0LL;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a2 < 0x10 || *(_DWORD *)(a1 + 8) > 2u )
  {
    JobSilo = -1073741811;
    goto LABEL_19;
  }
  JobSilo = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 4, (__int64)PsJobType, a3, 1381395779, &Object, 0LL, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      JobSilo = PsGetPermanentSiloContext(0LL, gVregSiloContextSlot, &v16);
      if ( JobSilo >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v11 = v16;
        v12 = (signed __int64 *)(v16 + 16);
        ExAcquirePushLockSharedEx(v16 + 16, 0LL);
        if ( *(_DWORD *)(v11 + 84) )
        {
          JobSilo = -1073741738;
LABEL_8:
          if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v12);
          KeAbPostRelease((ULONG_PTR)v12);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_19;
        }
        JobSilo = VrpTranslatePath(&gRootKeyPaths[8 * *(int *)(a1 + 8)], &DestinationString, 0LL, 0LL, 0LL, v11, 0LL);
        if ( JobSilo < 0 )
          goto LABEL_8;
        v13 = 1088;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( a3 != 1 )
          v13 = 576;
        ObjectAttributes.Attributes = v13;
        ObjectAttributes.ObjectName = &DestinationString;
        JobSilo = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
        if ( JobSilo < 0 )
          goto LABEL_8;
        if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v12);
        KeAbPostRelease((ULONG_PTR)v12);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        JobSilo = 0;
        v14 = KeyHandle;
        *a6 = 8;
        *a5 = v14;
      }
    }
  }
LABEL_19:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0x67655256u);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
