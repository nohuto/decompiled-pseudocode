/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C000AA20
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00072F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009F60 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C000D480 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C00121B0 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0012858 (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchTimeoutSyncObject @ 0x1C0012BAC (VidSchTimeoutSyncObject.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C0026340 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0029780 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002A590 (VidSchSignalSyncObjectsFromCpu.c)
 * Callees:
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D604 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000E8C8 (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z @ 0x1C00119D0 (-VidSchiUnblockUnorderedWaitQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@E@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pqXR1PR1q @ 0x1C00243E8 (Template_pqXR1PR1q.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(unsigned __int64 a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rsi
  unsigned int *v4; // rsi
  unsigned int *v5; // r14
  unsigned int v6; // r12d
  __int64 *v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // rax
  __int64 v11; // r14
  struct _VIDSCH_QUEUE_PACKET *v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  void **v17; // rax
  unsigned int *v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v20; // r15
  char *v21; // r9
  char *v22; // rcx
  char *PoolWithTag; // rax
  unsigned __int64 v24; // r13
  char *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  char *v28; // [rsp+40h] [rbp-40h]
  char v29; // [rsp+48h] [rbp-38h] BYREF
  int v30; // [rsp+50h] [rbp-30h]
  PVOID P; // [rsp+58h] [rbp-28h]
  char v32; // [rsp+60h] [rbp-20h] BYREF
  int v33; // [rsp+68h] [rbp-18h]

  v1 = (_QWORD *)(a1 + 992);
  v2 = a1;
  v3 = *(_QWORD **)(a1 + 992);
  if ( v3 != (_QWORD *)(a1 + 992) )
  {
    while ( 1 )
    {
      v11 = *(v3 - 1);
      v12 = (struct _VIDSCH_QUEUE_PACKET *)(v3 - 35);
      v3 = (_QWORD *)*v3;
      v13 = *((_QWORD *)v12 + 37);
      if ( *(_BYTE *)(v11 + 28) )
        break;
      v14 = *(unsigned __int64 **)(v11 + 56);
      if ( *(_BYTE *)(v11 + 29) )
      {
        a1 = *v14;
        if ( *v14 >= v13 )
          break;
      }
      else
      {
        a1 = (unsigned int)(*(_DWORD *)v14 - v13);
        if ( *(_DWORD *)v14 - (int)v13 >= 0 )
          break;
      }
LABEL_14:
      if ( v3 == v1 )
        goto LABEL_2;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v13);
    v19[3] = v11;
    v19[4] = **(_QWORD **)(v11 + 56);
    v19[5] = *((_QWORD *)v12 + 37);
    v19[6] = *(unsigned __int8 *)(v11 + 28);
    WdLogEvent5_WdEvent(v19);
    if ( (*((_DWORD *)v12 + 66) & 4) != 0 )
      VidSchiUnblockUnorderedWaitQueuePacket(v12, 0);
    VidSchiUnwaitWaitQueuePacket(v12, 0LL);
    VidSchiCheckPendingDeviceCommand(*(_QWORD *)(*((_QWORD *)v12 + 11) + 104LL));
    goto LABEL_14;
  }
LABEL_2:
  v4 = *(unsigned int **)(v2 + 1008);
  if ( v4 == (unsigned int *)(v2 + 1008) )
    return;
  do
  {
    v5 = v4;
    v6 = 0;
    v4 = *(unsigned int **)v4;
    if ( !v5[26] )
      continue;
    do
    {
      v7 = (__int64 *)(*((_QWORD *)v5 + 4) + 16LL * v6);
      v8 = *v7;
      if ( *v7 )
      {
        v9 = v7[1];
        if ( !*(_BYTE *)(v8 + 28) )
        {
          v10 = *(unsigned __int64 **)(v8 + 56);
          if ( *(_BYTE *)(v8 + 29) )
          {
            a1 = *v10;
            if ( *v10 < v9 )
            {
LABEL_8:
              LOBYTE(a1) = 0;
              if ( (v5[28] & 1) == 0 )
                goto LABEL_9;
              goto LABEL_18;
            }
          }
          else
          {
            a1 = (unsigned int)(*(_DWORD *)v10 - v9);
            if ( *(_DWORD *)v10 - (int)v9 < 0 )
              goto LABEL_8;
          }
        }
        v15 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v9);
        v15[3] = v8;
        v15[4] = **(_QWORD **)(v8 + 56);
        v15[5] = v7[1];
        v15[6] = *(unsigned __int8 *)(v8 + 28);
        WdLogEvent5_WdEvent(v15);
      }
      LOBYTE(a1) = 1;
      if ( (v5[28] & 1) != 0 )
        goto LABEL_20;
LABEL_18:
      ++v6;
    }
    while ( v6 < v5[26] );
    if ( !(_BYTE)a1 )
      continue;
LABEL_20:
    if ( (v5[28] & 4) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD))DxgCoreInterface[51])(*(_QWORD *)(v2 + 16), *((_QWORD *)v5 + 2));
    else
      KeSetEvent(*((PRKEVENT *)v5 + 2), 0, 0);
    if ( bTracingEnabled )
    {
      v20 = v5[26];
      v21 = 0LL;
      v22 = 0LL;
      v28 = 0LL;
      v30 = 0;
      P = 0LL;
      v33 = 0;
      if ( (unsigned int)v20 <= 1 )
      {
        v21 = &v29;
        v28 = &v29;
      }
      else
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v20 < 8 )
          goto LABEL_56;
        PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v20, 0x4B677844u);
        v22 = (char *)P;
        v21 = PoolWithTag;
        v28 = PoolWithTag;
      }
      v30 = v20;
      if ( !v21 )
        goto LABEL_56;
      v24 = v20;
      memset(v21, 0, 8 * v20);
      v21 = v28;
      if ( v28 )
      {
        if ( (unsigned int)v20 <= 1 )
        {
          v22 = &v32;
          P = &v32;
          goto LABEL_47;
        }
        if ( 0xFFFFFFFFFFFFFFFFuLL / v20 >= 8 )
        {
          v25 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v20, 0x4B677844u);
          v21 = v28;
          v22 = v25;
          P = v25;
LABEL_47:
          v33 = v20;
          if ( !v22 )
            goto LABEL_56;
          memset(v22, 0, 8 * v20);
          v22 = (char *)P;
          if ( P )
          {
            if ( (_DWORD)v20 )
            {
              v27 = 0LL;
              v26 = 0LL;
              do
              {
                v27 += 8LL;
                v26 += 16LL;
                *(_QWORD *)&v28[v27 - 8] = *(_QWORD *)(v26 + *((_QWORD *)v5 + 4) - 16);
                *(_QWORD *)((char *)P + v27 - 8) = *(_QWORD *)(v26 + *((_QWORD *)v5 + 4) - 8);
                --v24;
              }
              while ( v24 );
              v22 = (char *)P;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              Template_pqXR1PR1q(
                (_DWORD)v22,
                v5[28] & 1,
                v26,
                *((_QWORD *)v5 + 2),
                v20,
                (__int64)v22,
                (__int64)v28,
                v5[28] & 1);
              v21 = v28;
              goto LABEL_55;
            }
          }
          v21 = v28;
LABEL_56:
          if ( v22 != &v32 && v22 )
          {
            ExFreePoolWithTag(v22, 0);
            v21 = v28;
          }
          if ( v21 != &v29 && v21 )
            ExFreePoolWithTag(v21, 0);
          goto LABEL_23;
        }
      }
LABEL_55:
      v22 = (char *)P;
      goto LABEL_56;
    }
LABEL_23:
    if ( (v5[28] & 2) != 0 )
      ObfDereferenceObject(*((PVOID *)v5 + 2));
    v16 = *(_QWORD **)v5;
    v17 = (void **)*((_QWORD *)v5 + 1);
    if ( *(unsigned int **)(*(_QWORD *)v5 + 8LL) != v5 || *v17 != v5 )
      __fastfail(3u);
    *v17 = v16;
    v16[1] = v17;
    v18 = (unsigned int *)*((_QWORD *)v5 + 4);
    if ( v18 != v5 + 10 )
    {
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
    }
    ExFreePoolWithTag(v5, 0);
LABEL_9:
    ;
  }
  while ( v4 != (unsigned int *)(v2 + 1008) );
}
