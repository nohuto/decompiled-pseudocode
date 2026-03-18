/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0105A38
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C0105740 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002D40 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C007EB84 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C007EC00 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C007EDD8 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C007F348 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C007F3D4 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C007F4AC (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C007F5B0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C01A7634 (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01CE0B8 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C01CEA2C (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z @ 0x1C01D69BC (-SwapChainAbandonInternal@@YAJPEAVDXGSWAPCHAIN@@_N@Z.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  char v2; // bl
  __int64 v3; // rax
  int v4; // ebx
  NTSTATUS v5; // eax
  int v6; // edx
  struct _KEVENT *v7; // rax
  bool v8; // dl
  struct DXGSWAPCHAIN **v9; // rcx
  LONGLONG v10; // rsi
  LARGE_INTEGER v11; // rax
  __int64 v12; // r10
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  __int64 v21; // rax
  __int64 WaitMode; // [rsp+28h] [rbp-E0h]
  BOOLEAN Alertable[8]; // [rsp+30h] [rbp-D8h]
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+58h] [rbp-B0h] BYREF
  DXGPUSHLOCK *v27[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v28; // [rsp+70h] [rbp-98h]
  struct _KEVENT v29; // [rsp+78h] [rbp-90h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-78h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-60h] BYREF
  struct _KEVENT *p_Event; // [rsp+B0h] [rbp-58h]
  struct _KEVENT *v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+C8h] [rbp-40h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v29, SynchronizationEvent, 0);
  *((_QWORD *)this + 56) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)((char *)this + 328), 0, 0);
  v24 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + 102, 0) )
      BLTQUEUE::DisableHwVSyncWorker(this);
    v2 = v24;
    Object = (char *)this + 352;
    if ( (v24 & 3) != 0 )
      BLTQUEUE::StartVSync(this, 0);
    if ( (*((_DWORD *)this + 212) & 2) != 0 )
    {
      if ( !*((_BYTE *)this + 316) )
      {
        p_Event = (struct _KEVENT *)*((_QWORD *)this + 58);
        v33 = &v29;
        if ( *((_BYTE *)this + 317) )
        {
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, (struct _KTHREAD **)this + 31);
          DXGPUSHLOCK::AcquireExclusive(v27[1]);
          v28 = 2;
          v10 = 0LL;
          v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v12 = *((_QWORD *)this + 37);
          if ( v12 > 0 )
          {
            v13 = *((_QWORD *)this + 36);
            if ( v13 > 0 && v11.QuadPart > v13 )
              v10 = 10000000 * ((v11.QuadPart - v13) % v12 - v12) / PerformanceFrequency.QuadPart;
          }
          ExSetTimer(*((_QWORD *)this + 58), v10, 0LL, 0LL, WaitMode, *(_QWORD *)Alertable);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
        }
        goto LABEL_9;
      }
      p_Event = (struct _KEVENT *)*((_QWORD *)this + 27);
      v7 = (struct _KEVENT *)((char *)this + 472);
    }
    else
    {
      p_Event = &Event;
      v7 = &v29;
    }
    v33 = v7;
LABEL_9:
    v3 = v34;
    v4 = v2 & 1;
    if ( v4 )
      v3 = v25;
    v34 = v3;
    v5 = KeWaitForMultipleObjects(v4 + 3, &Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
    v24 = 0LL;
    v25 = 0LL;
    if ( v5 )
    {
      switch ( v5 )
      {
        case 1:
          if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
          {
            v20 = 1;
            goto LABEL_51;
          }
          BLTQUEUE::ProcessBltQueue((__int64)this, 1, (__int64)&v24);
          if ( !*((_DWORD *)this + 59) && (v24 & 3) == 0 && ++*((_DWORD *)this + 60) > 0xAu )
            BLTQUEUE::StopVSync(this, 0);
          break;
        case 2:
          v20 = 0;
LABEL_51:
          BLTQUEUE::ProcessVSyncTdrWorker(this, v20);
          break;
        case 3:
          v6 = 2;
LABEL_20:
          BLTQUEUE::ProcessBltQueue((__int64)this, v6, (__int64)&v24);
          break;
        case 257:
          v21 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v21 + 24) = this;
          WdLogEvent5_WdError(v21);
          break;
      }
    }
    else
    {
      *((_BYTE *)this + 688) = *((_BYTE *)this + 400);
      *((_BYTE *)this + 689) = *((_BYTE *)this + 401);
      *((_BYTE *)this + 690) = *((_BYTE *)this + 402);
      *((_BYTE *)this + 691) = *((_BYTE *)this + 403);
      *((_BYTE *)this + 692) = *((_BYTE *)this + 404);
      *((_BYTE *)this + 693) = *((_BYTE *)this + 405);
      *((_BYTE *)this + 694) = *((_BYTE *)this + 406);
      *((_BYTE *)this + 695) = *((_BYTE *)this + 407);
      *((_DWORD *)this + 174) = *((_DWORD *)this + 102);
      *((_QWORD *)this + 88) = *((_QWORD *)this + 52);
      *((_QWORD *)this + 88) = *((_QWORD *)this + 52);
      *((_DWORD *)this + 178) = *((_DWORD *)this + 106);
      *((_DWORD *)this + 180) = *((_DWORD *)this + 108);
      *((LARGE_INTEGER *)this + 85) = KeQueryPerformanceCounter(0LL);
      if ( *((_BYTE *)this + 400) )
      {
        KeAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(*((_QWORD *)this + 52) + 40LL) + 48LL));
        *((_DWORD *)this + 212) |= 1u;
        *((_BYTE *)this + 400) = 0;
LABEL_33:
        BLTQUEUE::FinishCommand(this, 0);
        goto LABEL_18;
      }
      if ( *((_BYTE *)this + 401) )
      {
        BLTQUEUE::ResetInternal(this);
        KeWaitForSingleObject((char *)this + 2568, Executive, 0, 0, 0LL);
        v9 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 320);
        if ( v9 )
        {
          v14 = SwapChainAbandonInternal(*v9, v8);
          v18 = v14;
          if ( v14 < 0 )
          {
            v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
            *(_QWORD *)(v19 + 24) = **((_QWORD **)this + 320);
            *(_QWORD *)(v19 + 32) = v18;
            WdLogEvent5_WdWarning(v19);
          }
          ObfDereferenceObject(*((PVOID *)this + 320));
          *((_QWORD *)this + 320) = 0LL;
        }
        KeReleaseMutex((PRKMUTEX)((char *)this + 2568), 0);
        *((_BYTE *)this + 401) = 0;
        goto LABEL_33;
      }
      if ( *((_BYTE *)this + 404) )
      {
        BLTQUEUE::ResetInternal(this);
        *((_BYTE *)this + 404) = 0;
        BLTQUEUE::FinishCommand(this, 0);
        PsTerminateSystemThread(0);
      }
      else if ( *((_BYTE *)this + 402) )
      {
        BLTQUEUE::UpdateDisplayModeInfoWorker(this);
      }
      else if ( *((_BYTE *)this + 403) )
      {
        ++*((_DWORD *)this + 59);
        *((_DWORD *)this + 60) = 0;
        BLTQUEUE::StartVSync(this, 0);
        *((_BYTE *)this + 403) = 0;
      }
LABEL_18:
      if ( !*((_BYTE *)this + 407) )
      {
        v6 = 0;
        goto LABEL_20;
      }
      BLTQUEUE::DiscardPendingPresent(this);
      *((_QWORD *)this + 40) = 0LL;
      *((_BYTE *)this + 407) = 0;
      BLTQUEUE::FinishCommand(this, 0);
    }
  }
}
