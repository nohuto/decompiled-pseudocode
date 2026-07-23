/*
 * XREFs of NtAlpcCancelMessage @ 0x14042F61C
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAlpcCancelMessage(HANDLE PortHandle, ULONG Flags, PALPC_CONTEXT_ATTR MessageContext)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG MessageContext_high; // edi
  ULONG Sequence; // r15d
  PVOID PortContext_high; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  _DWORD *v11; // rdi
  bool v13; // zf
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v15; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (Flags & 0xFFFFFFF0) != 0 )
  {
    v9 = -1073741811;
  }
  else
  {
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
    if ( MessageContext_high )
    {
      v9 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
      if ( v9 >= 0 )
      {
        v10 = MessageContext_high;
        v11 = Object;
        v9 = AlpcpLookupMessage(Object, v10, Sequence, &v15);
        if ( v9 >= 0 )
        {
          if ( (Flags & 8) == 0
            || ((v11[104] & 6) != 4
              ? (v13 = PortContext_high == *(PVOID *)(v15 + 112))
              : (v13 = PortContext_high == *(PVOID *)(v15 + 104)),
                v13) )
          {
            if ( (*(_DWORD *)(v15 + 40) & 0x80u) != 0 )
            {
              AlpcpUnlockMessage(v15);
              v9 = -1073740029;
            }
            else
            {
              v9 = AlpcpCancelMessage(v11, v15, Flags);
            }
          }
          else
          {
            AlpcpUnlockMessage(v15);
            v9 = -1073740007;
          }
        }
        ObfDereferenceObject(v11);
      }
    }
    else
    {
      v9 = -1073741559;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v9;
}
