/*
 * XREFs of ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C00495B0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerInputEvent @ 0x1C00652C0 (PowerInputEvent.c)
 *     EtwTraceIdleStatus @ 0x1C0080B30 (EtwTraceIdleStatus.c)
 *     EtwTraceIdleActionExpiration @ 0x1C0092120 (EtwTraceIdleActionExpiration.c)
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
