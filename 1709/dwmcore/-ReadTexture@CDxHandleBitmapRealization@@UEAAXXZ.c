/*
 * XREFs of ?ReadTexture@CDxHandleBitmapRealization@@UEAAXXZ @ 0x1801D1CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::ReadTexture(CDxHandleBitmapRealization *this)
{
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 18) + 80LL))((char *)this - 144) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 31) + 104LL) + 120LL))(*((_QWORD *)this + 31) + 104LL);
}
