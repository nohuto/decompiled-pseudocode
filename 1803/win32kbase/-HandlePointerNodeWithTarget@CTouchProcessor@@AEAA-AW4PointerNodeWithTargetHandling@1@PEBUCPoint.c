/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0116E28
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0036E3C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0066BA0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsMessageOnlyWindow@CInputDest@@QEBA_NXZ @ 0x1C0109AC4 (-IsMessageOnlyWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0115CC8 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0116A78 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0116C0C (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C011741C (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0117888 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C011A994 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C011AEFC (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C011D378 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C0140F7C (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C0141DEC (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        PERESOURCE *a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r12d
  int v12; // edx
  int v13; // edx
  int v14; // r8d
  CTouchProcessor *v15; // rcx
  struct tagPOINT v17; // rax
  unsigned __int16 v18; // dx
  struct tagPOINT v19; // [rsp+30h] [rbp-50h] BYREF
  struct CInputDest *v20; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v21[64]; // [rsp+40h] [rbp-40h] BYREF
  struct tagPOINT v23; // [rsp+D8h] [rbp+58h] BYREF

  v4 = gptiCurrent;
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  v11 = *((_DWORD *)v4 + 300) & 0x2000;
  v23.x = CPointerInfoNode::IsMessageDelegated(a2, a3) != 0;
  CTouchProcessor::HandleMTNodeTargetWindow(a1, (struct CPointerInfoNode *)a4);
  v12 = *(_DWORD *)(a4 + 4);
  if ( (v12 & 0x200) == 0
    || (v12 & 0x800) != 0
    || *(_DWORD *)(a4 + 232) != 2
    || CInputDest::GetThreadInfo((CInputDest *)(a4 + 392)) != v4 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a4 + 244) & 0x10000) == 0 )
  {
    v18 = *(_WORD *)(a4 + 236);
    v23 = 0LL;
    CTouchProcessor::GetPointerOffset((CTouchProcessor *)a1, v18, &v23);
    v17 = v23;
    goto LABEL_16;
  }
  *(_DWORD *)(a4 + 4) = v14 | v13;
  if ( !CInputDest::IsMessageOnlyWindow((CInputDest *)(a4 + 392)) )
  {
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v21, (struct CInputDest *)(a4 + 392));
    CInpLockGuard::UnLock(a1 + 9);
    ApiSetPerformTargetingWithinPwnd(a4 + 392, a4 + 224, &v19);
    CInpLockGuard::LockExclusive(a1 + 9);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v21);
    if ( !CTouchProcessor::GetQueueForCurrentNode((struct _KTHREAD **)a1, v4, v11 != 0, a3, v23.x, a2) )
      return 1LL;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v15, v4, v11 != 0, (const struct CPointerInfoNode *)a4, 1) )
      return 2LL;
    CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)a1, *(_QWORD *)(a4 + 16), v11 != 0, &v20, (int *)&v23);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                         *(_QWORD *)(a4 + 264),
                         a4 + 224,
                         v19,
                         &v19) )
    {
      CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 236), &v19);
      v17 = v19;
LABEL_16:
      *(struct tagPOINT *)(a4 + 212) = v17;
    }
  }
  return 0LL;
}
