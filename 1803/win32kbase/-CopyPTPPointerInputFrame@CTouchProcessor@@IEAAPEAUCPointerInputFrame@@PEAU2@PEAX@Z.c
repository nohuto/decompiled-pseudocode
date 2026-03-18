/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C010F43C
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C0125340 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C010C8A8 (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C010CC04 (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C010D3A0 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C010D3F8 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C010F698 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0112154 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011232C (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C0141310 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        PERESOURCE *this,
        struct CPointerInputFrame *a2,
        unsigned __int64 a3)
{
  PERESOURCE *v3; // rbx
  char *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  _QWORD *v10; // rax
  struct CPointerInfoNode *v11; // rax
  CTouchProcessor *v12; // rcx
  __int64 v13; // rdx
  unsigned int i; // r14d
  struct CPointerQFrame *v15; // rax
  unsigned int j; // r14d
  struct CPointerRawData *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  struct A0xad387374::CFrameIdGenerator *v21; // r14
  int v22; // r15d
  struct CPointerInfoNode *v23; // rdx
  struct CPointerQFrame *v24; // rdx
  CInpLockGuard *v26[2]; // [rsp+20h] [rbp-38h] BYREF

  v3 = this + 9;
  CInpLockGuard::LockExclusive(this + 9);
  v7 = (char *)Win32AllocPoolZInit(0x78uLL, 0x66707355u);
  v8 = 0LL;
  v9 = (__int64)v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *((_OWORD *)v7 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v7 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v7 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v7 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v7 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)v7 + 6) = *((_OWORD *)a2 + 6);
    *((_QWORD *)v7 + 14) = *((_QWORD *)a2 + 14);
    v10 = v7 + 8;
    v10[1] = v10;
    *v10 = v10;
    *(_QWORD *)(v9 + 32) = v9 + 24;
    *(_QWORD *)(v9 + 24) = v9 + 24;
    *(_QWORD *)(v9 + 112) = 0LL;
    *(_QWORD *)(v9 + 96) = 0LL;
    *(_QWORD *)(v9 + 104) = 0LL;
    *(_QWORD *)(v9 + 88) = 0LL;
    v11 = CTouchProcessor::AllocPointerInfoNodeList((struct _KTHREAD **)this, *((unsigned int *)a2 + 12));
    *(_QWORD *)(v9 + 96) = v11;
    if ( !v11 )
      goto LABEL_17;
    v13 = *((unsigned int *)a2 + 12);
    for ( i = 0; i < (unsigned int)v13; ++i )
    {
      CPointerInfoNode::operator=(*(_QWORD *)(v9 + 96) + 576LL * i, 576LL * i + *((_QWORD *)a2 + 12));
      v13 = *((unsigned int *)a2 + 12);
    }
    v15 = CTouchProcessor::AllocPointerQFrameList((struct _KTHREAD **)this, v13);
    *(_QWORD *)(v9 + 104) = v15;
    if ( !v15 )
      goto LABEL_17;
    for ( j = 0; j < *((_DWORD *)a2 + 12); ++j )
      CPointerQFrame::operator=(*(_QWORD *)(v9 + 104) + 224LL * j, 224LL * j + *((_QWORD *)a2 + 13));
    if ( !*((_QWORD *)a2 + 11)
      || (v17 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2), (*(_QWORD *)(v9 + 88) = v17) != 0LL) )
    {
      v20 = HMValidateHandleNoSecure(a3, 19);
      if ( !v20 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
      v26[1] = *(CInpLockGuard **)(v20 + 480);
      v26[0] = (CInpLockGuard *)(v9 + 112);
      HMAssignmentLock((__int64)v26);
      v21 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
      CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        (CInpLockGuardExclusiveIfNeeded *)v26,
        (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8));
      v22 = (*(_DWORD *)v21)++;
      if ( v22 == -1 )
      {
        *(_DWORD *)v21 = 1;
        ApiSetResetLastSeenFrameId();
      }
      if ( !LODWORD(v26[1]) )
        CInpLockGuard::UnLock((PERESOURCE *)v26[0]);
      *((_DWORD *)a2 + 10) = v22;
      v8 = v9;
    }
    else
    {
LABEL_17:
      v23 = *(struct CPointerInfoNode **)(v9 + 96);
      if ( v23 )
      {
        if ( v23 == *((struct CPointerInfoNode **)a2 + 12) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v23);
          v23 = *(struct CPointerInfoNode **)(v9 + 96);
        }
        CTouchProcessor::FreePointerInfoList(v12, v23, *(_DWORD *)(v9 + 48));
      }
      v24 = *(struct CPointerQFrame **)(v9 + 104);
      if ( v24 )
      {
        if ( v24 == *((struct CPointerQFrame **)a2 + 13) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v24);
          v24 = *(struct CPointerQFrame **)(v9 + 104);
        }
        CTouchProcessor::FreePointerQFrameList(v12, v24, *(_DWORD *)(v9 + 48));
      }
      Win32FreePool(v9);
    }
  }
  CInpLockGuard::UnLock(v3);
  return (struct CPointerInputFrame *)v8;
}
