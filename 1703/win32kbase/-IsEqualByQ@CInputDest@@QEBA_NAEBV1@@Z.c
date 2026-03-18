/*
 * XREFs of ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C0047FC4
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C011B678 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0047EBC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

char __fastcall CInputDest::IsEqualByQ(CInputDest *this, const struct CInputDest *a2)
{
  CInputDest *v2; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  int *v6; // r10
  char v7; // r8

  CInputDest::GetThreadInfo(this);
  ThreadInfo = CInputDest::GetThreadInfo(v2);
  v7 = 0;
  if ( v5 )
  {
    if ( ThreadInfo )
      return *(_QWORD *)(v5 + 384) == *((_QWORD *)ThreadInfo + 48);
    return v7;
  }
  if ( ThreadInfo )
    return v7;
  return CInputDest::operator==(v6, v4);
}
