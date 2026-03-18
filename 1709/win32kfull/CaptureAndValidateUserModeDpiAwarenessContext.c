/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600
 * Callers:
 *     xxxDCEWindowHitTestIndirect @ 0x1C0063700 (xxxDCEWindowHitTestIndirect.c)
 *     NtUserGetScrollBarInfo @ 0x1C0076D50 (NtUserGetScrollBarInfo.c)
 *     NtUserGetTitleBarInfo @ 0x1C0077520 (NtUserGetTitleBarInfo.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00AA540 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C00AAED0 (TransformMessageBetweenCoordinateSpaces.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00ADF80 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00AE5DC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C00B0340 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x1C01038C0 (IsValidKernelDpiAwarenessContext.c)
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
