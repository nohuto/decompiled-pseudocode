/*
 * XREFs of ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C0120840
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C011E480 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(CTouchProcessor *this, __int64 a2, unsigned int *a3)
{
  unsigned __int16 v6; // dx
  struct CInputPointerNode *NodeById; // rax
  unsigned int v8; // ebx
  PERESOURCE *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v11, (CTouchProcessor *)((char *)this + 200));
  v6 = 0;
  if ( a2 )
    v6 = *(_WORD *)(a2 + 16);
  NodeById = CTouchProcessor::FindNodeById(this, v6, 0, 0);
  if ( NodeById )
  {
    v8 = 1;
    *a3 = *((unsigned __int16 *)NodeById + 17);
  }
  else
  {
    v8 = 0;
  }
  if ( !v12 )
  {
    v9 = (PERESOURCE *)v11;
    *(_QWORD *)(v11 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v9);
  }
  return v8;
}
