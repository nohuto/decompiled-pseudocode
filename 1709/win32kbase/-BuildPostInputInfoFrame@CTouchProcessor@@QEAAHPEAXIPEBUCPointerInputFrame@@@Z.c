/*
 * XREFs of ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011A1E4
 * Callers:
 *     BuildPostInputInfoFrame @ 0x1C0128F00 (BuildPostInputInfoFrame.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z @ 0x1C011A334 (-CalcPostInputInfoFrameSize@CTouchProcessor@@QEAAKPEBUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::BuildPostInputInfoFrame(
        CTouchProcessor *this,
        _DWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int i; // esi
  size_t v9; // rdi
  unsigned int v10; // r14d
  __int64 v11; // rbx
  PERESOURCE *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  int v15; // [rsp+28h] [rbp-20h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v14,
    (CTouchProcessor *)((char *)this + 224));
  i = 0;
  if ( a3 < CTouchProcessor::CalcPostInputInfoFrameSize(this, a4) )
    goto LABEL_14;
  v9 = 0LL;
  if ( *((_DWORD *)a4 + 12) )
  {
    switch ( *(_DWORD *)(*((_QWORD *)a4 + 12) + 248LL) )
    {
      case 1:
        v9 = 96LL;
        break;
      case 2:
LABEL_7:
        v9 = 144LL;
        break;
      case 3:
        v9 = 120LL;
        break;
      case 5:
        goto LABEL_7;
      default:
        break;
    }
  }
  *a2 = 0;
  v10 = 0;
  for ( i = 1; v10 < *((_DWORD *)a4 + 12); ++v10 )
  {
    v11 = *((_QWORD *)a4 + 12) + 608LL * v10;
    memmove(&a2[36 * *a2 + 2], (const void *)(v11 + 248), v9);
    ++*a2;
    if ( *(_DWORD *)(v11 + 392) )
      a2[1] = 1;
  }
LABEL_14:
  if ( !v15 )
  {
    v12 = (PERESOURCE *)v14;
    *(_QWORD *)(v14 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v12);
  }
  return i;
}
