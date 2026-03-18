/*
 * XREFs of ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0011560
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerInputEvent @ 0x1C0077A60 (PowerInputEvent.c)
 *     EtwTraceIdleStatus @ 0x1C0085A50 (EtwTraceIdleStatus.c)
 *     EtwTraceIdleActionExpiration @ 0x1C009B4A0 (EtwTraceIdleActionExpiration.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CInputGlobals::GetLastInputTime(CInputGlobals *this)
{
  __int64 v2; // rbx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_QWORD *)this + 2);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
