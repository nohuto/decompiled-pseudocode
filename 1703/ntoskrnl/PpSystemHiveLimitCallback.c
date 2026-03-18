/*
 * XREFs of PpSystemHiveLimitCallback @ 0x1406956E0
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     PpResetProblemDevices @ 0x1406A7080 (PpResetProblemDevices.c)
 */

__int64 __fastcall PpSystemHiveLimitCallback(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 < *(_DWORD *)(a1 + 4) )
  {
    PnpSystemHiveTooLarge = 0;
    PpResetProblemDevices();
    return PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 14, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    PnpSystemHiveTooLarge = 1;
  }
  return result;
}
