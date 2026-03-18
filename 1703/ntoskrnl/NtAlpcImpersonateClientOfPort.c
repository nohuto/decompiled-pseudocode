/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x14047CFB0
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1406B0CB4 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     AlpcpImpersonateMessage @ 0x14047D170 (AlpcpImpersonateMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406B1264 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAlpcImpersonateClientOfPort(HANDLE Handle, __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned int v8; // r14d
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  PVOID v11; // rdi
  ULONG_PTR v12; // rsi
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  ULONG_PTR BugCheckParameter2[4]; // [rsp+38h] [rbp-20h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (*(_WORD *)(a2 + 4) & 0x1000) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 16);
    v7 = *(_DWORD *)(a2 + 20);
  }
  else
  {
    if ( PreviousMode && (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = *(_DWORD *)(a2 + 24);
    v7 = *(_DWORD *)(a2 + 32);
  }
  if ( v6 && a3 < 2 )
  {
    v8 = 0;
    v9 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v9 >= 0 )
    {
      v10 = v6;
      v11 = Object;
      v9 = AlpcpLookupMessage(Object, v10, v7, BugCheckParameter2);
      if ( v9 >= 0 )
      {
        LOBYTE(v8) = a3 == 1;
        v12 = BugCheckParameter2[0];
        v9 = AlpcpImpersonateMessage(v11, BugCheckParameter2[0], v8);
        if ( AlpcpMessageLogEnabled )
          AlpcpEnterStateChangeEventMessageLog(v12);
        AlpcpUnlockBlob(v12);
      }
      ObfDereferenceObject(v11);
    }
  }
  else
  {
    v9 = -1073741811;
  }
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($69CD3F157F9F39B6F7113F2231989901 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v13);
  }
  return (unsigned int)v9;
}
