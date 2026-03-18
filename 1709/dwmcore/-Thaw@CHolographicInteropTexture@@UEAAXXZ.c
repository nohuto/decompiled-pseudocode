/*
 * XREFs of ?Thaw@CHolographicInteropTexture@@UEAAXXZ @ 0x1801BF040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicInteropTexture::Thaw(CHolographicInteropTexture *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 15, 0xFFFFFFFF) == 1 )
  {
    *((_BYTE *)this + 56) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 6) + 528LL) + 104LL))(
      *(_QWORD *)(*((_QWORD *)this - 6) + 528LL),
      0LL,
      0x8000LL);
  }
}
