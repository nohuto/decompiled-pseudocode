/*
 * XREFs of NtQueryObject @ 0x1404A7270
 * Callers:
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x1405FB93C (IopQueryRegistryKeySystemPath.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x14006A188 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 *     ObQueryTypeInfo @ 0x140571D90 (ObQueryTypeInfo.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  PULONG v13; // r15
  __int64 v14; // rcx
  NTSTATUS result; // eax
  NTSTATUS NameStringMode; // r12d
  __int64 *v17; // rsi
  void *v18; // rcx
  ULONG HandleAttributes; // ebx
  __int32 v20; // r14d
  ULONG_PTR v21; // r14
  char v22; // al
  int v23; // r12d
  _QWORD *v24; // rax
  __int64 v25; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v27; // esi
  __int32 v28; // r14d
  __int64 v29; // rax
  void *v30; // rcx
  int v31; // esi
  char *v32; // rcx
  struct _KTHREAD *v33; // rax
  char *v34; // rcx
  void *v35; // rdx
  void *v36; // rcx
  ULONG_PTR v37; // rcx
  unsigned int v38; // ebx
  unsigned int v39; // ecx
  __int64 v40; // rcx
  NTSTATUS v41; // eax
  char v42; // [rsp+50h] [rbp-E8h]
  NTSTATUS v43; // [rsp+54h] [rbp-E4h]
  unsigned int v44; // [rsp+58h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-D8h]
  unsigned int i; // [rsp+68h] [rbp-D0h]
  int v47; // [rsp+6Ch] [rbp-CCh]
  PVOID v48; // [rsp+70h] [rbp-C8h]
  __int64 *v49; // [rsp+78h] [rbp-C0h]
  PVOID v50; // [rsp+80h] [rbp-B8h]
  char *v51; // [rsp+88h] [rbp-B0h]
  __int64 v52; // [rsp+90h] [rbp-A8h]
  int v53; // [rsp+98h] [rbp-A0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v55[56]; // [rsp+A8h] [rbp-90h] BYREF
  PVOID Object[8]; // [rsp+E0h] [rbp-58h] BYREF

  v44 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v42 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
    {
      if ( ObjectInformationLength )
      {
        v10 = (unsigned __int64)ObjectInformation;
        v11 = (unsigned __int64)ObjectInformation + ObjectInformationLength - 1;
        if ( (unsigned __int64)ObjectInformation > v11 || v11 >= 0x7FFFFFFF0000LL )
        {
          if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
            ExRaiseAccessViolation();
        }
        else
        {
          v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v10 = *(_BYTE *)v10;
            v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v10 != v12 );
        }
      }
    }
    else
    {
      ProbeForWrite(ObjectInformation, ObjectInformationLength, 4u);
    }
    v13 = ReturnLength;
    if ( ReturnLength )
    {
      v14 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
    }
    PreviousMode = v42;
  }
  else
  {
    v13 = ReturnLength;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    LODWORD(v48) = 0;
    v17 = 0LL;
    v49 = 0LL;
    BugCheckParameter2 = 0LL;
    v18 = 0LL;
    v50 = 0LL;
    v52 = 0LL;
    NameStringMode = 0;
    v43 = 0;
    HandleAttributes = 0;
    HandleInformation = 0LL;
  }
  else
  {
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    NameStringMode = result;
    v17 = (__int64 *)Object[0];
    v49 = (__int64 *)Object[0];
    v43 = result;
    if ( result < 0 )
      return result;
    LODWORD(v48) = HandleInformation.GrantedAccess;
    BugCheckParameter2 = (ULONG_PTR)Object[0] - 48;
    v18 = (void *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    v50 = v18;
    v52 = (__int64)v18;
    HandleAttributes = HandleInformation.HandleAttributes;
  }
  if ( ObjectInformationClass == ObjectHandleFlagInformation )
  {
    v44 = 2;
    if ( ObjectInformationLength < 2 )
    {
      NameStringMode = -1073741820;
    }
    else
    {
      *(_BYTE *)ObjectInformation = 0;
      if ( (HandleAttributes & 2) != 0 )
        *(_BYTE *)ObjectInformation = 1;
      *((_BYTE *)ObjectInformation + 1) = 0;
      if ( (HandleAttributes & 1) != 0 )
        *((_BYTE *)ObjectInformation + 1) = 1;
    }
  }
  else if ( ObjectInformationClass )
  {
    v20 = ObjectInformationClass - 1;
    if ( v20 )
    {
      v28 = v20 - 1;
      if ( v28 )
      {
        if ( v28 != 1 )
        {
          ObfDereferenceObject(v17);
          return -1073741821;
        }
        v44 = 8;
        Object[5] = ObjectInformation;
        if ( ObjectInformationLength >= 4 )
        {
          v38 = 0;
          *(_DWORD *)ObjectInformation = 0;
          v39 = 0;
          for ( i = 0; v39 < 0x100; i = v39 )
          {
            v52 = ObpObjectTypes[v39];
            if ( !v52 )
              break;
            ++*(_DWORD *)ObjectInformation;
            ++v39;
          }
          while ( 1 )
          {
            i = v38;
            if ( v38 >= 0x100 )
              break;
            Object[6] = (char *)ObjectInformation + v44;
            v40 = ObpObjectTypes[v38];
            v52 = v40;
            if ( !v40 )
              break;
            v41 = ObQueryTypeInfo(v40, (char *)ObjectInformation + v44, ObjectInformationLength, &v44);
            NameStringMode = v41;
            if ( ((v41 + 0x80000000) & 0x80000000) == 0 && v41 != -1073741820 )
              break;
            ++v38;
          }
        }
        else
        {
          NameStringMode = -1073741820;
        }
      }
      else
      {
        NameStringMode = ObQueryTypeInfo(v18, ObjectInformation, ObjectInformationLength, &v44);
      }
    }
    else
    {
      NameStringMode = ObQueryNameStringMode(
                         (_DWORD)v17,
                         (_DWORD)ObjectInformation,
                         ObjectInformationLength,
                         (unsigned int)&v44,
                         v42);
    }
  }
  else
  {
    if ( ObjectInformationLength != 56 )
    {
      ObfDereferenceObject(v17);
      return -1073741820;
    }
    memset(v55, 0, sizeof(v55));
    *(_DWORD *)v55 = HandleAttributes;
    v21 = BugCheckParameter2;
    v22 = *(_BYTE *)(BugCheckParameter2 + 27);
    if ( (v22 & 0x10) != 0 )
    {
      HandleAttributes |= 0x10u;
      *(_DWORD *)v55 = HandleAttributes;
    }
    if ( (v22 & 8) != 0 )
      *(_DWORD *)v55 = HandleAttributes | 0x20;
    v23 = (int)v48;
    *(_DWORD *)&v55[4] = (_DWORD)v48;
    *(_DWORD *)&v55[8] = *(_DWORD *)(BugCheckParameter2 + 8);
    *(_DWORD *)&v55[12] = *(_DWORD *)BugCheckParameter2;
    v24 = (_QWORD *)OBJECT_HEADER_TO_QUOTA_INFO(BugCheckParameter2);
    if ( v24 )
      *(_QWORD *)&v55[16] = *v24;
    else
      *(_QWORD *)&v55[16] = 0LL;
    if ( v50 == ObpSymbolicLinkObjectType )
      v25 = *v17;
    else
      v25 = 0LL;
    *(_QWORD *)&v55[48] = v25;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(v21 + 16, 0LL);
    if ( (*(_BYTE *)(v21 + 26) & 2) != 0
      && (v29 = ObpInfoMaskToOffset[*(_BYTE *)(v21 + 26) & 3], BugCheckParameter2 = v21 - v29, v21 != v29)
      && (v30 = *(void **)(v21 - v29), (v48 = v30) != 0LL) )
    {
      ObfReferenceObject(v30);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v21 + 16));
      KeAbPostRelease(v21 + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v31 = *(unsigned __int16 *)(BugCheckParameter2 + 8) + 2;
      while ( 1 )
      {
        v50 = v48;
        if ( !v48 )
          break;
        v32 = (char *)v48 - 48;
        v51 = (char *)v48 - 48;
        v33 = KeGetCurrentThread();
        --v33->KernelApcDisable;
        BugCheckParameter2 = (ULONG_PTR)(v32 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v32 + 16), 0LL);
        if ( (v51[26] & 2) == 0
          || (v34 = &v51[-ObpInfoMaskToOffset[v51[26] & 3]]) == 0LL
          || (v35 = *(void **)v34) == 0LL )
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
          KeAbPostRelease(BugCheckParameter2);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v48 )
            ObfDereferenceObject(v48);
          break;
        }
        v31 += *((unsigned __int16 *)v34 + 4) + 2;
        v36 = *(void **)v34;
        v48 = v35;
        ObfReferenceObject(v36);
        v37 = BugCheckParameter2;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
          v37 = BugCheckParameter2;
        }
        KeAbPostRelease(v37);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(v50);
      }
      v27 = v31 + 18;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v21 + 16));
      KeAbPostRelease(v21 + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v27 = 0;
    }
    *(_DWORD *)&v55[36] = v27;
    *(_DWORD *)&v55[40] = *(unsigned __int16 *)(v52 + 16) + 106;
    if ( (v23 & 0x20000) != 0 && *(_QWORD *)(v21 + 40) )
    {
      v53 = 15;
      v47 = 0;
      v17 = v49;
      (*(void (__fastcall **)(__int64 *, __int64, int *))(v52 + 152))(v49, 1LL, &v53);
    }
    else
    {
      v47 = 0;
      v17 = v49;
    }
    *(_DWORD *)&v55[44] = 0;
    *(_OWORD *)ObjectInformation = *(_OWORD *)v55;
    *((_OWORD *)ObjectInformation + 1) = *(_OWORD *)&v55[16];
    *((_OWORD *)ObjectInformation + 2) = *(_OWORD *)&v55[32];
    *((_QWORD *)ObjectInformation + 6) = *(_QWORD *)&v55[48];
    v44 = 56;
    NameStringMode = v43;
  }
  if ( v13 )
    *v13 = v44;
  if ( v17 )
    ObfDereferenceObject(v17);
  return NameStringMode;
}
