/*
 * XREFs of ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C0119150
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::PrepareMakePointerMessage(
        CTouchProcessor *this,
        __int64 a2,
        struct tagPOINT *a3,
        int *a4,
        int *a5,
        int *a6)
{
  struct CPointerInputFrame *FrameById; // rax
  __int64 v11; // rdx
  struct CPointerInputFrame *v12; // rsi
  __int64 v13; // rcx
  _DWORD *v14; // rbx
  _DWORD *v15; // rsi
  CInpLockGuard *v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v17,
    (CTouchProcessor *)((char *)this + 72));
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28)), (v12 = FrameById) != 0LL) )
  {
    v13 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v13 >= *((_DWORD *)FrameById + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v11);
      v13 = *(unsigned int *)(a2 + 32);
    }
    v14 = (_DWORD *)(*((_QWORD *)v12 + 12) + 576LL * (unsigned int)v13);
    v15 = v14 + 58;
    if ( v14[59] != *(unsigned __int16 *)(a2 + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v11);
    *a3 = *(struct tagPOINT *)(v14 + 53);
    *a4 = v14[52];
    *a5 = -__CFSHR__(*v14, 18);
    *a6 = -__CFSHR__(*v14, 19);
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v18 )
    CInpLockGuard::UnLock((PERESOURCE *)v17);
  return (const struct tagPOINTER_INFO *)v15;
}
