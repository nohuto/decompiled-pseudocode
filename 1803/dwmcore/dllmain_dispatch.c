/*
 * XREFs of dllmain_dispatch @ 0x1800DC5AC
 * Callers:
 *     _DllMainCRTStartup @ 0x1800DC6E0 (_DllMainCRTStartup.c)
 * Callees:
 *     __scrt_dllmain_exception_filter @ 0x1800DADA0 (__scrt_dllmain_exception_filter.c)
 *     dllmain_crt_dispatch @ 0x1800DC3B0 (dllmain_crt_dispatch.c)
 *     DllMain @ 0x1800DCF5C (DllMain.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall dllmain_dispatch(CCompositionLight *hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  unsigned int v7; // ebx
  BOOL v8; // eax

  if ( !fdwReason && dword_1802D5E18 <= 0 )
    return 0LL;
  if ( fdwReason - 1 > 1
    || (!pRawDllMain || (v7 = ((__int64 (*)(void))pRawDllMain)()) != 0)
    && (v7 = dllmain_crt_dispatch(hinstDLL, fdwReason, (const struct CVisual *)lpvReserved)) != 0 )
  {
    v8 = DllMain((HINSTANCE)hinstDLL, fdwReason, lpvReserved);
    v7 = v8;
    if ( fdwReason == 1 && !v8 )
    {
      DllMain((HINSTANCE)hinstDLL, 0, lpvReserved);
      dllmain_crt_dispatch(hinstDLL, 0, (const struct CVisual *)lpvReserved);
      if ( pRawDllMain )
        pRawDllMain(hinstDLL, 0LL, lpvReserved);
    }
    if ( !fdwReason || fdwReason == 3 )
    {
      v7 = dllmain_crt_dispatch(hinstDLL, fdwReason, (const struct CVisual *)lpvReserved);
      if ( v7 )
      {
        if ( pRawDllMain )
          return (unsigned int)pRawDllMain(hinstDLL, fdwReason, lpvReserved);
        else
          return 1;
      }
    }
  }
  return v7;
}
