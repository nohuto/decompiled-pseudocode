/*
 * XREFs of NVMeControllerAsyncReset @ 0x1C0005390
 * Callers:
 *     NVMeFirmwareActivateCompletion @ 0x1C000A800 (NVMeFirmwareActivateCompletion.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeControllerAsyncReset(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  if ( (unsigned int)StorPortExtendedFunction(29LL, a1, v9, a4)
    || (unsigned int)StorPortExtendedFunction(0LL, a1, 24LL, 1701672526LL)
    || (MEMORY[0] = a2,
        MEMORY[8] = NVMeFirmwareActivateCompletionAfterReset,
        MEMORY[0x10] = a4,
        (unsigned int)StorPortExtendedFunction(30LL, a1, NVMeControllerAsyncResetWorker, v9[0])) )
  {
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset FAILED\n");
    if ( v9[0] )
      StorPortExtendedFunction(31LL, a1, v9[0], v8);
    return 0;
  }
  else
  {
    StorPortDebugPrint(3LL, "StorNVMe - Async Controller Reset QUEUED\n");
    return 1;
  }
}
