/*
 * XREFs of DwmpNotifyUserLogoff @ 0x180003280
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001518 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003C6C (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpRequestUnloadUserRegKeys @ 0x1800043E8 (DwmpRequestUnloadUserRegKeys.c)
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
      DoStackCapture(v1, 0x688u);
  }
  TraceLoggingWriteEtw(8, v0, 0LL);
  ReleaseSRWLockShared(&gDwmStateLock);
  return v0;
}
