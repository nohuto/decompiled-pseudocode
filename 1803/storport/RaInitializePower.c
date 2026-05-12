/*
 * XREFs of RaInitializePower @ 0x1C0024D7C
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C000F2D8 (RaidPowerPassToMiniPort.c)
 *     RaidAdapterCompleteInitialization @ 0x1C00255D4 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C0007318 (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 4640) = 0;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1088, a2, a1);
  *(_QWORD *)(a1 + 4632) = result;
  return result;
}
