/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C0117610
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C010C848 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01115A4 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(CTouchProcessor *this, __int64 a2, int *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct CPointerInputFrame *FrameById; // rsi
  __int64 v10; // rax
  _DWORD *v11; // rbx
  PERESOURCE *v13[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v13, (CTouchProcessor *)((char *)this + 72));
  v6 = 0;
  *a3 = 0;
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
    if ( FrameById )
    {
      v10 = *(unsigned int *)(a2 + 32);
      if ( (unsigned int)v10 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
        v10 = *(unsigned int *)(a2 + 32);
      }
      v11 = (_DWORD *)(*((_QWORD *)FrameById + 12) + 576 * v10);
      if ( v11[59] != *(unsigned __int16 *)(a2 + 16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
      if ( (v11[1] & 0x80u) != 0 )
        *a3 = 1;
      v6 = -__CFSHR__(*v11, 11);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v13);
  return v6;
}
