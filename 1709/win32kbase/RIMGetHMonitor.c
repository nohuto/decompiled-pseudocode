/*
 * XREFs of RIMGetHMonitor @ 0x1C0106078
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C01015C0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMGetDevicePropertiesLockfree @ 0x1C0101F40 (RIMGetDevicePropertiesLockfree.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011DF7C (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1C011E104 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMGetHMonitor(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( !*(_QWORD *)(a1 + 472) && !*(_DWORD *)(a1 + 776) )
    return -1LL;
  v2 = *(_QWORD *)(a1 + 784);
  if ( v2 )
    return *(_QWORD *)v2;
  return result;
}
