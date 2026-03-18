/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x14004C4D0
 * Callers:
 *     _PnpDispatchDevice @ 0x140486450 (_PnpDispatchDevice.c)
 *     _PnpDispatchDeviceInterface @ 0x1404E1140 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchInterfaceClass @ 0x1404E2FF0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchInstallerClass @ 0x1405A9680 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpMapCmStatusToDispatchStatus(unsigned int a1)
{
  if ( a1 != -1073741810 )
  {
    if ( a1 == -1073741767 )
      return 3221225523LL;
    if ( a1 != -1073741766 )
    {
      if ( a1 == -1073741637 )
        return 3221226021LL;
      if ( a1 != -1073741632 && a1 != -1073741127 )
        return a1;
    }
  }
  return 3221225524LL;
}
