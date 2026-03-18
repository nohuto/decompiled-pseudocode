/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01225D4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0047EBC (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0083ACC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsMessageOnlyWindow@CInputDest@@QEBA_NXZ @ 0x1C01183D0 (-IsMessageOnlyWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0121ACC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01222F4 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01223C0 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0122ABC (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C012584C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C0125DA0 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0127A74 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C013D298 (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C013E060 (ApiSetValidatePointerOffset.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        __int64 a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // r15
  bool v7; // r12
  int v8; // edx
  int v9; // edx
  int v10; // r8d
  struct _ERESOURCE *v11; // rcx
  CTouchProcessor *v12; // rcx
  CTouchProcessor *v14; // rcx
  int v15; // r8d
  unsigned __int16 v16; // dx
  struct tagPOINT v17; // [rsp+30h] [rbp-50h] BYREF
  struct CInputDest *v18; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v19[64]; // [rsp+40h] [rbp-40h] BYREF
  struct tagPOINT v22; // [rsp+D8h] [rbp+58h] BYREF

  v4 = gptiCurrent;
  v7 = (*((_DWORD *)gptiCurrent + 274) & 0x2000) != 0;
  v22.x = CPointerInfoNode::IsMessageDelegated(a2, a3);
  CTouchProcessor::HandleMTNodeTargetWindow((PERESOURCE *)a1, (struct CPointerInfoNode *)a4);
  v8 = *(_DWORD *)(a4 + 4);
  if ( (v8 & 0x200) != 0
    && (v8 & 0x800) == 0
    && *(_DWORD *)(a4 + 248) == 2
    && CInputDest::GetThreadInfo((CInputDest *)(a4 + 408)) == v4 )
  {
    if ( (*(_DWORD *)(a4 + 260) & 0x10000) != 0 )
    {
      *(_DWORD *)(a4 + 4) = v10 | v9;
      if ( !CInputDest::IsMessageOnlyWindow((CInputDest *)(a4 + 408)) )
      {
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v19, (struct CInputDest *)(a4 + 408));
        v11 = *(struct _ERESOURCE **)(a1 + 200);
        *(_QWORD *)(a1 + 232) = 0LL;
        ExReleaseResourceAndLeaveCriticalRegion(v11);
        ApiSetPerformTargetingWithinPwnd(a4 + 408, a4 + 240, &v17);
        CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 200));
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v19);
        if ( !CTouchProcessor::GetQueueForCurrentNode((CTouchProcessor *)(v22.x != 0), v4, v7, a3, v22.x != 0, a2) )
          return 1LL;
        if ( !CTouchProcessor::RevalidateFrameProcessing(v12, v4, v7, (const struct CPointerInfoNode *)a4, 1) )
          return 2LL;
        CTouchProcessor::RecheckPointerCapture(v14, *(_QWORD *)(a4 + 16), v15, &v18, (int *)&v22);
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                             *(_QWORD *)(a4 + 280),
                             a4 + 240,
                             v17,
                             &v17) )
        {
          CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 252), &v17);
          *(struct tagPOINT *)(a4 + 228) = v17;
        }
      }
    }
    else
    {
      v16 = *(_WORD *)(a4 + 252);
      v22 = 0LL;
      CTouchProcessor::GetPointerOffset((CTouchProcessor *)a1, v16, &v22);
      *(struct tagPOINT *)(a4 + 228) = v22;
    }
  }
  return 0LL;
}
