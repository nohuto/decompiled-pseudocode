/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0121C2C
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0017230 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0018360 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsMessageOnlyWindow@CInputDest@@QEBA_NXZ @ 0x1C0117278 (-IsMessageOnlyWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0120DBC (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C01218C4 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0121A10 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0122114 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0124E24 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C01253A4 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C01270CC (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C013C764 (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C013D48C (ApiSetValidatePointerOffset.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        __int64 a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // r14
  int v7; // r12d
  int v8; // edx
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r8
  __int64 v12; // r9
  struct _ERESOURCE *v13; // rcx
  CTouchProcessor *v14; // rcx
  CTouchProcessor *v16; // rcx
  int v17; // r8d
  unsigned __int16 v18; // dx
  struct tagPOINT v19; // [rsp+30h] [rbp-50h] BYREF
  struct CInputDest *v20; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v21[64]; // [rsp+40h] [rbp-40h] BYREF
  struct tagPOINT v24; // [rsp+D8h] [rbp+58h] BYREF

  v4 = gptiCurrent;
  v7 = *((_DWORD *)gptiCurrent + 296) & 0x2000;
  v24.x = CPointerInfoNode::IsMessageDelegated(a2, a3);
  CTouchProcessor::HandleMTNodeTargetWindow((struct _ERESOURCE **)a1, (struct CPointerInfoNode *)a4);
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
        CThreadLockInputDest::CThreadLockInputDest(
          (CThreadLockInputDest *)v21,
          (struct CInputDest *)(a4 + 408),
          v11,
          v12);
        v13 = *(struct _ERESOURCE **)(a1 + 224);
        *(_QWORD *)(a1 + 256) = 0LL;
        ExReleaseResourceAndLeaveCriticalRegion(v13);
        ApiSetPerformTargetingWithinPwnd(a4 + 408, a4 + 240, &v19);
        CInpLockGuard::LockExclusive((PERESOURCE *)(a1 + 224));
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v21);
        if ( !CTouchProcessor::GetQueueForCurrentNode(a2, v4, v7 != 0, a3, v24.x != 0, a2) )
          return 1LL;
        if ( !CTouchProcessor::RevalidateFrameProcessing(v14, v4, v7 != 0, (const struct CPointerInfoNode *)a4, 1) )
          return 2LL;
        CTouchProcessor::RecheckPointerCapture(v16, *(_QWORD *)(a4 + 16), v17, &v20, (int *)&v24);
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                             *(_QWORD *)(a4 + 280),
                             a4 + 240,
                             v19,
                             &v19) )
        {
          CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 252), &v19);
          *(struct tagPOINT *)(a4 + 228) = v19;
        }
      }
    }
    else
    {
      v18 = *(_WORD *)(a4 + 252);
      v24 = 0LL;
      CTouchProcessor::GetPointerOffset((CTouchProcessor *)a1, v18, &v24);
      *(struct tagPOINT *)(a4 + 228) = v24;
    }
  }
  return 0LL;
}
