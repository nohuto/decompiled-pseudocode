/*
 * XREFs of ?SetScale@CVisual@@QEAAXNN@Z @ 0x180025A8C
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180005C90 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180019D60 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800304B8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18003DF80 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetScale(CVisual *this, double a2, double a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  double v5; // rax

  v3 = a2;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 21) - v3)) & _xmm) > 0.0000011920929
    || (v4 = a3,
        (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 22) - v4)) & _xmm) > 0.0000011920929) )
  {
    v5 = *(double *)this;
    *((double *)this + 21) = a2;
    *((double *)this + 22) = a3;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v5 + 24LL))(this, 16LL);
  }
}
