/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x1802150A0
 * Callers:
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x180214A90 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180214C90 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 *     ?NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180215040 (-NotifyInvalidResource@CDxHandleStereoBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180045800 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ??$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z @ 0x1800C58EC (--$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::ReleaseD2DBitmap(CD2DBitmap **this)
{
  CDxHandleBitmapRealization::ReleaseD2DBitmap((CDxHandleBitmapRealization *)this);
  if ( this[51] )
  {
    ReleaseInterface<CD2DBitmap>(this + 51);
    (*((void (__fastcall **)(char *, _QWORD))this[54] + 3))((char *)this + 432, 0LL);
  }
}
