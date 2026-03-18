/*
 * XREFs of ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C0124D60
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0119394 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A150 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionPromotePointer @ 0x1C013B504 (ApiSetEditionPromotePointer.c)
 */

__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, __int64 a2, unsigned int a3)
{
  struct _ERESOURCE **v3; // rbx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  PERESOURCE *v9; // rcx
  unsigned __int16 v11; // si
  unsigned int v12; // edi
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]

  v3 = (struct _ERESOURCE **)((char *)this + 224);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v14, (CTouchProcessor *)((char *)this + 224));
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
  v11 = *(_WORD *)(a2 + 16);
  v12 = *(_DWORD *)(a2 + 28);
  v13 = *v3;
  v3[4] = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v13);
  v8 = ApiSetEditionPromotePointer(v11, v12, a3);
  CInpLockGuard::LockShared((CInpLockGuard *)v3);
LABEL_10:
  if ( !v15 )
  {
    v9 = (PERESOURCE *)v14;
    *(_QWORD *)(v14 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v9);
  }
  return v8;
}
