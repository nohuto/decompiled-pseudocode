/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C0070E54
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0015224 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0070CD0 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ValidateHmonitorNoRip @ 0x1C0070E40 (ValidateHmonitorNoRip.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C007DFA0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     GetBoundMonitorForType @ 0x1C012E090 (GetBoundMonitorForType.c)
 *     UserProcessInputIsolationPolicy @ 0x1C01305A0 (UserProcessInputIsolationPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateSharedHandleNoRip(int a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r14
  char *v3; // rdi
  __int64 v4; // rsi

  v1 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v2 = gpKernelHandleTable;
    v3 = (char *)qword_1C018E9B8 + (unsigned int)(unsigned __int16)a1 * dword_1C018E9C0;
    v4 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C018E9C0) >> 5);
    if ( (HIWORD(a1) == *((_WORD *)v3 + 13)
       || HIWORD(a1) == 0xFFFF
       || !HIWORD(a1) && PsGetCurrentProcessWow64Process((unsigned __int16)a1))
      && (v3[25] & 1) == 0
      && v3[24] == 12 )
    {
      return v2[v4];
    }
  }
  return v1;
}
