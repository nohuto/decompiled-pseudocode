/*
 * XREFs of ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01142E0
 * Callers:
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C011424C (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(CTouchProcessor *this, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 v8; // bx
  struct CInputPointerNode *NodeById; // rax
  unsigned int v10; // ebx
  CInpLockGuard *v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v12, (CTouchProcessor *)((char *)this + 72));
  if ( a2 )
  {
    v8 = *(_WORD *)(a2 + 16);
    if ( v8 )
      goto LABEL_5;
  }
  else
  {
    v8 = 0;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
LABEL_5:
  NodeById = CTouchProcessor::FindNodeById(this, v8, 0, 0);
  if ( NodeById )
  {
    v10 = 1;
    *a3 = *((unsigned __int16 *)NodeById + 17);
  }
  else
  {
    v10 = 0;
  }
  if ( !v13 )
    CInpLockGuard::UnLock((PERESOURCE *)v12);
  return v10;
}
