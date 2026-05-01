/*
 * XREFs of ?HampUtilStopLockTracking@@YAXXZ @ 0x180064740
 * Callers:
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x180050EB4 (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 * Callees:
 *     <none>
 */

void HampUtilStopLockTracking(void)
{
  DWORD v0; // ebx

  v0 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v0, 0LL);
  }
}
