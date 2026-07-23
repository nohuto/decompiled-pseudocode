/*
 * XREFs of NtQueryMultipleValueKey @ 0x140448D38
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
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
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r8d
  int v10; // r9d
  char PreviousMode; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  NTSTATUS v14; // edi
  PULONG v15; // rax
  SIZE_T v16; // r13
  __int64 v17; // rcx
  SIZE_T v18; // rdx
  volatile void *v19; // r13
  struct _KTHREAD *v20; // rax
  int v21; // r9d
  signed int MultipleValueKey; // r8d
  __int64 v24; // rcx
  ULONG v25; // [rsp+44h] [rbp-114h] BYREF
  volatile void *Address; // [rsp+48h] [rbp-110h]
  PVOID Object; // [rsp+50h] [rbp-108h] BYREF
  _DWORD v28[4]; // [rsp+58h] [rbp-100h] BYREF
  PVOID v29; // [rsp+68h] [rbp-F0h] BYREF
  volatile void *v30; // [rsp+70h] [rbp-E8h]
  __int64 v31; // [rsp+78h] [rbp-E0h]
  _QWORD v32[6]; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v33[10]; // [rsp+B0h] [rbp-A8h] BYREF
  LARGE_INTEGER v34[3]; // [rsp+100h] [rbp-58h] BYREF

  v30 = ValueBuffer;
  v6 = EntryCount;
  Address = ValueEntries;
  v7 = (int)KeyHandle;
  v32[2] = ValueEntries;
  v28[2] = EntryCount;
  v32[3] = ValueBuffer;
  v32[4] = BufferLength;
  v32[5] = RequiredBufferLength;
  v25 = 0;
  v28[0] = 0;
  v29 = 0LL;
  memset(v33, 0, 0x48uLL);
  memset(v34, 0, sizeof(v34));
  v31 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v34, 0x20000u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    LOBYTE(v10) = PreviousMode;
    v14 = CmObReferenceObjectByHandle(v7, 1, v9, v10, (__int64)&Object, 0LL);
    if ( v14 >= 0 )
    {
      if ( CmpTraceRoutine && Object )
        v31 = *((_QWORD *)Object + 1);
      if ( PreviousMode == 1 )
      {
        v15 = BufferLength;
        if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
          v15 = (PULONG)0x7FFFFFFF0000LL;
        v16 = *v15;
        v25 = *v15;
        if ( (unsigned int)v6 > 0x10000 )
          RtlRaiseStatus(-1073741670);
        ProbeForWrite(Address, 24 * v6, 4u);
        if ( RequiredBufferLength )
        {
          v17 = (__int64)RequiredBufferLength;
          if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
            v17 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v17 = *(_DWORD *)v17;
        }
        v18 = v16;
        v19 = v30;
        ProbeForWrite(v30, v18, 4u);
      }
      else
      {
        v25 = *BufferLength;
        v19 = v30;
      }
      v32[1] = v32;
      v32[0] = v32;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        v33[0] = Object;
        v33[1] = Address;
        LODWORD(v33[2]) = v6;
        v33[3] = v19;
        v33[4] = BufferLength;
        v33[5] = RequiredBufferLength;
        LOBYTE(v21) = 1;
        v14 = CmpCallCallBacksEx(9, (unsigned int)v33, 0, v21, 24, (__int64)Object, (__int64)v32);
      }
      if ( v14 < 0 )
      {
        if ( v14 == -1073740541 )
          v14 = 0;
      }
      else
      {
        LOBYTE(v12) = PreviousMode;
        MultipleValueKey = CmKeyBodyRemapToVirtualForEnum(&Object, v12, 1LL, &v29);
        if ( MultipleValueKey >= 0 )
        {
          MultipleValueKey = CmQueryMultipleValueKey(
                               (_DWORD)Object,
                               (_DWORD)v29,
                               (_DWORD)Address,
                               v6,
                               (__int64)v19,
                               (__int64)&v25,
                               (__int64)v28);
          LODWORD(Address) = MultipleValueKey;
          *BufferLength = v25;
          if ( RequiredBufferLength )
            *RequiredBufferLength = v28[0];
        }
        v14 = CmPostCallbackNotificationEx(24, (__int64)Object, MultipleValueKey, (__int64)v33, 0LL, v32);
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v29 )
        ObfDereferenceObject(v29);
      ObfDereferenceObject(Object);
    }
    if ( CmpTraceRoutine )
    {
      LOBYTE(v13) = 19;
      CmpTraceRoutine(v13, v34, (unsigned int)v14, (unsigned int)v6, v31, 0LL);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v14;
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v24) = 19;
      CmpTraceRoutine(v24, v34, 3221225865LL, (unsigned int)v6, 0LL, 0LL);
    }
    return -1073741431;
  }
}
