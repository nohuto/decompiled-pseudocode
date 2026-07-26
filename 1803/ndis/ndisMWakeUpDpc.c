/*
 * XREFs of ndisMWakeUpDpc @ 0x1C0063690
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C002476C (ndisSetWakeUpTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C00503A4 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050488 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C0060FD4 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMWakeUpDpc(
        PVOID SystemSpecific1,
        struct _NDIS_MINIPORT_BLOCK *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  unsigned __int8 v5; // di
  __int64 Clock; // r14
  char v7; // bp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 Flags; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned int WSyncFlags; // eax
  unsigned __int16 CFHangXTicks; // cx
  _LIST_ENTRY *Flink; // rax
  char v16; // al
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax

  v5 = 0;
  Clock = 0LL;
  if ( HIBYTE(dword_1C009AF18) )
  {
    v7 = 1;
    ndisTraceDpcStart((__int64)FunctionContext, 4u);
    Clock = WmiGetClock(0LL, 0LL, v8, v9);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
  Flags = FunctionContext->Flags;
  FunctionContext->MiniportThread = KeGetCurrentThread();
  FunctionContext->LockDbg = 656444;
  if ( (int)Flags >= 0 && (FunctionContext->PnPFlags & 0x20080000) == 0 && !FunctionContext->LockAcquired )
  {
    FunctionContext->LockAcquired = 1;
    FunctionContext->LockDbgX = 656463;
    FunctionContext->LockThread = KeGetCurrentThread();
    if ( (Flags & 0x300000) != 0 )
      goto LABEL_33;
    v11 = (unsigned int)Flags;
    if ( FunctionContext->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler )
    {
      FunctionContext->MiniportThread = 0LL;
      FunctionContext->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
      v5 = FunctionContext->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(FunctionContext->MiniportAdapterContext);
      KeAcquireSpinLockAtDpcLevel(&FunctionContext->Lock);
      Flags = FunctionContext->Flags;
      v11 = Flags;
      FunctionContext->MiniportThread = KeGetCurrentThread();
      FunctionContext->LockDbg = 656478;
    }
    v12 = 0x1000000LL;
    if ( (v11 & 0x1000000) != 0 )
      goto LABEL_33;
    if ( v5 )
    {
      ++FunctionContext->MiniportResetCount;
LABEL_28:
      if ( (Flags & 0x1000000) == 0
        && FunctionContext->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler )
      {
        ndisMQueueWorkItem((__int64)FunctionContext, 3, 0LL);
      }
      goto LABEL_32;
    }
    if ( (v11 & 0x1000) == 0 )
    {
      WSyncFlags = FunctionContext->WSyncFlags;
      if ( (WSyncFlags & 1) != 0 )
      {
        if ( (WSyncFlags & 2) != 0 )
        {
          if ( FunctionContext->PendingOidRequest )
          {
LABEL_27:
            ++FunctionContext->InternalResetCount;
            goto LABEL_28;
          }
        }
        else
        {
          CFHangXTicks = FunctionContext->CFHangXTicks;
          if ( CFHangXTicks )
            FunctionContext->CFHangXTicks = CFHangXTicks - 1;
          else
            FunctionContext->WSyncFlags = WSyncFlags | 2;
        }
      }
    }
    if ( (v11 & 0x800) != 0 )
      goto LABEL_32;
    Flink = FunctionContext->PacketList.Flink;
    v11 = (__int64)&Flink[-4];
    if ( Flink == &FunctionContext->PacketList )
      v11 = 0LL;
    if ( !v11 )
      goto LABEL_32;
    v16 = *(_BYTE *)(v11 + 41);
    if ( (v16 & 0x10) == 0 )
      goto LABEL_32;
    if ( (v16 & 1) == 0 )
    {
      *(_BYTE *)(v11 + 41) = v16 | 1;
LABEL_32:
      ndisMProcessDeferred(FunctionContext, v11, Flags, v12);
LABEL_33:
      FunctionContext->LockAcquired = 0;
      FunctionContext->LockDbgX = 0;
      FunctionContext->LockThread = 0LL;
      goto LABEL_34;
    }
    goto LABEL_27;
  }
LABEL_34:
  KeSetEvent(&FunctionContext->CFHCompletedEvent, 0, 0);
  if ( (FunctionContext->Flags & 0x80000000) == 0 && (FunctionContext->PnPFlags & 0x20080000) == 0 )
    ndisSetWakeUpTimer((__int64)FunctionContext);
  if ( v7 )
  {
    v19 = WmiGetClock(0LL, 0LL, v17, v18);
    ndisTraceDpcEnd((__int64)FunctionContext, 4u, v19 - Clock);
  }
  FunctionContext->MiniportThread = 0LL;
  FunctionContext->LockDbg = 0;
  KeReleaseSpinLockFromDpcLevel(&FunctionContext->Lock);
}
