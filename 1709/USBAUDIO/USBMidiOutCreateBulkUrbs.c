/*
 * XREFs of USBMidiOutCreateBulkUrbs @ 0x1C000671C
 * Callers:
 *     USBMidiOutProcessPin @ 0x1C0022090 (USBMidiOutProcessPin.c)
 * Callees:
 *     USBMidiOutAllocateRequest @ 0x1C0021B18 (USBMidiOutAllocateRequest.c)
 *     USBMIDICreateEventPackets @ 0x1C0021E64 (USBMIDICreateEventPackets.c)
 */

__int64 __fastcall USBMidiOutCreateBulkUrbs(PKSSTREAM_POINTER StreamPointer)
{
  PKSPIN Pin; // rbp
  unsigned int v2; // ebx
  PKSSTREAM_POINTER v3; // rdi
  bool v4; // r14
  NTSTATUS Request; // eax
  PVOID Context; // rsi
  bool v7; // sf
  ULONG Remaining; // r15d
  __int64 v9; // rdx
  KIRQL v10; // r12
  int v11; // ecx
  PKSGATE i; // rax
  ULONG InUsed; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h]

  Pin = StreamPointer->Pin;
  v2 = 0;
  v3 = StreamPointer;
  v4 = 0;
  Request = 0;
  Context = Pin->Context;
  while ( 1 )
  {
    v7 = Request < 0;
    if ( Request < 0 )
      break;
    if ( !v4 )
    {
      Remaining = v3->OffsetIn.Remaining;
      Request = USBMidiOutAllocateRequest(v3);
      if ( Request >= 0 )
      {
        v9 = v15;
        *(_DWORD *)(*(_QWORD *)(v15 + 24) + 36LL) = 0;
        USBMIDICreateEventPackets(v3, v9, &InUsed);
        KsStreamPointerAdvanceOffsets(v3, InUsed, 0, 0);
        if ( Remaining == InUsed )
          v3 = 0LL;
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 12);
        _InterlockedIncrement((volatile signed __int32 *)Context + 10);
        v11 = *((_DWORD *)Context + 10);
        v4 = v11 == 20;
        if ( v11 == 20 )
        {
          for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
            ;
          *((_BYTE *)Context + 36) = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 12, v10);
        Request = IofCallDriver(*(PDEVICE_OBJECT *)(*((_QWORD *)Context + 2) + 40LL), *(PIRP *)(v15 + 16));
      }
      if ( v3 )
        continue;
    }
    v7 = Request < 0;
    break;
  }
  if ( v7 )
    return (unsigned int)Request;
  return v2;
}
