/*
 * XREFs of ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1C0122C50
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerPrimary(CTouchProcessor *this, __int64 a2)
{
  PERESOURCE *v3; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v5, (CTouchProcessor *)((char *)this + 200));
  if ( a2 )
    LODWORD(a2) = -__CFSHR__(*(_DWORD *)(a2 + 36), 4);
  if ( !v6 )
  {
    v3 = (PERESOURCE *)v5;
    *(_QWORD *)(v5 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v3);
  }
  return (unsigned int)a2;
}
