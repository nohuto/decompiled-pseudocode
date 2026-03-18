/*
 * XREFs of ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C00EFB84
 * Callers:
 *     GreSetBitmapOwnerEx @ 0x1C003FC78 (GreSetBitmapOwnerEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00418C0 (--1SURFMEM@@QEAA@XZ.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C498 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     EngLockSurface @ 0x1C004C660 (EngLockSurface.c)
 *     EngUnlockSurface @ 0x1C004CAA0 (EngUnlockSurface.c)
 *     DEC_SHARE_REF_CNT @ 0x1C004D890 (DEC_SHARE_REF_CNT.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004EAB0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0050890 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     GreGetBounds @ 0x1C006FD70 (GreGetBounds.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall RECALTUNLOCKSTACKBACKTRACE(unsigned int a1)
{
  struct tagAltStackTraceEntry **v1; // rsi
  __int64 v2; // rdi
  struct tagAltStackTraceEntry *v3; // rax
  unsigned __int64 v4; // rbx

  v1 = gpentHmgrAltStacks;
  v2 = a1;
  if ( !gpentHmgrAltStacks[a1] )
    v1[a1] = (struct tagAltStackTraceEntry *)PALLOCMEM2(0x2008uLL, 1651729991LL, 1);
  v3 = v1[v2];
  if ( v3 )
  {
    v4 = (unsigned __int64)(*((_DWORD *)v3 + 1) & 0xF) << 8;
    memset((char *)v3 + v4 + 4104, 0, 0x100uLL);
    RtlWalkFrameChain((PVOID *)((char *)v1[v2] + v4 + 4104), 0x20u, 0);
    ++*((_DWORD *)gpentHmgrAltStacks[v2] + 1);
  }
}
