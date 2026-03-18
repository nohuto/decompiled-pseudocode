/*
 * XREFs of ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0116A78
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0116E28 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0036E3C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0116850 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C011741C (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagQ *__fastcall CTouchProcessor::GetQueueForCurrentNode(
        struct _KTHREAD **this,
        struct tagTHREADINFO *a2,
        int a3,
        unsigned int a4,
        int a5,
        const struct CPointerInfoNode *a6)
{
  CPointerInfoNode *v9; // rbx
  CInputDest *Queue; // rbx
  struct tagTHREADINFO *ThreadInfo; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp+8h] BYREF

  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v9 = a6;
  if ( (*(_DWORD *)a6 & 0x2000) != 0
    || !*((_QWORD *)a6 + 2)
    || a5 && !(unsigned int)CPointerInfoNode::IsMessageDelegated(a6, a4) )
  {
    return 0LL;
  }
  if ( !a3
    || (UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13),
        Queue = CPointerInfoNode::GetQueue(v9, &v14),
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13),
        !Queue)
    || (ThreadInfo = CInputDest::GetThreadInfo(Queue)) == 0LL )
  {
    ThreadInfo = a2;
  }
  return (struct tagQ *)*((_QWORD *)ThreadInfo + 53);
}
