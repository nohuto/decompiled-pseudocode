/*
 * XREFs of ?vAltLock@XDCOBJ@@QEAAXPEAUHDC__@@H@Z @ 0x1C00A9B2C
 * Callers:
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0055314 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreMarkUndeletableDC @ 0x1C0057230 (GreMarkUndeletableDC.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     GreSelectVisRgn @ 0x1C0059C20 (GreSelectVisRgn.c)
 *     GreGetBounds @ 0x1C006FD70 (GreGetBounds.c)
 *     GreMarkDCUnreadable @ 0x1C0092B88 (GreMarkDCUnreadable.c)
 *     GreMarkDeletableDC @ 0x1C009BB40 (GreMarkDeletableDC.c)
 *     GreMarkPendingDestroyDC @ 0x1C00FDC74 (GreMarkPendingDestroyDC.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C00A9F70 (HmgShareLockEx.c)
 */

void __fastcall XDCOBJ::vAltLock(XDCOBJ *this, HDC a2, __int64 a3)
{
  HDC v4; // rcx

  v4 = a2;
  LOBYTE(a2) = 1;
  *(_QWORD *)this = HmgShareLockEx(v4, a2, a3);
}
