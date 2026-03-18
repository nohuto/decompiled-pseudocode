/*
 * XREFs of ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x1801F5020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapBrush::Release(CHwBitmapBrush *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  return 0LL;
}
