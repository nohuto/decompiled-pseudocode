/*
 * XREFs of ?SupportsMoveOptimization@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x1800CDD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::SupportsMoveOptimization(CHwDisplayRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 22) + 48LL))((char *)this - 176) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) != 0;
  return v2;
}
