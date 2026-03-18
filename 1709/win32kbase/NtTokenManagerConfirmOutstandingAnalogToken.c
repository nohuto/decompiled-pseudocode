/*
 * XREFs of NtTokenManagerConfirmOutstandingAnalogToken @ 0x1C0153380
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ @ 0x1C0153890 (-ConfirmOutstandingAnalogTokenInternal@CTokenManager@@IEAAXXZ.c)
 */

__int64 NtTokenManagerConfirmOutstandingAnalogToken()
{
  unsigned int v0; // ebx
  CTokenManager *v1; // rcx

  v0 = 0;
  KeEnterCriticalRegion();
  if ( UserIsCurrentProcessDwm() )
  {
    if ( g_pTokenManager )
      CTokenManager::ConfirmOutstandingAnalogTokenInternal(v1);
  }
  else
  {
    v0 = -1073741790;
  }
  KeLeaveCriticalRegion();
  return v0;
}
