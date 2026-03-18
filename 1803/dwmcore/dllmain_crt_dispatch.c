/*
 * XREFs of dllmain_crt_dispatch @ 0x1800DC3B0
 * Callers:
 *     dllmain_dispatch @ 0x1800DC5AC (dllmain_dispatch.c)
 * Callees:
 *     __scrt_dllmain_crt_thread_attach @ 0x1800DAD60 (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x1800DAD88 (__scrt_dllmain_crt_thread_detach.c)
 */

__int64 __fastcall dllmain_crt_dispatch(CCompositionLight *a1, int a2, const struct CVisual *a3)
{
  int v3; // edx
  const struct CVisualTree *v4; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = (const struct CVisualTree *)(unsigned int)(v3 - 1);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 != 1 )
          return 1LL;
        LOBYTE(result) = _scrt_dllmain_crt_thread_detach(a1, v4, a3);
      }
      else
      {
        LOBYTE(result) = _scrt_dllmain_crt_thread_attach(a1, v4, a3);
      }
      return (unsigned __int8)result;
    }
    else
    {
      return dllmain_crt_process_attach(a1, a3);
    }
  }
  else
  {
    LOBYTE(a1) = a3 != 0LL;
    return dllmain_crt_process_detach(a1);
  }
}
