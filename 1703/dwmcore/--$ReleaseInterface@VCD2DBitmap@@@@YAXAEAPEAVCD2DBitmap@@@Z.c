/*
 * XREFs of ??$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z @ 0x18007CD08
 * Callers:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x18007A0A0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1801B6470 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180047190 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ReleaseInterface<CD2DBitmap>(CDxHandleYUVBitmapRealization **a1)
{
  CDxHandleYUVBitmapRealization *v2; // rcx
  void (*v3)(void); // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CDxHandleYUVBitmapRealization::Release )
      CDxHandleYUVBitmapRealization::Release(v2);
    else
      v3();
    *a1 = 0LL;
  }
}
