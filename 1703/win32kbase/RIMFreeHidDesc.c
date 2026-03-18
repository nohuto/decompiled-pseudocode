/*
 * XREFs of RIMFreeHidDesc @ 0x1C0055EEC
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C00079F4 (RIMAllocateHidConfigDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0008734 (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidDesc @ 0x1C0054C24 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C0054FD4 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0109528 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0055F74 (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall RIMFreeHidDesc(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = *(unsigned __int16 *)(a1 + 42);
  LOBYTE(v2) = 3;
  WPP_RECORDER_SF_qDD(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    19,
    30,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
    a1,
    *(_WORD *)(a1 + 42),
    *(_WORD *)(a1 + 40));
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    Win32FreePool(v3);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    Win32FreePool(v4);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
    Win32FreePool(v5);
  return Win32FreePool(a1);
}
