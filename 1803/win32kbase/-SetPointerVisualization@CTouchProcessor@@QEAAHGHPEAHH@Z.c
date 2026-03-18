/*
 * XREFs of ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C011D3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0111610 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        int *a4,
        __int16 a5)
{
  struct CInputPointerNode *NodeById; // rax
  unsigned int v10; // ebx
  int v11; // esi
  CInpLockGuard *v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v13,
    (CTouchProcessor *)((char *)this + 72));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v11 = *((_DWORD *)NodeById + 82) ^ (*((_DWORD *)NodeById + 82) ^ (a3 << 7)) & 0x80;
    *((_DWORD *)NodeById + 82) = v11;
    if ( a4 )
    {
      v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*a4 << 8)) & 0x100;
      *((_DWORD *)NodeById + 82) = v11;
    }
    v10 = 1;
    *((_DWORD *)NodeById + 82) = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(a5 << 9)) & 0x200;
  }
  else
  {
    v10 = 0;
  }
  if ( !v14 )
    CInpLockGuard::UnLock((PERESOURCE *)v13);
  return v10;
}
