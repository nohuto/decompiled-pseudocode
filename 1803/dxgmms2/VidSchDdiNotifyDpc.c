/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1C000F330
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000EA40 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EE80 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000F6B0 (VidSchiProcessDpcVSyncCookie.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C0023844 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002B90C (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C002FB74 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C00332B0 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0033444 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 */

__int64 __fastcall VidSchDdiNotifyDpc(__int64 a1)
{
  __int64 DxgAdapter; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbp
  union _SLIST_HEADER *v6; // rsi
  PSLIST_ENTRY v7; // rax
  _QWORD *v8; // rbx
  _QWORD *p_Next; // rcx
  _QWORD *v10; // r12
  int v11; // edx
  unsigned int v12; // ecx
  struct _SLIST_ENTRY *v13; // r14
  signed __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rcx
  int v19; // ecx
  struct _SLIST_ENTRY **v20; // rax
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  void (__fastcall *v24)(KSPIN_LOCK); // rax
  void (__fastcall *v25)(KSPIN_LOCK); // rax
  struct _SLIST_ENTRY *Next; // rdi
  int v27; // [rsp+20h] [rbp-88h] BYREF
  __int64 v28; // [rsp+28h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF
  KSPIN_LOCK *v32; // [rsp+B8h] [rbp+10h]

  v27 = 5043;
  v28 = 0LL;
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter);
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[72])(&v27, 5043LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v3 = DxgAdapter;
    v4 = DxgAdapter ? *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2464) + 528LL) : 0LL;
    if ( v4 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1928), &LockHandle);
      v5 = *(_QWORD *)(v3 + 2464);
      v6 = *(union _SLIST_HEADER **)(v5 + 528);
      v7 = ExpInterlockedFlushSList(v6 + 122);
      v8 = 0LL;
      if ( v7 )
      {
        do
        {
          p_Next = &v7->Next;
          v10 = v8;
          v7 = v7->Next;
          *p_Next = v8;
          v8 = p_Next;
        }
        while ( v7 );
        v11 = 1160;
        while ( 1 )
        {
          v12 = *((_DWORD *)v8 - 4);
          v13 = (struct _SLIST_ENTRY *)(v8 - 2);
          v8 = v10;
          if ( ((v12 - 1) & 0xFFFFFFF6) == 0 && v12 != 10 )
          {
            v14 = (signed __int64)&v13[-1];
            _InterlockedExchange((volatile __int32 *)&v13[2].Next[6].Next[30], 1);
            if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
              VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(v5 + 552), 1u);
            v15 = *(_QWORD *)(v14 + 48);
            v16 = *(_QWORD *)(v15 + 96);
            v17 = *(unsigned int *)(v16 + 1408);
            v32 = *(KSPIN_LOCK **)(*(_QWORD *)(v15 + 104) + 32LL);
            v18 = v16 + 8 * v17;
            if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 1416), 0LL, v14) )
            {
              v23 = WdLogNewEntry5_WdAssertion(v18, 0LL);
              *(_QWORD *)(v23 + 24) = v32;
              *(_QWORD *)(v23 + 32) = v14;
              WdLogEvent5_WdAssertion(v23);
            }
            _InterlockedExchange((volatile __int32 *)(v16 + 1408), ((_BYTE)v17 + 1) & 0xF);
            *(_DWORD *)(v16 + 496) = ((unsigned __int8)*(_DWORD *)(v16 + 496) + 1) & 0xF;
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v32 + 238, &v29);
            v19 = *(_DWORD *)(v14 + 92);
            if ( (v19 & 0x400) != 0 )
            {
              v19 &= ~0x400u;
              *(_DWORD *)(v14 + 92) = v19;
              if ( *(_DWORD *)(v16 + 6256) != -1 )
              {
                v24 = (void (__fastcall *)(KSPIN_LOCK))v32[365];
                if ( v24 )
                {
                  v24(v32[369]);
                  v19 = *(_DWORD *)(v14 + 92);
                }
              }
            }
            if ( (v19 & 0x800) != 0 )
            {
              if ( *(_DWORD *)(v32[*(unsigned int *)(*(_QWORD *)(v14 + 56) + 388LL) + 379] + 28128) != -1 )
              {
                v25 = (void (__fastcall *)(KSPIN_LOCK))v32[363];
                if ( v25 )
                {
                  v25(v32[369]);
                  v19 = *(_DWORD *)(v14 + 92);
                }
              }
              *(_DWORD *)(v14 + 92) = v19 & 0xFFFFF7FF;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v29);
            if ( *(_DWORD *)(v14 + 88) == 3 )
            {
              VidSchiProcessDpcSystemRequest((__int64)&v13[-1]);
            }
            else if ( *(_DWORD *)(v14 + 72) == 10 || *(_DWORD *)(v14 + 72) == 18 )
            {
              VidSchiProcessDpcCompletedPacket((struct _VIDSCH_DMA_PACKET *)&v13[-1]);
            }
            else if ( *(_DWORD *)(v14 + 72) == 11 )
            {
              VidSchiProcessDpcPreemptedPacket((__int64)&v13[-1]);
            }
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v16 + 24) + 1912LL), &v30);
            v20 = *(struct _SLIST_ENTRY ***)(v16 + 6272);
            if ( *v20 != (struct _SLIST_ENTRY *)(v16 + 6264) )
              __fastfail(3u);
            v13->Next = (struct _SLIST_ENTRY *)(v16 + 6264);
            *((_QWORD *)&v13->Next + 1) = v20;
            *v20 = v13;
            *(_QWORD *)(v16 + 6272) = v13;
            KeReleaseInStackQueuedSpinLock(&v30);
            goto LABEL_22;
          }
          if ( v12 == 11 )
            break;
          if ( v12 == 15 )
          {
            Next = v13[2].Next;
            ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[371], v13);
            if ( bTracingEnabled )
              VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)Next);
            goto LABEL_22;
          }
          if ( v12 == 16 )
          {
            VidSchiProcessGpuEngineTimeoutDpc(v13);
            goto LABEL_22;
          }
          if ( v12 <= 0xA && _bittest(&v11, v12) )
          {
            VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v13[-1]);
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)(*(&v6[189].Region + *((unsigned int *)&v13[4].Next + 2)) + 28496),
              v13);
LABEL_22:
            v11 = 1160;
            goto LABEL_23;
          }
          if ( v12 == 14 )
          {
            VidSchiProcessPeriodicNotificationCookie(v6, &v13[-1]);
            goto LABEL_22;
          }
LABEL_23:
          if ( !v10 )
            goto LABEL_24;
          v10 = (_QWORD *)*v10;
        }
        VidSchiProcessMonitoredFenceSignaledDpc(v13);
        goto LABEL_22;
      }
LABEL_24:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[73])(&v27);
  if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    return McTemplateK0q(v22, &EventProfilerExit);
  return result;
}
