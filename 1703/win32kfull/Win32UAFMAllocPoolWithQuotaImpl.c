/*
 * XREFs of Win32UAFMAllocPoolWithQuotaImpl @ 0x1C01E9040
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C0195488 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KI@Z.c)
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C01E8A78 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C01E8B40 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 */

char *__fastcall Win32UAFMAllocPoolWithQuotaImpl(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  char *v5; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  __int64 v7; // r8
  enum _POOL_TYPE v8; // r10d
  char *Quota; // rdi
  ULONG Cookie; // eax

  v5 = 0LL;
  v7 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  if ( v7 )
  {
    Quota = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v6, v8, v7, a3);
    if ( Quota )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      *((_DWORD *)Quota + 3) = Cookie;
      v5 = Quota + 16;
      *a4 = Cookie - 1;
    }
  }
  return v5;
}
