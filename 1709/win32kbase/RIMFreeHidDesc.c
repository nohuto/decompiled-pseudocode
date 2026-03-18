/*
 * XREFs of RIMFreeHidDesc @ 0x1C000D2C8
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C00087B0 (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateHidDesc @ 0x1C000D844 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C000DB5C (RIMCreateHidDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C000E7F0 (RIMFreeSpecificDevWorker.c)
 *     RIMIDECreateHIDDesc @ 0x1C0108550 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C000E5AC (WPP_RECORDER_SF_qDD.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreeHidDesc(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *(unsigned __int16 *)(a1 + 42);
  LOBYTE(v2) = 3;
  WPP_RECORDER_SF_qDD(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    19,
    30,
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
    a1,
    *(_WORD *)(a1 + 42),
    *(_WORD *)(a1 + 40));
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    Win32FreePool(v5, v3, v4);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 )
    Win32FreePool(v6, v3, v4);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
    Win32FreePool(v7, v3, v4);
  return Win32FreePool(a1, v3, v4);
}
