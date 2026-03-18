/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C010E340
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01099AC (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C0112298 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0116638 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0117288 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C011A0B0 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  PERESOURCE *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  struct CPointerInputFrame *v6; // r13
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // r14
  int v11; // ebx
  __int64 v12; // rsi
  CPointerInfoNode *v13; // rcx
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  bool v15; // r13
  unsigned int *v16; // r9
  __int64 v17; // rcx
  __int64 i; // rsi
  __int64 v19; // rcx
  __int64 v20; // r12
  unsigned int v21; // r8d
  __int64 v22; // r10
  __int64 v23; // rax
  int v24; // [rsp+38h] [rbp-D0h]
  int v25; // [rsp+3Ch] [rbp-CCh]
  struct CPointerInputFrame *v26; // [rsp+40h] [rbp-C8h]
  int v27; // [rsp+40h] [rbp-C8h]
  unsigned int *v28; // [rsp+48h] [rbp-C0h]
  CInpLockGuard *v29; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+58h] [rbp-B0h]
  _BYTE v31[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v32[24]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v33[24]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v34[192]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v35[176]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v36[24]; // [rsp+218h] [rbp+110h] BYREF

  v24 = 0;
  v1 = (PERESOURCE *)((char *)this + 72);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v29,
    (CTouchProcessor *)((char *)this + 72));
  v5 = *((_QWORD *)this + 16);
  while ( (CTouchProcessor *)v5 != (CTouchProcessor *)((char *)this + 120) )
  {
    v6 = (struct CPointerInputFrame *)(v5 - 8);
    v26 = (struct CPointerInputFrame *)(v5 - 8);
    if ( v5 == 8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 36));
    v25 = 0;
    v28 = (unsigned int *)Win32AllocPoolZInit(4LL * *(unsigned int *)(v5 + 40), 0x6E616D55u);
    v7 = Win32AllocPoolZInit(4LL * *(unsigned int *)(v5 + 40), 0x6E616D55u);
    v8 = *(unsigned int *)(v5 + 40);
    v9 = 0LL;
    v10 = (__int64)v7;
    if ( (_DWORD)v8 )
    {
      v11 = v24;
      do
      {
        v12 = *(_QWORD *)(v5 + 88) + 576 * v9;
        memset(v34, 0, 177);
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v12)
          && (unsigned int)CPointerInfoNode::IsForManipulationThread(v13)
          && (*(_DWORD *)(v12 + 4) & 0x200) == 0 )
        {
          v15 = 1;
          if ( v28 )
          {
            if ( v10 )
            {
              PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(this, v35, v12, v6);
              CInputDest::CInputDest((CInputDest *)v36, PrevMTNodeTarget);
              v11 |= 1u;
              if ( *(_DWORD *)CInputDest::operator=((__int64)v34, v36) )
                v15 = 0;
            }
          }
          if ( (v11 & 1) != 0 )
          {
            v11 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v36);
          }
          if ( v15 )
          {
            v6 = (struct CPointerInputFrame *)(v5 - 8);
            if ( (*(_DWORD *)(v12 + 244) & 0x40000) != 0 )
              CTouchProcessor::ProcessLostCaptureList(
                this,
                *(_WORD *)(v12 + 236),
                1,
                v26,
                v9,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt(this, v26, v9);
          }
          else
          {
            ++v25;
            v6 = (struct CPointerInputFrame *)(v5 - 8);
            *(_QWORD *)(v12 + 256) = CInputDest::GetWindowHandle((CInputDest *)v34);
            *(_DWORD *)(v10 + 4 * v9) = 1;
          }
        }
        CInputDest::SetEmpty((CInputDest *)v34);
        v8 = *(unsigned int *)(v5 + 40);
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < (unsigned int)v8 );
      v24 = v11;
      v1 = (PERESOURCE *)((char *)this + 72);
    }
    v16 = v28;
    v17 = 0LL;
    v27 = 0;
    if ( v28 )
    {
      if ( v10 )
      {
        for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
        {
          if ( *(_DWORD *)(v10 + 4 * i) )
          {
            v19 = 576 * i;
            v20 = 0LL;
            v21 = i;
            v22 = *(_QWORD *)(576 * i + *(_QWORD *)(v5 + 88) + 256);
            if ( (unsigned int)i >= (unsigned int)v8 )
              goto LABEL_33;
            do
            {
              v8 = v21;
              if ( *(_DWORD *)(v10 + 4LL * v21) )
              {
                v23 = *(_QWORD *)(v5 + 88) + 576LL * v21;
                if ( *(_QWORD *)(v23 + 256) == v22 )
                {
                  v19 = *(unsigned __int16 *)(v23 + 236);
                  v16[v20] = v19;
                  v20 = (unsigned int)(v20 + 1);
                  *(_DWORD *)(v10 + 4LL * v21) = 0;
                }
              }
              ++v21;
            }
            while ( v21 < *(_DWORD *)(v5 + 40) );
            if ( !(_DWORD)v20 )
            {
LABEL_33:
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v8);
              v16 = v28;
            }
            PushW32ThreadLock(v16, v33, Win32FreePool);
            PushW32ThreadLock(v10, v32, Win32FreePool);
            PushW32ThreadLock(v6, v31, CTouchProcessor::DereferencePointerInputFrame);
            CInpLockGuard::UnLock(v1);
            CTouchProcessor::SetManipulationInputTarget(this, *(_DWORD *)(v5 + 32), v20, v28, 0LL);
            CInpLockGuard::LockExclusive(v1);
            PopW32ThreadLock(v31);
            PopW32ThreadLock(v32);
            PopW32ThreadLock(v33);
            v16 = v28;
            v17 = (unsigned int)(v20 + v27);
            v27 += v20;
          }
          v8 = *(unsigned int *)(v5 + 40);
        }
        if ( (_DWORD)v17 != v25 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v8);
      }
      Win32FreePool((__int64)v28);
    }
    if ( v10 )
      Win32FreePool(v10);
    v5 = *(_QWORD *)(v5 + 8);
    CTouchProcessor::UnreferenceFrameInt(this, v6);
  }
  if ( !v30 )
    CInpLockGuard::UnLock((PERESOURCE *)v29);
}
