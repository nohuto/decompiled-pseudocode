/*
 * XREFs of AbandonHoldingFrame @ 0x1C01A62D0
 * Callers:
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01A616C (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 * Callees:
 *     FreePointerRawDataList @ 0x1C01A6828 (FreePointerRawDataList.c)
 *     ResetHoldingFrame @ 0x1C01A6E04 (ResetHoldingFrame.c)
 */

__int64 __fastcall AbandonHoldingFrame(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx

  EtwTraceEndPointerFrameCreation(
    0LL,
    *(unsigned int *)(a1 + 36),
    (unsigned int)(*(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 36)));
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 )
    Win32FreePool(v4, v2, v3);
  FreePointerRawDataList(*(_QWORD *)(a1 + 48));
  return ResetHoldingFrame(a1);
}
