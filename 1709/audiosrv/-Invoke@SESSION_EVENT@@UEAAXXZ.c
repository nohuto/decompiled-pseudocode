/*
 * XREFs of ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x1800A1D80
 * Callers:
 *     <none>
 * Callees:
 *     VADServerUserSessionChanged @ 0x180064984 (VADServerUserSessionChanged.c)
 */

void __fastcall SESSION_EVENT::Invoke(SESSION_EVENT *this)
{
  VADServerUserSessionChanged(*((_DWORD *)this + 2), *((_QWORD *)this + 2));
  if ( (unsigned int)IsMmeSessionChangedSupported() )
  {
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoShared + 1);
    _InterlockedIncrement((volatile signed __int32 *)g_pPnpInfoActual + 1);
    RtlReleaseResource(&PnpInfoResource);
  }
}
