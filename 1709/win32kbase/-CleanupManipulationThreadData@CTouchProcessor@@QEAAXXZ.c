/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0007310
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00173D4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C011716C (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011D9E8 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0121574 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C01243F4 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionInternalSetManipulationInputTarget @ 0x1C013A2D0 (ApiSetEditionInternalSetManipulationInputTarget.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  struct _ERESOURCE **v1; // rbx
  volatile signed __int32 *v3; // r12
  PERESOURCE *v4; // rcx
  const struct CPointerInputFrame *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r14
  int v10; // ebx
  __int64 v11; // rsi
  CPointerInfoNode *v12; // rcx
  CTouchProcessor *v13; // rcx
  const struct CInputDest *PrevMTNodeTarget; // rax
  __int64 v15; // r9
  __int64 i; // rsi
  __int64 v17; // r15
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  struct _ERESOURCE *v21; // rcx
  char v22; // [rsp+38h] [rbp-D0h]
  int v23; // [rsp+3Ch] [rbp-CCh]
  volatile signed __int32 *v24; // [rsp+40h] [rbp-C8h]
  __int64 v25; // [rsp+40h] [rbp-C8h]
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+58h] [rbp-B0h]
  _BYTE v29[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v30[24]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v31[24]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v32[208]; // [rsp+A8h] [rbp-60h] BYREF
  char v33[192]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v34[208]; // [rsp+238h] [rbp+130h] BYREF

  v23 = 0;
  v1 = (struct _ERESOURCE **)((char *)this + 224);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v27,
    (CTouchProcessor *)((char *)this + 224));
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 36);
  v24 = v3;
  while ( v3 != (volatile signed __int32 *)((char *)this + 280) )
  {
    v5 = (const struct CPointerInputFrame *)(v3 - 2);
    _InterlockedIncrement(v3 + 9);
    v26 = Win32AllocPoolZInit(4LL * *((unsigned int *)v3 + 10));
    v6 = 0LL;
    v9 = Win32AllocPoolZInit(4LL * *((unsigned int *)v3 + 10));
    if ( *((_DWORD *)v3 + 10) )
    {
      v10 = v23;
      do
      {
        v11 = *((_QWORD *)v5 + 12) + 608LL * (unsigned int)v6;
        memset(v32, 0, 193);
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11)
          && (unsigned int)CPointerInfoNode::IsForManipulationThread(v12)
          && (*(_DWORD *)(v11 + 4) & 0x200) == 0 )
        {
          if ( !v26
            || !v9
            || (PrevMTNodeTarget = (const struct CInputDest *)CTouchProcessor::GetPrevMTNodeTarget(this, v33, v11, v5),
                CInputDest::CInputDest((CInputDest *)v34, PrevMTNodeTarget),
                v10 |= 1u,
                v22 = 0,
                !*(_DWORD *)CInputDest::operator=(v32, v34)) )
          {
            v22 = 1;
          }
          if ( (v10 & 1) != 0 )
          {
            v10 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v34);
          }
          if ( v22 )
          {
            if ( (*(_DWORD *)(v11 + 260) & 0x40000) != 0 )
              CTouchProcessor::ProcessLostCaptureList(
                this,
                *(_WORD *)(v11 + 252),
                1,
                v5,
                v6,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt(v13, v5, v6);
          }
          else
          {
            *(_QWORD *)(v11 + 272) = CInputDest::GetWindowHandle((CInputDest *)v32);
            *(_DWORD *)(v9 + 4 * v6) = 1;
          }
        }
        CInputDest::SetEmpty((CInputDest *)v32);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)v5 + 12) );
      v3 = v24;
      v23 = v10;
      v1 = (struct _ERESOURCE **)((char *)this + 224);
    }
    v15 = v26;
    if ( v26 )
    {
      if ( v9 )
      {
        v7 = *((unsigned int *)v5 + 12);
        for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
        {
          if ( *(_DWORD *)(v9 + 4 * i) )
          {
            v17 = 0LL;
            v18 = i;
            v19 = *(_QWORD *)(608LL * (unsigned int)i + *((_QWORD *)v5 + 12) + 272);
            v25 = v19;
            if ( (unsigned int)i < (unsigned int)v7 )
            {
              do
              {
                if ( *(_DWORD *)(v9 + 4LL * v18) )
                {
                  v20 = *((_QWORD *)v5 + 12) + 608LL * v18;
                  if ( *(_QWORD *)(v20 + 272) == v19 )
                  {
                    *(_DWORD *)(v15 + 4 * v17) = *(unsigned __int16 *)(v20 + 252);
                    v17 = (unsigned int)(v17 + 1);
                    *(_DWORD *)(v9 + 4LL * v18) = 0;
                    v19 = v25;
                  }
                }
                ++v18;
              }
              while ( v18 < *((_DWORD *)v5 + 12) );
            }
            PushW32ThreadLock(v15, v31, Win32FreePool);
            PushW32ThreadLock(v9, v30, Win32FreePool);
            PushW32ThreadLock(v5, v29, CTouchProcessor::DereferencePointerInputFrame);
            v21 = *v1;
            v1[4] = 0LL;
            ExReleaseResourceAndLeaveCriticalRegion(v21);
            ApiSetEditionInternalSetManipulationInputTarget(*((unsigned int *)v5 + 10), v25, (unsigned int)v17, v26);
            CInpLockGuard::LockExclusive((CInpLockGuard *)v1);
            PopW32ThreadLock(v29);
            PopW32ThreadLock(v30);
            PopW32ThreadLock(v31);
            v15 = v26;
          }
          v7 = *((unsigned int *)v5 + 12);
        }
      }
      Win32FreePool(v15, v7, v8);
    }
    if ( v9 )
      Win32FreePool(v9, v7, v8);
    v3 = (volatile signed __int32 *)*((_QWORD *)v3 + 1);
    v24 = v3;
    CTouchProcessor::UnreferenceFrameInt(this, v5);
  }
  if ( !v28 )
  {
    v4 = (PERESOURCE *)v27;
    *(_QWORD *)(v27 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v4);
  }
}
