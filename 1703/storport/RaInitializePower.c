/*
 * XREFs of RaInitializePower @ 0x1C0019718
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C000EB28 (RaidPowerPassToMiniPort.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0019510 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C0005900 (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 4640) = 0;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1072, a2, (_QWORD *)a1);
  *(_QWORD *)(a1 + 4632) = result;
  return result;
}
