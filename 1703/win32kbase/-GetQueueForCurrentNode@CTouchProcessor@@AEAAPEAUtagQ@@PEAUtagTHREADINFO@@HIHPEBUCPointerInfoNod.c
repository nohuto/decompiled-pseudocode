/*
 * XREFs of ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01222F4
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01225D4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0047EBC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0122124 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0122ABC (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
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
  CInputDest *Queue; // r11
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
  if ( !v7 )
    goto LABEL_10;
  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  LOBYTE(a6) = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&a6);
  Queue = CPointerInfoNode::GetQueue(v6, (int *)&v12);
  if ( !(_BYTE)a6 )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&a6);
  }
  if ( !Queue || (ThreadInfo = CInputDest::GetThreadInfo(Queue)) == 0LL )
LABEL_10:
    ThreadInfo = a2;
  return (struct tagQ *)*((_QWORD *)ThreadInfo + 48);
}
