/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x1C000A200
 * Callers:
 *     VidSchiProcessDpcSystemRequest @ 0x1C00025C0 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0006EA0 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiSendToExecutionQueue @ 0x1C0007950 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0009D80 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000ADA0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000C470 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000CF34 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C000D324 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000D944 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C00287C4 (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C0028D08 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSelectContext @ 0x1C0029BF0 (VidSchiSelectContext.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C002C780 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     ?VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D0F8 (-VidSchiCompleteHwQueueRenderPacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D4F0 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C006EB80 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C006EEB0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0074968 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C007592C (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00B3FF0 (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C000EF38 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pq @ 0x1C0021ADC (McTemplateK0pq.c)
 *     McTemplateK0pqq @ 0x1C0021B54 (McTemplateK0pqq.c)
 *     McTemplateK0ppqqxx @ 0x1C0026228 (McTemplateK0ppqqxx.c)
 *     McTemplateK0ppqxqpq @ 0x1C00262E8 (McTemplateK0ppqxqpq.c)
 *     McTemplateK0pqqPR2 @ 0x1C00265B8 (McTemplateK0pqqPR2.c)
 *     McTemplateK0pqqpx @ 0x1C0026834 (McTemplateK0pqqpx.c)
 *     McTemplateK0pqqqPR3XR3 @ 0x1C00269D4 (McTemplateK0pqqqPR3XR3.c)
 *     McTemplateK0pqqtt @ 0x1C0026CB4 (McTemplateK0pqqtt.c)
 *     McTemplateK0pqqxqqtp @ 0x1C0026FCC (McTemplateK0pqqxqqtp.c)
 *     McTemplateK0pqxqqqxqp @ 0x1C002723C (McTemplateK0pqxqqqxqp.c)
 *     McTemplateK0pqxqt @ 0x1C002732C (McTemplateK0pqxqt.c)
 *     McTemplateK0qtpiixi @ 0x1C002784C (McTemplateK0qtpiixi.c)
 */

void __fastcall VidSchiProfilePerformanceTick(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // r10d
  __int64 v9; // r12
  int v10; // ebx
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // edx
  char v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // r8d
  unsigned __int64 v25; // r12
  struct _KLOCK_QUEUE_HANDLE *PoolWithTag; // rcx
  __int64 v27; // r13
  unsigned __int64 v28; // r12
  _BYTE *v29; // r9
  __int64 v30; // r10
  unsigned int v31; // edx
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // r14
  __int64 v42; // r12
  __int64 v43; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  int v45; // r8d
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // r14
  int v50; // edx
  __int64 v51; // r8
  int v52; // ecx
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rax
  int v62; // edx
  int v63; // r8d
  __int64 v64; // rcx
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // rdx
  _BYTE *v69; // rax
  __int64 v70; // r9
  __int64 v71; // r10
  __int64 v72; // rdx
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-41h] BYREF
  int v80; // [rsp+98h] [rbp-29h]
  _BYTE *v81; // [rsp+A0h] [rbp-21h]
  _BYTE P[16]; // [rsp+A8h] [rbp-19h] BYREF
  int v83; // [rsp+B8h] [rbp-9h]

  v8 = a8;
  v9 = a3;
  v10 = a1;
  v12 = a7;
  if ( !bTracingEnabled )
    goto LABEL_16;
  switch ( (_DWORD)a1 )
  {
    case 2:
      if ( a5 )
      {
        v14 = *(_QWORD *)(a5 + 96);
        v15 = *(_QWORD *)(a5 + 56);
        v16 = *(_DWORD *)(v14 + 1704);
        v17 = *(unsigned __int16 *)(v14 + 4);
        if ( !v15 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
          LODWORD(v15) = a5;
      }
      else
      {
        LOBYTE(v16) = 0;
        v17 = 0;
        LODWORD(v15) = 0;
      }
      if ( (char)Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        McTemplateK0ppqqxx(
          v15,
          v17,
          a3,
          *(_QWORD *)(a2 + 16),
          v15,
          v17,
          v16,
          *(_QWORD *)(a2 + 400),
          *(_QWORD *)(a2 + 408));
        v12 = a7;
        goto LABEL_66;
      }
      break;
    case 9:
LABEL_23:
      if ( a7 )
      {
        v53 = *(_QWORD *)(a7 + 48);
        v54 = *(_QWORD *)(v53 + 56);
        if ( !v54 || (*(_DWORD *)(v53 + 112) & 0x40) != 0 )
          v54 = *(_QWORD *)(a7 + 48);
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqxqt(
            v53,
            a2,
            a3,
            v54,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            v10 == 11);
          v12 = a7;
          goto LABEL_66;
        }
        break;
      }
      if ( !a6 )
        break;
      if ( (_DWORD)a1 == 9 )
      {
        if ( *(_DWORD *)(a6 + 48) == 4 )
        {
          v66 = *(_QWORD *)(a6 + 88);
          v67 = *(_QWORD *)(v66 + 56);
          if ( !v67 || (*(_DWORD *)(v66 + 112) & 0x40) != 0 )
            v67 = *(_QWORD *)(a6 + 88);
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pqqtt(v66, a2, a3, v67, 4, *(_DWORD *)(a6 + 112), (*(_DWORD *)(a6 + 288) & 2) != 0);
            v8 = a8;
            v12 = a7;
          }
          break;
        }
      }
      else if ( (_DWORD)a1 == 11 )
      {
        v18 = 1;
        goto LABEL_28;
      }
      v18 = 0;
LABEL_28:
      v19 = *(_QWORD *)(a6 + 88);
      v20 = *(_QWORD *)(v19 + 56);
      if ( !v20 || (*(_DWORD *)(v19 + 112) & 0x40) != 0 )
        v20 = *(_QWORD *)(a6 + 88);
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0pqqtt(v19, a2, a3, v20, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 112), v18);
        v12 = a7;
        goto LABEL_66;
      }
      break;
    case 0x14:
      if ( (*(_DWORD *)(a2 + 2168) & 4) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(a5 + 396)] )
      {
        v74 = *(_QWORD *)(a5 + 432);
        if ( v74 <= 0 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v75 = *(_QWORD *)(a5 + 56);
          if ( !v75 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
            LODWORD(v75) = a5;
          McTemplateK0qtpiixi(
            v75,
            v74,
            a3,
            *(unsigned __int16 *)(a3 + 4),
            a8 != 0,
            v75,
            *(_QWORD *)(a5 + 456),
            v74,
            *(_QWORD *)(a5 + 448),
            *(_QWORD *)(a5 + 440));
          v12 = a7;
          goto LABEL_66;
        }
      }
      break;
    case 5:
      v22 = *(_QWORD *)(a6 + 88);
      v23 = *(_QWORD *)(v22 + 56);
      if ( !v23 || (*(_DWORD *)(v22 + 112) & 0x40) != 0 )
        v23 = *(_QWORD *)(a6 + 88);
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0pqq(v22, (unsigned int)&EventQueueSelect, a3, v23, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 112));
        v8 = a8;
        v12 = a7;
      }
      break;
    case 4:
      v24 = *(_DWORD *)(a6 + 48);
      if ( v24 == 5 )
      {
        v25 = *(unsigned int *)(a6 + 292);
        v80 = 0;
        PoolWithTag = 0LL;
        LockHandle.LockQueue.Next = 0LL;
        if ( (unsigned int)v25 > 2 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 8 )
          {
            v27 = 0LL;
            goto LABEL_46;
          }
          PoolWithTag = (struct _KLOCK_QUEUE_HANDLE *)ExAllocatePoolWithTag(PagedPool, 8 * v25, 0x4B677844u);
          LockHandle.LockQueue.Next = &PoolWithTag->LockQueue;
        }
        else
        {
          PoolWithTag = (struct _KLOCK_QUEUE_HANDLE *)&LockHandle.LockQueue.Lock;
          LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)&LockHandle.LockQueue.Lock;
        }
        v80 = v25;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 8 * v25);
          PoolWithTag = (struct _KLOCK_QUEUE_HANDLE *)LockHandle.LockQueue.Next;
        }
        v27 = (__int64)PoolWithTag;
LABEL_46:
        v28 = *(unsigned int *)(a6 + 292);
        v29 = 0LL;
        v81 = 0LL;
        v83 = 0;
        if ( (unsigned int)v28 > 2 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / v28 < 8 )
          {
            v30 = 0LL;
LABEL_51:
            if ( v27 && v30 )
            {
              v31 = 0;
              if ( *(_DWORD *)(a6 + 292) )
              {
                do
                {
                  v32 = 8LL * v31;
                  *(_QWORD *)(v32 + v27) = *(_QWORD *)(a6 + v32 + 296);
                  v33 = *(_DWORD *)(*(_QWORD *)(a6 + v32 + 296) + 40LL);
                  if ( v33 == 4 || v33 == 2 || v33 == 5 )
                    *(_QWORD *)(v32 + v30) = *(_QWORD *)(a6 + 8LL * v31 + 552);
                  else
                    *(_QWORD *)(v32 + v30) = 0LL;
                  ++v31;
                }
                while ( v31 < *(_DWORD *)(a6 + 292) );
                PoolWithTag = (struct _KLOCK_QUEUE_HANDLE *)LockHandle.LockQueue.Next;
                v29 = v81;
              }
              v34 = *(_QWORD *)(a6 + 88);
              v35 = *(_QWORD *)(v34 + 56);
              if ( !v35 || (*(_DWORD *)(v34 + 112) & 0x40) != 0 )
                v35 = *(_QWORD *)(a6 + 88);
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                McTemplateK0pqqqPR3XR3(
                  (_DWORD)PoolWithTag,
                  v34,
                  v35,
                  v35,
                  *(_DWORD *)(a6 + 112),
                  *(_DWORD *)(a6 + 288),
                  *(_DWORD *)(a6 + 292),
                  v27,
                  v30);
                PoolWithTag = (struct _KLOCK_QUEUE_HANDLE *)LockHandle.LockQueue.Next;
                v29 = v81;
              }
            }
            if ( v29 != P && v29 )
            {
              ExFreePoolWithTag(v29, 0);
              PoolWithTag = (struct _KLOCK_QUEUE_HANDLE *)LockHandle.LockQueue.Next;
            }
            if ( PoolWithTag != (struct _KLOCK_QUEUE_HANDLE *)&LockHandle.LockQueue.Lock && PoolWithTag )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              v12 = a7;
              v8 = a8;
              v9 = a3;
              break;
            }
LABEL_64:
            v12 = a7;
LABEL_65:
            v9 = a3;
LABEL_66:
            v8 = a8;
            break;
          }
          v69 = ExAllocatePoolWithTag(PagedPool, 8 * v28, 0x4B677844u);
          PoolWithTag = (struct _KLOCK_QUEUE_HANDLE *)LockHandle.LockQueue.Next;
          v29 = v69;
          v81 = v69;
        }
        else
        {
          v29 = P;
          v81 = P;
        }
        v83 = v28;
        if ( v29 )
        {
          memset(v29, 0, 8 * v28);
          PoolWithTag = (struct _KLOCK_QUEUE_HANDLE *)LockHandle.LockQueue.Next;
          v29 = v81;
        }
        v30 = (__int64)v29;
        goto LABEL_51;
      }
      if ( v24 )
      {
        if ( v24 == 4 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 1888), &LockHandle);
          v64 = *(_QWORD *)(a6 + 88);
          v65 = *(_QWORD *)(v64 + 56);
          if ( !v65 || (*(_DWORD *)(v64 + 112) & 0x40) != 0 )
            v65 = *(_QWORD *)(a6 + 88);
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pqqpx(
              v64,
              v62,
              v63,
              v65,
              *(_DWORD *)(a6 + 112),
              *(_DWORD *)(a6 + 288),
              *(_QWORD *)(a6 + 296),
              *(_QWORD *)(a6 + 320));
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v8 = a8;
          v12 = a7;
        }
        else
        {
          v58 = *(_QWORD *)(a6 + 88);
          v59 = *(_QWORD *)(v58 + 56);
          if ( !v59 || (*(_DWORD *)(v58 + 112) & 0x40) != 0 )
            v59 = *(_QWORD *)(a6 + 88);
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pqqxqqtp(
              (*(_DWORD *)(a6 + 72) >> 14) & 1,
              a2,
              v24,
              v59,
              v24,
              *(_DWORD *)(a6 + 112),
              0,
              0,
              0,
              (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
              *(_QWORD *)(a6 + 296));
            v12 = a7;
            goto LABEL_66;
          }
        }
      }
      else
      {
        v37 = *(_QWORD *)(a6 + 88);
        v38 = *(_QWORD *)(v37 + 56);
        if ( !v38 || (*(_DWORD *)(v37 + 112) & 0x40) != 0 )
          v38 = *(_QWORD *)(a6 + 88);
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqqxqqtp(
            (*(_DWORD *)(a6 + 72) >> 14) & 1,
            *(_DWORD *)(a6 + 340),
            0,
            v38,
            0,
            *(_DWORD *)(a6 + 112),
            *(_DWORD *)(a6 + 340),
            *(_DWORD *)(a6 + 348),
            *(_DWORD *)(a6 + 356),
            (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
            *(_QWORD *)(a6 + 296));
          v8 = a8;
          v12 = a7;
        }
        v39 = *(_DWORD *)(a6 + 480);
        if ( v39 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          v72 = *(_QWORD *)(a6 + 88);
          v73 = *(_QWORD *)(v72 + 56);
          if ( !v73 || (*(_DWORD *)(v72 + 112) & 0x40) != 0 )
            v73 = *(_QWORD *)(a6 + 88);
          McTemplateK0pqqPR2(v39, v72, v24, v73, *(_DWORD *)(a6 + 112), v39, a6 + 488);
          v8 = a8;
          v12 = a7;
        }
      }
      break;
    default:
      switch ( (int)a1 )
      {
        case 1:
          v13 = *(_QWORD *)(a5 + 56);
          if ( !v13 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
            v13 = a5;
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(a1, &EventAttemptPreemption, a3, v13, a8);
            v8 = a8;
            v12 = a7;
          }
          goto LABEL_16;
        case 7:
          LOBYTE(v41) = 0;
          v42 = 0LL;
          if ( *(_DWORD *)(a7 + 88) == 1 )
          {
            v61 = *(_QWORD *)(a7 + 56);
            if ( v61 )
            {
              if ( *(_DWORD *)(v61 + 48) == 8 )
                v42 = *(_QWORD *)(v61 + 88);
            }
          }
          v43 = *(_QWORD *)(a7 + 48);
          if ( *(_DWORD *)(v43 + 960) >= 0x80u )
            VidSchiFlushGpuWorkEntries(*(struct _VIDSCH_CONTEXT **)(a7 + 48));
          if ( !*(_QWORD *)(v43 + 968) )
            *(_QWORD *)(v43 + 968) = operator new[](0x400uLL, 0x68536956u, (POOL_TYPE)512);
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v46 = *(unsigned int *)(v43 + 960);
          *(LARGE_INTEGER *)(*(_QWORD *)(v43 + 968) + 8 * v46) = PerformanceCounter;
          ++*(_DWORD *)(v43 + 960);
          if ( v42 )
          {
            v41 = *(_QWORD *)(v42 + 56);
            if ( !v41 || (*(_DWORD *)(v42 + 112) & 0x40) != 0 )
              LOBYTE(v41) = v42;
          }
          v12 = a7;
          v47 = *(_QWORD *)(a7 + 48);
          v48 = *(_QWORD *)(v47 + 56);
          if ( !v48 || (*(_DWORD *)(v47 + 112) & 0x40) != 0 )
            v48 = *(_QWORD *)(a7 + 48);
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_65;
          McTemplateK0ppqxqpq(
            v47,
            v46,
            v45,
            v48,
            v41,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            *(_QWORD *)(a7 + 64),
            *(_DWORD *)(v47 + 428));
          goto LABEL_64;
        case 8:
        case 10:
        case 12:
          LOBYTE(v49) = 0;
          v50 = 0;
          LODWORD(v51) = 0;
          switch ( (_DWORD)a1 )
          {
            case 8:
              v52 = 1;
              break;
            case 0xA:
              v52 = 2;
              break;
            case 0xC:
              v49 = *(_QWORD *)(a8 + 40);
              v52 = 9;
              v50 = *(_DWORD *)(a8 + 32);
              v51 = *(_QWORD *)(a8 + 64);
              break;
            default:
              v52 = a7;
              break;
          }
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_16;
          v70 = *(_QWORD *)(a7 + 48);
          v71 = *(_QWORD *)(v70 + 56);
          if ( !v71 || (*(_DWORD *)(v70 + 112) & 0x40) != 0 )
            v71 = *(_QWORD *)(a7 + 48);
          McTemplateK0pqxqqqxqp(
            v52,
            v50,
            v51,
            v71,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            v52,
            *(_DWORD *)(v70 + 428),
            v49,
            v50,
            v51);
          v12 = a7;
          break;
        case 11:
        case 13:
          goto LABEL_23;
        case 14:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(a1, &EventEnterWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
            v8 = a8;
            v12 = a7;
          }
          goto LABEL_16;
        case 15:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
            v8 = a8;
            v12 = a7;
          }
          goto LABEL_16;
        case 16:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(a1, &EventEnterWorkerThread, a3, *(_QWORD *)(a2 + 16), 3);
            v8 = a8;
            v12 = a7;
          }
          goto LABEL_16;
        case 17:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 3);
            v8 = a8;
            v12 = a7;
          }
          goto LABEL_16;
        case 18:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(2LL, &EventEnterWorkerThread, a3, *(_QWORD *)(a2 + 16), 2);
            v8 = a8;
            v12 = a7;
          }
          goto LABEL_16;
        case 19:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(2LL, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 2);
            v8 = a8;
            v12 = a7;
          }
          goto LABEL_16;
        default:
          goto LABEL_16;
      }
      goto LABEL_66;
  }
LABEL_16:
  if ( *(int *)(a2 + 6048) >= 1 )
  {
    if ( v10 == 1 )
    {
      if ( v8 < 0 )
      {
        v8 = -v8;
      }
      else if ( v8 >= 16 )
      {
        v8 = 1;
      }
      ++*(_DWORD *)(v9 + 2564);
      ++*(_DWORD *)(v9 + 4LL * v8 + 2564);
      v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a5 + 96) + 24LL) + 4LL))
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a5 + 96) + 4LL)
                      + 8);
      ++*(_DWORD *)(v40 + 12);
      ++*(_DWORD *)(v40 + 4LL * v8 + 12);
    }
    else if ( v10 == 3 )
    {
      ++*(_DWORD *)(v9 + 2560);
      v60 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a5 + 96) + 24LL) + 4LL))
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a5 + 96) + 4LL)
                      + 8);
      ++*(_DWORD *)(v60 + 8);
    }
  }
  if ( *(int *)(a2 + 6048) >= 2 )
  {
    switch ( v10 )
    {
      case 4:
        ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 2628);
        v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v36 + 8LL * *(int *)(a6 + 48) + 76);
        break;
      case 7:
        ++*(_DWORD *)(v9 + 16LL * *(int *)(v12 + 88) + 2700);
        v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v55 + 16LL * *(int *)(v12 + 88) + 148);
        break;
      case 8:
        v56 = 2 * (*(int *)(v12 + 88) + 169LL);
        ++*(_DWORD *)(v9 + 8 * v56);
        v57 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v57 + 16LL * *(int *)(v12 + 88) + 152);
        break;
      case 9:
      case 11:
      case 13:
        if ( a6 )
        {
          ++*(_DWORD *)(v9 + 8LL * *(int *)(a6 + 48) + 2632);
          v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 104LL) + 40LL) + 24LL)
                                      + 8LL
                                      * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 96LL) + 24LL)
                                                        + 4LL))
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a6 + 88) + 96LL) + 4LL)
                          + 8);
          ++*(_DWORD *)(v21 + 8LL * *(int *)(a6 + 48) + 80);
        }
        break;
      case 10:
        ++*(_DWORD *)(v9 + 16LL * *(int *)(v12 + 88) + 2708);
        v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v68 + 16LL * *(int *)(v12 + 88) + 156);
        break;
      case 12:
        ++*(_DWORD *)(v9 + 16LL * *(int *)(v12 + 88) + 2712);
        v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v12 + 48) + 96LL) + 4LL)
                        + 8);
        v77 = 2 * (*(int *)(v12 + 88) + 10LL);
        ++*(_DWORD *)(v76 + 8 * v77);
        break;
      default:
        return;
    }
  }
}
