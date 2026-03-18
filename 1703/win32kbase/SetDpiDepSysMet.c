/*
 * XREFs of SetDpiDepSysMet @ 0x1C0074720
 * Callers:
 *     InitLoadResources @ 0x1C00743E0 (InitLoadResources.c)
 * Callees:
 *     GetDpiDepSysMetCacheMetricSlot @ 0x1C007477C (GetDpiDepSysMetCacheMetricSlot.c)
 */

void *__fastcall SetDpiDepSysMet(int a1, int a2)
{
  void *result; // rax
  int DpiDepSysMetCacheMetricSlot; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx

  result = (void *)*((unsigned int *)gpsi + a1 + 470);
  *((_DWORD *)gpsi + a1 + 470) = a2;
  if ( a2 != (_DWORD)result )
  {
    DpiDepSysMetCacheMetricSlot = GetDpiDepSysMetCacheMetricSlot();
    v4 = 16LL;
    v5 = 4LL * DpiDepSysMetCacheMetricSlot + 3044;
    do
    {
      result = gpsi;
      *(_DWORD *)((char *)gpsi + v5) = -1;
      v5 += 112LL;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
