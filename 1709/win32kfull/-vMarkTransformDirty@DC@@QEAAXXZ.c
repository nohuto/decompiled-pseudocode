/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC
 * Callers:
 *     GreDrawStream @ 0x1C000E420 (GreDrawStream.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDIBitsInternal @ 0x1C0018D1C (GreGetDIBitsInternal.c)
 *     NtGdiPolyPatBlt @ 0x1C001DB00 (NtGdiPolyPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0021030 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C002808C (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0029360 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiSetPixel @ 0x1C002AA00 (NtGdiSetPixel.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSaveDC @ 0x1C0080270 (GreSaveDC.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0080648 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     NtGdiGetRandomRgn @ 0x1C0092950 (NtGdiGetRandomRgn.c)
 *     GreGetTextFaceW @ 0x1C00AEF00 (GreGetTextFaceW.c)
 *     NtGdiGetDCDword @ 0x1C00E2350 (NtGdiGetDCDword.c)
 *     NtGdiGetDCObject @ 0x1C00E25B0 (NtGdiGetDCObject.c)
 *     NtGdiModifyWorldTransform @ 0x1C00F0C60 (NtGdiModifyWorldTransform.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  __int64 v1; // rax

  *((_DWORD *)this + 134) &= ~4u;
  v1 = *((_QWORD *)this + 10);
  if ( (*((_DWORD *)this + 134) & 1) != 0 )
    *(_DWORD *)(v1 + 352) |= 0x16090u;
  else
    *(_DWORD *)(v1 + 352) |= 0x6090u;
}
