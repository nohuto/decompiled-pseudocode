/*
 * XREFs of IopAllocateReserveIrp @ 0x1401EF44C
 * Callers:
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     IopAllocateIrpMustSucceed @ 0x1400ED940 (IopAllocateIrpMustSucceed.c)
 *     IoSynchronousPageWriteEx @ 0x14012C59C (IoSynchronousPageWriteEx.c)
 * Callees:
 *     IoInitializeIrp @ 0x14001FF80 (IoInitializeIrp.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopInitActivityIdIrp @ 0x1401EFC10 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // bl
  PIRP v4; // rcx
  bool v5; // zf
  PIRP v7; // rcx
  PIRP v8; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140368F40 )
    return 0LL;
  v3 = a2 + 1;
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140368E68, 1) == 1 )
      KeWaitForSingleObject(&word_140368E70, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 72 * v3 + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v7 = IopReserveIrps;
    --IopReserveIrps->Tail.Overlay.CurrentStackLocation;
    --v7->CurrentLocation;
    --v7->StackCount;
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange(&dword_140368E90, 1) == 1 )
      KeWaitForSingleObject(&word_140368E98, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_140368E88, 72 * v3 + 208, v3);
    qword_140368E88->AllocationFlags = 33;
    v8 = qword_140368E88;
    --qword_140368E88->Tail.Overlay.CurrentStackLocation;
    --v8->CurrentLocation;
    --v8->StackCount;
    v5 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
    if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(qword_140368E88);
    return qword_140368E88;
  }
  if ( a3 != 3 )
    return 0LL;
  if ( _InterlockedExchange(&dword_140368EB8, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    while ( KeWaitForSingleObject(&word_140368EC0, Executive, 0, 0, &Timeout) != 258 )
    {
      if ( _InterlockedExchange(&dword_140368EB8, 1) != 1 )
        goto LABEL_9;
    }
    return 0LL;
  }
LABEL_9:
  IoInitializeIrp(qword_140368EB0, 72 * v3 + 208, v3);
  qword_140368EB0->AllocationFlags = 33;
  v4 = qword_140368EB0;
  --qword_140368EB0->Tail.Overlay.CurrentStackLocation;
  --v4->CurrentLocation;
  --v4->StackCount;
  v5 = (IopIrpExtensionStatus & 1) == 0;
  *((_QWORD *)&v4->Tail.CompletionKey + 10) = v4->Tail.Overlay.CurrentStackLocation;
  if ( !v5 && (IopFunctionPointerMask & 4) != 0 )
    IopInitActivityIdIrp(qword_140368EB0);
  return qword_140368EB0;
}
