/*
 * XREFs of ?IsLastPresentComposed@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x1801B8880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwFullScreenRenderTarget::IsLastPresentComposed(CHwFullScreenRenderTarget *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 24) + 32LL))((char *)this - 192) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 168LL))(*((_QWORD *)this + 5));
  else
    return 0;
}
