/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011E74C
 * Callers:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C0128448 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012B178 (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012BBF0 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0049000 (HMAssignmentUnlock.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00927C0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C011EA50 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011EB94 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C011EBE4 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 */

void __fastcall CTouchProcessor::FreeFrame(CTouchProcessor *this, struct CPointerInputFrame *a2, char a3)
{
  CTouchProcessor *v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  struct CPointerInfoNode *v9; // rdx
  struct CPointerQFrame *v10; // rdx
  CTouchProcessor *v11; // rcx
  PERESOURCE *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v13,
    (CTouchProcessor *)((char *)this + 200));
  if ( !a3 )
  {
    v7 = *((_QWORD *)a2 + 1);
    v6 = (CTouchProcessor *)*((_QWORD *)a2 + 2);
    if ( *(struct CPointerInputFrame **)(v7 + 8) != (struct CPointerInputFrame *)((char *)a2 + 8)
      || *(struct CPointerInputFrame **)v6 != (struct CPointerInputFrame *)((char *)a2 + 8) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v6 = v7;
    *(_QWORD *)(v7 + 8) = v6;
  }
  v8 = *((_DWORD *)a2 + 20);
  if ( (v8 & 0x200) == 0 )
  {
    if ( (v8 & 0x100) != 0 )
      --*((_DWORD *)this + 86);
    else
      --*((_DWORD *)this + 87);
  }
  v9 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 12);
  if ( v9 )
    CTouchProcessor::FreePointerInfoList(v6, v9, *((_DWORD *)a2 + 12));
  v10 = (struct CPointerQFrame *)*((_QWORD *)a2 + 13);
  if ( v10 )
    CTouchProcessor::FreePointerQFrameList(v6, v10, *((_DWORD *)a2 + 12));
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
