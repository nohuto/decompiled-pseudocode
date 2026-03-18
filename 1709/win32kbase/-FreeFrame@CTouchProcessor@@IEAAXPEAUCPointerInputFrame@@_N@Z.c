/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011D5EC
 * Callers:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0127C84 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012A824 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012B348 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C0005008 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     HMAssignmentUnlock @ 0x1C0017630 (HMAssignmentUnlock.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C011D8F0 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011DA38 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C011DA8C (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeFrame(CTouchProcessor *this, struct CPointerInputFrame *a2, char a3)
{
  struct CPointerInputFrame **v6; // rcx
  struct CPointerInputFrame **v7; // rdx
  int v8; // eax
  struct CPointerInfoNode *v9; // rdx
  struct CPointerQFrame *v10; // rdx
  CTouchProcessor *v11; // rcx
  PERESOURCE *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v13,
    (CTouchProcessor *)((char *)this + 224));
  if ( !a3 )
  {
    v6 = (struct CPointerInputFrame **)*((_QWORD *)a2 + 1);
    if ( v6[1] != (struct CPointerInputFrame *)((char *)a2 + 8)
      || (v7 = (struct CPointerInputFrame **)*((_QWORD *)a2 + 2), *v7 != (struct CPointerInputFrame *)((char *)a2 + 8)) )
    {
      __fastfail(3u);
    }
    *v7 = (struct CPointerInputFrame *)v6;
    v6[1] = (struct CPointerInputFrame *)v7;
  }
  v8 = *((_DWORD *)a2 + 20);
  if ( (v8 & 0x200) == 0 )
  {
    if ( (v8 & 0x100) != 0 )
      --*((_DWORD *)this + 92);
    else
      --*((_DWORD *)this + 93);
  }
  v9 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 12);
  if ( v9 )
    CTouchProcessor::FreePointerInfoList((CTouchProcessor *)v6, v9, *((_DWORD *)a2 + 12));
  v10 = (struct CPointerQFrame *)*((_QWORD *)a2 + 13);
  if ( v10 )
    CTouchProcessor::FreePointerQFrameList((CTouchProcessor *)v6, v10, *((_DWORD *)a2 + 12));
  HMAssignmentUnlock((__int64 *)a2 + 14);
  CTouchProcessor::FreePointerRawDataList(v11, *((struct CPointerRawData **)a2 + 11));
  Win32FreePool((__int64)a2);
  if ( !v14 )
  {
    v12 = (PERESOURCE *)v13;
    *(_QWORD *)(v13 + 32) = 0LL;
    ExReleaseResourceAndLeaveCriticalRegion(*v12);
  }
}
