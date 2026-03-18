/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50
 * Callers:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C003177C (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0031818 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     NtUserGetTitleBarInfo @ 0x1C0041080 (NtUserGetTitleBarInfo.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C0054AA0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C005505C (TransformMessageBetweenCoordinateSpaces.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0057CE0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C0061C80 (xxxDCEWindowHitTestIndirect.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C007EA00 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C007EF14 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     NtUserGetScrollBarInfo @ 0x1C00D7260 (NtUserGetScrollBarInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C00F4718 (IsValidKernelDpiAwarenessContext.c)
 */

void __fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  __int64 v1; // r8
  unsigned int *v2; // rdx
  unsigned int v3; // r9d
  unsigned int valid; // eax

  v1 = a1;
  v2 = *(unsigned int **)(a1 + 352);
  if ( v2[1] )
  {
    v3 = *v2;
    if ( !*v2 || (valid = IsValidKernelDpiAwarenessContext(v3, v2, a1)) != 0 )
    {
      *(_DWORD *)(v1 + 340) = v3;
      valid = 0;
    }
    else
    {
      *v2 = 0;
    }
    v2[1] = valid;
  }
}
