/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70
 * Callers:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0045950 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagP.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@_N@Z @ 0x1C0045AC0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDes.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00462F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C008BB10 (_anonymous_namespace_--ValidateUIPI.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01317DC (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0132304 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0047F6C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, int a2)
{
  __int64 v2; // r10
  int v3; // r11d
  __int64 Queue; // rcx
  int v6; // eax
  __int64 v8; // rax

  v2 = 0LL;
  v3 = a2;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      v6 = *(_DWORD *)(a1 + 92);
      if ( v6 == 2 ? *(_QWORD *)(a1 + 80) : 0LL )
      {
        if ( v6 == 2 )
          v2 = *(_QWORD *)(a1 + 80);
        return *(_QWORD *)(v2 + 16);
      }
    }
  }
  else
  {
    if ( a1 )
      Queue = CInputDest::GetQueue(a1, 0LL);
    else
      Queue = gpqForeground;
    if ( Queue )
    {
      if ( v3 )
      {
        if ( v3 != 1 )
          return v2;
        v8 = *(_QWORD *)(Queue + 72);
        if ( v8 )
          return *(_QWORD *)(v8 + 16);
      }
      return *(_QWORD *)(Queue + 56);
    }
  }
  return v2;
}
