/*
 * XREFs of McGenEventRegister @ 0x180001BC4
 * Callers:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180004148 (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventRegister(__int64 a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  if ( *a4 )
    return 0;
  else
    return EventRegister(&MinInput, (PENABLECALLBACK)McGenControlCallbackV2, a3, a4);
}
