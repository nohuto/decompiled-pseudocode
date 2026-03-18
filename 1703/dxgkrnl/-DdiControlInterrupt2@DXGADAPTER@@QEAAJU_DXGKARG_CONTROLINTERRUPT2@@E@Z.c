/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0005DC0
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C00344C0 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z @ 0x1C009BFB0 (-DxgkpProcessVSyncPhaseThread@@YAXPEAX@Z.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C00D37EC (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C016BBD4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(DXGADAPTER *this, struct _DXGKARG_CONTROLINTERRUPT2 a2, __int64 a3)
{
  char v4; // si
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int8 CurrentIrql; // r15
  __int64 v16; // r14
  struct _KTHREAD *CurrentThread; // rsi
  int CurrentProcessSessionId; // ebp
  int v19; // r12d
  struct DXGGLOBAL *Global; // rsi
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 InterruptType; // rcx
  __int64 ThreadWin32Thread; // rax
  signed __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  int v34; // eax
  struct DXGPROCESS *Current; // rax
  int v36; // ecx
  DXGGLOBAL *v37; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v39; // rcx
  _QWORD *v40; // rax
  unsigned __int8 v41; // cl
  _QWORD *v42; // rax
  __int64 v43; // rax
  LARGE_INTEGER DueTime; // [rsp+30h] [rbp-A8h]
  DXGK_INTERRUPT_STATE InterruptState; // [rsp+3Ch] [rbp-9Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-90h] BYREF
  char v47; // [rsp+60h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-70h] BYREF

  v4 = a3;
  InterruptState = a2.InterruptState;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(this, &EventProfilerEnter, a3, 5054LL);
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v4 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 3576, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v32 = *((unsigned int *)this + 898);
        if ( (_DWORD)v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v6, &EventBlockThread, v7, v32);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 3576, 0LL);
    }
    *((_QWORD *)this + 448) = KeGetCurrentThread();
  }
  v8 = *((_QWORD *)this + 286);
  if ( !v8
    || !*(_QWORD *)(v8 + 416)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v8 + 408) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 287) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)this + 208)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v13, &EventBlockThread, v14, 73LL);
      KeWaitForSingleObject((char *)this + 208, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 29), 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 973);
  CurrentIrql = KeGetCurrentIrql();
  v16 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_16;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v33 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v33 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v33);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( !CurrentProcessSessionId || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
    goto LABEL_16;
  ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread || !*(_QWORD *)ThreadWin32Thread )
  {
    v16 = 0LL;
    goto LABEL_16;
  }
  v16 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  if ( !v16 )
  {
LABEL_16:
    v19 = 0;
    goto LABEL_17;
  }
  v19 = *(_DWORD *)(v16 + 136);
LABEL_17:
  v47 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( *((_DWORD *)Global + 277) )
    {
      v34 = *((_DWORD *)this + 75);
      if ( (v34 & 0x20) == 0 && (v34 & 4) == 0 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( Current )
        {
          if ( !*((_BYTE *)Current + 272) && !*((_BYTE *)Current + 273) )
          {
            v36 = *((_DWORD *)Global + 277);
            if ( v36 == 2 || v36 == 1 && *((_BYTE *)Current + 493) )
            {
              v37 = DXGGLOBAL::GetGlobal();
              SessionData = DXGGLOBAL::GetSessionData(v37);
              if ( SessionData )
              {
                v39 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2325);
                if ( v39 )
                {
                  KeStackAttachProcess(v39, &ApcState);
                  v47 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v22 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 96))(*((_QWORD *)this + 30), a2);
  if ( v47 )
    KeUnstackDetachProcess(&ApcState);
  v23 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v23 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v40[3] = 275LL;
    v40[4] = 16LL;
    v40[5] = this;
    v40[6] = CurrentIrql;
    v41 = KeGetCurrentIrql();
    v40[7] = v41;
    WdLogEvent5_WdCriticalError(v40);
  }
  if ( v16 && *(_DWORD *)(v16 + 136) != v19 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v42[3] = 275LL;
    v42[4] = 25LL;
    v42[5] = *(int *)(v16 + 136);
    v42[6] = v19;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 973);
  if ( (_DWORD)v22 && (_DWORD)v22 != -1073741823 && (_DWORD)v22 != -1073741822 )
  {
    v43 = WdLogNewEntry5_WdError(v23, v21);
    *(_QWORD *)(v43 + 24) = v22;
    WdLogEvent5_WdError(v43);
  }
  v24 = *((_QWORD *)this + 286);
  if ( !v24
    || !*(_QWORD *)(v24 + 416)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v24 + 408) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 287) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 29));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v22 >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 450, &LockHandle);
      *((_DWORD *)this + 852) = InterruptState;
      if ( InterruptState == DXGK_INTERRUPT_DISABLE )
        *((_QWORD *)this + 452) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( InterruptState != 2 )
      {
        LOBYTE(v25) = InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v25);
      }
    }
    *((_QWORD *)this + 448) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3576, 0LL);
    KeLeaveCriticalRegion();
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace();
  InterruptType = a2.InterruptType;
  v26[3] = v22;
  v26[4] = a2.InterruptType;
  v26[5] = InterruptState;
  if ( (int)v22 >= 0 && InterruptState == DXGK_INTERRUPT_DISABLE && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    v31 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)this + 453,
            *((_QWORD *)this + 453),
            *((_QWORD *)this + 453));
    if ( v31 )
      DueTime.QuadPart = -6 * v31;
    else
      DueTime.QuadPart = -1000002LL;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    KeSetTimer((PKTIMER)((char *)this + 3416), DueTime, (PKDPC)((char *)this + 3480));
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(InterruptType, &EventProfilerExit, v27, 5054LL);
  return (unsigned int)v22;
}
