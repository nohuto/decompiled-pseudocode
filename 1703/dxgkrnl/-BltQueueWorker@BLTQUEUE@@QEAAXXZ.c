/*
 * XREFs of ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011F164
 * Callers:
 *     ?BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z @ 0x1C011ED70 (-BltQueueWorkerThread@BLTQUEUE@@SAXPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00A047C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C00A05B0 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0103DA4 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0103E30 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C0103F08 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ @ 0x1C0192B28 (-TdrIsDodVSyncTimeoutForcedFlip@@YA_NXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01B4584 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C01B4664 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C01B5C90 (-ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z.c)
 *     ?ResetInternal@BLTQUEUE@@AEAAXXZ @ 0x1C01B5E50 (-ResetInternal@BLTQUEUE@@AEAAXXZ.c)
 *     ?ResetWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01B5E8C (-ResetWorker@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall __noreturn BLTQUEUE::BltQueueWorker(BLTQUEUE *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // di
  struct _KEVENT *v5; // rax
  __int64 v6; // rax
  int v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  LARGE_INTEGER v10; // rdx
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // r9
  int v13; // edx
  LONGLONG v14; // rsi
  LARGE_INTEGER v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int8 v18; // dl
  __int64 v19; // rax
  __int64 WaitMode; // [rsp+20h] [rbp-E0h]
  __int64 Alertable; // [rsp+28h] [rbp-D8h]
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v25[8]; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  struct _KEVENT v28; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  struct _KEVENT *p_Event; // [rsp+A8h] [rbp-58h]
  struct _KEVENT *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+C0h] [rbp-40h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeEvent(&v28, SynchronizationEvent, 0);
  *((_QWORD *)this + 56) = KeGetCurrentThread();
  KeSetEvent((PRKEVENT)((char *)this + 328), 0, 0);
  v22 = 0LL;
  v23 = 0LL;
  while ( 1 )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + 102, 0) )
      BLTQUEUE::DisableHwVSyncWorker(this);
    v4 = v22;
    Object = (char *)this + 352;
    if ( (v22 & 3) != 0 )
      BLTQUEUE::StartVSync(this, 0, v2, v3);
    if ( (*((_DWORD *)this + 212) & 2) != 0 )
    {
      if ( !*((_BYTE *)this + 316) )
      {
        p_Event = (struct _KEVENT *)*((_QWORD *)this + 58);
        v32 = &v28;
        if ( *((_BYTE *)this + 317) )
        {
          DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, (struct _KTHREAD **)this + 31, v2, v3);
          DXGPUSHLOCK::AcquireExclusive(v26);
          v27 = 2;
          v14 = 0LL;
          v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v16 = *((_QWORD *)this + 37);
          if ( v16 > 0 )
          {
            v17 = *((_QWORD *)this + 36);
            if ( v17 > 0 && v15.QuadPart > v17 )
              v14 = 10000000
                  * (v15.QuadPart - v16 * ((v15.QuadPart - v17) / v16 + 1) - v17)
                  / PerformanceFrequency.QuadPart;
          }
          ExSetTimer(*((_QWORD *)this + 58), v14, 0LL, 0LL, WaitMode, Alertable);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
        }
        goto LABEL_9;
      }
      p_Event = (struct _KEVENT *)*((_QWORD *)this + 27);
      v5 = (struct _KEVENT *)((char *)this + 472);
    }
    else
    {
      p_Event = &Event;
      v5 = &v28;
    }
    v32 = v5;
LABEL_9:
    v6 = v33;
    v7 = v4 & 1;
    if ( v7 )
      v6 = v23;
    v33 = v6;
    v8 = KeWaitForMultipleObjects(v7 + 3, &Object, WaitAny, Executive, 0, 1u, 0LL, &WaitBlockArray);
    v22 = 0LL;
    v23 = 0LL;
    if ( v8 )
    {
      switch ( v8 )
      {
        case 1:
          if ( g_TdrForceDodVSyncTimeout && TdrIsDodVSyncTimeoutForcedFlip() )
          {
            v18 = 1;
            goto LABEL_45;
          }
          BLTQUEUE::ProcessBltQueue((__int64)this, 1, (__int64)&v22);
          if ( !*((_DWORD *)this + 59) && (v22 & 3) == 0 && ++*((_DWORD *)this + 60) > 0xAu )
            BLTQUEUE::StopVSync(this, 0, v2, v3);
          break;
        case 2:
          v18 = 0;
LABEL_45:
          BLTQUEUE::ProcessVSyncTdrWorker(this, v18);
          break;
        case 3:
          v13 = 2;
LABEL_20:
          BLTQUEUE::ProcessBltQueue((__int64)this, v13, (__int64)&v22);
          break;
        case 257:
          v19 = WdLogNewEntry5_WdError(0LL, v9);
          *(_QWORD *)(v19 + 24) = this;
          WdLogEvent5_WdError(v19);
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
        BLTQUEUE::FinishCommand(this, 0);
      }
      else if ( *((_BYTE *)this + 401) )
      {
        BLTQUEUE::ResetWorker(this);
      }
      else if ( *((_BYTE *)this + 404) )
      {
        BLTQUEUE::ResetInternal(this);
        *((_BYTE *)this + 404) = 0;
        BLTQUEUE::FinishCommand(this, 0);
        PsTerminateSystemThread(0);
      }
      else if ( *((_BYTE *)this + 402) )
      {
        BLTQUEUE::UpdateDisplayModeInfoWorker(this, v10.QuadPart, v11.QuadPart, v12.QuadPart);
      }
      else if ( *((_BYTE *)this + 403) )
      {
        ++*((_DWORD *)this + 59);
        *((_DWORD *)this + 60) = 0;
        BLTQUEUE::StartVSync(this, 0, v11.QuadPart, v12.QuadPart);
        *((_BYTE *)this + 403) = 0;
      }
      if ( !*((_BYTE *)this + 407) )
      {
        v13 = 0;
        goto LABEL_20;
      }
      BLTQUEUE::DiscardPendingPresent(this);
      *((_QWORD *)this + 40) = 0LL;
      *((_BYTE *)this + 407) = 0;
      BLTQUEUE::FinishCommand(this, 0);
    }
  }
}
