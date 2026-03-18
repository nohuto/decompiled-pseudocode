/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01103B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     EtwTracePointerNoCoalesce @ 0x1C00AC540 (EtwTracePointerNoCoalesce.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011051C (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C011594C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C011CA0C (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        PERESOURCE *this,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  const struct CPointerInputFrame *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbp
  CTouchProcessor *v15; // rcx
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  const struct CPointerInputFrame *v17; // rdx
  CTouchProcessor *v18; // rcx
  CTouchProcessor *v19; // rcx
  unsigned int v20; // r14d
  const struct CPointerQFrame *v21; // rax

  CInpLockGuard::LockExclusive(this + 9);
  if ( !a2 )
    goto LABEL_17;
  v12 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *(_DWORD *)(a2 + 28));
  if ( !v12 )
    goto LABEL_17;
  v13 = *(unsigned int *)(a2 + 32);
  if ( (unsigned int)v13 >= *((_DWORD *)v12 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
    v13 = *(unsigned int *)(a2 + 32);
  }
  v14 = *((_QWORD *)v12 + 12) + 576 * v13;
  if ( *(_WORD *)(v14 + 236) != *(_WORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  if ( a5 )
  {
    if ( !a4 )
      goto LABEL_9;
  }
  else if ( a4 )
  {
    goto LABEL_9;
  }
  if ( !a3 )
  {
    v17 = v12;
    v18 = (CTouchProcessor *)this;
    goto LABEL_16;
  }
LABEL_9:
  CTouchProcessor::SetPointerInfoNodeDelegateAction((CTouchProcessor *)this, v12, *(_DWORD *)(a2 + 32), a6, a3, a4);
  PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(v15, v12, (const struct CPointerInfoNode *)v14);
  v17 = v12;
  v18 = (CTouchProcessor *)this;
  if ( (*((_DWORD *)PointerInfoNodeQFrame + 51) & 4) != 0 )
  {
LABEL_16:
    CTouchProcessor::UnreferenceFrame(v18, v17);
LABEL_17:
    v20 = 0;
    goto LABEL_18;
  }
  v20 = CTouchProcessor::DelegateCoalesceQFrame((CTouchProcessor *)this, v12, *(_DWORD *)(v14 + 8));
  if ( !v20 )
  {
    v21 = CTouchProcessor::GetPointerInfoNodeQFrame(v19, v12, (const struct CPointerInfoNode *)v14);
    EtwTracePointerNoCoalesce(*(unsigned __int16 *)(v14 + 224), *(_WORD *)(v14 + 236), *((_DWORD *)v21 + 53), 1);
  }
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v12);
LABEL_18:
  CInpLockGuard::UnLock(this + 9);
  return v20;
}
