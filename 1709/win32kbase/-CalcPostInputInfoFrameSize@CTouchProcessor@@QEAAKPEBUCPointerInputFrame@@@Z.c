/*
 * XREFs of ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C011A334
 * Callers:
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011A1E4 (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     CalcPostInputInfoFrameSize @ 0x1C0128F20 (CalcPostInputInfoFrameSize.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::CalcPostInputInfoFrameSize(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  int v3; // eax
  unsigned __int64 v4; // rax
  int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  PERESOURCE *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v10,
    (CTouchProcessor *)((char *)this + 224));
  v3 = *((_DWORD *)a2 + 12);
  if ( v3
    && (v4 = 144LL * (unsigned int)(v3 - 1), v4 <= 0xFFFFFFFF)
    && (v5 = v4, v6 = v4 + 152, (unsigned int)(v5 + 152) >= 0x98) )
  {
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  if ( !v11 )
  {
    v8 = (PERESOURCE *)v10;
    *(_QWORD *)(v10 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v8);
  }
  return v7;
}
