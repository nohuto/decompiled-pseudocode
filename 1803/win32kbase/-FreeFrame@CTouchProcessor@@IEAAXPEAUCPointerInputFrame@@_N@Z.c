/*
 * XREFs of ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0111BBC
 * Callers:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C011E194 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C012525C (-CleanupGestureState@CPTPProcessor@@AEAAXXZ.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0125D88 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0037430 (HMAssignmentUnlock.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C010C744 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0112154 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C011232C (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C0112380 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0117308 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreeFrame(struct _KTHREAD **this, struct CPointerInputFrame *a2, char a3)
{
  __int64 v6; // rdx
  CTouchProcessor *v7; // rcx
  __int64 v8; // rdx
  CTouchProcessor *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct CPointerInfoNode *v17; // rdx
  struct CPointerQFrame *v18; // rdx
  CInpLockGuard *v19; // [rsp+20h] [rbp-18h] BYREF
  int v20; // [rsp+28h] [rbp-10h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v19,
    (struct CInpLockGuard *)(this + 9));
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
  if ( (unsigned int)CTouchProcessor::IsFrameReferenced(v7, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  if ( !a3 )
  {
    if ( *((_DWORD *)a2 + 13) != *((_DWORD *)a2 + 12) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    v10 = (_QWORD *)((char *)a2 + 8);
    v11 = *((_QWORD *)a2 + 1);
    if ( *(struct CPointerInputFrame **)(v11 + 8) != (struct CPointerInputFrame *)((char *)a2 + 8)
      || (v12 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v12 != v10) )
    {
      __fastfail(3u);
    }
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *((_QWORD *)a2 + 2) = (char *)a2 + 8;
    *v10 = v10;
    v13 = (_QWORD *)((char *)a2 + 24);
    v8 = *((_QWORD *)a2 + 3);
    if ( *(struct CPointerInputFrame **)(v8 + 8) != (struct CPointerInputFrame *)((char *)a2 + 24)
      || (v9 = (CTouchProcessor *)*((_QWORD *)a2 + 4), *(_QWORD **)v9 != v13) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *((_QWORD *)a2 + 4) = (char *)a2 + 24;
    *v13 = v13;
  }
  v14 = *((_DWORD *)a2 + 20);
  if ( (v14 & 0x200) == 0 )
  {
    if ( (v14 & 0x100) != 0 )
    {
      v15 = *((_DWORD *)this + 52);
      if ( !v15 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
        v15 = *((_DWORD *)this + 52);
      }
      *((_DWORD *)this + 52) = v15 - 1;
    }
    else
    {
      v16 = *((_DWORD *)this + 53);
      if ( !v16 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
        v16 = *((_DWORD *)this + 53);
      }
      *((_DWORD *)this + 53) = v16 - 1;
    }
  }
  v17 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 12);
  if ( v17 )
    CTouchProcessor::FreePointerInfoList(v9, v17, *((_DWORD *)a2 + 12));
  v18 = (struct CPointerQFrame *)*((_QWORD *)a2 + 13);
  if ( v18 )
    CTouchProcessor::FreePointerQFrameList(v9, v18, *((_DWORD *)a2 + 12));
  HMAssignmentUnlock((__int64 *)a2 + 14);
  CTouchProcessor::FreePointerRawDataList((CTouchProcessor *)this, *((struct CPointerRawData **)a2 + 11));
  Win32FreePool((__int64)a2);
  if ( !v20 )
    CInpLockGuard::UnLock((PERESOURCE *)v19);
}
