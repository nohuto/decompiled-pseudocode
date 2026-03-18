/*
 * XREFs of ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01218C4
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0121C2C (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0017230 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01216F4 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0122114 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 */

struct tagQ *__fastcall CTouchProcessor::GetQueueForCurrentNode(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        int a3,
        unsigned int a4,
        int a5,
        const struct CPointerInfoNode *a6)
{
  CPointerInfoNode *v6; // rbx
  int v7; // r10d
  CInputDest *Queue; // rbx
  struct tagTHREADINFO *ThreadInfo; // rax
  CTouchProcessor *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = this;
  v6 = a6;
  v7 = a3;
  if ( (*(_DWORD *)a6 & 0x2000) != 0
    || !*((_QWORD *)a6 + 2)
    || a5 && !(unsigned int)CPointerInfoNode::IsMessageDelegated(a6, a4) )
  {
    return 0LL;
  }
  if ( !v7
    || (UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&a6),
        Queue = CPointerInfoNode::GetQueue(v6, (int *)&v12),
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&a6),
        !Queue)
    || (ThreadInfo = CInputDest::GetThreadInfo(Queue)) == 0LL )
  {
    ThreadInfo = a2;
  }
  return (struct tagQ *)*((_QWORD *)ThreadInfo + 51);
}
