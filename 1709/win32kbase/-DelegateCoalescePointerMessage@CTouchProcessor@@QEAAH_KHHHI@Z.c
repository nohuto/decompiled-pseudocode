/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C011C230
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     EtwTracePointerNoCoalesce @ 0x1C00E0FD0 (EtwTracePointerNoCoalesce.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C011C388 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011D210 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C0126B60 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        PERESOURCE *this,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  char *v6; // rbx
  struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v12; // rcx
  struct CPointerInputFrame *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  CTouchProcessor *v17; // rcx
  unsigned int v18; // ebp
  char *v20; // [rsp+50h] [rbp+8h]

  v6 = (char *)(this + 28);
  v20 = (char *)(this + 28);
  CInpLockGuard::LockExclusive(this + 28);
  if ( !a2 )
    goto LABEL_13;
  FrameById = CTouchProcessor::FindFrameById((CTouchProcessor *)this, *(_DWORD *)(a2 + 28));
  v13 = FrameById;
  if ( !FrameById )
    goto LABEL_13;
  _InterlockedIncrement((volatile signed __int32 *)FrameById + 11);
  v14 = *(unsigned int *)(a2 + 32);
  v15 = *((_QWORD *)v13 + 12) + 608 * v14;
  if ( a5 )
  {
    if ( !a4 )
      goto LABEL_5;
  }
  else if ( a4 )
  {
    goto LABEL_5;
  }
  if ( !a3 )
  {
    v17 = (CTouchProcessor *)this;
    goto LABEL_12;
  }
LABEL_5:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(v12, v13, v14, a6, a3, a4);
  v16 = *(unsigned int *)(v15 + 8);
  v17 = (CTouchProcessor *)this;
  if ( (*(_DWORD *)(240 * v16 + *((_QWORD *)v13 + 13) + 220) & 4) != 0 )
  {
LABEL_12:
    CTouchProcessor::UnreferenceFrameInt(v17, v13);
    v6 = v20;
LABEL_13:
    v18 = 0;
    goto LABEL_14;
  }
  v18 = CTouchProcessor::DelegateCoalesceQFrame((CTouchProcessor *)this, v13, v16);
  if ( !v18 )
    EtwTracePointerNoCoalesce(
      *(unsigned __int16 *)(v15 + 240),
      *(_WORD *)(v15 + 252),
      *(_DWORD *)(240LL * *(unsigned int *)(v15 + 8) + *((_QWORD *)v13 + 13) + 228),
      1);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v13);
  v6 = v20;
LABEL_14:
  *((_QWORD *)v6 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v6);
  return v18;
}
