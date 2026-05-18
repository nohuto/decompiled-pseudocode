/*
 * XREFs of DwmpNotifyUserLogoff @ 0x180003340
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x1800015B8 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003CF4 (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x1800044C8 (DwmpRequestUnloadUserRegKeys.c)
 */

__int64 DwmpNotifyUserLogoff()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  AcquireSRWLockShared(&gDwmStateLock);
  if ( ghDwmProcess )
  {
    v1 = DwmpRequestUnloadUserRegKeys();
    v0 = v1;
    if ( v1 < 0 )
      DoStackCapture(v1, 0x68Du);
  }
  TraceLoggingWriteEtw(8, v0, 0LL);
  ReleaseSRWLockShared(&gDwmStateLock);
  return v0;
}
