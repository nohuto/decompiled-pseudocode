/*
 * XREFs of ?ReadTexture@CDxHandleBitmapRealization@@UEAAXXZ @ 0x1801B56E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::ReadTexture(CDxHandleBitmapRealization *this)
{
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 13) + 104LL))((char *)this - 104) >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 38) + 104LL) + 88LL))(*((_QWORD *)this + 38) + 104LL);
}
