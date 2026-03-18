/*
 * XREFs of ?InitMitIocpSupport@@YAJHPEAX0@Z @ 0x1C00FD804
 * Callers:
 *     EditionActivateMitInput @ 0x1C00FD690 (EditionActivateMitInput.c)
 * Callees:
 *     ?CleanupMitIocpSupport@@YAXHH@Z @ 0x1C00FDB64 (-CleanupMitIocpSupport@@YAXHH@Z.c)
 */

__int64 __fastcall InitMitIocpSupport(int a1, void *a2, void *a3)
{
  struct _LIST_ENTRY *Flink; // rbx

  Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
  if ( a1 )
    return 0LL;
  *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount = IOCPDispatcher::PrepareNonSenserHandleForIOCP(
                                                gpIOCPDispatcher,
                                                *(&WPP_MAIN_CB.Reserved + 1));
  if ( *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount )
  {
    WPP_MAIN_CB.SecurityDescriptor = IOCPDispatcher::PrepareNonSenserHandleForIOCP(gpIOCPDispatcher, Flink);
    if ( WPP_MAIN_CB.SecurityDescriptor )
      return 0LL;
  }
  CleanupMitIocpSupport(0, 0);
  return 3221225473LL;
}
