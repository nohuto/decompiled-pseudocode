/*
 * XREFs of VidSchiProfilePerformanceTick @ 0x1C000A8D0
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006BD0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0006F90 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00082B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000A450 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchContextWithCheck @ 0x1C000B470 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000C980 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiProcessIsrPreemptedPacket @ 0x1C000E144 (VidSchiProcessIsrPreemptedPacket.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C000E50C (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000EA40 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C000EE80 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiProcessIsrFaultedPacket @ 0x1C002B6AC (VidSchiProcessIsrFaultedPacket.c)
 *     VidSchiReadCommandFromContextQueue @ 0x1C002BBF4 (VidSchiReadCommandFromContextQueue.c)
 *     VidSchiSelectContext @ 0x1C002CAFC (VidSchiSelectContext.c)
 *     ?VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0030AC8 (-VidSchiFreeCompletedHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0033B44 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0034008 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C0076E40 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiWaitForCompletePreemption @ 0x1C00BCA34 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C00BCAF4 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00BCBBC (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0012D4C (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pq @ 0x1C0024428 (McTemplateK0pq.c)
 *     McTemplateK0pqq @ 0x1C00244A0 (McTemplateK0pqq.c)
 *     McTemplateK0ppqqxx @ 0x1C0028E5C (McTemplateK0ppqqxx.c)
 *     McTemplateK0ppqxqpq @ 0x1C0028F1C (McTemplateK0ppqxqpq.c)
 *     McTemplateK0pqqPR2p @ 0x1C00291EC (McTemplateK0pqqPR2p.c)
 *     McTemplateK0pqqpxp @ 0x1C0029478 (McTemplateK0pqqpxp.c)
 *     McTemplateK0pqqqPR3XR3p @ 0x1C0029628 (McTemplateK0pqqqPR3XR3p.c)
 *     McTemplateK0pqqttp @ 0x1C002992C (McTemplateK0pqqttp.c)
 *     McTemplateK0pqqxqqtppx @ 0x1C0029C58 (McTemplateK0pqqxqqtppx.c)
 *     McTemplateK0pqxqqqxqp @ 0x1C0029EEC (McTemplateK0pqxqqqxqp.c)
 *     McTemplateK0pqxqt @ 0x1C0029FDC (McTemplateK0pqxqt.c)
 *     McTemplateK0qtpiixi @ 0x1C002A4FC (McTemplateK0qtpiixi.c)
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
  __int64 v8; // r15
  int v9; // ebx
  int v10; // r10d
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r14d
  int v17; // edx
  char v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  int v29; // r8d
  __int64 v30; // r15
  _BYTE *PoolWithTag; // r9
  __int64 v32; // r15
  _BYTE *v33; // rcx
  __int64 v34; // r11
  __int64 v35; // r15
  unsigned int v36; // r8d
  unsigned int v37; // edx
  int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r10
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r9
  int v51; // ecx
  __int64 v52; // r14
  __int64 v53; // r12
  __int64 v54; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  int v56; // r8d
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r9
  __int64 v60; // r14
  int v61; // edx
  __int64 v62; // r8
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r9
  __int64 v75; // rdx
  _BYTE *v76; // rax
  PVOID v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // r9
  __int64 v82; // r10
  __int64 v83; // rdx
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  _BYTE *v92; // [rsp+90h] [rbp-51h]
  _BYTE v93[16]; // [rsp+98h] [rbp-49h] BYREF
  int v94; // [rsp+A8h] [rbp-39h]
  _BYTE *v95; // [rsp+B0h] [rbp-31h]
  PVOID P; // [rsp+B8h] [rbp-29h]
  _BYTE v97[16]; // [rsp+C0h] [rbp-21h] BYREF
  int v98; // [rsp+D0h] [rbp-11h]

  v8 = a7;
  v9 = a1;
  v10 = a8;
  v12 = a3;
  if ( !bTracingEnabled )
    goto LABEL_16;
  switch ( (_DWORD)a1 )
  {
    case 2:
      if ( a5 )
      {
        v14 = *(_QWORD *)(a5 + 96);
        v15 = *(_QWORD *)(a5 + 56);
        v16 = *(_DWORD *)(v14 + 1736);
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
          *(_QWORD *)(a2 + 416),
          *(_QWORD *)(a2 + 424));
        goto LABEL_71;
      }
      break;
    case 9:
LABEL_23:
      if ( a7 )
      {
        v64 = *(_QWORD *)(a7 + 48);
        v65 = *(_QWORD *)(v64 + 56);
        if ( !v65 || (*(_DWORD *)(v64 + 112) & 0x40) != 0 )
          v65 = *(_QWORD *)(a7 + 48);
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          break;
        McTemplateK0pqxqt(v64, a2, a3, v65, *(_DWORD *)(a7 + 88), *(_QWORD *)(a7 + 104), *(_DWORD *)(a7 + 96), v9 == 11);
LABEL_71:
        v10 = a8;
        v12 = a3;
        break;
      }
      if ( !a6 )
        break;
      if ( (_DWORD)a1 == 9 )
      {
        if ( *(_DWORD *)(a6 + 48) == 4 )
        {
          v73 = *(_QWORD *)(a6 + 88);
          if ( v73 )
          {
            v74 = *(_QWORD *)(v73 + 56);
            if ( !v74 || (*(_DWORD *)(v73 + 112) & 0x40) != 0 )
              v74 = *(_QWORD *)(a6 + 88);
          }
          else
          {
            v74 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 32LL);
            if ( !v74 )
              v74 = *(_QWORD *)(a6 + 96);
          }
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pqqttp(v73, a2, a3, v74, 4, *(_DWORD *)(a6 + 112), (*(_DWORD *)(a6 + 272) & 2) != 0);
            v10 = a8;
            v12 = a3;
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
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 56);
        if ( !v20 || (*(_DWORD *)(v19 + 112) & 0x40) != 0 )
          v20 = *(_QWORD *)(a6 + 88);
      }
      else
      {
        v20 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 32LL);
        if ( !v20 )
          v20 = *(_QWORD *)(a6 + 96);
      }
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        break;
      McTemplateK0pqqttp(v19, a2, a3, v20, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 112), v18);
      goto LABEL_71;
    case 0x14:
      if ( (*(_DWORD *)(a2 + 2192) & 4) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(a5 + 404)] )
      {
        v85 = *(_QWORD *)(a5 + 440);
        if ( v85 <= 0 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v86 = *(_QWORD *)(a5 + 56);
          if ( !v86 || (*(_DWORD *)(a5 + 112) & 0x40) != 0 )
            LODWORD(v86) = a5;
          McTemplateK0qtpiixi(
            v86,
            v85,
            a3,
            *(unsigned __int16 *)(a3 + 4),
            a8 != 0,
            v86,
            *(_QWORD *)(a5 + 464),
            v85,
            *(_QWORD *)(a5 + 456),
            *(_QWORD *)(a5 + 448));
          goto LABEL_71;
        }
      }
      break;
    case 5:
      v27 = *(_QWORD *)(a6 + 88);
      v28 = *(_QWORD *)(v27 + 56);
      if ( !v28 || (*(_DWORD *)(v27 + 112) & 0x40) != 0 )
        v28 = *(_QWORD *)(a6 + 88);
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0pqq(v27, (unsigned int)&EventQueueSelect, a3, v28, *(_DWORD *)(a6 + 48), *(_DWORD *)(a6 + 112));
        v10 = a8;
        v12 = a3;
      }
      break;
    case 4:
      v29 = *(_DWORD *)(a6 + 48);
      if ( v29 == 5 )
      {
        v30 = *(unsigned int *)(a6 + 276);
        v92 = 0LL;
        PoolWithTag = 0LL;
        v94 = 0;
        if ( (unsigned int)v30 > 2 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v30 < 8 )
          {
            v95 = 0LL;
            goto LABEL_50;
          }
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v30, 0x68536956u);
          v92 = PoolWithTag;
        }
        else
        {
          PoolWithTag = v93;
          v92 = v93;
        }
        v94 = v30;
        if ( PoolWithTag && (_DWORD)v30 )
        {
          memset(PoolWithTag, 0, 8 * v30);
          PoolWithTag = v92;
        }
        v95 = PoolWithTag;
LABEL_50:
        v32 = *(unsigned int *)(a6 + 276);
        v33 = 0LL;
        P = 0LL;
        v98 = 0;
        if ( (unsigned int)v32 > 2 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v32 < 8 )
          {
            v34 = 0LL;
LABEL_56:
            v35 = (__int64)v95;
            if ( v95 && v34 )
            {
              v36 = *(_DWORD *)(a6 + 276);
              v37 = 0;
              if ( v36 )
              {
                do
                {
                  *(_QWORD *)(8LL * v37 + v35) = *(_QWORD *)(a6 + 8LL * v37 + 280);
                  v38 = *(_DWORD *)(*(_QWORD *)(a6 + 8LL * v37 + 280) + 44LL);
                  if ( v38 == 4 || v38 == 2 || v38 == 5 )
                    v39 = *(_QWORD *)(a6 + 8LL * v37 + 536);
                  else
                    v39 = 0LL;
                  *(_QWORD *)(8LL * v37++ + v34) = v39;
                  v36 = *(_DWORD *)(a6 + 276);
                }
                while ( v37 < v36 );
                PoolWithTag = v92;
                v33 = P;
              }
              v40 = *(_QWORD *)(a6 + 88);
              if ( v40 )
              {
                v41 = *(_QWORD *)(v40 + 56);
                if ( !v41 || (*(_DWORD *)(v40 + 112) & 0x40) != 0 )
                  v41 = *(_QWORD *)(a6 + 88);
              }
              else
              {
                v41 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 32LL);
                if ( !v41 )
                  v41 = *(_QWORD *)(a6 + 96);
              }
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                McTemplateK0pqqqPR3XR3p(
                  (_DWORD)v33,
                  v40,
                  v36,
                  v41,
                  *(_DWORD *)(a6 + 112),
                  *(_DWORD *)(a6 + 272),
                  v36,
                  v35,
                  v34,
                  a6);
                PoolWithTag = v92;
                v33 = P;
              }
            }
            if ( v33 != v97 && v33 )
            {
              ExFreePoolWithTag(v33, 0);
              PoolWithTag = v92;
            }
            P = 0LL;
            v98 = 0;
            if ( PoolWithTag != v93 && PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, 0);
            v8 = a7;
            goto LABEL_71;
          }
          v76 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v32, 0x68536956u);
          PoolWithTag = v92;
          v33 = v76;
          P = v76;
        }
        else
        {
          v33 = v97;
          P = v97;
        }
        v98 = v32;
        if ( v33 && (_DWORD)v32 )
        {
          memset(v33, 0, 8 * v32);
          PoolWithTag = v92;
          v33 = P;
        }
        v34 = (__int64)v33;
        goto LABEL_56;
      }
      v49 = *(_QWORD *)(a6 + 88);
      if ( !v29 )
      {
        if ( v49 )
        {
          v50 = *(_QWORD *)(v49 + 56);
          if ( !v50 || (*(_DWORD *)(v49 + 112) & 0x40) != 0 )
            v50 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v50 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 32LL);
          if ( !v50 )
            v50 = *(_QWORD *)(a6 + 96);
        }
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqqxqqtppx(
            (*(_DWORD *)(a6 + 72) >> 14) & 1,
            *(_DWORD *)(a6 + 324),
            0,
            v50,
            0,
            *(_DWORD *)(a6 + 112),
            *(_DWORD *)(a6 + 324),
            *(_DWORD *)(a6 + 332),
            *(_DWORD *)(a6 + 340),
            (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
            *(_QWORD *)(a6 + 280),
            a6,
            *(_QWORD *)(a6 + 744));
          v10 = a8;
          v12 = a3;
        }
        v51 = *(_DWORD *)(a6 + 464);
        if ( v51 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          v83 = *(_QWORD *)(a6 + 88);
          if ( v83 )
          {
            v84 = *(_QWORD *)(v83 + 56);
            if ( !v84 || (*(_DWORD *)(v83 + 112) & 0x40) != 0 )
              v84 = *(_QWORD *)(a6 + 88);
          }
          else
          {
            v84 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 32LL);
            if ( !v84 )
              v84 = *(_QWORD *)(a6 + 96);
          }
          McTemplateK0pqqPR2p(v51, v83, v29, v84, *(_DWORD *)(a6 + 112), v51, a6 + 472, a6);
          v10 = a8;
          v12 = a3;
        }
        break;
      }
      if ( v29 == 4 )
      {
        if ( v49 )
        {
          v72 = *(_QWORD *)(v49 + 56);
          if ( !v72 || (*(_DWORD *)(v49 + 112) & 0x40) != 0 )
            v72 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v72 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 32LL);
          if ( !v72 )
            v72 = *(_QWORD *)(a6 + 96);
        }
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqqpxp(
            v49,
            a2,
            4,
            v72,
            *(_DWORD *)(a6 + 112),
            *(_DWORD *)(a6 + 272),
            *(_QWORD *)(a6 + 280),
            *(_QWORD *)(a6 + 304),
            a6);
          v10 = a8;
          v12 = a3;
        }
      }
      else
      {
        if ( v49 )
        {
          v69 = *(_QWORD *)(v49 + 56);
          if ( !v69 || (*(_DWORD *)(v49 + 112) & 0x40) != 0 )
            v69 = *(_QWORD *)(a6 + 88);
        }
        else
        {
          v69 = *(_QWORD *)(*(_QWORD *)(a6 + 96) + 32LL);
          if ( !v69 )
            v69 = *(_QWORD *)(a6 + 96);
        }
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0pqqxqqtppx(
            (*(_DWORD *)(a6 + 72) >> 14) & 1,
            a2,
            v29,
            v69,
            v29,
            *(_DWORD *)(a6 + 112),
            0,
            0,
            0,
            (*(_DWORD *)(a6 + 72) & 0x4000) != 0,
            *(_QWORD *)(a6 + 280),
            a6,
            *(_QWORD *)(a6 + 744));
          goto LABEL_71;
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
            v10 = a8;
            v12 = a3;
          }
          goto LABEL_16;
        case 7:
          LOBYTE(v52) = 0;
          v53 = 0LL;
          if ( *(_DWORD *)(a7 + 88) == 1 )
          {
            v71 = *(_QWORD *)(a7 + 56);
            if ( v71 )
            {
              if ( *(_DWORD *)(v71 + 48) == 8 )
                v53 = *(_QWORD *)(v71 + 88);
            }
          }
          v54 = *(_QWORD *)(a7 + 48);
          if ( *(_DWORD *)(v54 + 968) >= 0x80u )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v54);
          if ( *(_QWORD *)(v54 + 976)
            || (v77 = operator new[](0x400uLL, 0x68536956u, (POOL_TYPE)512), (*(_QWORD *)(v54 + 976) = v77) != 0LL) )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v57 = *(unsigned int *)(v54 + 968);
            *(LARGE_INTEGER *)(*(_QWORD *)(v54 + 976) + 8 * v57) = PerformanceCounter;
            ++*(_DWORD *)(v54 + 968);
          }
          else
          {
            v80 = WdLogNewEntry5_WdAssertion(v79, v78);
            WdLogEvent5_WdAssertion(v80);
          }
          if ( v53 )
          {
            v52 = *(_QWORD *)(v53 + 56);
            if ( !v52 || (*(_DWORD *)(v53 + 112) & 0x40) != 0 )
              LOBYTE(v52) = v53;
          }
          v8 = a7;
          v58 = *(_QWORD *)(a7 + 48);
          v59 = *(_QWORD *)(v58 + 56);
          if ( !v59 || (*(_DWORD *)(v58 + 112) & 0x40) != 0 )
            v59 = *(_QWORD *)(a7 + 48);
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0ppqxqpq(
              v58,
              v57,
              v56,
              v59,
              v52,
              *(_DWORD *)(a7 + 88),
              *(_QWORD *)(a7 + 104),
              *(_DWORD *)(a7 + 96),
              *(_QWORD *)(a7 + 64),
              *(_DWORD *)(v58 + 436));
          goto LABEL_71;
        case 8:
        case 10:
        case 12:
          LOBYTE(v60) = 0;
          v61 = 0;
          LODWORD(v62) = 0;
          switch ( (_DWORD)a1 )
          {
            case 8:
              v63 = 1;
              break;
            case 0xA:
              v63 = 2;
              break;
            case 0xC:
              v60 = *(_QWORD *)(a8 + 40);
              v63 = 9;
              v61 = *(_DWORD *)(a8 + 32);
              v62 = *(_QWORD *)(a8 + 64);
              break;
            default:
              v63 = a8;
              break;
          }
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_16;
          v81 = *(_QWORD *)(a7 + 48);
          v82 = *(_QWORD *)(v81 + 56);
          if ( !v82 || (*(_DWORD *)(v81 + 112) & 0x40) != 0 )
            v82 = *(_QWORD *)(a7 + 48);
          McTemplateK0pqxqqqxqp(
            v63,
            v61,
            v62,
            v82,
            *(_DWORD *)(a7 + 88),
            *(_QWORD *)(a7 + 104),
            *(_DWORD *)(a7 + 96),
            v63,
            *(_DWORD *)(v81 + 436),
            v60,
            v61,
            v62);
          break;
        case 11:
        case 13:
          goto LABEL_23;
        case 14:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(a1, &EventEnterWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
            v10 = a8;
            v12 = a3;
          }
          goto LABEL_16;
        case 15:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 1);
            v10 = a8;
            v12 = a3;
          }
          goto LABEL_16;
        case 16:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(a1, &EventEnterWorkerThread, a3, *(_QWORD *)(a2 + 16), 3);
            v10 = a8;
            v12 = a3;
          }
          goto LABEL_16;
        case 17:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(a1, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 3);
            v10 = a8;
            v12 = a3;
          }
          goto LABEL_16;
        case 18:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(2LL, &EventEnterWorkerThread, a3, *(_QWORD *)(a2 + 16), 2);
            v10 = a8;
            v12 = a3;
          }
          goto LABEL_16;
        case 19:
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            McTemplateK0pq(2LL, &EventExitWorkerThread, a3, *(_QWORD *)(a2 + 16), 2);
            v10 = a8;
            v12 = a3;
          }
          goto LABEL_16;
        default:
          goto LABEL_16;
      }
      goto LABEL_71;
  }
LABEL_16:
  if ( *(int *)(a2 + 6240) >= 1 )
  {
    if ( v9 == 1 )
    {
      if ( v10 < 0 )
      {
        v10 = -v10;
      }
      else if ( v10 >= 16 )
      {
        v10 = 1;
      }
      ++*(_DWORD *)(v12 + 2596);
      ++*(_DWORD *)(v12 + 4LL * v10 + 2596);
      v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a5 + 96) + 24LL) + 4LL))
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a5 + 96) + 4LL)
                      + 8);
      ++*(_DWORD *)(v48 + 12);
      ++*(_DWORD *)(v48 + 4LL * v10 + 12);
    }
    else if ( v9 == 3 )
    {
      ++*(_DWORD *)(v12 + 2592);
      v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 104) + 40LL) + 24LL)
                                  + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a5 + 96) + 24LL) + 4LL))
                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a5 + 96) + 4LL)
                      + 8);
      ++*(_DWORD *)(v70 + 8);
    }
  }
  if ( *(int *)(a2 + 6240) >= 2 )
  {
    switch ( v9 )
    {
      case 4:
        ++*(_DWORD *)(v12 + 8LL * *(int *)(a6 + 48) + 2660);
        v42 = *(_QWORD *)(a6 + 96);
        if ( v42 )
        {
          v87 = *(_QWORD *)(v42 + 24);
          v44 = *(_QWORD *)(v87 + 16);
          v45 = *(unsigned int *)(*(_QWORD *)(v44 + 24) + 4LL);
          v46 = *(_QWORD *)(v87 + 8);
        }
        else
        {
          v43 = *(_QWORD *)(a6 + 88);
          v44 = *(_QWORD *)(v43 + 96);
          v45 = *(unsigned int *)(*(_QWORD *)(v44 + 24) + 4LL);
          v46 = *(_QWORD *)(v43 + 104);
        }
        v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 40) + 24LL) + 8 * v45)
                        + 8LL * *(unsigned __int16 *)(v44 + 4)
                        + 8);
        ++*(_DWORD *)(v47 + 8LL * *(int *)(a6 + 48) + 76);
        break;
      case 7:
        ++*(_DWORD *)(v12 + 16LL * *(int *)(v8 + 88) + 2732);
        v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v66 + 16LL * *(int *)(v8 + 88) + 148);
        break;
      case 8:
        v67 = 2 * (*(int *)(v8 + 88) + 171LL);
        ++*(_DWORD *)(v12 + 8 * v67);
        v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v68 + 16LL * *(int *)(v8 + 88) + 152);
        break;
      case 9:
      case 11:
      case 13:
        if ( a6 )
        {
          ++*(_DWORD *)(v12 + 8LL * *(int *)(a6 + 48) + 2664);
          v21 = *(_QWORD *)(a6 + 96);
          if ( v21 )
          {
            v90 = *(_QWORD *)(v21 + 24);
            v23 = *(_QWORD *)(v90 + 16);
            v24 = *(unsigned int *)(*(_QWORD *)(v23 + 24) + 4LL);
            v25 = *(_QWORD *)(v90 + 8);
          }
          else
          {
            v22 = *(_QWORD *)(a6 + 88);
            v23 = *(_QWORD *)(v22 + 96);
            v24 = *(unsigned int *)(*(_QWORD *)(v23 + 24) + 4LL);
            v25 = *(_QWORD *)(v22 + 104);
          }
          v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 40) + 24LL) + 8 * v24)
                          + 8LL * *(unsigned __int16 *)(v23 + 4)
                          + 8);
          ++*(_DWORD *)(v26 + 8LL * *(int *)(a6 + 48) + 80);
        }
        break;
      case 10:
        ++*(_DWORD *)(v12 + 16LL * *(int *)(v8 + 88) + 2740);
        v75 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 96LL) + 4LL)
                        + 8);
        ++*(_DWORD *)(v75 + 16LL * *(int *)(v8 + 88) + 156);
        break;
      case 12:
        ++*(_DWORD *)(v12 + 16LL * *(int *)(v8 + 88) + 2744);
        v88 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 104LL) + 40LL) + 24LL)
                                    + 8LL
                                    * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 96LL) + 24LL)
                                                      + 4LL))
                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 96LL) + 4LL)
                        + 8);
        v89 = 2 * (*(int *)(v8 + 88) + 10LL);
        ++*(_DWORD *)(v88 + 8 * v89);
        break;
      default:
        return;
    }
  }
}
