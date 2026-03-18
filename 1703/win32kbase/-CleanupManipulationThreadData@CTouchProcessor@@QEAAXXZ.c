/*
 * XREFs of ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C006DF90
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0048044 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01182C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011EB44 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0121FA4 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0124D9C (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionInternalSetManipulationInputTarget @ 0x1C013B00C (ApiSetEditionInternalSetManipulationInputTarget.c)
 */

void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  struct _ERESOURCE **v1; // rbx
  volatile signed __int32 *v3; // r12
  PERESOURCE *v4; // rcx
  volatile signed __int32 *v5; // rdi
  __int64 v6; // r15
  _DWORD *v7; // r14
  int v8; // ebx
  __int64 v9; // rsi
  CPointerInfoNode *v10; // rcx
  CTouchProcessor *v11; // rcx
  const struct CInputDest *PrevMTNodeTarget; // rax
  __int64 v13; // r9
  unsigned int v14; // edx
  __int64 i; // rsi
  __int64 v16; // r15
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _ERESOURCE *v20; // rcx
  char v21; // [rsp+38h] [rbp-D0h]
  int v22; // [rsp+3Ch] [rbp-CCh]
  volatile signed __int32 *v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C8h]
  void *v25; // [rsp+48h] [rbp-C0h]
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+58h] [rbp-B0h]
  _BYTE v28[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v29[24]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v30[24]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v31[208]; // [rsp+A8h] [rbp-60h] BYREF
  char v32[192]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v33[26]; // [rsp+238h] [rbp+130h] BYREF

  v22 = 0;
  v1 = (struct _ERESOURCE **)((char *)this + 200);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v26,
    (CTouchProcessor *)((char *)this + 200));
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 33);
  v23 = v3;
  while ( v3 != (volatile signed __int32 *)((char *)this + 256) )
  {
    v5 = v3 - 2;
    _InterlockedIncrement(v3 + 9);
    v25 = Win32AllocPoolZInit(4LL * *((unsigned int *)v3 + 10), 1851878741LL);
    v6 = 0LL;
    v7 = Win32AllocPoolZInit(4LL * *((unsigned int *)v3 + 10), 1851878741LL);
    if ( *((_DWORD *)v3 + 10) )
    {
      v8 = v22;
      do
      {
        v9 = *((_QWORD *)v5 + 12) + 608LL * (unsigned int)v6;
        memset(v31, 0, 193);
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9)
          && (unsigned int)CPointerInfoNode::IsForManipulationThread(v10)
          && (*(_DWORD *)(v9 + 4) & 0x200) == 0 )
        {
          if ( !v25
            || !v7
            || (PrevMTNodeTarget = (const struct CInputDest *)CTouchProcessor::GetPrevMTNodeTarget(this, v32, v9, v5),
                CInputDest::CInputDest((CInputDest *)v33, PrevMTNodeTarget),
                v8 |= 1u,
                v21 = 0,
                !*(_DWORD *)CInputDest::operator=((__int64)v31, v33)) )
          {
            v21 = 1;
          }
          if ( (v8 & 1) != 0 )
          {
            v8 &= ~1u;
            CInputDest::SetEmpty((CInputDest *)v33);
          }
          if ( v21 )
          {
            if ( (*(_DWORD *)(v9 + 260) & 0x40000) != 0 )
              CTouchProcessor::ProcessLostCaptureList(
                this,
                *(_WORD *)(v9 + 252),
                1,
                (const struct CPointerInputFrame *)v5,
                v6,
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
            CTouchProcessor::FreePointerInfoNodeInt(v11, (struct CPointerInputFrame *)v5, v6);
          }
          else
          {
            *(_QWORD *)(v9 + 272) = CInputDest::GetWindowHandle((CInputDest *)v31);
            v7[v6] = 1;
          }
        }
        CInputDest::SetEmpty((CInputDest *)v31);
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)v5 + 12) );
      v3 = v23;
      v22 = v8;
      v1 = (struct _ERESOURCE **)((char *)this + 200);
    }
    v13 = (__int64)v25;
    if ( v25 )
    {
      if ( v7 )
      {
        v14 = *((_DWORD *)v5 + 12);
        for ( i = 0LL; (unsigned int)i < v14; i = (unsigned int)(i + 1) )
        {
          if ( v7[i] )
          {
            v16 = 0LL;
            v17 = i;
            v18 = *(_QWORD *)(608LL * (unsigned int)i + *((_QWORD *)v5 + 12) + 272);
            v24 = v18;
            if ( (unsigned int)i < v14 )
            {
              do
              {
                v19 = *((_QWORD *)v5 + 12) + 608LL * v17;
                if ( v7[v17] && *(_QWORD *)(v19 + 272) == v18 )
                {
                  *(_DWORD *)(v13 + 4 * v16) = *(unsigned __int16 *)(v19 + 252);
                  v16 = (unsigned int)(v16 + 1);
                  v7[v17] = 0;
                  v18 = v24;
                }
                ++v17;
              }
              while ( v17 < *((_DWORD *)v5 + 12) );
            }
            PushW32ThreadLock(v13, v30, Win32FreePool);
            PushW32ThreadLock(v7, v29, Win32FreePool);
            PushW32ThreadLock(v5, v28, CTouchProcessor::DereferencePointerInputFrame);
            v20 = *v1;
            v1[4] = 0LL;
            ExReleaseResourceAndLeaveCriticalRegion(v20);
            ApiSetEditionInternalSetManipulationInputTarget(*((unsigned int *)v5 + 10), v24, (unsigned int)v16, v25);
            CInpLockGuard::LockExclusive((CInpLockGuard *)v1);
            PopW32ThreadLock(v28);
            PopW32ThreadLock(v29);
            PopW32ThreadLock(v30);
            v13 = (__int64)v25;
          }
          v14 = *((_DWORD *)v5 + 12);
        }
      }
      Win32FreePool(v13);
    }
    if ( v7 )
      Win32FreePool((__int64)v7);
    v3 = (volatile signed __int32 *)*((_QWORD *)v3 + 1);
    v23 = v3;
    CTouchProcessor::UnreferenceFrameInt(this, (struct CPointerInputFrame *)v5);
  }
  if ( !v27 )
  {
    v4 = (PERESOURCE *)v26;
    *(_QWORD *)(v26 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v4);
  }
}
