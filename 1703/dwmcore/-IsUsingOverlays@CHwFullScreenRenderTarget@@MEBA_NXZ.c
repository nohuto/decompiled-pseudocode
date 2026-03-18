/*
 * XREFs of ?IsUsingOverlays@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18019C5A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwFullScreenRenderTarget::IsUsingOverlays(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 27);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 160LL))(v1) != 0;
  return v2;
}
