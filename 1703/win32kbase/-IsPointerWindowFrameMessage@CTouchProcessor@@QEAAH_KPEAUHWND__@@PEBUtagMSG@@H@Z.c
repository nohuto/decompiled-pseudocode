/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@PEBUtagMSG@@H@Z @ 0x1C0122CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C011E448 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0121134 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        CTouchProcessor *this,
        __int64 a2,
        HWND a3,
        const struct tagMSG *a4,
        int a5)
{
  int v9; // r10d
  struct CPointerInputFrame *FrameById; // rax
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  const struct CPointerInfoNode *v13; // rdx
  BOOL v14; // ebx
  PERESOURCE *v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]
  HWND v19; // [rsp+40h] [rbp+8h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v17,
    (CTouchProcessor *)((char *)this + 200));
  v9 = *((_DWORD *)a4 + 2);
  v14 = ((unsigned int)(v9 - 577) <= 0xB || (unsigned int)(v9 - 590) <= 9)
     && v9 != 595
     && (!a5 || (unsigned int)(v9 - 585) > 1)
     && a2
     && (FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28))) != 0LL
     && (_InterlockedIncrement((volatile signed __int32 *)FrameById + 11),
         v11 = *((_QWORD *)a4 + 3),
         *(_DWORD *)(v11 + 28) == *((_DWORD *)FrameById + 10))
     && (v12 = (CTouchProcessor *)*(unsigned int *)(v11 + 32),
         v13 = (const struct CPointerInfoNode *)(*((_QWORD *)FrameById + 12) + 608LL * (_QWORD)v12),
         (*(_DWORD *)v13 & 0x100) != 0)
     && (unsigned int)CTouchProcessor::GetPointerEventTarget(v12, v13, &v19)
     && v19 == a3;
  if ( !v18 )
  {
    v15 = (PERESOURCE *)v17;
    *(_QWORD *)(v17 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v15);
  }
  return v14;
}
