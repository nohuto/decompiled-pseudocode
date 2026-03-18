/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C011D088
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0119D60 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0117004 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01216B0 (-GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C0121E8C (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0124B58 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0127870 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C0139EE0 (ApiSetEditionGetInputDelegate.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        unsigned __int64 a5)
{
  struct CPointerInputFrame *PreviousFrameByDeviceInt; // rax
  const struct CPointerInputFrame *v10; // rbx
  _OWORD v11[12]; // [rsp+20h] [rbp-1C8h] BYREF
  _OWORD v12[5]; // [rsp+E0h] [rbp-108h] BYREF
  __int128 v13; // [rsp+130h] [rbp-B8h]
  __int128 v14; // [rsp+140h] [rbp-A8h]
  __int128 v15; // [rsp+150h] [rbp-98h]
  __int128 v16; // [rsp+160h] [rbp-88h]
  __int128 v17; // [rsp+170h] [rbp-78h]
  __int128 v18; // [rsp+180h] [rbp-68h]
  __int128 v19; // [rsp+190h] [rbp-58h]

  PreviousFrameByDeviceInt = CTouchProcessor::GetPreviousFrameByDeviceInt(this, a4);
  v10 = PreviousFrameByDeviceInt;
  if ( PreviousFrameByDeviceInt )
    _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 11);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 20) &= ~4u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(this, a2, PreviousFrameByDeviceInt != 0LL);
  CInputDest::CInputDest(
    (CInputDest *)v12,
    *((struct tagWND *const *)gpKernelHandleTable + 3 * (unsigned __int16)*((_DWORD *)a3 + 68)));
  if ( HIDWORD(v13) )
  {
    v11[0] = v12[0];
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    v11[4] = v12[4];
    v11[5] = v13;
    v11[6] = v14;
    v11[7] = v15;
    v11[8] = v16;
    v11[9] = v17;
    v11[10] = v18;
    v11[11] = v19;
    if ( ApiSetEditionGetInputDelegate(v11) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode(this, a2, v10, a3);
  CTouchProcessor::TryCoalesceQFrame(this, a4, v10, a2);
  if ( v10 )
    CTouchProcessor::UnreferenceFrameInt(this, v10);
  CInputDest::SetEmpty((CInputDest *)v12);
}
