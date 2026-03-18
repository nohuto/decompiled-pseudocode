/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C0113E00
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01179A4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        CTouchProcessor *this,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  const struct CPointerInputFrame *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rbx
  CInpLockGuard *v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v18,
    (CTouchProcessor *)((char *)this + 72));
  if ( a2 && (v10 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a2 + 28))) != 0LL )
  {
    v11 = *(unsigned int *)(a2 + 32);
    if ( (unsigned int)v11 >= *((_DWORD *)v10 + 12) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      v11 = *(unsigned int *)(a2 + 32);
    }
    v12 = *((_QWORD *)v10 + 12) + 576 * v11;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
    v15 = *(unsigned __int16 *)(a2 + 16);
    if ( *(_DWORD *)(v12 + 236) != v15 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
      LOWORD(v15) = *(_WORD *)(a2 + 16);
    }
    *a3 = v15;
    *a4 = *((_DWORD *)v10 + 12);
    v16 = *(_QWORD *)(v12 + 256);
    CTouchProcessor::UnreferenceFrame(this, v10);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v19 )
    CInpLockGuard::UnLock((PERESOURCE *)v18);
  return v16;
}
