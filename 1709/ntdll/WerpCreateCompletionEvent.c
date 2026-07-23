/*
 * XREFs of WerpCreateCompletionEvent @ 0x1800DD5B0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DC850 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DCD18 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwCreateEvent @ 0x1800A09C0 (ZwCreateEvent.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

NTSTATUS __fastcall WerpCreateCompletionEvent(PHANDLE EventHandle)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  ObjectAttributes.Length = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  if ( !EventHandle )
    return -1073741585;
  *EventHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwCreateEvent(EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
}
