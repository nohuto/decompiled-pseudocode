/*
 * XREFs of KiSetCacheInformationIntel @ 0x14047B51C
 * Callers:
 *     KiSetCacheInformation @ 0x14047B428 (KiSetCacheInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KiSetStandardizedCacheInformation @ 0x14047B578 (KiSetStandardizedCacheInformation.c)
 */

__int64 KiSetCacheInformationIntel()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 0LL;
  __asm { cpuid }
  result = (unsigned int)(_RAX - 3);
  CurrentPrcb->CacheCount = 0;
  if ( (unsigned int)result <= 0x7FFFFFFC )
    return KiSetStandardizedCacheInformation(CurrentPrcb, 4LL);
  return result;
}
