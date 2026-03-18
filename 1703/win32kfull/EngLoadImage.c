/*
 * XREFs of EngLoadImage @ 0x1C024ADC0
 * Callers:
 *     InitializeDriver @ 0x1C028BED4 (InitializeDriver.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall EngLoadImage(LPWSTR pwszDriver)
{
  void *v2; // rbx
  char v4; // [rsp+48h] [rbp+10h] BYREF

  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  v2 = (void *)ldevLoadImage(pwszDriver, 1LL, &v4, 1LL, 0);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return v2;
}
