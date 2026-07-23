/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x14049DAF0
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1406DC454 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     AlpcpImpersonateMessage @ 0x14049DC60 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x14049DE90 (AlpcpCaptureIdMessage.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406DCE44 (AlpcpEnterStateChangeEventMessageLog.c)
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned int v7; // esi
  int v8; // edi
  __int64 v9; // rdx
  PVOID v10; // rsi
  ULONG_PTR v11; // rbx
  struct _KTHREAD *v12; // rax
  $B476B70DB57F76B110DA5B9238C3E934 *v14; // rcx
  unsigned int v16; // [rsp+30h] [rbp-38h] BYREF
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
      v8 = AlpcpLookupMessage(Object, v9, v16, BugCheckParameter2);
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
          AlpcpEnterStateChangeEventMessageLog(v11);
        AlpcpUnlockBlob(v11);
      }
      ObfDereferenceObject(v10);
    }
  }
  else
  {
    v8 = -1073741811;
  }
  v12 = KeGetCurrentThread();
  if ( v12->KernelApcDisable++ == -1 )
  {
    v14 = &v12->152;
    if ( ($B476B70DB57F76B110DA5B9238C3E934 *)v14->ApcState.ApcListHead[0].Flink != v14 && !v12->SpecialApcDisable )
      KiCheckForKernelApcDelivery((__int64)v14);
  }
  return v8;
}
