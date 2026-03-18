/*
 * XREFs of ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C011C450
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00076C0 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C011C164 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0125400 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 */

void __fastcall CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(PERESOURCE *this, __int64 a2)
{
  char *v2; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax

  v2 = (char *)(this + 28);
  CInpLockGuard::LockExclusive(this + 28);
  v7 = *(_QWORD *)(a2 + 40);
  if ( !v7 || (*(_DWORD *)(v7 + 464) & 4) == 0 )
    CTouchProcessor::DelegateCapturePointerImplicit((CTouchProcessor *)this, a2, v5, v6);
  if ( *(_QWORD *)(a2 + 40) )
    CTouchProcessor::SetDelegateActionInt(this);
  *((_QWORD *)v2 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v2);
}
