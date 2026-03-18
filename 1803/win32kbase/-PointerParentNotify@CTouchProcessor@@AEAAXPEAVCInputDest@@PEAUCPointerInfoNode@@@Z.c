/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01181E4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0066BA0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0117888 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C013F378 (ApiSetEditionPointerParentNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(
        PERESOURCE *this,
        struct CInputDest *a2,
        struct CPointerInfoNode *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _BYTE v20[64]; // [rsp+20h] [rbp-F8h] BYREF
  _OWORD v21[11]; // [rsp+60h] [rbp-B8h] BYREF

  if ( this[13] != (PERESOURCE)KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval(a3, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v20, a2);
  CInpLockGuard::UnLock(this + 9);
  v10 = *((_QWORD *)a3 + 2);
  v11 = *((_OWORD *)a2 + 1);
  v21[0] = *(_OWORD *)a2;
  v12 = *((_OWORD *)a2 + 2);
  v21[1] = v11;
  v13 = *((_OWORD *)a2 + 3);
  v21[2] = v12;
  v14 = *((_OWORD *)a2 + 4);
  v21[3] = v13;
  v15 = *((_OWORD *)a2 + 5);
  v21[4] = v14;
  v16 = *((_OWORD *)a2 + 6);
  v21[5] = v15;
  v17 = *((_OWORD *)a2 + 8);
  v21[6] = v16;
  v21[7] = *((_OWORD *)a2 + 7);
  v18 = *((_OWORD *)a2 + 9);
  v21[8] = v17;
  v19 = *((_OWORD *)a2 + 10);
  v21[9] = v18;
  v21[10] = v19;
  ApiSetEditionPointerParentNotify(v21, a3, v10);
  CInpLockGuard::LockExclusive(this + 9);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v20);
}
