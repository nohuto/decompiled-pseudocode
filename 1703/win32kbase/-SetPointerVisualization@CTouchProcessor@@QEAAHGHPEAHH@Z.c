/*
 * XREFs of ?SetPointerVisualization@CTouchProcessor@@QEAAHGHPEAHH@Z @ 0x1C0127AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011E480 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        int a3,
        int *a4,
        int a5)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v10; // r8
  unsigned int v11; // ebx
  PERESOURCE *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v14,
    (CTouchProcessor *)((char *)this + 200));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    *((_DWORD *)NodeById + 86) ^= (*((_DWORD *)NodeById + 86) ^ (a3 << 7)) & 0x80;
    if ( a4 )
      *((_DWORD *)NodeById + 86) ^= ((unsigned __int16)*((_DWORD *)NodeById + 86) ^ (unsigned __int16)((unsigned __int16)*a4 << 8)) & 0x100;
    v11 = 1;
    *((_DWORD *)NodeById + 86) ^= (*((_DWORD *)NodeById + 86) ^ (a5 << 9)) & 0x200;
  }
  else
  {
    v11 = 0;
  }
  if ( v15 == (_DWORD)v10 )
  {
    v12 = (PERESOURCE *)v14;
    *(_QWORD *)(v14 + 32) &= v10;
    ExReleaseResourceAndLeaveCriticalRegion(*v12);
  }
  return v11;
}
