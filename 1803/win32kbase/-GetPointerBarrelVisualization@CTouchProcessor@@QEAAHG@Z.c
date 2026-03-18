/*
 * XREFs of ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C0113FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerBarrelVisualization(CTouchProcessor *this, unsigned __int16 a2)
{
  struct CInputPointerNode *NodeById; // rax
  unsigned int v5; // ebx
  int v6; // eax
  CInpLockGuard *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v8, (CTouchProcessor *)((char *)this + 72));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v6 = *((_DWORD *)NodeById + 82);
    if ( (v6 & 0x800) != 0 )
      v5 = (v6 & 0x400) != 0 ? 1 : -1;
    else
      v5 = 0;
  }
  else
  {
    v5 = 1;
  }
  if ( !v9 )
    CInpLockGuard::UnLock((PERESOURCE *)v8);
  return v5;
}
