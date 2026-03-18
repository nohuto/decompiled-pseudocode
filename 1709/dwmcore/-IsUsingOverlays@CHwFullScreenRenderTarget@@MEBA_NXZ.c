/*
 * XREFs of ?IsUsingOverlays@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1801AE4C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwFullScreenRenderTarget::IsUsingOverlays(CHwFullScreenRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 176LL))(*((_QWORD *)this + 29)) != 0;
  return v2;
}
