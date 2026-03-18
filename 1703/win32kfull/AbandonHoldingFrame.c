/*
 * XREFs of AbandonHoldingFrame @ 0x1C019A6A4
 * Callers:
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C019A540 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 * Callees:
 *     FreePointerRawDataList @ 0x1C019ABBC (FreePointerRawDataList.c)
 */

__int64 __fastcall AbandonHoldingFrame(__int64 a1)
{
  __int64 v2; // rcx

  EtwTraceEndPointerFrameCreation(
    0LL,
    *(unsigned int *)(a1 + 36),
    (unsigned int)(*(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 36)));
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
    Win32FreePool(v2);
  FreePointerRawDataList(*(_QWORD *)(a1 + 48));
  return ResetHoldingFrame(a1);
}
