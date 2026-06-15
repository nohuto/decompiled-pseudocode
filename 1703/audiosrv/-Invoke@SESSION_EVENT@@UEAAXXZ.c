/*
 * XREFs of ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180025B90
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x180038440 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     VADServerUserSessionChanged @ 0x180025C58 (VADServerUserSessionChanged.c)
 */

void __fastcall SESSION_EVENT::Invoke(SESSION_EVENT *this)
{
  VADServerUserSessionChanged(*((unsigned int *)this + 2), *((_QWORD *)this + 2));
  if ( (unsigned int)IsMmeSessionChangedSupported() )
  {
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
  }
}
