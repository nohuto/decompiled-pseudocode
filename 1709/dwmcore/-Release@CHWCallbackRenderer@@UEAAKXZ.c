/*
 * XREFs of ?Release@CHWCallbackRenderer@@UEAAKXZ @ 0x18001BBB0
 * Callers:
 *     ?Release@CHWCallbackRenderer@@W7EAAKXZ @ 0x1800C7290 (-Release@CHWCallbackRenderer@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHWCallbackRenderer::Release(CHWCallbackRenderer *this)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)((char *)this + 8);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 && v1 )
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 16LL))(v1, 1LL);
  return v2;
}
