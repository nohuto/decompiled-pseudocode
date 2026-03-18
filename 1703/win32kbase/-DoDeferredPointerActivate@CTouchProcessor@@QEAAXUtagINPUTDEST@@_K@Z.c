/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C011E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00481D0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0083ACC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C013B8EC (ApiSetEditionPointerActivate.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(PERESOURCE *a1, _OWORD *a2, __int64 a3)
{
  PERESOURCE *v3; // rbx
  struct CPointerInputFrame *FrameById; // rax
  struct CPointerInputFrame *v8; // rbp
  __int64 v9; // rdi
  struct _ERESOURCE *v10; // rcx
  int v11; // edx
  __int128 v12; // xmm1
  __int64 v13; // r9
  int v14; // r8d
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  _OWORD *v21; // r14
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  _BYTE v25[32]; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v26[64]; // [rsp+50h] [rbp-208h] BYREF
  _OWORD v27[12]; // [rsp+90h] [rbp-1C8h] BYREF
  _BYTE v28[208]; // [rsp+150h] [rbp-108h] BYREF

  v3 = a1 + 25;
  CInpLockGuard::LockExclusive(a1 + 25);
  if ( a3 )
  {
    FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
    v8 = FrameById;
    if ( FrameById )
    {
      _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
      v9 = *((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a3 + 32);
      PushW32ThreadLock(FrameById, v25, CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v28, (const struct CInputDest *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v26, (struct CInputDest *)v28);
      v10 = *v3;
      v3[4] = 0LL;
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      v11 = *(_DWORD *)(v9 + 4);
      v12 = a2[1];
      v13 = *(_QWORD *)(v9 + 16);
      v14 = *(unsigned __int16 *)(v9 + 224);
      v27[0] = *a2;
      v15 = a2[2];
      v27[1] = v12;
      v16 = a2[3];
      v27[2] = v15;
      v17 = a2[4];
      v27[3] = v16;
      v18 = a2[5];
      v27[4] = v17;
      v19 = a2[6];
      v27[5] = v18;
      v27[6] = v19;
      v20 = a2[7];
      v21 = a2 + 8;
      v27[7] = v20;
      v22 = v21[1];
      v27[8] = *v21;
      v23 = v21[2];
      v27[9] = v22;
      v24 = v21[3];
      v27[10] = v23;
      v27[11] = v24;
      ApiSetEditionPointerActivate((unsigned int)v27, -__CFSHR__(v11, 8), v14, v13, v9 + 240);
      CInpLockGuard::LockExclusive(v3);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v26);
      PopW32ThreadLock(v25);
      CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)a1, v8);
      CInputDest::SetEmpty((CInputDest *)v28);
    }
  }
  v3[4] = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*v3);
}
