/*
 * XREFs of ?PromotePointerDataToMouse@CTouchProcessor@@QEAAH_KK@Z @ 0x1C0125780
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXXZ @ 0x1C012A880 (-LockShared@CInpLockGuard@@QEAAXXZ.c)
 *     ApiSetEditionPromotePointer @ 0x1C013C2DC (ApiSetEditionPromotePointer.c)
 */

__int64 __fastcall CTouchProcessor::PromotePointerDataToMouse(CTouchProcessor *this, __int64 a2, unsigned int a3)
{
  struct _ERESOURCE **v3; // rbx
  int v6; // eax
  int v7; // eax
  unsigned __int16 v8; // si
  unsigned int v9; // edi
  struct _ERESOURCE *v10; // rcx
  unsigned int v11; // edi
  PERESOURCE *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]

  v3 = (struct _ERESOURCE **)((char *)this + 200);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v14, (CTouchProcessor *)((char *)this + 200));
  if ( !a2 )
    goto LABEL_12;
  if ( a3 == 0x10000000 )
  {
    v6 = *(_DWORD *)(a2 + 36);
    if ( (v6 & 1) != 0 )
    {
      a3 = 0;
    }
    else if ( (v6 & 2) == 0 )
    {
      goto LABEL_12;
    }
  }
  v7 = *(_DWORD *)(a2 + 36);
  if ( (v7 & 8) != 0 )
  {
    if ( (v7 & 1) != 0 )
    {
      if ( !a3 )
        goto LABEL_11;
    }
    else if ( a3 )
    {
LABEL_11:
      v8 = *(_WORD *)(a2 + 16);
      v9 = *(_DWORD *)(a2 + 28);
      v10 = *v3;
      v3[4] = 0LL;
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      v11 = ApiSetEditionPromotePointer(v8, v9, a3);
      CInpLockGuard::LockShared((CInpLockGuard *)v3);
      goto LABEL_13;
    }
  }
LABEL_12:
  v11 = 0;
LABEL_13:
  if ( !v15 )
  {
    v12 = (PERESOURCE *)v14;
    *(_QWORD *)(v14 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v12);
  }
  return v11;
}
