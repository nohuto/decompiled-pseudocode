/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024A6C0
 * Callers:
 *     NtGdiGetDCObject @ 0x1C000E960 (NtGdiGetDCObject.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiSetPixel @ 0x1C0073590 (NtGdiSetPixel.c)
 *     NtGdiGetPixel @ 0x1C0073B60 (NtGdiGetPixel.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0077C10 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C007B5CC (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C007DFC0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetDIBitsInternal @ 0x1C00800D0 (GreGetDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0080550 (GreSetDIBitsToDeviceInternal.c)
 *     GreDrawStream @ 0x1C0086090 (GreDrawStream.c)
 *     GreGetTextFaceW @ 0x1C00872D0 (GreGetTextFaceW.c)
 *     NtGdiAlphaBlend @ 0x1C0087620 (NtGdiAlphaBlend.c)
 *     NtGdiPolyPatBlt @ 0x1C0092080 (NtGdiPolyPatBlt.c)
 *     GreStretchDIBitsInternal @ 0x1C0093B84 (GreStretchDIBitsInternal.c)
 *     NtGdiGetDCDword @ 0x1C00DB740 (NtGdiGetDCDword.c)
 *     NtGdiModifyWorldTransform @ 0x1C00DE360 (NtGdiModifyWorldTransform.c)
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
