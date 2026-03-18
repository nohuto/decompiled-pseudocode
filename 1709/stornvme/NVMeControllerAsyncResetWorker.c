/*
 * XREFs of NVMeControllerAsyncResetWorker @ 0x1C00056E0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerReset @ 0x1C0005534 (NVMeControllerReset.c)
 *     _guard_dispatch_icall_nop @ 0x1C00139B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NVMeControllerAsyncResetWorker(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bp
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r9

  StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset START\n");
  v6 = NVMeControllerReset(a1, *(_BYTE *)a2);
  if ( *(_QWORD *)(a2 + 8) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset Callback START\n");
    LOBYTE(v8) = v6;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(a2 + 8))(a1, v8, *(_QWORD *)(a2 + 16));
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset Callback END\n");
  }
  StorPortExtendedFunction(1LL, a1, a2, v7);
  if ( a3 )
    StorPortExtendedFunction(31LL, a1, a3, v9);
  return StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset END\n");
}
