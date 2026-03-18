/*
 * XREFs of ApiSetClientCallDitThread @ 0x1C006F344
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI@Z @ 0x1C006F03C (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@I_KKPEAHPEAI.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetClientCallDitThread(__int64 a1, __int64 a2)
{
  int (*v2)(struct tagDITCALLBACKSTRUCT *); // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v5; // edx

  v2 = CSpatialProcessor::_spfnDitCallback;
  v3 = 0;
  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      104,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsClientCallDitThreadSupported() >= 0 )
    v3 = ClientCallDitThread(v2, v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      14,
      105,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v3;
}
