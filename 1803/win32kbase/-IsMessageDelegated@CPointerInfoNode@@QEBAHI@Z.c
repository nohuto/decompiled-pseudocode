/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C011741C
 * Callers:
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0116A78 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0116E28 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x1C01173F8 (-IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z.c)
 *     IsPointerInputMessage @ 0x1C011F640 (IsPointerInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, unsigned int a2)
{
  __int64 v4; // rdx
  CPointerInfoNode *v5; // rcx
  int v6; // eax
  int v7; // r9d
  int v8; // r8d
  bool v9; // cf
  int v10; // edx
  int v11; // edx

  if ( !(unsigned int)IsPointerInputMessage(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  switch ( a2 )
  {
    case 0x249u:
      v6 = -__CFSHR__(*(_DWORD *)this, 27);
      v7 = -__CFSHR__(*(_DWORD *)this, 26);
      v8 = -__CFSHR__(*(_DWORD *)this, 25);
      v9 = __CFSHR__(*(_DWORD *)this, 24);
      break;
    case 0x24Au:
      v6 = (2 * *(_DWORD *)this) >> 31;
      v7 = -__CFSHR__(*(_DWORD *)this, 30);
      v8 = -__CFSHR__(*(_DWORD *)this, 29);
      v9 = __CFSHR__(*(_DWORD *)this, 28);
      break;
    case 0x251u:
      v6 = -__CFSHR__(*((_DWORD *)this + 1), 3);
      v7 = -__CFSHR__(*((_DWORD *)this + 1), 2);
      v8 = -(*((_DWORD *)this + 1) & 1);
      v10 = *(int *)this >> 31;
      return CPointerInfoNode::IsMessageDelegated(v5, v10, v8, v7, v6);
    case 0x252u:
      v11 = *((_DWORD *)this + 1);
      v6 = -__CFSHR__(v11, 7);
      v7 = -__CFSHR__(v11, 6);
      v8 = -__CFSHR__(v11, 5);
      v9 = __CFSHR__(v11, 4);
      break;
    default:
      v10 = 1;
      v6 = -__CFSHR__(*(_DWORD *)this, 23);
      v7 = -__CFSHR__(*(_DWORD *)this, 22);
      v8 = -__CFSHR__(*(_DWORD *)this, 21);
      return CPointerInfoNode::IsMessageDelegated(v5, v10, v8, v7, v6);
  }
  v10 = -v9;
  return CPointerInfoNode::IsMessageDelegated(v5, v10, v8, v7, v6);
}
