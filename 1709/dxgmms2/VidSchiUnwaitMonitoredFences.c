/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C000BBA0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000B450 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C000CC40 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C000E0F8 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C000F57C (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchTimeoutSyncObject @ 0x1C0013ED4 (VidSchTimeoutSyncObject.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C00283FC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002B580 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002BFD0 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C002DB60 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0004764 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D18C (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011898 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C0013888 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pqXR1PR1q @ 0x1C0026434 (McTemplateK0pqXR1PR1q.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(unsigned __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rsi
  unsigned int *v4; // rdi
  unsigned int *v5; // rsi
  _QWORD *v6; // rsi
  unsigned int *v7; // r14
  unsigned int v8; // r12d
  __int64 *v9; // r15
  __int64 v10; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // rax
  __int64 v13; // r14
  struct _VIDSCH_QUEUE_PACKET *v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // rax
  _QWORD *v17; // rax
  struct _KEVENT *v18; // rcx
  unsigned __int64 v19; // r15
  char *v20; // rcx
  char *v21; // r9
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rax
  void **v26; // rcx
  unsigned int *v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // r14
  char *PoolWithTag; // rax
  char *v31; // rax
  __int64 v32; // r14
  _QWORD *v33; // r15
  _QWORD *v34; // r12
  unsigned __int64 v35; // rdx
  unsigned __int64 *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  char *P; // [rsp+40h] [rbp-40h]
  char v41; // [rsp+48h] [rbp-38h] BYREF
  int v42; // [rsp+50h] [rbp-30h]
  char *v43; // [rsp+58h] [rbp-28h]
  char v44; // [rsp+60h] [rbp-20h] BYREF
  int v45; // [rsp+68h] [rbp-18h]

  v1 = (_QWORD *)(a1 + 984);
  v2 = a1;
  v3 = *(_QWORD **)(a1 + 984);
  if ( v3 != (_QWORD *)(a1 + 984) )
  {
    while ( 1 )
    {
      v13 = *(v3 - 1);
      v14 = (struct _VIDSCH_QUEUE_PACKET *)(v3 - 38);
      v3 = (_QWORD *)*v3;
      v15 = *((_QWORD *)v14 + 40);
      if ( *(_BYTE *)(v13 + 28) )
        break;
      v16 = *(unsigned __int64 **)(v13 + 56);
      if ( *(_BYTE *)(v13 + 29) )
      {
        a1 = *v16;
        if ( *v16 >= v15 )
          break;
      }
      else
      {
        a1 = (unsigned int)(*(_DWORD *)v16 - v15);
        if ( *(_DWORD *)v16 - (int)v15 >= 0 )
          break;
      }
LABEL_16:
      if ( v3 == v1 )
        goto LABEL_2;
    }
    v28 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v15);
    v28[3] = v13;
    v28[4] = **(_QWORD **)(v13 + 56);
    v28[5] = *((_QWORD *)v14 + 40);
    v28[6] = *(unsigned __int8 *)(v13 + 28);
    WdLogEvent5_WdEvent(v28);
    v29 = *(_QWORD **)(*((_QWORD *)v14 + 11) + 104LL);
    if ( (*((_DWORD *)v14 + 72) & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v14, 0);
    VidSchiUnwaitWaitQueuePacket(v14, 0LL);
    VidSchiCheckPendingDeviceCommand(v29);
    goto LABEL_16;
  }
LABEL_2:
  v4 = (unsigned int *)(v2 + 1000);
  v5 = *(unsigned int **)(v2 + 1000);
  if ( *(unsigned int **)v4 != v4 )
  {
    do
    {
      v7 = v5;
      v8 = 0;
      v5 = *(unsigned int **)v5;
      if ( !v7[26] )
        continue;
      do
      {
        v9 = (__int64 *)(*((_QWORD *)v7 + 4) + 16LL * v8);
        v10 = *v9;
        if ( *v9 )
        {
          v11 = v9[1];
          if ( !*(_BYTE *)(v10 + 28) )
          {
            v12 = *(unsigned __int64 **)(v10 + 56);
            if ( *(_BYTE *)(v10 + 29) )
            {
              a1 = *v12;
              if ( *v12 < v11 )
              {
LABEL_10:
                LOBYTE(a1) = 0;
                if ( (v7[28] & 1) == 0 )
                  goto LABEL_11;
                goto LABEL_20;
              }
            }
            else
            {
              a1 = (unsigned int)(*(_DWORD *)v12 - v11);
              if ( *(_DWORD *)v12 - (int)v11 < 0 )
                goto LABEL_10;
            }
          }
          v17 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v11);
          v17[3] = v10;
          v17[4] = **(_QWORD **)(v10 + 56);
          v17[5] = v9[1];
          v17[6] = *(unsigned __int8 *)(v10 + 28);
          WdLogEvent5_WdEvent(v17);
        }
        LOBYTE(a1) = 1;
        if ( (v7[28] & 1) != 0 )
          goto LABEL_22;
LABEL_20:
        ++v8;
      }
      while ( v8 < v7[26] );
      if ( !(_BYTE)a1 )
        continue;
LABEL_22:
      v18 = (struct _KEVENT *)*((_QWORD *)v7 + 2);
      if ( (v7[28] & 4) != 0 )
        ((void (__fastcall *)(struct _KEVENT *))DxgCoreInterface[51])(v18);
      else
        KeSetEvent(v18, 0, 0);
      if ( bTracingEnabled )
      {
        v19 = v7[26];
        v20 = 0LL;
        v21 = 0LL;
        P = 0LL;
        v42 = 0;
        v43 = 0LL;
        v45 = 0;
        if ( (unsigned int)v19 <= 1 )
        {
          v20 = &v41;
          P = &v41;
          goto LABEL_27;
        }
        if ( 0xFFFFFFFFFFFFFFFFuLL / v19 >= 8 )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v19, 0x4B677844u);
          v21 = v43;
          v20 = PoolWithTag;
          P = PoolWithTag;
LABEL_27:
          v42 = v19;
          if ( v20 )
          {
            v22 = v19;
            memset(v20, 0, 8 * v19);
            v20 = P;
            if ( !P )
              goto LABEL_60;
            if ( (unsigned int)v19 <= 1 )
            {
              v21 = &v44;
              v43 = &v44;
              goto LABEL_31;
            }
            if ( 0xFFFFFFFFFFFFFFFFuLL / v19 < 8 )
              goto LABEL_60;
            v31 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v19, 0x4B677844u);
            v20 = P;
            v21 = v31;
            v43 = v31;
LABEL_31:
            v45 = v19;
            if ( v21 )
            {
              memset(v21, 0, 8 * v19);
              v21 = v43;
              if ( !v43 )
                goto LABEL_38;
              if ( (_DWORD)v19 )
              {
                v23 = 0LL;
                v24 = 0LL;
                do
                {
                  v23 += 8LL;
                  v24 += 16LL;
                  *(_QWORD *)&P[v23 - 8] = *(_QWORD *)(v24 + *((_QWORD *)v7 + 4) - 16);
                  *(_QWORD *)&v43[v23 - 8] = *(_QWORD *)(v24 + *((_QWORD *)v7 + 4) - 8);
                  --v22;
                }
                while ( v22 );
                v21 = v43;
              }
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              {
LABEL_38:
                v20 = P;
                goto LABEL_39;
              }
              McTemplateK0pqXR1PR1q(
                v7[28] & 1,
                v23,
                v24,
                *((_QWORD *)v7 + 2),
                v19,
                (__int64)v21,
                (__int64)P,
                v7[28] & 1);
              v20 = P;
LABEL_60:
              v21 = v43;
            }
          }
        }
LABEL_39:
        if ( v21 != &v44 && v21 )
        {
          ExFreePoolWithTag(v21, 0);
          v20 = P;
        }
        v43 = 0LL;
        v45 = 0;
        if ( v20 != &v41 && v20 )
          ExFreePoolWithTag(v20, 0);
        v42 = 0;
      }
      if ( (v7[28] & 2) != 0 )
        ObfDereferenceObject(*((PVOID *)v7 + 2));
      v25 = *(_QWORD **)v7;
      if ( *(unsigned int **)(*(_QWORD *)v7 + 8LL) != v7 || (v26 = (void **)*((_QWORD *)v7 + 1), *v26 != v7) )
        __fastfail(3u);
      *v26 = v25;
      v25[1] = v26;
      v27 = (unsigned int *)*((_QWORD *)v7 + 4);
      if ( v27 != v7 + 10 && v27 )
        ExFreePoolWithTag(v27, 0);
      *((_QWORD *)v7 + 4) = 0LL;
      v7[26] = 0;
      ExFreePoolWithTag(v7, 0);
LABEL_11:
      ;
    }
    while ( v5 != v4 );
  }
  v6 = *(_QWORD **)(v2 + 1016);
  if ( v6 != (_QWORD *)(v2 + 1016) )
  {
    while ( 1 )
    {
      v32 = *(v6 - 2);
      v33 = v6 - 3;
      v6 = (_QWORD *)*v6;
      v34 = v33 + 3;
      v35 = v33[2];
      if ( *(_BYTE *)(v32 + 28) )
        break;
      v36 = *(unsigned __int64 **)(v32 + 56);
      if ( *(_BYTE *)(v32 + 29) )
      {
        a1 = *v36;
        if ( *v36 >= v35 )
          break;
      }
      else if ( *(_DWORD *)v36 - (int)v35 >= 0 )
      {
        break;
      }
LABEL_76:
      if ( v6 == (_QWORD *)(v2 + 1016) )
        return;
    }
    v37 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v35);
    v37[3] = v32;
    v37[4] = **(_QWORD **)(v32 + 56);
    v37[5] = v33[2];
    WdLogEvent5_WdEvent(v37);
    VidSchiSubmitPresentHistoryToken(0LL, v33 + 5, v33[2], v2);
    v38 = *v34;
    if ( *(_QWORD **)(*v34 + 8LL) != v34 || (v39 = (_QWORD *)v33[4], (_QWORD *)*v39 != v34) )
      __fastfail(3u);
    *v39 = v38;
    *(_QWORD *)(v38 + 8) = v39;
    ExFreePoolWithTag(v33, 0);
    goto LABEL_76;
  }
}
