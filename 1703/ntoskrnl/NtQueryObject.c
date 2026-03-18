/*
 * XREFs of NtQueryObject @ 0x1404FAD40
 * Callers:
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x140088018 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObQueryTypeInfo @ 0x14044E8F0 (ObQueryTypeInfo.c)
 *     ObQueryNameStringMode @ 0x1404FB3B0 (ObQueryNameStringMode.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  SIZE_T v5; // r13
  unsigned int v9; // r9d
  KPROCESSOR_MODE PreviousMode; // al
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // r15
  __int64 v15; // rcx
  NTSTATUS result; // eax
  NTSTATUS v17; // r12d
  __int64 *v18; // rsi
  __int64 v19; // rcx
  ULONG HandleAttributes; // ebx
  __int32 v21; // r14d
  NTSTATUS NameStringMode; // eax
  signed __int64 *v23; // r14
  char v24; // al
  int v25; // r13d
  _QWORD *v26; // rax
  __int64 v27; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v29; // esi
  __int32 v30; // r14d
  signed __int64 *v31; // rax
  void *v32; // rcx
  int v33; // esi
  char *v34; // rcx
  struct _KTHREAD *v35; // rax
  char *v36; // rax
  char *v37; // rdx
  ULONG_PTR v38; // rcx
  unsigned int i; // ecx
  __int64 v40; // rcx
  NTSTATUS v41; // eax
  char v42; // [rsp+50h] [rbp-E8h]
  NTSTATUS v43; // [rsp+54h] [rbp-E4h]
  ULONG v44; // [rsp+58h] [rbp-E0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-D8h]
  unsigned int v46; // [rsp+68h] [rbp-D0h]
  int v47; // [rsp+6Ch] [rbp-CCh]
  PVOID v48; // [rsp+70h] [rbp-C8h]
  __int64 *v49; // [rsp+78h] [rbp-C0h]
  PVOID v50; // [rsp+80h] [rbp-B8h]
  signed __int64 *v51; // [rsp+88h] [rbp-B0h]
  __int64 v52; // [rsp+90h] [rbp-A8h]
  int v53; // [rsp+98h] [rbp-A0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v55[56]; // [rsp+A8h] [rbp-90h] BYREF
  PVOID Object[8]; // [rsp+E0h] [rbp-58h] BYREF

  v5 = ObjectInformationLength;
  v9 = 0;
  v51 = 0LL;
  v44 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v42 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
    {
      if ( (_DWORD)v5 )
      {
        v11 = (unsigned __int64)ObjectInformation;
        v12 = (unsigned __int64)ObjectInformation + v5 - 1;
        if ( (unsigned __int64)ObjectInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
        {
          if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
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
      ProbeForWrite(ObjectInformation, v5, 4u);
      v9 = 0;
    }
    v14 = ReturnLength;
    if ( ReturnLength )
    {
      v15 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    PreviousMode = v42;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    LODWORD(v48) = 0;
    v18 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v19 = 0LL;
    v17 = 0;
    v43 = 0;
    HandleAttributes = 0;
    HandleInformation = 0LL;
  }
  else
  {
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v17 = result;
    v18 = (__int64 *)Object[0];
    v49 = (__int64 *)Object[0];
    v43 = result;
    if ( result < 0 )
      return result;
    LODWORD(v48) = HandleInformation.GrantedAccess;
    v50 = (char *)Object[0] - 48;
    v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    HandleAttributes = HandleInformation.HandleAttributes;
    v9 = 0;
  }
  v52 = v19;
  BugCheckParameter2 = v19;
  if ( ObjectInformationClass == ObjectHandleFlagInformation )
  {
    v44 = 2;
    Object[7] = ObjectInformation;
    if ( (unsigned int)v5 < 2 )
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
      if ( (_DWORD)v5 != 56 )
      {
        ObfDereferenceObject(v18);
        return -1073741820;
      }
      memset(v55, 0, sizeof(v55));
      *(_DWORD *)v55 = HandleAttributes;
      v23 = (signed __int64 *)v50;
      v24 = *((_BYTE *)v50 + 27);
      if ( (v24 & 0x10) != 0 )
      {
        HandleAttributes |= 0x10u;
        *(_DWORD *)v55 = HandleAttributes;
      }
      if ( (v24 & 8) != 0 )
        *(_DWORD *)v55 = HandleAttributes | 0x20;
      v25 = (int)v48;
      *(_DWORD *)&v55[4] = (_DWORD)v48;
      *(_DWORD *)&v55[8] = *((_DWORD *)v50 + 2);
      *(_DWORD *)&v55[12] = *(_DWORD *)v50;
      v26 = (_QWORD *)OBJECT_HEADER_TO_QUOTA_INFO((__int64)v50);
      if ( v26 )
        *(_QWORD *)&v55[16] = *v26;
      else
        *(_QWORD *)&v55[16] = 0LL;
      if ( (POBJECT_TYPE)BugCheckParameter2 == ObpSymbolicLinkObjectType )
        v27 = *v18;
      else
        v27 = 0LL;
      *(_QWORD *)&v55[48] = v27;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v23 + 2), 0LL);
      if ( (*((_BYTE *)v23 + 26) & 2) != 0
        && (v31 = (signed __int64 *)ObpInfoMaskToOffset[*((_BYTE *)v23 + 26) & 3],
            BugCheckParameter2 = (char *)v23 - (char *)v31,
            v23 != v31)
        && (v32 = *(void **)((char *)v23 - (char *)v31), (v48 = v32) != 0LL) )
      {
        ObfReferenceObject(v32);
        if ( _InterlockedCompareExchange64(v23 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v23 + 2);
        KeAbPostRelease((ULONG_PTR)(v23 + 2));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v33 = *(unsigned __int16 *)(BugCheckParameter2 + 8) + 2;
        while ( 1 )
        {
          v50 = v48;
          if ( !v48 )
            break;
          v34 = (char *)v48 - 48;
          v51 = (signed __int64 *)((char *)v48 - 48);
          v35 = KeGetCurrentThread();
          --v35->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)(v34 + 16);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v34 + 16), 0LL);
          if ( (*((_BYTE *)v51 + 26) & 2) == 0
            || (v36 = (char *)ObpInfoMaskToOffset[*((_BYTE *)v51 + 26) & 3],
                v37 = (char *)((char *)v51 - v36),
                v51 == (signed __int64 *)v36)
            || !*(_QWORD *)v37 )
          {
            if ( _InterlockedCompareExchange64(v51 + 2, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(v51 + 2);
            KeAbPostRelease((ULONG_PTR)(v51 + 2));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            if ( v48 )
              ObfDereferenceObject(v48);
            break;
          }
          v33 += *((unsigned __int16 *)v37 + 4) + 2;
          v48 = *(PVOID *)v37;
          ObfReferenceObject(v48);
          v38 = BugCheckParameter2;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
            v38 = BugCheckParameter2;
          }
          KeAbPostRelease(v38);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(v50);
        }
        v29 = v33 + 18;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v23 + 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v23 + 2);
        KeAbPostRelease((ULONG_PTR)(v23 + 2));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v29 = 0;
      }
      *(_DWORD *)&v55[36] = v29;
      *(_DWORD *)&v55[40] = *(unsigned __int16 *)(v52 + 16) + 106;
      if ( (v25 & 0x20000) != 0 && v23[5] )
      {
        v53 = 15;
        v47 = 0;
        v18 = v49;
        (*(void (__fastcall **)(__int64 *, __int64, int *))(v52 + 152))(v49, 1LL, &v53);
      }
      else
      {
        v47 = 0;
        v18 = v49;
      }
      *(_DWORD *)&v55[44] = 0;
      *(_OWORD *)ObjectInformation = *(_OWORD *)v55;
      *((_OWORD *)ObjectInformation + 1) = *(_OWORD *)&v55[16];
      *((_OWORD *)ObjectInformation + 2) = *(_OWORD *)&v55[32];
      *((_QWORD *)ObjectInformation + 6) = *(_QWORD *)&v55[48];
      v44 = 56;
      v17 = v43;
      goto LABEL_27;
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
        v44 = 8;
        Object[5] = ObjectInformation;
        if ( (unsigned int)v5 >= 4 )
        {
          *(_DWORD *)ObjectInformation = 0;
          for ( i = 0; ; ++i )
          {
            v46 = i;
            if ( i >= 0x100 )
              break;
            v52 = ObpObjectTypes[i];
            if ( !v52 )
              break;
            ++*(_DWORD *)ObjectInformation;
          }
          while ( 1 )
          {
            v46 = v9;
            if ( v9 >= 0x100 )
              break;
            Object[6] = (char *)ObjectInformation + v44;
            v40 = ObpObjectTypes[v9];
            v52 = v40;
            if ( !v40 )
              break;
            v41 = ObQueryTypeInfo(v40, (__int64)ObjectInformation + v44, v5, &v44);
            v17 = v41;
            if ( ((v41 + 0x80000000) & 0x80000000) == 0 && v41 != -1073741820 )
              break;
            v9 = (_DWORD)v51 + 1;
            v51 = (signed __int64 *)(unsigned int)((_DWORD)v51 + 1);
          }
        }
        else
        {
          v17 = -1073741820;
        }
        goto LABEL_27;
      }
      NameStringMode = ObQueryTypeInfo(v19, (__int64)ObjectInformation, v5, &v44);
    }
    else
    {
      NameStringMode = ObQueryNameStringMode((_DWORD)v18, (_DWORD)ObjectInformation, v5, (unsigned int)&v44, v42);
    }
    v17 = NameStringMode;
  }
LABEL_27:
  if ( v14 )
    *v14 = v44;
  if ( v18 )
    ObfDereferenceObject(v18);
  return v17;
}
