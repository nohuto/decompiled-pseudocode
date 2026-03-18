/*
 * XREFs of ?IsUsingOverlays@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1801E7580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwFullScreenRenderTarget::IsUsingOverlays(CHwFullScreenRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 184LL))(*((_QWORD *)this + 31)) != 0;
  return v2;
}
