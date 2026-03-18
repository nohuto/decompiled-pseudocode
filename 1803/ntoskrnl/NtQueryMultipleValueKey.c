/*
 * XREFs of NtQueryMultipleValueKey @ 0x1405615AC
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmQueryMultipleValueKey @ 0x1404A3418 (CmQueryMultipleValueKey.c)
 *     CmpCaptureKeyValueArray @ 0x1404A45C4 (CmpCaptureKeyValueArray.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpBounceContextCleanup @ 0x1404ACA20 (CmpBounceContextCleanup.c)
 *     CmpBounceContextStart @ 0x1404AD270 (CmpBounceContextStart.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x140561AD4 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 */

NTSTATUS __stdcall NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // di
  void *v10; // r8
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v12; // rdx
  int v13; // edi
  PULONG v14; // rax
  SIZE_T v15; // rdi
  _DWORD *v16; // r13
  __int64 v17; // rcx
  SIZE_T v18; // rdx
  volatile void *v19; // rdi
  struct _KTHREAD *v20; // rax
  int v21; // r9d
  int v22; // eax
  unsigned int v23; // r10d
  __int64 i; // r9
  __int64 v25; // r8
  PPRIVILEGE_SET v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  char v30; // [rsp+40h] [rbp-1B8h]
  char v31; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v32; // [rsp+42h] [rbp-1B6h]
  unsigned int v33[3]; // [rsp+44h] [rbp-1B4h] BYREF
  PVOID Object; // [rsp+50h] [rbp-1A8h] BYREF
  ULONG v35; // [rsp+58h] [rbp-1A0h] BYREF
  volatile void *v36; // [rsp+60h] [rbp-198h]
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-190h] BYREF
  int v38; // [rsp+70h] [rbp-188h]
  PVOID v39; // [rsp+78h] [rbp-180h] BYREF
  volatile void *Address; // [rsp+80h] [rbp-178h]
  __int64 v41; // [rsp+88h] [rbp-170h]
  PPRIVILEGE_SET v42; // [rsp+90h] [rbp-168h] BYREF
  _QWORD v43[3]; // [rsp+98h] [rbp-160h] BYREF
  _QWORD v44[10]; // [rsp+B0h] [rbp-148h] BYREF
  LARGE_INTEGER v45[4]; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+128h] [rbp-D0h]
  char v48; // [rsp+130h] [rbp-C8h]
  _BYTE v49[48]; // [rsp+180h] [rbp-78h] BYREF

  v36 = ValueBuffer;
  v6 = EntryCount;
  Address = ValueEntries;
  v43[2] = ValueEntries;
  v33[1] = EntryCount;
  v35 = 0;
  memset(v45, 0, sizeof(v45));
  v41 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v45, 0x20000u);
  v30 = 0;
  v31 = 0;
  Object = 0LL;
  memset(v44, 0, 0x48uLL);
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0;
  v43[1] = v43;
  v43[0] = v43;
  v39 = 0LL;
  Privileges = 0LL;
  v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v32 = v9;
  if ( !v9 )
  {
    v13 = -1073741431;
    goto LABEL_33;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = CmObReferenceObjectByHandle(KeyHandle, 1u, v10, PreviousMode, &Object, 0LL);
  if ( v13 < 0 )
    goto LABEL_33;
  if ( CmpTraceRoutine && Object )
    v41 = *((_QWORD *)Object + 1);
  if ( PreviousMode == 1 )
  {
    v14 = BufferLength;
    if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
      v14 = (PULONG)0x7FFFFFFF0000LL;
    v15 = *v14;
    v33[0] = *v14;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    v16 = Address;
    ProbeForWrite(Address, 24 * v6, 4u);
    if ( RequiredBufferLength )
    {
      v17 = (__int64)RequiredBufferLength;
      if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
    }
    v18 = v15;
    v19 = v36;
    ProbeForWrite(v36, v18, 4u);
  }
  else
  {
    v33[0] = *BufferLength;
    v16 = Address;
    v19 = v36;
  }
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v31 = 1;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    goto LABEL_23;
  v44[0] = Object;
  v44[1] = v16;
  LODWORD(v44[2]) = v6;
  v44[3] = v19;
  v44[4] = BufferLength;
  v44[5] = RequiredBufferLength;
  LOBYTE(v21) = 1;
  v22 = CmpCallCallBacksEx(9, (unsigned int)v44, 0, v21, 24, (__int64)Object, (__int64)v43);
  v13 = v22;
  if ( v22 >= 0 )
  {
    v30 = 1;
LABEL_23:
    LOBYTE(v12) = PreviousMode;
    v13 = CmKeyBodyRemapToVirtualForEnum(&Object, v12, 1LL, &v39);
    if ( v13 >= 0 )
    {
      v13 = CmpCaptureKeyValueArray((__int64)v16, v6, PreviousMode, &Privileges, &v42);
      if ( v13 >= 0 )
      {
        v13 = CmpBounceContextStart((__int64)&v46, (unsigned __int64)v36, v33[0], (unsigned int)PreviousMode, 4);
        if ( v13 >= 0 )
        {
          CmpAttachToRegistryProcess((__int64)v49);
          v13 = CmQueryMultipleValueKey((__int64)Object, (__int64)v39, (__int64)Privileges, v6, v47, v33, &v35);
          LODWORD(v36) = v13;
          KiUnstackDetachProcess((__int64)v49, 0LL);
          v23 = v33[0];
          *BufferLength = v33[0];
          if ( RequiredBufferLength )
            *RequiredBufferLength = v35;
          if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v38 = i;
              if ( (unsigned int)i >= (unsigned int)v6 )
                break;
              v25 = 32LL * (unsigned int)i;
              v26 = Privileges;
              v27 = 3 * i;
              v16[2 * v27 + 2] = *(ULONG *)((char *)&Privileges->Privilege[0].Attributes + v25);
              v16[2 * v27 + 3] = *(ULONG *)((char *)&v26[1].PrivilegeCount + v25);
              v16[2 * v27 + 4] = *(ULONG *)((char *)&v26[1].Control + v25);
            }
            CmpBounceContextCopyDataToCallerBuffer(&v46, v23);
          }
        }
      }
    }
    goto LABEL_33;
  }
  if ( v22 == -1073740541 )
    v13 = 0;
LABEL_33:
  if ( v39 )
    ObfDereferenceObject(v39);
  if ( v30 )
    v13 = CmPostCallbackNotificationEx(24, (__int64)Object, v13, (__int64)v44, 0LL, v43);
  if ( v31 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  CmpBounceContextCleanup((__int64)&v46);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v28) = 19;
    CmpTraceRoutine(v28, v45, (unsigned int)v13, (unsigned int)v6, v41, 0LL);
  }
  if ( v32 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v42 )
    CmSiFreeMemory(v42);
  return v13;
}
