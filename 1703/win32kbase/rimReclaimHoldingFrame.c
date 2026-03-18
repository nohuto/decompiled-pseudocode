/*
 * XREFs of rimReclaimHoldingFrame @ 0x1C010ECB8
 * Callers:
 *     RIMRemoveHoldingFrame @ 0x1C00950C8 (RIMRemoveHoldingFrame.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C010E1D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C010EAB8 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     rimFreePointerRawDataListWorker @ 0x1C010EA78 (rimFreePointerRawDataListWorker.c)
 */

__int64 __fastcall rimReclaimHoldingFrame(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a3 + 72);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a3 + 72) = 0LL;
  }
  result = rimFreePointerRawDataListWorker(*(_QWORD *)(a3 + 56));
  *(_DWORD *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_DWORD *)(a3 + 48) = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  *(_QWORD *)(a3 + 80) = 0LL;
  return result;
}
