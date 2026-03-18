/*
 * XREFs of NtQueryMultipleValueKey @ 0x140580F4C
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
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
  void *v9; // r8
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v11; // rcx
  NTSTATUS v12; // edi
  PULONG v13; // rax
  SIZE_T v14; // r13
  __int64 v15; // rcx
  SIZE_T v16; // rdx
  volatile void *v17; // r13
  struct _KTHREAD *v18; // rax
  signed int v19; // r8d
  __int64 v21; // rcx
  ULONG v22; // [rsp+44h] [rbp-114h] BYREF
  volatile void *Address; // [rsp+48h] [rbp-110h]
  PVOID Object; // [rsp+50h] [rbp-108h] BYREF
  unsigned int v25[4]; // [rsp+58h] [rbp-100h] BYREF
  PVOID v26; // [rsp+68h] [rbp-F0h] BYREF
  volatile void *v27; // [rsp+70h] [rbp-E8h]
  __int64 v28; // [rsp+78h] [rbp-E0h]
  _SLIST_ENTRY v29; // [rsp+80h] [rbp-D8h] BYREF
  PKEY_VALUE_ENTRY v30; // [rsp+90h] [rbp-C8h]
  PVOID v31; // [rsp+98h] [rbp-C0h]
  PULONG v32; // [rsp+A0h] [rbp-B8h]
  PULONG v33; // [rsp+A8h] [rbp-B0h]
  _QWORD v34[10]; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v35[3]; // [rsp+100h] [rbp-58h] BYREF

  v27 = ValueBuffer;
  v6 = EntryCount;
  Address = ValueEntries;
  v30 = ValueEntries;
  v25[2] = EntryCount;
  v31 = ValueBuffer;
  v32 = BufferLength;
  v33 = RequiredBufferLength;
  v22 = 0;
  v25[0] = 0;
  v26 = 0LL;
  memset(v34, 0, 0x48uLL);
  memset(v35, 0, sizeof(v35));
  v28 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v35, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v12 = CmObReferenceObjectByHandle(KeyHandle, 1u, v9, PreviousMode, &Object, 0LL);
    if ( v12 >= 0 )
    {
      if ( CmpTraceRoutine && Object )
        v28 = *((_QWORD *)Object + 1);
      if ( PreviousMode == 1 )
      {
        v13 = BufferLength;
        if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
          v13 = (PULONG)0x7FFFFFFF0000LL;
        v14 = *v13;
        v22 = *v13;
        if ( (unsigned int)v6 > 0x10000 )
          RtlRaiseStatus(-1073741670);
        ProbeForWrite(Address, 24 * v6, 4u);
        if ( RequiredBufferLength )
        {
          v15 = (__int64)RequiredBufferLength;
          if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
            v15 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v15 = *(_DWORD *)v15;
        }
        v16 = v14;
        v17 = v27;
        ProbeForWrite(v27, v16, 4u);
      }
      else
      {
        v22 = *BufferLength;
        v17 = v27;
      }
      *((_QWORD *)&v29.Next + 1) = &v29;
      v29.Next = &v29;
      v18 = KeGetCurrentThread();
      --v18->KernelApcDisable;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v34[0] = Object;
        v34[1] = Address;
        LODWORD(v34[2]) = v6;
        v34[3] = v17;
        v34[4] = BufferLength;
        v34[5] = RequiredBufferLength;
        v12 = CmpCallCallBacksEx(9u, (__int64)v34, 0LL, 1, 0x18u, (__int64)Object, &v29);
      }
      if ( v12 < 0 )
      {
        if ( v12 == -1073740541 )
          v12 = 0;
      }
      else
      {
        v19 = CmKeyBodyRemapToVirtualForEnum((__int64 *)&Object, PreviousMode, 1u, (__int64 *)&v26);
        if ( v19 >= 0 )
        {
          v19 = CmQueryMultipleValueKey((__int64)Object, (__int64)v26, (__int64)Address, v6, (__int64)v17, &v22, v25);
          LODWORD(Address) = v19;
          *BufferLength = v22;
          if ( RequiredBufferLength )
            *RequiredBufferLength = v25[0];
        }
        v12 = CmPostCallbackNotificationEx(0x18u, (__int64)Object, v19, (__int64)v34, 0LL, &v29);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v26 )
        ObfDereferenceObject(v26);
      ObfDereferenceObject(Object);
    }
    if ( CmpTraceRoutine )
    {
      LOBYTE(v11) = 19;
      CmpTraceRoutine(v11, v35, (unsigned int)v12, (unsigned int)v6, v28, 0LL);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v12;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v21) = 19;
      CmpTraceRoutine(v21, v35, 3221225865LL, (unsigned int)v6, 0LL, 0LL);
    }
    return -1073741431;
  }
}
