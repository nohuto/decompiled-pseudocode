/*
 * XREFs of ?SupportsMoveOptimization@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x1800D85A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::SupportsMoveOptimization(CHwDisplayRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 27) + 32LL))((char *)this - 216) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4)) != 0;
  return v2;
}
