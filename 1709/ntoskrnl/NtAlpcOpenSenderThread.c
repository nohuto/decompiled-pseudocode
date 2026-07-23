/*
 * XREFs of NtAlpcOpenSenderThread @ 0x140468EC8
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404672A8 (AlpcpProbeAndCaptureMessageHeader.c)
 *     PsOpenThread @ 0x14046BF70 (PsOpenThread.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAlpcOpenSenderThread(
        PHANDLE ThreadHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r14
  int v11; // ebx
  __int64 v12; // rcx
  POBJECT_ATTRIBUTES v13; // r9
  PVOID v14; // rdi
  ULONG_PTR v15; // rbx
  __int64 v16; // rsi
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  ULONG_PTR v19; // [rsp+38h] [rbp-70h] BYREF
  int v20[2]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Source2; // [rsp+48h] [rbp-60h] BYREF
  __int128 v22; // [rsp+58h] [rbp-50h]
  unsigned __int64 ClientViewSize; // [rsp+68h] [rbp-40h]
  OBJECT_ATTRIBUTES v24; // [rsp+70h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
        v12 = (__int64)ThreadHandle;
      *(_QWORD *)v12 = *(_QWORD *)v12;
      AlpcpProbeAndCaptureMessageHeader((unsigned __int64)PortMessage, (__int64)&Source2, Flags);
      if ( ObjectAttributes < v13 )
        v13 = ObjectAttributes;
      v24 = *v13;
    }
    else
    {
      Source2 = *(_OWORD *)&PortMessage->u1.s1.DataLength;
      v22 = *(__int128 *)((char *)&PortMessage->8 + 8);
      ClientViewSize = PortMessage->ClientViewSize;
      v24 = *ObjectAttributes;
    }
    v14 = Object;
    v11 = AlpcpLookupMessage(Object, DWORD2(v22), (unsigned int)ClientViewSize, &v19);
    if ( v11 < 0 )
    {
      ObfDereferenceObject(v14);
    }
    else
    {
      v15 = v19;
      if ( (*(_DWORD *)(v19 + 40) & 0x80u) != 0 )
      {
        AlpcpUnlockMessage(v19);
        ObfDereferenceObject(v14);
        v11 = -1073740029;
      }
      else
      {
        v16 = *(_QWORD *)(v19 + 32);
        if ( v16 && RtlCompareMemory((const void *)(v16 + 1592), (char *)&Source2 + 8, 0x10uLL) == 16 )
        {
          ObfReferenceObject((PVOID)v16);
          AlpcpUnlockMessage(v15);
          v11 = PsOpenThread((int)v20, DesiredAccess, (int)&v24, (int)&Source2 + 8, 0, PreviousMode);
          ObfDereferenceObject((PVOID)v16);
          ObfDereferenceObject(v14);
          if ( v11 >= 0 )
            *ThreadHandle = *(HANDLE *)v20;
        }
        else
        {
          AlpcpUnlockMessage(v15);
          ObfDereferenceObject(v14);
          v11 = -1073741790;
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v11;
}
