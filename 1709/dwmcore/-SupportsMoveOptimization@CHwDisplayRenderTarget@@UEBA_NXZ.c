/*
 * XREFs of ?SupportsMoveOptimization@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x1801AE670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::SupportsMoveOptimization(CHwDisplayRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 24) + 32LL))((char *)this - 192) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) != 0;
  return v2;
}
