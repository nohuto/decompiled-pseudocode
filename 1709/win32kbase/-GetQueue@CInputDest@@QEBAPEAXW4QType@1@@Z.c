/*
 * XREFs of ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00172E4
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0014798 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0014828 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagP.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C00149DC (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMo.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NXZ @ 0x1C001724C (-DoesBelongToForeground@CInputDest@@QEBA_NXZ.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C011D374 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01233C8 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01319AC (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0017230 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall CInputDest::GetQueue(CInputDest *a1, int a2)
{
  __int64 v2; // r8
  struct tagTHREADINFO *ThreadInfo; // rax

  v2 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    if ( a2 )
    {
      if ( a2 == 2 )
      {
LABEL_4:
        ThreadInfo = CInputDest::GetThreadInfo(a1);
        if ( ThreadInfo )
          return *((_QWORD *)ThreadInfo + 51);
      }
    }
    else if ( *((_DWORD *)a1 + 23) == 2 )
    {
      goto LABEL_4;
    }
    return v2;
  }
  return 0LL;
}
