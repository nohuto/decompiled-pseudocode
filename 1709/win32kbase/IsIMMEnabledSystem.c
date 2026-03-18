/*
 * XREFs of IsIMMEnabledSystem @ 0x1C0006BB0
 * Callers:
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 * Callees:
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C00A668C (-AllowInteractiveServices@@YAHXZ.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( gSessionId == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
