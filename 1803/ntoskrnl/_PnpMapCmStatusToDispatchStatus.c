/*
 * XREFs of _PnpMapCmStatusToDispatchStatus @ 0x14006E244
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140490670 (_PnpDispatchInterfaceClass.c)
 *     _PnpDispatchDevice @ 0x140508900 (_PnpDispatchDevice.c)
 *     _PnpDispatchDeviceInterface @ 0x140508CE0 (_PnpDispatchDeviceInterface.c)
 *     _PnpDispatchInstallerClass @ 0x14056AEC0 (_PnpDispatchInstallerClass.c)
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
