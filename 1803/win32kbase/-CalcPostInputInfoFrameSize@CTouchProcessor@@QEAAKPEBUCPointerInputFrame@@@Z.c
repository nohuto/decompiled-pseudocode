/*
 * XREFs of ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C010D910
 * Callers:
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C010D78C (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     CalcPostInputInfoFrameSize @ 0x1C011F5F0 (CalcPostInputInfoFrameSize.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::CalcPostInputInfoFrameSize(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  unsigned __int64 v5; // rax
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  CInpLockGuard *v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v11,
    (CTouchProcessor *)((char *)this + 72));
  v4 = *((_DWORD *)a2 + 12);
  if ( v4
    && (v5 = 144LL * (unsigned int)(v4 - 1), v5 <= 0xFFFFFFFF)
    && (v6 = v5, v7 = v5 + 152, (unsigned int)(v6 + 152) >= 0x98) )
  {
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  v9 = v8 - 1;
  if ( (unsigned int)v9 <= 0x96 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v3);
  if ( !v12 )
    CInpLockGuard::UnLock((PERESOURCE *)v11);
  return v8;
}
