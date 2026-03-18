/*
 * XREFs of ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C01111E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0066BA0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionPointerActivate @ 0x1C013F23C (ApiSetEditionPointerActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DoDeferredPointerActivate(PERESOURCE *a1, __int64 a2, __int64 a3)
{
  PERESOURCE *v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  const struct CPointerInputFrame *v9; // rbp
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  __int128 v15; // xmm1
  __int64 v16; // r9
  int v17; // r8d
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _BYTE v26[32]; // [rsp+30h] [rbp-208h] BYREF
  _BYTE v27[64]; // [rsp+50h] [rbp-1E8h] BYREF
  _OWORD v28[11]; // [rsp+90h] [rbp-1A8h] BYREF
  _BYTE v29[192]; // [rsp+140h] [rbp-F8h] BYREF

  v3 = a1 + 9;
  CInpLockGuard::LockExclusive(a1 + 9);
  if ( a3 )
  {
    v9 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)a1, *(_DWORD *)(a3 + 28));
    if ( v9 )
    {
      v10 = *(_DWORD *)(a3 + 32);
      if ( v10 >= *((_DWORD *)v9 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
        v10 = *(_DWORD *)(a3 + 32);
      }
      v11 = *((_QWORD *)v9 + 12) + 576LL * v10;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v11) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
      if ( *(_WORD *)(a3 + 16) != *(_WORD *)(v11 + 236) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
      PushW32ThreadLock(v9, v26, CTouchProcessor::DereferencePointerInputFrame);
      CInputDest::CInputDest((CInputDest *)v29, (const struct tagINPUTDEST *)a2);
      CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v27, (struct CInputDest *)v29);
      CInpLockGuard::UnLock(v3);
      v14 = *(_DWORD *)(v11 + 4);
      v15 = *(_OWORD *)(a2 + 16);
      v16 = *(_QWORD *)(v11 + 16);
      v17 = *(unsigned __int16 *)(v11 + 208);
      v28[0] = *(_OWORD *)a2;
      v18 = *(_OWORD *)(a2 + 32);
      v28[1] = v15;
      v19 = *(_OWORD *)(a2 + 48);
      v28[2] = v18;
      v20 = *(_OWORD *)(a2 + 64);
      v28[3] = v19;
      v21 = *(_OWORD *)(a2 + 80);
      v28[4] = v20;
      v22 = *(_OWORD *)(a2 + 96);
      v28[5] = v21;
      v23 = *(_OWORD *)(a2 + 128);
      v28[6] = v22;
      v28[7] = *(_OWORD *)(a2 + 112);
      v24 = *(_OWORD *)(a2 + 144);
      v28[8] = v23;
      v25 = *(_OWORD *)(a2 + 160);
      v28[9] = v24;
      v28[10] = v25;
      ApiSetEditionPointerActivate((unsigned int)v28, -__CFSHR__(v14, 8), v17, v16, v11 + 224);
      CInpLockGuard::LockExclusive(v3);
      CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v27);
      PopW32ThreadLock(v26);
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)a1, v9);
      CInputDest::SetEmpty((CInputDest *)v29);
    }
  }
  CInpLockGuard::UnLock(v3);
}
