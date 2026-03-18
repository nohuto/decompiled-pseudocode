/*
 * XREFs of Win32UAFMAllocPoolWithPriorityImpl @ 0x1C01E8FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustSize@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z @ 0x1C01E8A78 (-AdjustSize@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CA_K_K@Z.c)
 *     ?GenerateCookie@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIXZ @ 0x1C01E8B40 (-GenerateCookie@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@CAIX.c)
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_PRIORITY@@@Z @ 0x1C02B8760 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXW4_POOL_TYPE@@_KIW4_EX_POOL_.c)
 */

char *__fastcall Win32UAFMAllocPoolWithPriorityImpl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  char *v5; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  unsigned __int64 v7; // r8
  enum _EX_POOL_PRIORITY v8; // r9d
  enum _POOL_TYPE v9; // r10d
  _DWORD *Priority; // rdi
  ULONG Cookie; // eax

  v5 = 0LL;
  v7 = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::AdjustSize(a2);
  if ( v7 )
  {
    Priority = NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(v6, v9, v7, a3, v8);
    if ( Priority )
    {
      Cookie = NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::GenerateCookie();
      Priority[3] = Cookie;
      v5 = (char *)(Priority + 4);
      *a5 = Cookie - 1;
    }
  }
  return v5;
}
