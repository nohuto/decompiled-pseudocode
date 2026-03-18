/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C0122BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C011A5C4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(CTouchProcessor *this, __int64 a2, int *a3)
{
  __int64 v6; // r9
  struct CPointerInputFrame *FrameById; // rax
  _DWORD *v8; // rdx
  unsigned int v9; // ebx
  PERESOURCE *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v12, (CTouchProcessor *)((char *)this + 200));
  v6 = 0LL;
  *a3 = 0;
  if ( a2 && (FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28))) != 0LL )
  {
    v8 = (_DWORD *)(*((_QWORD *)FrameById + 12) + 608LL * *(unsigned int *)(a2 + 32));
    if ( (v8[1] & 0x80u) != 0 )
      *a3 = 1;
    v9 = -__CFSHR__(*v8, 11);
  }
  else
  {
    v9 = v6;
  }
  if ( v13 == (_DWORD)v6 )
  {
    v10 = (PERESOURCE *)v12;
    *(_QWORD *)(v12 + 32) = v6;
    ExReleaseResourceAndLeaveCriticalRegion(*v10);
  }
  return v9;
}
