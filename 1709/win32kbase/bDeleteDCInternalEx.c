/*
 * XREFs of bDeleteDCInternalEx @ 0x1C0054EF0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0042D20 (NtGdiDeleteObjectApp.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 *     GreCreateCompatibleDC @ 0x1C0055490 (GreCreateCompatibleDC.c)
 *     DestroyCacheDC @ 0x1C0057280 (DestroyCacheDC.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     bDeleteDCInternal @ 0x1C0061E40 (bDeleteDCInternal.c)
 *     GreGetBounds @ 0x1C006FD70 (GreGetBounds.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00518E8 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     UserReleaseDC @ 0x1C00573D0 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteDCInternalEx(struct HOBJ__ *a1, unsigned int *a2)
{
  struct HOBJ__ *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v5, a1);
  if ( v5 && (unsigned int)bDeleteDCOBJ(&v5, a2, &v8) )
  {
    DCOBJ::~DCOBJ((DCOBJ *)&v5);
    if ( !v8 || (unsigned int)UserReleaseDC(a1) )
      return 1LL;
  }
  else
  {
    EngSetLastError(0xAAu);
    DCOBJ::~DCOBJ((DCOBJ *)&v5);
  }
  return 0LL;
}
