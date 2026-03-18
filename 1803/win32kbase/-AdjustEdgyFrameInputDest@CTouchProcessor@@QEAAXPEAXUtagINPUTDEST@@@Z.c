/*
 * XREFs of ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C010D250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01113C4 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0113F28 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C011D060 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C011D2D8 (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::AdjustEdgyFrameInputDest(
        __int64 a1,
        const struct CPointerInputFrame *NextFrame,
        const struct tagINPUTDEST *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  CInputDest *v8; // rax
  struct CPointerInfoNode *v9; // rdi
  __int64 v10; // r14
  unsigned __int64 Queue; // rax
  _BYTE v12[192]; // [rsp+50h] [rbp-1B8h] BYREF
  _DWORD v13[48]; // [rsp+110h] [rbp-F8h] BYREF

  CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 72));
  CInputDest::CInputDest((CInputDest *)v13, a3);
  if ( !v13[0] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  v8 = CInputDest::CInputDest((CInputDest *)v12, (const struct CInputDest *)v13);
  CTouchProcessor::SetPointerInputCapture(a1, *(unsigned __int16 *)(*((_QWORD *)NextFrame + 12) + 236LL), v8);
  do
  {
    v9 = (struct CPointerInfoNode *)*((_QWORD *)NextFrame + 12);
    if ( (unsigned int)CPointerInfoNode::IsValid(v9) )
    {
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        NextFrame,
        0,
        (const struct CInputDest *)v13,
        1,
        0LL,
        0,
        1,
        0,
        0);
      v10 = *((_QWORD *)NextFrame + 13);
      if ( *(_QWORD *)(v10 + 8) == -1LL )
      {
        Queue = CInputDest::GetQueue((CInputDest *)v13, 2LL);
        CTouchProcessor::EndQFrameNodeDeferment(
          (CTouchProcessor *)a1,
          (struct CPointerQFrame *)v10,
          v9,
          NextFrame,
          Queue);
      }
      NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)a1, NextFrame, (struct _LIST_ENTRY *)(a1 + 120));
    }
  }
  while ( NextFrame );
  CInputDest::SetEmpty((CInputDest *)v13);
  CInpLockGuard::UnLock((PERESOURCE *)(a1 + 72));
}
