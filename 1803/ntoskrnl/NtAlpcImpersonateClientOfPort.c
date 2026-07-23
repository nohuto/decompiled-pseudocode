/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x1404CED50
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1407470C4 (NtImpersonateClientOfPort.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpImpersonateMessage @ 0x1404CEEA0 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1404CF0D0 (AlpcpCaptureIdMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140747B64 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned int v7; // esi
  NTSTATUS v8; // edi
  __int64 v9; // rdx
  PVOID v10; // rsi
  ULONG_PTR v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AlpcpCaptureIdMessage(Message, &v19, &v16);
  v7 = v19;
  if ( v19 && (unsigned int)((unsigned __int64)Flags >> 2) <= 3 )
  {
    v8 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v9 = v7;
      v10 = Object;
      v8 = AlpcpLookupMessage((__int64)Object, v9, v16, BugCheckParameter2);
      if ( v8 >= 0 )
      {
        v11 = BugCheckParameter2[0];
        v8 = AlpcpImpersonateMessage(
               (_DWORD)v10,
               BugCheckParameter2[0],
               (unsigned __int8)Flags & 1,
               (((4 * (unsigned int)((unsigned __int64)Flags >> 2)) | 2) & (unsigned int)Flags) != 0LL,
               (unsigned __int64)Flags >> 2);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v11, v12, v13, v14);
        AlpcpUnlockBlob(v11, v12, v13, v14);
      }
      ObfDereferenceObject(v10);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
