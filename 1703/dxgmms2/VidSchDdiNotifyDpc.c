/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1C0005B10
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00072F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000DF80 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000E3A0 (VidSchiProcessDpcSystemRequest.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001EF5C (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002694C (VidSchiProcessPeriodicNotificationCookie.c)
 */

void __fastcall VidSchDdiNotifyDpc(__int64 a1)
{
  __int64 v2; // rcx
  __int64 DxgAdapter; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  union _SLIST_HEADER *v6; // rsi
  PSLIST_ENTRY v7; // rax
  _QWORD *v8; // rbx
  _QWORD *p_Next; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ecx
  struct _SLIST_ENTRY *v12; // r14
  signed __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r14
  KSPIN_LOCK *v17; // r13
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rdi
  _QWORD *v21; // rax
  __int64 v22; // rax
  void (__fastcall *v23)(KSPIN_LOCK); // rax
  void (__fastcall *v24)(KSPIN_LOCK); // rax
  struct _KLOCK_QUEUE_HANDLE v25; // [rsp+20h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+38h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF

  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v4 = DxgAdapter;
    v2 = DxgAdapter ? *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2288) + 416LL) : 0LL;
    if ( v2 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 1904), &LockHandle);
      v5 = *(_QWORD *)(v4 + 2288);
      v6 = *(union _SLIST_HEADER **)(v5 + 416);
      v7 = ExpInterlockedFlushSList(v6 + 120);
      v8 = 0LL;
      if ( v7 )
      {
        do
        {
          p_Next = &v7->Next;
          v7 = v7->Next;
          *p_Next = v8;
          v8 = p_Next;
        }
        while ( v7 );
        v10 = 1160LL;
        do
        {
          v11 = *((_DWORD *)v8 - 4);
          v12 = (struct _SLIST_ENTRY *)(v8 - 2);
          v8 = (_QWORD *)*v8;
          if ( ((v11 - 1) & 0xFFFFFFF6) != 0 )
          {
            if ( v11 > 0xA )
              goto LABEL_45;
          }
          else if ( v11 != 10 )
          {
            v13 = (signed __int64)&v12[-1];
            _InterlockedExchange((volatile __int32 *)&v12[2].Next[6].Next[30], 1);
            if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
              VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(v5 + 440), 1u);
            v14 = *(_QWORD *)(v13 + 48);
            v15 = *(_QWORD *)(v14 + 96);
            v16 = *(unsigned int *)(v15 + 1408);
            v17 = *(KSPIN_LOCK **)(*(_QWORD *)(v14 + 104) + 32LL);
            v18 = v15 + 8 * v16;
            if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 1416), 0LL, v13) )
            {
              v22 = WdLogNewEntry5_WdAssertion(v18, v10);
              *(_QWORD *)(v22 + 24) = v17;
              *(_QWORD *)(v22 + 32) = v13;
              WdLogEvent5_WdAssertion(v22);
            }
            _InterlockedExchange((volatile __int32 *)(v15 + 1408), ((_BYTE)v16 + 1) & 0xF);
            *(_DWORD *)(v15 + 496) = ((unsigned __int8)*(_DWORD *)(v15 + 496) + 1) & 0xF;
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v17 + 235, &v25);
            v19 = *(_DWORD *)(v13 + 92);
            if ( (v19 & 0x400) != 0 )
            {
              *(_DWORD *)(v13 + 92) = v19 & 0xFFFFFBFF;
              if ( *(_DWORD *)(v15 + 2792) != -1 )
              {
                v23 = (void (__fastcall *)(KSPIN_LOCK))v17[360];
                if ( v23 )
                  v23(v17[364]);
              }
            }
            if ( (*(_DWORD *)(v13 + 92) & 0x800) != 0 )
            {
              if ( *(_DWORD *)(v17[*(unsigned int *)(*(_QWORD *)(v13 + 56) + 380LL) + 374] + 18896) != -1 )
              {
                v24 = (void (__fastcall *)(KSPIN_LOCK))v17[358];
                if ( v24 )
                  v24(v17[364]);
              }
              *(_DWORD *)(v13 + 92) &= ~0x800u;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v25);
            if ( *(_DWORD *)(v13 + 88) == 3 )
            {
              VidSchiProcessDpcSystemRequest(v13);
            }
            else if ( *(_DWORD *)(v13 + 72) == 10 || *(_DWORD *)(v13 + 72) == 18 )
            {
              VidSchiProcessDpcCompletedPacket((struct _VIDSCH_DMA_PACKET *)v13);
            }
            else if ( *(_DWORD *)(v13 + 72) == 11 )
            {
              VidSchiProcessDpcPreemptedPacket(v13);
            }
            v20 = (_QWORD *)(v13 + 16);
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v15 + 24) + 1888LL), &v26);
            v21 = *(_QWORD **)(v15 + 2808);
            if ( *v21 != v15 + 2800 )
              __fastfail(3u);
            *v20 = v15 + 2800;
            v20[1] = v21;
            *v21 = v20;
            *(_QWORD *)(v15 + 2808) = v20;
            KeReleaseInStackQueuedSpinLock(&v26);
            goto LABEL_22;
          }
          if ( _bittest((const int *)&v10, v11) )
          {
            VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v12[-1]);
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)(*(&v6[187].Alignment + *((unsigned int *)&v12[4].Next + 2)) + 19264),
              v12);
            goto LABEL_22;
          }
LABEL_45:
          if ( v11 != 14 )
            continue;
          VidSchiProcessPeriodicNotificationCookie(v6, &v12[-1]);
LABEL_22:
          v10 = 1160LL;
        }
        while ( v8 );
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v2, &EventProfilerExit);
}
