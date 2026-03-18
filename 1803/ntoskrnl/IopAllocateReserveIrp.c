/*
 * XREFs of IopAllocateReserveIrp @ 0x14023208C
 * Callers:
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     IopAllocateIrpMustSucceed @ 0x140106AA0 (IopAllocateIrpMustSucceed.c)
 * Callees:
 *     IoInitializeIrp @ 0x1400B7210 (IoInitializeIrp.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IopInitActivityIdIrp @ 0x140232848 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // bl
  PIRP v5; // rcx
  bool v6; // zf
  PIRP v7; // rcx
  PIRP v8; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_1403C8340 )
    return 0LL;
  v3 = a2 + 1;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      while ( _InterlockedExchange(&dword_1403C8290, 1) == 1 )
        KeWaitForSingleObject(&word_1403C8298, Executive, 0, 0, 0LL);
      IoInitializeIrp(qword_1403C8288, 72 * v3 + 208, v3);
      qword_1403C8288->AllocationFlags = 33;
      v7 = qword_1403C8288;
      --qword_1403C8288->Tail.Overlay.CurrentStackLocation;
      --v7->CurrentLocation;
      --v7->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_1403C8288);
      return qword_1403C8288;
    }
    else
    {
      if ( a3 != 3 )
        return 0LL;
      while ( _InterlockedExchange(&dword_1403C82B8, 1) == 1 )
      {
        Timeout.QuadPart = -50000000LL;
        if ( KeWaitForSingleObject(&stru_1403C82C0, Executive, 0, 0, &Timeout) == 258 )
          return 0LL;
      }
      IoInitializeIrp(qword_1403C82B0, 72 * v3 + 208, v3);
      qword_1403C82B0->AllocationFlags = 33;
      v8 = qword_1403C82B0;
      --qword_1403C82B0->Tail.Overlay.CurrentStackLocation;
      --v8->CurrentLocation;
      --v8->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_1403C82B0);
      return qword_1403C82B0;
    }
  }
  else
  {
    while ( _InterlockedExchange(&dword_1403C8268, 1) == 1 )
      KeWaitForSingleObject(&word_1403C8270, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 72 * v3 + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v5 = IopReserveIrps;
    --IopReserveIrps->Tail.Overlay.CurrentStackLocation;
    --v5->CurrentLocation;
    --v5->StackCount;
    v6 = (IopIrpExtensionStatus & 1) == 0;
    *((_QWORD *)&v5->Tail.CompletionKey + 10) = v5->Tail.Overlay.CurrentStackLocation;
    if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
}
