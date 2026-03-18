/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0122114
 * Callers:
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01218C4 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0121C2C (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x1C01220F0 (-IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z.c)
 */

_BOOL8 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, int a2)
{
  int v2; // eax
  int v3; // r9d
  int v4; // r8d
  bool v5; // cf
  int v6; // edx
  int v7; // edx

  switch ( a2 )
  {
    case 585:
      v2 = -__CFSHR__(*(_DWORD *)this, 27);
      v3 = -__CFSHR__(*(_DWORD *)this, 26);
      v4 = -__CFSHR__(*(_DWORD *)this, 25);
      v5 = __CFSHR__(*(_DWORD *)this, 24);
      break;
    case 586:
      v2 = (2 * *(_DWORD *)this) >> 31;
      v3 = -__CFSHR__(*(_DWORD *)this, 30);
      v4 = -__CFSHR__(*(_DWORD *)this, 29);
      v5 = __CFSHR__(*(_DWORD *)this, 28);
      break;
    case 593:
      v2 = -__CFSHR__(*((_DWORD *)this + 1), 3);
      v3 = -__CFSHR__(*((_DWORD *)this + 1), 2);
      v4 = -(*((_DWORD *)this + 1) & 1);
      v6 = *(int *)this >> 31;
      return CPointerInfoNode::IsMessageDelegated(this, v6, v4, v3, v2);
    case 594:
      v7 = *((_DWORD *)this + 1);
      v2 = -__CFSHR__(v7, 7);
      v3 = -__CFSHR__(v7, 6);
      v4 = -__CFSHR__(v7, 5);
      v5 = __CFSHR__(v7, 4);
      break;
    default:
      v6 = 1;
      v2 = -__CFSHR__(*(_DWORD *)this, 23);
      v3 = -__CFSHR__(*(_DWORD *)this, 22);
      v4 = -__CFSHR__(*(_DWORD *)this, 21);
      return CPointerInfoNode::IsMessageDelegated(this, v6, v4, v3, v2);
  }
  v6 = -v5;
  return CPointerInfoNode::IsMessageDelegated(this, v6, v4, v3, v2);
}
