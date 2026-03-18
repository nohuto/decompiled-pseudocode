/*
 * XREFs of CiTaskLocate @ 0x1C000A4BC
 * Callers:
 *     CiLookupTask @ 0x1C0009EDC (CiLookupTask.c)
 *     CiTaskAllocate @ 0x1C000C344 (CiTaskAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiTaskLocate(wchar_t *Str1, _QWORD *a2)
{
  struct _DEVICE_OBJECT *Flink; // rbx

  Flink = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
  if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink == &WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
    return 3221226752LL;
  while ( _wcsicmp(Str1, (const wchar_t *)Flink->NextDevice) )
  {
    Flink = *(struct _DEVICE_OBJECT **)&Flink->Type;
    if ( Flink == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead )
      return 3221226752LL;
  }
  *a2 = (char *)Flink - 8;
  return 0LL;
}
