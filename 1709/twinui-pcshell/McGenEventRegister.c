/*
 * XREFs of McGenEventRegister @ 0x180005024
 * Callers:
 *     DllMain @ 0x180005094 (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventRegister(__int64 a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  if ( *a4 )
    return 0;
  else
    return EventRegister(&MICROSOFT_TWINUI_PUBLISHER, (PENABLECALLBACK)McGenControlCallbackV2, a3, a4);
}
