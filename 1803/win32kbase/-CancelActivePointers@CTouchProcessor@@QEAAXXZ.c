/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C010E280
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C010E18C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(CTouchProcessor *this, __int64 a2)
{
  int v3; // r8d
  int v4; // r9d
  CTouchProcessor *v5; // rsi
  struct CInputPointerNode *v6; // rdx

  if ( *((struct _KTHREAD **)this + 13) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  CInpLockGuard::LockExclusive((PERESOURCE *)this + 9);
  v5 = (CTouchProcessor *)*((_QWORD *)this + 19);
  while ( v5 != (CTouchProcessor *)((char *)this + 152) )
  {
    v6 = (CTouchProcessor *)((char *)v5 - 16);
    v5 = *(CTouchProcessor **)v5;
    CTouchProcessor::CancelActivePointer(this, v6, v3, v4);
  }
  CInpLockGuard::UnLock((PERESOURCE *)this + 9);
}
