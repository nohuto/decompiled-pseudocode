/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C011CEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0018360 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C013AA5C (ApiSetEditionPointerActivate.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(PERESOURCE *a1, _OWORD *a2, __int64 a3)
{
  PERESOURCE *v3; // rbx
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  struct _ERESOURCE *v12; // rcx
  int v13; // edx
  __int128 v14; // xmm1
  __int64 v15; // r9
  int v16; // r8d
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  _OWORD *v23; // r15
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  PERESOURCE *v27; // [rsp+30h] [rbp-D0h]
  _BYTE v28[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v29[64]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v30[12]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[208]; // [rsp+150h] [rbp+50h] BYREF

  v3 = a1 + 28;
  v27 = a1 + 28;
  CInpLockGuard::LockExclusive(a1 + 28);
  if ( a3 )
  {
    FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
    v8 = FrameById;
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
      v9 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a3 + 32);
      PushW32ThreadLock(FrameById, v28, CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v31, (const struct CInputDest *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v29, (struct CInputDest *)v31, v10, v11);
      v12 = *v3;
      v3[4] = 0LL;
      ExReleaseResourceAndLeaveCriticalRegion(v12);
      v13 = *(_DWORD *)(v9 + 4);
      v14 = a2[1];
      v15 = *(_QWORD *)(v9 + 16);
      v16 = *(unsigned __int16 *)(v9 + 224);
      v30[0] = *a2;
      v17 = a2[2];
      v30[1] = v14;
      v18 = a2[3];
      v30[2] = v17;
      v19 = a2[4];
      v30[3] = v18;
      v20 = a2[5];
      v30[4] = v19;
      v21 = a2[6];
      v30[5] = v20;
      v30[6] = v21;
      v22 = a2[7];
      v23 = a2 + 8;
      v30[7] = v22;
      v24 = v23[1];
      v30[8] = *v23;
      v25 = v23[2];
      v30[9] = v24;
      v26 = v23[3];
      v30[10] = v25;
      v30[11] = v26;
      ApiSetEditionPointerActivate((unsigned int)v30, -__CFSHR__(v13, 8), v16, v15, v9 + 240);
      CInpLockGuard::LockExclusive(v3);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v29);
      PopW32ThreadLock(v28);
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)a1, v8);
      CInputDest::SetEmpty((CInputDest *)v31);
      v3 = v27;
    }
  }
  v3[4] = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*v3);
}
