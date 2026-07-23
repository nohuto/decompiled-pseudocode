/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x1404DDA8C
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404DDD48 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsOpenProcess @ 0x14059A0D0 (PsOpenProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderProcess(
        PHANDLE ProcessHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v11; // ebx
  __int64 v12; // rcx
  POBJECT_ATTRIBUTES v13; // r9
  PVOID v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  ULONG_PTR v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rsi
  signed __int64 *v29; // rbx
  PVOID v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  PVOID Object; // [rsp+30h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-90h] BYREF
  void *v39; // [rsp+40h] [rbp-88h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-80h] BYREF
  __int128 v41; // [rsp+58h] [rbp-70h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-60h]
  OBJECT_ATTRIBUTES v43; // [rsp+70h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_15;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessHandle < 0x7FFFFFFF0000LL )
      v12 = (__int64)ProcessHandle;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    AlpcpProbeAndCaptureMessageHeader(PortMessage, &Source2, Flags);
    if ( ObjectAttributes < v13 )
      v13 = ObjectAttributes;
    v43 = *v13;
  }
  else
  {
    Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
    v41 = *(__int128 *)((char *)&PortMessage->8 + 8);
    ClientViewSize = PortMessage->ClientViewSize;
    v43 = *ObjectAttributes;
  }
  v14 = Object;
  v11 = AlpcpLookupMessage((__int64)Object, DWORD2(v41), ClientViewSize, &BugCheckParameter2);
  if ( v11 < 0 )
  {
    ObfDereferenceObject(v14);
    goto LABEL_15;
  }
  v18 = BugCheckParameter2;
  if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
  {
    AlpcpUnlockMessage(BugCheckParameter2, v15, v16, v17);
    ObfDereferenceObject(v14);
    v11 = -1073740029;
    goto LABEL_15;
  }
  v19 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( v19 )
  {
    if ( RtlCompareMemory((const void *)(v19 + 1592), (char *)&Source2 + 8, 0x10uLL) != 16 )
    {
      AlpcpUnlockMessage(v18, v20, v21, v22);
      ObfDereferenceObject(v14);
      v11 = -1073741813;
      goto LABEL_15;
    }
    v23 = *(_QWORD **)(v19 + 544);
    ObfReferenceObjectWithTag(v23, 0x63706C41u);
    goto LABEL_13;
  }
  v28 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v28 )
  {
    AlpcpUnlockMessage(BugCheckParameter2, v15, v16, v17);
    v30 = v14;
    goto LABEL_28;
  }
  v29 = (signed __int64 *)(v28 + 352);
  ExAcquirePushLockSharedEx(v28 + 352, 0LL);
  if ( (*(_DWORD *)(v28 + 416) & 0x40) == 0 )
  {
    v23 = *(_QWORD **)(v28 + 24);
    if ( v23[92] == *((_QWORD *)&Source2 + 1) )
    {
      ObfReferenceObjectWithTag(v23, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v29);
      KeAbPostRelease((ULONG_PTR)v29);
      v18 = BugCheckParameter2;
      v14 = Object;
LABEL_13:
      AlpcpUnlockMessage(v18, v24, v25, v26);
      v11 = PsOpenProcess(
              (unsigned int)&v39,
              DesiredAccess,
              (unsigned int)&v43,
              (unsigned int)&Source2 + 8,
              0,
              PreviousMode);
      ObfDereferenceObjectWithTag(v23, 0x63706C41u);
      ObfDereferenceObject(v14);
      if ( v11 >= 0 )
        *ProcessHandle = v39;
      goto LABEL_15;
    }
    if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v29);
    KeAbPostRelease((ULONG_PTR)v29);
    AlpcpUnlockMessage(BugCheckParameter2, v31, v32, v33);
    v30 = Object;
LABEL_28:
    ObfDereferenceObject(v30);
    v11 = -1073741790;
    goto LABEL_15;
  }
  if ( _InterlockedCompareExchange64(v29, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v28 + 352));
  KeAbPostRelease(v28 + 352);
  AlpcpUnlockMessage(BugCheckParameter2, v34, v35, v36);
  ObfDereferenceObject(Object);
  v11 = -1073741769;
LABEL_15:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
