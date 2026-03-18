/*
 * XREFs of UsbhEtwEnableCallback @ 0x1C0028000
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwRundown @ 0x1C002802C (UsbhEtwRundown.c)
 */

void __fastcall UsbhEtwEnableCallback(LPCGUID SourceId, __int64 ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  if ( (_DWORD)ControlCode )
  {
    dword_1C006A650 = 1;
    UsbhEtwRundown(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
  else
  {
    dword_1C006A650 = 0;
  }
}
