/*
 * XREFs of IopEtwEnableCallback @ 0x140719A00
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpExtensionControl @ 0x140232A24 (IopIrpExtensionControl.c)
 */

void __fastcall IopEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode )
  {
    if ( ControlCode != 1 )
      return;
  }
  else
  {
    ControlCode = 0;
  }
  IopIrpExtensionControl(1, ControlCode);
}
