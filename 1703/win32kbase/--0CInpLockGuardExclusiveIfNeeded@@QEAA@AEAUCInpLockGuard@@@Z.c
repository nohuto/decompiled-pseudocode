/*
 * XREFs of ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C006DF90 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011B488 (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C011B5AC (-CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C011C1B8 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C011D0A0 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 *     ?DereferencePointerInputFrame@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C011D680 (-DereferencePointerInputFrame@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C011D6E0 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C011DD00 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011E74C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C01204B0 (-GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z.c)
 *     ?GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z @ 0x1C0120570 (-GetMsgPointerIdFromEdition@CTouchProcessor@@QEAAG_K@Z.c)
 *     ?GetNextFrameId@CTouchProcessor@@AEAAKXZ @ 0x1C01205C4 (-GetNextFrameId@CTouchProcessor@@AEAAKXZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C0120720 (-GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z.c)
 *     ?GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z @ 0x1C01210E0 (-GetPointerDownFrame@CTouchProcessor@@QEAAK_K@Z.c)
 *     ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01218F0 (-GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@PEBUtagMSG@@H@Z @ 0x1C0122CA0 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@PEBUtagMSG@@H@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_K_JHPEAX@Z @ 0x1C0122E90 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_K_JHPEAX@Z.c)
 *     ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C0124040 (-PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0125C40 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z @ 0x1C01267B0 (-SetPointerBarrelVisualization@CTouchProcessor@@QEAAXGH@Z.c)
 *     ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C0127680 (-SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z.c)
 *     ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C0127AB0 (-SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z.c)
 *     ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C0127E50 (-SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0128530 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0128610 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 */

CInpLockGuardExclusiveIfNeeded *__fastcall CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        CInpLockGuardExclusiveIfNeeded *this,
        struct CInpLockGuard *a2)
{
  BOOL v3; // r8d

  *(_QWORD *)this = a2;
  v3 = *((_QWORD *)a2 + 4) == (_QWORD)KeGetCurrentThread();
  *((_DWORD *)this + 2) = v3;
  if ( !v3 )
    CInpLockGuard::LockExclusive((PERESOURCE *)a2);
  return this;
}
