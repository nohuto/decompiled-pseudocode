/*
 * XREFs of ?InvalidateColors@ColorCache@@SAXXZ @ 0x1800394B8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180024928 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void ColorCache::InvalidateColors(void)
{
  _BYTE *v0; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+38h] [rbp+10h] BYREF

  RestartKey = 0LL;
  v2 = &ColorCache::_lock;
  EnterCriticalSection(&ColorCache::_lock);
  while ( 1 )
  {
    v0 = RtlEnumerateGenericTableWithoutSplaying(&ColorCache::_cachedColors, &RestartKey);
    if ( !v0 )
      break;
    v0[8] = 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
}
