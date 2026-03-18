/*
 * XREFs of ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C0110630
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01102BC (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C011AF54 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(PERESOURCE *this, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax

  CInpLockGuard::LockExclusive(this + 9);
  if ( this[13] != (PERESOURCE)KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v8 = *(_QWORD *)(a2 + 40);
  if ( !v8 || (*(_DWORD *)(v8 + 432) & 4) == 0 )
    CTouchProcessor::DelegateCapturePointerImplicit((struct _KTHREAD **)this, a2, v6, v7);
  CTouchProcessor::SetDelegateAction(this, a2);
  CInpLockGuard::UnLock(this + 9);
}
