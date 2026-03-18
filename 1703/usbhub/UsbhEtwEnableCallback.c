/*
 * XREFs of UsbhEtwEnableCallback @ 0x1C0007FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    dword_1C0069650 = 1;
    UsbhEtwRundown(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
  else
  {
    dword_1C0069650 = 0;
  }
}
