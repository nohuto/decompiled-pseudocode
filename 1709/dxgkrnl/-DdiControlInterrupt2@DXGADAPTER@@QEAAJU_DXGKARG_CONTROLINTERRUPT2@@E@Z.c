/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0002190
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C00256B0 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0084210 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C0084E4C (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C016F9B4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(DXGADAPTER *this, struct _DXGKARG_CONTROLINTERRUPT2 a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v11; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v13; // rax
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  int v16; // r14d
  __int64 v17; // rax
  _DWORD *v18; // rsi
  int v19; // eax
  struct DXGPROCESS *Current; // rax
  int v21; // ecx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v24; // rcx
  __int64 v25; // rsi
  _QWORD *v26; // rax
  unsigned __int8 v27; // cl
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 InterruptType; // rcx
  signed __int64 v34; // rax
  LARGE_INTEGER DueTime; // [rsp+30h] [rbp-98h]
  DXGK_INTERRUPT_STATE InterruptState; // [rsp+3Ch] [rbp-8Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-80h] BYREF
  char v39; // [rsp+60h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-60h] BYREF

  InterruptState = a2.InterruptState;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(this, &EventProfilerEnter);
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !a3 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 3592, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)this + 902) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v6, &EventBlockThread);
      ExAcquirePushLockExclusiveEx((char *)this + 3592, 0LL);
    }
    *((_QWORD *)this + 450) = KeGetCurrentThread();
  }
  v7 = *((_QWORD *)this + 289);
  if ( !v7
    || !*(_QWORD *)(v7 + 512)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v7 + 504) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 290) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)this + 208)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, &EventBlockThread);
      KeWaitForSingleObject((char *)this + 208, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 29), 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 981);
  CurrentIrql = KeGetCurrentIrql();
  v11 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v13 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v13);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v11 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      if ( v11 )
      {
        v16 = *(_DWORD *)(v11 + 136);
        goto LABEL_35;
      }
    }
    else
    {
      v11 = 0LL;
    }
  }
  v16 = 0;
LABEL_35:
  v39 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v17 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v17 + 24) = 1950LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = DXGGLOBAL::m_pGlobal;
    if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 277) )
    {
      v19 = *((_DWORD *)this + 75);
      if ( (v19 & 0x20) == 0 && (v19 & 4) == 0 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( Current )
        {
          if ( !*((_BYTE *)Current + 304) && !*((_BYTE *)Current + 305) )
          {
            v21 = v18[277];
            if ( v21 == 2 || v21 == 1 && *((_BYTE *)Current + 541) )
            {
              Global = DXGGLOBAL::GetGlobal();
              SessionData = DXGGLOBAL::GetSessionData(Global);
              if ( SessionData )
              {
                v24 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2326);
                if ( v24 )
                {
                  KeStackAttachProcess(v24, &ApcState);
                  v39 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v25 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 96))(*((_QWORD *)this + 30), a2);
  if ( v39 )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v26[3] = 275LL;
    v26[4] = 16LL;
    v26[5] = this;
    v26[6] = CurrentIrql;
    v27 = KeGetCurrentIrql();
    v26[7] = v27;
    WdLogEvent5_WdCriticalError(v26);
  }
  if ( v11 && *(_DWORD *)(v11 + 136) != v16 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v28[3] = 275LL;
    v28[4] = 25LL;
    v28[5] = *(int *)(v11 + 136);
    v28[6] = v16;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 981);
  if ( (_DWORD)v25 && (unsigned int)(v25 + 0x3FFFFFFF) > 1 )
  {
    v29 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v29 + 24) = v25;
    WdLogEvent5_WdError(v29);
  }
  v30 = *((_QWORD *)this + 289);
  if ( !v30
    || !*(_QWORD *)(v30 + 512)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v30 + 504) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 290) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 29));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v25 >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 452, &LockHandle);
      *((_DWORD *)this + 856) = InterruptState;
      if ( InterruptState == DXGK_INTERRUPT_DISABLE )
        *((_QWORD *)this + 454) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( InterruptState != 2 )
      {
        LOBYTE(v31) = InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v31);
      }
    }
    *((_QWORD *)this + 450) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3592, 0LL);
    KeLeaveCriticalRegion();
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdTrace();
  InterruptType = a2.InterruptType;
  v32[3] = v25;
  v32[4] = a2.InterruptType;
  v32[5] = InterruptState;
  if ( (int)v25 >= 0 && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && InterruptState == DXGK_INTERRUPT_DISABLE )
  {
    v34 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)this + 455,
            *((_QWORD *)this + 455),
            *((_QWORD *)this + 455));
    if ( v34 )
      DueTime.QuadPart = -6 * v34;
    else
      DueTime.QuadPart = -1000002LL;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    KeSetTimer((PKTIMER)((char *)this + 3432), DueTime, (PKDPC)((char *)this + 3496));
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(InterruptType, &EventProfilerExit);
  return (unsigned int)v25;
}
