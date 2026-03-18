/*
 * XREFs of ?GetQueueAnyDestination@CInputDest@@QEBA_KXZ @ 0x1C0117138
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0119D60 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C0124F20 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0017230 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 */

unsigned __int64 __fastcall CInputDest::GetQueueAnyDestination(CInputDest *this)
{
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v3; // rdx

  if ( !*(_DWORD *)this )
    return 0LL;
  ThreadInfo = CInputDest::GetThreadInfo(this);
  if ( ThreadInfo )
    return *((_QWORD *)ThreadInfo + 51);
  else
    return *(_QWORD *)(v3 + 16);
}
