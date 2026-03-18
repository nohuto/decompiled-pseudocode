/*
 * XREFs of ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C0121F00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011E480 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerVisualization(
        CTouchProcessor *this,
        unsigned __int16 a2,
        unsigned int *a3)
{
  struct CInputPointerNode *NodeById; // rax
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  PERESOURCE *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v12, (CTouchProcessor *)((char *)this + 200));
  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( !NodeById )
    goto LABEL_7;
  if ( a3 )
    *a3 = (*((_DWORD *)NodeById + 86) & 0x200u) >> 9;
  v8 = *((_DWORD *)NodeById + 86);
  if ( (v8 & 0x80u) != 0 || (v8 & 0x100) != 0 )
LABEL_7:
    v9 = 1;
  else
    v9 = 0;
  if ( v13 == (_DWORD)v7 )
  {
    v10 = (PERESOURCE *)v12;
    *(_QWORD *)(v12 + 32) &= v7;
    ExReleaseResourceAndLeaveCriticalRegion(*v10);
  }
  return v9;
}
