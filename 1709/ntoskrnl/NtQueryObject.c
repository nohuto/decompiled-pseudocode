/*
 * XREFs of NtQueryObject @ 0x14048EB10
 * Callers:
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x1400191D8 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeInfo @ 0x140581D04 (ObQueryTypeInfo.c)
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  unsigned int v9; // r8d
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // r15
  __int64 v15; // rcx
  NTSTATUS result; // eax
  NTSTATUS v17; // r12d
  __int64 *v18; // rsi
  void *v19; // rcx
  ULONG HandleAttributes; // ebx
  __int32 v21; // r14d
  NTSTATUS NameStringMode; // eax
  __int64 v23; // r14
  char v24; // al
  int v25; // r13d
  _QWORD *v26; // rax
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v29; // esi
  __int32 v30; // r14d
  __int64 v31; // rax
  void *v32; // rcx
  int v33; // esi
  char *v34; // rcx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rcx
  void *v37; // rdx
  void *v38; // rcx
  ULONG_PTR v39; // rcx
  unsigned int i; // ecx
  __int64 v41; // rcx
  NTSTATUS v42; // eax
  char v43; // [rsp+50h] [rbp-E8h]
  NTSTATUS v44; // [rsp+54h] [rbp-E4h]
  unsigned int v45; // [rsp+58h] [rbp-E0h] BYREF
  PVOID v46; // [rsp+60h] [rbp-D8h]
  unsigned int v47; // [rsp+68h] [rbp-D0h]
  int v48; // [rsp+6Ch] [rbp-CCh]
  PVOID v49; // [rsp+70h] [rbp-C8h]
  __int64 *v50; // [rsp+78h] [rbp-C0h]
  __int64 v51; // [rsp+80h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-B0h]
  __int64 v53; // [rsp+90h] [rbp-A8h]
  int v54; // [rsp+98h] [rbp-A0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v56[56]; // [rsp+A8h] [rbp-90h] BYREF
  PVOID Object[8]; // [rsp+E0h] [rbp-58h] BYREF

  v9 = 0;
  BugCheckParameter2 = 0LL;
  v45 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v43 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
    {
      if ( ObjectInformationLength )
      {
        v11 = (unsigned __int64)ObjectInformation;
        v12 = (unsigned __int64)ObjectInformation + ObjectInformationLength - 1;
        if ( (unsigned __int64)ObjectInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
        {
          if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
            ExRaiseAccessViolation();
        }
        else
        {
          v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          do
          {
            *(_BYTE *)v11 = *(_BYTE *)v11;
            v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          }
          while ( v11 != v13 );
        }
      }
    }
    else
    {
      ProbeForWrite(ObjectInformation, ObjectInformationLength, 4u);
    }
    v14 = ReturnLength;
    if ( ReturnLength )
    {
      v15 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    PreviousMode = v43;
    v9 = 0;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    LODWORD(v49) = 0;
    v18 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v19 = 0LL;
    v17 = 0;
    v44 = 0;
    HandleAttributes = 0;
    HandleInformation = 0LL;
  }
  else
  {
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v17 = result;
    v18 = (__int64 *)Object[0];
    v50 = (__int64 *)Object[0];
    v44 = result;
    if ( result < 0 )
      return result;
    LODWORD(v49) = HandleInformation.GrantedAccess;
    v51 = (__int64)Object[0] - 48;
    v19 = (void *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    HandleAttributes = HandleInformation.HandleAttributes;
    v9 = 0;
  }
  v53 = (__int64)v19;
  v46 = v19;
  if ( ObjectInformationClass == ObjectHandleFlagInformation )
  {
    v45 = 2;
    if ( ObjectInformationLength < 2 )
    {
      v17 = -1073741820;
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
  else
  {
    if ( ObjectInformationClass == ObjectBasicInformation )
    {
      if ( ObjectInformationLength != 56 )
      {
        ObfDereferenceObject(v18);
        return -1073741820;
      }
      memset(v56, 0, sizeof(v56));
      *(_DWORD *)v56 = HandleAttributes;
      v23 = v51;
      v24 = *(_BYTE *)(v51 + 27);
      if ( (v24 & 0x10) != 0 )
      {
        HandleAttributes |= 0x10u;
        *(_DWORD *)v56 = HandleAttributes;
      }
      if ( (v24 & 8) != 0 )
        *(_DWORD *)v56 = HandleAttributes | 0x20;
      v25 = (int)v49;
      *(_DWORD *)&v56[4] = (_DWORD)v49;
      *(_DWORD *)&v56[8] = *(_DWORD *)(v51 + 8);
      *(_DWORD *)&v56[12] = *(_DWORD *)v51;
      v26 = (_QWORD *)OBJECT_HEADER_TO_QUOTA_INFO(v51);
      if ( v26 )
        *(_QWORD *)&v56[16] = *v26;
      else
        *(_QWORD *)&v56[16] = 0LL;
      if ( v46 == ObpSymbolicLinkObjectType )
        v27 = *v18;
      else
        v27 = 0LL;
      *(_QWORD *)&v56[48] = v27;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(v23 + 16, 0LL);
      if ( (*(_BYTE *)(v23 + 26) & 2) != 0
        && (v31 = ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 3], v51 = v23 - v31, v23 != v31)
        && (v32 = *(void **)(v23 - v31), (v49 = v32) != 0LL) )
      {
        ObfReferenceObject(v32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v23 + 16));
        KeAbPostRelease(v23 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v33 = *(unsigned __int16 *)(v51 + 8) + 2;
        while ( 1 )
        {
          v46 = v49;
          if ( !v49 )
            break;
          v34 = (char *)v49 - 48;
          v51 = (__int64)v49 - 48;
          v35 = KeGetCurrentThread();
          --v35->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)(v34 + 16);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v34 + 16), 0LL);
          if ( (*(_BYTE *)(v51 + 26) & 2) == 0
            || (v36 = v51 - ObpInfoMaskToOffset[*(_BYTE *)(v51 + 26) & 3]) == 0
            || (v37 = *(void **)v36) == 0LL )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            KeAbPostRelease(BugCheckParameter2);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            if ( v49 )
              ObfDereferenceObject(v49);
            break;
          }
          v33 += *(unsigned __int16 *)(v36 + 8) + 2;
          v38 = *(void **)v36;
          v49 = v37;
          ObfReferenceObject(v38);
          v39 = BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v39 = BugCheckParameter2;
          }
          KeAbPostRelease(v39);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          ObfDereferenceObject(v46);
        }
        v29 = v33 + 18;
      }
      else
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v23 + 16));
        KeAbPostRelease(v23 + 16);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v29 = 0;
      }
      *(_DWORD *)&v56[36] = v29;
      *(_DWORD *)&v56[40] = *(unsigned __int16 *)(v53 + 16) + 106;
      if ( (v25 & 0x20000) != 0 && *(_QWORD *)(v23 + 40) )
      {
        v54 = 15;
        v48 = 0;
        v18 = v50;
        (*(void (__fastcall **)(__int64 *, __int64, int *))(v53 + 152))(v50, 1LL, &v54);
      }
      else
      {
        v48 = 0;
        v18 = v50;
      }
      *(_DWORD *)&v56[44] = 0;
      *(_OWORD *)ObjectInformation = *(_OWORD *)v56;
      *((_OWORD *)ObjectInformation + 1) = *(_OWORD *)&v56[16];
      *((_OWORD *)ObjectInformation + 2) = *(_OWORD *)&v56[32];
      *((_QWORD *)ObjectInformation + 6) = *(_QWORD *)&v56[48];
      v45 = 56;
      v17 = v44;
      goto LABEL_26;
    }
    v21 = ObjectInformationClass - 1;
    if ( v21 )
    {
      v30 = v21 - 1;
      if ( v30 )
      {
        if ( v30 != 1 )
        {
          ObfDereferenceObject(v18);
          return -1073741821;
        }
        v45 = 8;
        Object[5] = ObjectInformation;
        if ( ObjectInformationLength >= 4 )
        {
          *(_DWORD *)ObjectInformation = 0;
          for ( i = 0; ; ++i )
          {
            v47 = i;
            if ( i >= 0x100 )
              break;
            v53 = ObpObjectTypes[i];
            if ( !v53 )
              break;
            ++*(_DWORD *)ObjectInformation;
          }
          while ( 1 )
          {
            v47 = v9;
            if ( v9 >= 0x100 )
              break;
            Object[6] = (char *)ObjectInformation + v45;
            v41 = ObpObjectTypes[v9];
            v53 = v41;
            if ( !v41 )
              break;
            v42 = ObQueryTypeInfo(v41, (char *)ObjectInformation + v45, ObjectInformationLength, &v45);
            v17 = v42;
            if ( ((v42 + 0x80000000) & 0x80000000) == 0 && v42 != -1073741820 )
              break;
            v9 = BugCheckParameter2 + 1;
            BugCheckParameter2 = (unsigned int)(BugCheckParameter2 + 1);
          }
        }
        else
        {
          v17 = -1073741820;
        }
        goto LABEL_26;
      }
      NameStringMode = ObQueryTypeInfo(v19, ObjectInformation, ObjectInformationLength, &v45);
    }
    else
    {
      NameStringMode = ObQueryNameStringMode(
                         (_DWORD)v18,
                         (_DWORD)ObjectInformation,
                         ObjectInformationLength,
                         (unsigned int)&v45,
                         v43);
    }
    v17 = NameStringMode;
  }
LABEL_26:
  if ( v14 )
    *v14 = v45;
  if ( v18 )
    ObfDereferenceObject(v18);
  return v17;
}
