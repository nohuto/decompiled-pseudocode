/*
 * XREFs of ?Thaw@CHolographicInteropTexture@@UEAAXXZ @ 0x1801A44D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicInteropTexture::Thaw(CHolographicInteropTexture *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 13, 0xFFFFFFFF) == 1 )
  {
    *((_BYTE *)this + 48) = 1;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this - 6) + 560LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this - 6) + 560LL));
  }
}
