/*
 * XREFs of IopAllocateReserveIrp @ 0x1401F4B5C
 * Callers:
 *     IoPageReadEx @ 0x140064A60 (IoPageReadEx.c)
 *     IopAllocateIrpMustSucceed @ 0x140085890 (IopAllocateIrpMustSucceed.c)
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x140113A70 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x1401F5318 (IopInitActivityIdIrp.c)
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
  if ( a2 > byte_140384F80 )
    return 0LL;
  v3 = a2 + 1;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      while ( _InterlockedExchange(&dword_140384ED0, 1) == 1 )
        KeWaitForSingleObject(&word_140384ED8, Executive, 0, 0, 0LL);
      IoInitializeIrp(qword_140384EC8, 72 * v3 + 208, v3);
      qword_140384EC8->AllocationFlags = 33;
      v7 = qword_140384EC8;
      --qword_140384EC8->Tail.Overlay.CurrentStackLocation;
      --v7->CurrentLocation;
      --v7->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v7->Tail.CompletionKey + 10) = v7->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_140384EC8);
      return qword_140384EC8;
    }
    else
    {
      if ( a3 != 3 )
        return 0LL;
      while ( _InterlockedExchange(&dword_140384EF8, 1) == 1 )
      {
        Timeout.QuadPart = -50000000LL;
        if ( KeWaitForSingleObject(&stru_140384F00, Executive, 0, 0, &Timeout) == 258 )
          return 0LL;
      }
      IoInitializeIrp(qword_140384EF0, 72 * v3 + 208, v3);
      qword_140384EF0->AllocationFlags = 33;
      v8 = qword_140384EF0;
      --qword_140384EF0->Tail.Overlay.CurrentStackLocation;
      --v8->CurrentLocation;
      --v8->StackCount;
      v6 = (IopIrpExtensionStatus & 1) == 0;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      if ( !v6 && (IopFunctionPointerMask & 4) != 0 )
        IopInitActivityIdIrp(qword_140384EF0);
      return qword_140384EF0;
    }
  }
  else
  {
    while ( _InterlockedExchange(&dword_140384EA8, 1) == 1 )
      KeWaitForSingleObject(&word_140384EB0, Executive, 0, 0, 0LL);
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
