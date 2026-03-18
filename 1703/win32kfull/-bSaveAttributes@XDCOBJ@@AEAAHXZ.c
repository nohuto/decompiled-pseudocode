/*
 * XREFs of ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0075230
 * Callers:
 *     NtGdiGetDCObject @ 0x1C000E960 (NtGdiGetDCObject.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0071F50 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     NtGdiSetPixel @ 0x1C0073590 (NtGdiSetPixel.c)
 *     NtGdiGetPixel @ 0x1C0073B60 (NtGdiGetPixel.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0077C10 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
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

__int64 __fastcall XDCOBJ::bSaveAttributes(XDCOBJ *this)
{
  __int64 v2; // rcx
  _OWORD *v3; // rax
  _OWORD *v4; // rdx
  __int64 v5; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_OWORD **)(v2 + 80);
  if ( v3 != (_OWORD *)(v2 + 560) )
  {
    v4 = (_OWORD *)(v2 + 984);
    if ( v3 != (_OWORD *)(v2 + 984) )
    {
      if ( !*((_DWORD *)this + 3) )
      {
        v5 = 3LL;
        do
        {
          *v4 = *v3;
          v4[1] = v3[1];
          v4[2] = v3[2];
          v4[3] = v3[3];
          v4[4] = v3[4];
          v4[5] = v3[5];
          v4[6] = v3[6];
          v4 += 8;
          *(v4 - 1) = v3[7];
          v3 += 8;
          --v5;
        }
        while ( v5 );
        *v4 = *v3;
        v4[1] = v3[1];
      }
      *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)(*(_QWORD *)this + 80LL);
      *(_QWORD *)(*(_QWORD *)this + 80LL) = *(_QWORD *)this + 984LL;
      *((_DWORD *)this + 2) = 1;
    }
  }
  return 1LL;
}
