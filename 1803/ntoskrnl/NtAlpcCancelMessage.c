/*
 * XREFs of NtAlpcCancelMessage @ 0x140582FB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG MessageContext_high; // edi
  ULONG Sequence; // r15d
  PVOID PortContext_high; // rsi
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (Flags & 4) != 0 )
    {
      if ( ((unsigned __int8)MessageContext & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      MessageContext_high = HIDWORD(MessageContext->MessageContext);
      Sequence = MessageContext->Sequence;
      PortContext_high = (PVOID)HIDWORD(MessageContext->PortContext);
    }
    else
    {
      if ( ((unsigned __int8)MessageContext & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      MessageContext_high = MessageContext->MessageId;
      Sequence = MessageContext->CallbackId;
      PortContext_high = MessageContext->MessageContext;
    }
  }
  else
  {
    MessageContext_high = MessageContext->MessageId;
    Sequence = MessageContext->CallbackId;
    PortContext_high = MessageContext->MessageContext;
  }
  if ( !MessageContext_high )
  {
    v9 = -1073741559;
    goto LABEL_17;
  }
  v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = MessageContext_high;
    v11 = Object;
    v9 = AlpcpLookupMessage((__int64)Object, v10, Sequence, &BugCheckParameter2);
    if ( v9 >= 0 )
    {
      if ( (Flags & 8) == 0 )
        goto LABEL_14;
      if ( (v11[104] & 6) == 4 )
      {
        if ( PortContext_high == *(PVOID *)(BugCheckParameter2 + 104) )
        {
LABEL_14:
          if ( (*(_DWORD *)(BugCheckParameter2 + 40) & 0x80u) != 0 )
          {
            AlpcpUnlockMessage(BugCheckParameter2, v12, v13, v14);
            v9 = -1073740029;
          }
          else
          {
            v9 = AlpcpCancelMessage((__int64)v11, BugCheckParameter2, Flags);
          }
          goto LABEL_16;
        }
      }
      else if ( PortContext_high == *(PVOID *)(BugCheckParameter2 + 112) )
      {
        goto LABEL_14;
      }
      AlpcpUnlockMessage(BugCheckParameter2, v12, v13, v14);
      v9 = -1073740007;
    }
LABEL_16:
    ObfDereferenceObject(v11);
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
