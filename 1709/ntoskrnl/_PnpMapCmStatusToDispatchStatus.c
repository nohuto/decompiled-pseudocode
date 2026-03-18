/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x1400DF2F4
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14045A300 (_PnpDispatchInstallerClass.c)
 *     _PnpDispatchInterfaceClass @ 0x1405197B0 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchDeviceInterface @ 0x14051C600 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchDevice @ 0x140524760 (_PnpDispatchDevice.c)
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
