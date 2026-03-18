/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C007772C
 * Callers:
 *     LogicalToPhysicalDPIPoint @ 0x1C002B280 (LogicalToPhysicalDPIPoint.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C00498B0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0049940 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0049B40 (PhysicalToLogicalDPIRect.c)
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C006F03C (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00775B4 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ValidateHmonitorNoRip @ 0x1C0077720 (ValidateHmonitorNoRip.c)
 *     GetBoundMonitorForType @ 0x1C012EB84 (GetBoundMonitorForType.c)
 *     UserProcessInputIsolationPolicy @ 0x1C0130CBC (UserProcessInputIsolationPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateSharedHandleNoRip(int a1)
{
  __int64 v1; // rbx
  char *v2; // rdi
  char *v3; // rsi

  v1 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v2 = (char *)qword_1C0189E38 + (unsigned int)(unsigned __int16)a1 * dword_1C0189E40;
    v3 = (char *)gpKernelHandleTable + 16 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0189E40) >> 5);
    if ( (HIWORD(a1) == *((_WORD *)v2 + 13) || HIWORD(a1) == 0xFFFF || !HIWORD(a1) && PsGetCurrentProcessWow64Process())
      && (v2[25] & 1) == 0
      && v2[24] == 12 )
    {
      return *(_QWORD *)v3;
    }
  }
  return v1;
}
