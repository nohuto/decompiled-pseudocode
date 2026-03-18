/*
 * XREFs of VidSchiUnwaitMonitoredFences @ 0x1C000BC60
 * Callers:
 *     VidSchiRundownMonitoredFenceCpuWaiters @ 0x1C0003030 (VidSchiRundownMonitoredFenceCpuWaiters.c)
 *     VidSchTimeoutSyncObject @ 0x1C0003E5C (VidSchTimeoutSyncObject.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BB10 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchSubmitWaitFromCpu @ 0x1C000DF10 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0012F40 (VidSchiSignalRegisteredSyncObjects.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002B2E4 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C002E5D0 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002F060 (VidSchSignalSyncObjectsFromCpu.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0033444 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000BA80 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E338 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00103BC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0013330 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0013B00 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pqXR1PR1q @ 0x1C0029068 (McTemplateK0pqXR1PR1q.c)
 */

void __fastcall VidSchiUnwaitMonitoredFences(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // rax
  _DWORD *v11; // r14
  unsigned int v12; // r12d
  __int64 *v13; // r15
  __int64 v14; // r13
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rax
  char v17; // al
  char v18; // cl
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  _QWORD *v22; // rax
  struct _KEVENT *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // r15
  char *p_P; // r9
  char *v28; // r10
  unsigned int v29; // ecx
  unsigned __int64 v30; // r13
  size_t v31; // r12
  __int64 v32; // rax
  _QWORD *v33; // rcx
  _DWORD *v34; // rcx
  char *PoolWithTag; // rax
  char *v36; // rax
  __int64 v37; // r14
  _QWORD *v38; // r13
  unsigned __int64 v39; // rcx
  _QWORD *v40; // r15
  unsigned __int64 *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  char *v45; // [rsp+40h] [rbp-40h]
  char P; // [rsp+48h] [rbp-38h] BYREF
  int v47; // [rsp+50h] [rbp-30h]
  char *v48; // [rsp+60h] [rbp-20h]
  char v49; // [rsp+68h] [rbp-18h] BYREF
  int v50; // [rsp+70h] [rbp-10h]

  v3 = (_QWORD *)(a1 + 1000);
LABEL_2:
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v8 = *(i - 1);
    v9 = i[2];
    if ( *(_BYTE *)(v8 + 28) )
      goto LABEL_20;
    v10 = *(unsigned __int64 **)(v8 + 56);
    if ( *(_BYTE *)(v8 + 29) )
    {
      if ( *v10 >= v9 )
        goto LABEL_20;
    }
    else if ( *(_DWORD *)v10 - (int)v9 >= 0 )
    {
LABEL_20:
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, a2);
      v19[3] = v8;
      v19[4] = **(_QWORD **)(v8 + 56);
      v19[5] = i[2];
      v19[6] = *(unsigned __int8 *)(v8 + 28);
      WdLogEvent5_WdEvent(v19);
      v20 = *(i - 25);
      if ( v20 )
        v21 = *(_QWORD *)(v20 + 104);
      else
        v21 = *(_QWORD *)(*(_QWORD *)(*(i - 24) + 24LL) + 8LL);
      if ( (*(_DWORD *)(i - 2) & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(i - 36, 0LL);
      VidSchiUnwaitWaitQueuePacket(i - 36, 0LL);
      VidSchiCheckPendingDeviceCommand(v21);
      goto LABEL_2;
    }
  }
  v5 = (_QWORD *)(a1 + 1016);
  v6 = *(_QWORD **)(a1 + 1016);
  if ( (_QWORD *)*v5 != v5 )
  {
LABEL_11:
    v11 = v6;
    v12 = 0;
    v6 = (_QWORD *)*v6;
    if ( !v11[26] )
      goto LABEL_17;
    while ( 1 )
    {
      v13 = (__int64 *)(*((_QWORD *)v11 + 4) + 16LL * v12);
      v14 = *v13;
      if ( !*v13 )
        goto LABEL_26;
      v15 = v13[1];
      if ( *(_BYTE *)(v14 + 28) )
        goto LABEL_25;
      v16 = *(unsigned __int64 **)(v14 + 56);
      if ( *(_BYTE *)(v14 + 29) )
      {
        if ( *v16 >= v15 )
        {
LABEL_25:
          v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, a2);
          v22[3] = v14;
          v22[4] = **(_QWORD **)(v14 + 56);
          v22[5] = v13[1];
          v22[6] = *(unsigned __int8 *)(v14 + 28);
          WdLogEvent5_WdEvent(v22);
LABEL_26:
          v17 = *((_BYTE *)v11 + 112);
          v18 = 1;
          if ( (v17 & 1) != 0 )
            goto LABEL_29;
          goto LABEL_27;
        }
      }
      else if ( *(_DWORD *)v16 - (int)v15 >= 0 )
      {
        goto LABEL_25;
      }
      v17 = *((_BYTE *)v11 + 112);
      v18 = 0;
      if ( (v17 & 1) == 0 )
        goto LABEL_17;
LABEL_27:
      if ( ++v12 >= v11[26] )
      {
        if ( !v18 )
          goto LABEL_17;
LABEL_29:
        v23 = (struct _KEVENT *)*((_QWORD *)v11 + 2);
        if ( (v17 & 4) != 0 )
          ((void (__fastcall *)(struct _KEVENT *))DxgCoreInterface[62])(v23);
        else
          KeSetEvent(v23, 0, 0);
        if ( bTracingEnabled )
        {
          v26 = (unsigned int)v11[26];
          p_P = 0LL;
          v28 = 0LL;
          v45 = 0LL;
          v47 = 0;
          v29 = v26;
          v48 = 0LL;
          v50 = 0;
          if ( (unsigned int)v26 > 1 )
          {
            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v26 >= 8 )
            {
              PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v26, 0x4B677844u);
              v28 = v48;
              v29 = v26;
              p_P = PoolWithTag;
              v45 = PoolWithTag;
              v30 = v26;
              goto LABEL_34;
            }
          }
          else
          {
            p_P = &P;
            v30 = (unsigned int)v26;
            v45 = &P;
LABEL_34:
            v47 = v26;
            if ( p_P )
            {
              v31 = 8 * v30;
              if ( (_DWORD)v26 )
              {
                memset(p_P, 0, 8 * v30);
                p_P = v45;
                v29 = v26;
                v28 = v48;
              }
              if ( p_P )
              {
                if ( (unsigned int)v26 <= 1 )
                {
                  v28 = &v49;
                  v48 = &v49;
                  v31 = 8 * v30;
                  goto LABEL_40;
                }
                if ( 0xFFFFFFFFFFFFFFFFuLL / v30 >= 8 )
                {
                  v36 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v30, 0x4B677844u);
                  p_P = v45;
                  v29 = v26;
                  v28 = v36;
                  v48 = v36;
LABEL_40:
                  v50 = v26;
                  if ( v28 )
                  {
                    if ( (_DWORD)v26 )
                    {
                      memset(v28, 0, v31);
                      p_P = v45;
                      v28 = v48;
                    }
                    else
                    {
                      v30 = v29;
                    }
                    if ( v28 )
                    {
                      if ( (_DWORD)v26 )
                      {
                        v24 = 0LL;
                        v25 = 0LL;
                        do
                        {
                          v24 += 8LL;
                          v25 += 16LL;
                          *(_QWORD *)&p_P[v24 - 8] = *(_QWORD *)(v25 + *((_QWORD *)v11 + 4) - 16);
                          *(_QWORD *)&v48[v24 - 8] = *(_QWORD *)(*((_QWORD *)v11 + 4) + v25 - 8);
                          p_P = v45;
                          --v30;
                        }
                        while ( v30 );
                        v28 = v48;
                      }
                      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      {
                        McTemplateK0pqXR1PR1q(
                          (_DWORD)Microsoft_Windows_DxgKrnlEnableBits,
                          v24,
                          v25,
                          *((_QWORD *)v11 + 2),
                          v26,
                          (__int64)v28,
                          (__int64)p_P,
                          v11[28] & 1);
                        p_P = v45;
                        v28 = v48;
                      }
                    }
                  }
                }
              }
            }
          }
          if ( v28 != &v49 && v28 )
          {
            ExFreePoolWithTag(v28, 0);
            p_P = v45;
          }
          v48 = 0LL;
          v50 = 0;
          if ( p_P != &P && p_P )
            ExFreePoolWithTag(p_P, 0);
          v47 = 0;
        }
        if ( (v11[28] & 2) != 0 )
          ObfDereferenceObject(*((PVOID *)v11 + 2));
        v32 = *(_QWORD *)v11;
        if ( *(_DWORD **)(*(_QWORD *)v11 + 8LL) != v11 || (v33 = (_QWORD *)*((_QWORD *)v11 + 1), (_DWORD *)*v33 != v11) )
          __fastfail(3u);
        *v33 = v32;
        *(_QWORD *)(v32 + 8) = v33;
        v34 = (_DWORD *)*((_QWORD *)v11 + 4);
        if ( v34 != v11 + 10 && v34 )
          ExFreePoolWithTag(v34, 0);
        *((_QWORD *)v11 + 4) = 0LL;
        v11[26] = 0;
        ExFreePoolWithTag(v11, 0);
LABEL_17:
        if ( v6 == v5 )
          break;
        goto LABEL_11;
      }
    }
  }
  v7 = *(_QWORD **)(a1 + 1032);
  while ( v7 != (_QWORD *)(a1 + 1032) )
  {
    v37 = *(v7 - 2);
    v38 = v7 - 3;
    v39 = *(v7 - 1);
    v40 = v7;
    v7 = (_QWORD *)*v7;
    if ( *(_BYTE *)(v37 + 28) )
      goto LABEL_81;
    v41 = *(unsigned __int64 **)(v37 + 56);
    if ( *(_BYTE *)(v37 + 29) )
    {
      if ( *v41 >= v39 )
        goto LABEL_80;
    }
    else if ( *(_DWORD *)v41 - (int)v39 >= 0 )
    {
LABEL_80:
      if ( *(_BYTE *)(v37 + 28) )
LABEL_81:
        *((_DWORD *)v38 + 11) |= 1u;
      v42 = (_QWORD *)WdLogNewEntry5_WdEvent(v39, a2);
      v42[3] = v37;
      v42[4] = **(_QWORD **)(v37 + 56);
      v42[5] = v38[2];
      v42[6] = *(unsigned __int8 *)(v37 + 28);
      WdLogEvent5_WdEvent(v42);
      VidSchiSubmitPresentHistoryToken(0LL, v38 + 5, 0LL, a1);
      v43 = *v40;
      if ( *(_QWORD **)(*v40 + 8LL) != v40 || (v44 = (_QWORD *)v40[1], (_QWORD *)*v44 != v40) )
        __fastfail(3u);
      *v44 = v43;
      *(_QWORD *)(v43 + 8) = v44;
      ++*(_DWORD *)(a1 + 1084);
      if ( ExQueryDepthSList((PSLIST_HEADER)(a1 + 1056)) < *(_WORD *)(a1 + 1072) )
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1056), (PSLIST_ENTRY)v38);
      }
      else
      {
        ++*(_DWORD *)(a1 + 1088);
        (*(void (__fastcall **)(_QWORD *, __int64))(a1 + 1112))(v38, a1 + 1056);
      }
      --*(_DWORD *)(v37 + 40);
      VidSchiReleaseSyncObjectReference((char *)v37);
    }
  }
}
