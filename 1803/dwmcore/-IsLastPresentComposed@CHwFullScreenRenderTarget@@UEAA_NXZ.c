/*
 * XREFs of ?IsLastPresentComposed@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x1801F2110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwFullScreenRenderTarget::IsLastPresentComposed(CHwFullScreenRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 27) + 32LL))((char *)this - 216) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 176LL))(*((_QWORD *)this + 4)) != 0;
  return v2;
}
