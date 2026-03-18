/*
 * XREFs of ApiSetEditionPostInputMessage @ 0x1C00129F8
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0014828 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagP.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0015224 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01233C8 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131458 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostInputMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 *a11,
        __int64 a12,
        __int64 a13)
{
  unsigned int v14; // ebx
  __int64 v16; // rbp
  int v18; // edx
  __int64 v20; // [rsp+70h] [rbp-28h] BYREF

  v14 = 0;
  v16 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      46,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  if ( (int)IsEditionPostInputMessageSupported() >= 0 )
  {
    v20 = 0LL;
    if ( a11 )
      v20 = *a11;
    v14 = EditionPostInputMessage(
            a1,
            v16,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            (unsigned __int64)&v20 & -(__int64)(a11 != 0LL),
            a12,
            a13);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v18) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      14,
      47,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  return v14;
}
