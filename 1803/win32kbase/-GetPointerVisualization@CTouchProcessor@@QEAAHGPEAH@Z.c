/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C01165A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C784 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  struct CInputPointerNode *NodeById; // rax
  int v7; // eax
  unsigned int v8; // ebx
  CInpLockGuard *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v10, (CTouchProcessor *)((char *)this + 72));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_7;
  if ( a3 )
    *a3 = (*((_DWORD *)NodeById + 82) & 0x200u) >> 9;
  v7 = *((_DWORD *)NodeById + 82);
  if ( (v7 & 0x80u) != 0 || (v7 & 0x100) != 0 )
LABEL_7:
    v8 = 1;
  else
    v8 = 0;
  if ( !v11 )
    CInpLockGuard::UnLock((PERESOURCE *)v10);
  return v8;
}
