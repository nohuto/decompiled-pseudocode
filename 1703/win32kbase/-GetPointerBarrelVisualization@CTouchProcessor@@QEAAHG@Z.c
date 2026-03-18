/*
 * XREFs of ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C0120640
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011E480 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerBarrelVisualization(CTouchProcessor *this, unsigned __int16 a2)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v7; // eax
  PERESOURCE *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v10, (CTouchProcessor *)((char *)this + 200));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById )
  {
    v7 = *((_DWORD *)NodeById + 86);
    if ( (v7 & 0x800) != 0 )
      v6 = (v7 & 0x400) != 0 ? 1 : -1;
    else
      v6 = 0;
  }
  else
  {
    v6 = 1;
  }
  if ( v11 == (_DWORD)v5 )
  {
    v8 = (PERESOURCE *)v10;
    *(_QWORD *)(v10 + 32) &= v5;
    ExReleaseResourceAndLeaveCriticalRegion(*v8);
  }
  return v6;
}
