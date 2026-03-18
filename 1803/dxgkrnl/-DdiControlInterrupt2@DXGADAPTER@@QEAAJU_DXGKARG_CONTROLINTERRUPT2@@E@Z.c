/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0015ACC
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C002E6D0 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C00F460C (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C00F52DC (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FA0F4 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(DXGADAPTER *this, struct _DXGKARG_CONTROLINTERRUPT2 a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  int CurrentProcessSessionId; // ebp
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int8 CurrentIrql; // r12
  __int64 v18; // rsi
  struct _KTHREAD *v19; // rsi
  __int64 v20; // rax
  int v21; // r14d
  __int64 v22; // rax
  int v23; // r15d
  __int64 v24; // rax
  unsigned int *v25; // r14
  int v26; // eax
  struct DXGPROCESS *Current; // rax
  __int64 v28; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rcx
  _QWORD *v34; // rax
  unsigned __int8 v35; // cl
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // r8
  __int64 InterruptType; // rcx
  signed __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  int v47; // eax
  DXGK_INTERRUPT_STATE InterruptState; // [rsp+34h] [rbp-94h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-88h] BYREF
  char v51; // [rsp+58h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  v3 = 0LL;
  InterruptState = a2.InterruptState;
  v4 = a3;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(this, &EventProfilerEnter, a3, 5054LL);
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v8 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v8 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v8);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v10)
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v3 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v3 = 0LL;
    }
    if ( v3 )
    {
      v12 = *(_DWORD *)(v3 + 140);
      if ( !v12 )
        *(_DWORD *)(v3 + 144) = 5054;
      *(_DWORD *)(v3 + 140) = v12 + 1;
    }
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v4 )
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 3752));
  v13 = *((_QWORD *)this + 308);
  if ( !v13
    || !*(_QWORD *)(v13 + 528)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v13 + 520) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 309) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)this + 208)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread, v16, 73LL);
      KeWaitForSingleObject((char *)this + 208, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 29), 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 1042);
  CurrentIrql = KeGetCurrentIrql();
  v18 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_41;
  v19 = KeGetCurrentThread();
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v20 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = PsGetCurrentProcessSessionId(v14);
  if ( v21 && (unsigned int)PsGetThreadSessionId(v19) == v21 )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached(v14) || (v22 = PsGetThreadWin32Thread(v19)) == 0 || !*(_QWORD *)v22 )
    {
      v18 = 0LL;
LABEL_41:
      v23 = 0;
      goto LABEL_42;
    }
    v18 = *(_QWORD *)(*(_QWORD *)v22 + 80LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 )
    goto LABEL_41;
  v23 = *(_DWORD *)(v18 + 136);
LABEL_42:
  v51 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v24 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v24 + 24) = 1970LL;
      WdLogEvent5_WdAssertion(v24);
    }
    v25 = (unsigned int *)DXGGLOBAL::m_pGlobal;
    if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 297) )
    {
      v26 = *((_DWORD *)this + 75);
      if ( (v26 & 0x20) == 0 && (v26 & 4) == 0 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( Current )
        {
          if ( !*((_BYTE *)Current + 320) && !*((_BYTE *)Current + 321) )
          {
            v28 = v25[297];
            if ( (_DWORD)v28 == 2 || (_DWORD)v28 == 1 && *((_BYTE *)Current + 433) )
            {
              Global = DXGGLOBAL::GetGlobal(v28);
              SessionData = DXGGLOBAL::GetSessionData(Global);
              if ( SessionData )
              {
                v31 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2332);
                if ( v31 )
                {
                  KeStackAttachProcess(v31, &ApcState);
                  v51 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v32 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 96))(*((_QWORD *)this + 30), a2);
  if ( v51 )
    KeUnstackDetachProcess(&ApcState);
  v33 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v33 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33);
    v34[3] = 275LL;
    v34[4] = 16LL;
    v34[5] = this;
    v34[6] = CurrentIrql;
    v35 = KeGetCurrentIrql();
    v34[7] = v35;
    WdLogEvent5_WdCriticalError(v34);
  }
  if ( v18 && *(_DWORD *)(v18 + 136) != v23 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33);
    v36[3] = 275LL;
    v36[4] = 38LL;
    v37 = *(int *)(v18 + 136);
    v36[7] = 0LL;
    v36[5] = v37;
    v36[6] = v23;
    WdLogEvent5_WdCriticalError(v36);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1042);
  if ( (unsigned int)(v32 + 0x3FFFFFFF) > 1 && (_DWORD)v32 )
  {
    v38 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v38 + 24) = v32;
    WdLogEvent5_WdError(v38);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v32 >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 472, &LockHandle);
      *((_DWORD *)this + 896) = InterruptState;
      if ( InterruptState == DXGK_INTERRUPT_DISABLE )
        *((_QWORD *)this + 474) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( InterruptState != 2 )
      {
        LOBYTE(v39) = InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v39);
      }
    }
    *((_QWORD *)this + 470) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3752, 0LL);
    KeLeaveCriticalRegion();
  }
  v40 = (_QWORD *)WdLogNewEntry5_WdTrace();
  InterruptType = a2.InterruptType;
  v40[3] = v32;
  v40[4] = a2.InterruptType;
  v40[5] = InterruptState;
  if ( (int)v32 >= 0 && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && InterruptState == DXGK_INTERRUPT_DISABLE )
  {
    v43 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)this + 475,
            *((_QWORD *)this + 475),
            *((_QWORD *)this + 475));
    if ( v43 )
      v44 = -6 * v43;
    else
      v44 = -1000002LL;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    KeSetTimer((PKTIMER)((char *)this + 3592), (LARGE_INTEGER)v44, (PKDPC)((char *)this + 3656));
  }
  if ( v3 )
  {
    v45 = *(_DWORD *)(v3 + 140);
    if ( !v45 )
    {
      v46 = WdLogNewEntry5_WdAssertion(InterruptType);
      *(_QWORD *)(v46 + 24) = 229LL;
      WdLogEvent5_WdAssertion(v46);
      v45 = *(_DWORD *)(v3 + 140);
    }
    v47 = v45 - 1;
    *(_DWORD *)(v3 + 140) = v47;
    if ( !v47 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(InterruptType, &EventProfilerExit, v41, 5054LL);
  return (unsigned int)v32;
}
