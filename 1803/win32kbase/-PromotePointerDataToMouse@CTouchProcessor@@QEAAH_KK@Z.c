/*
 * XREFs of ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C011A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C0124AF0 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionPromotePointer @ 0x1C013FB7C (ApiSetEditionPromotePointer.c)
 */

__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, __int64 a2, unsigned int a3)
{
  PERESOURCE *v3; // rbx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  unsigned __int16 v10; // si
  unsigned int v11; // edi
  CInpLockGuard *v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  v3 = (PERESOURCE *)((char *)this + 72);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v12, (CTouchProcessor *)((char *)this + 72));
  if ( !a2 )
    goto LABEL_9;
  if ( a3 == 0x10000000 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    if ( (v6 & 1) != 0 )
    {
      a3 = 0;
    }
    else if ( (v6 & 2) == 0 )
    {
LABEL_9:
      v8 = 0;
      goto LABEL_10;
    }
  }
  v7 = *(_DWORD *)(a2 + 36);
  if ( (v7 & 8) == 0 )
    goto LABEL_9;
  if ( (v7 & 1) != 0 )
  {
    if ( a3 )
      goto LABEL_9;
  }
  else if ( !a3 )
  {
    goto LABEL_9;
  }
  v10 = *(_WORD *)(a2 + 16);
  v11 = *(_DWORD *)(a2 + 28);
  CInpLockGuard::UnLock(v3);
  v8 = ApiSetEditionPromotePointer(v10, v11, a3);
  CInpLockGuard::LockShared((CInpLockGuard *)v3);
LABEL_10:
  if ( !v13 )
    CInpLockGuard::UnLock((PERESOURCE *)v12);
  return v8;
}
