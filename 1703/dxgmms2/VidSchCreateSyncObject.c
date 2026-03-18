/*
 * XREFs of VidSchCreateSyncObject @ 0x1C004FEB0
 * Callers:
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00500A8 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00733C4 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     Template_ppqqppqi @ 0x1C001474C (Template_ppqqppqi.c)
 *     Template_ppqqpqq @ 0x1C0014814 (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C00148E0 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C001499C (Template_ppqqpx.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiAddSyncObjectToAdapterList @ 0x1C00258D4 (VidSchiAddSyncObjectToAdapterList.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C0025940 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C004EFF8 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 */

__int64 __fastcall VidSchCreateSyncObject(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 *Object,
        _OWORD *a7)
{
  __int64 *v7; // r15
  __int64 v12; // rsi
  PVOID PoolWithTag; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  _OWORD *v23; // rax
  char v24; // al
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  NTSTATUS v29; // eax
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rax
  const EVENT_DESCRIPTOR *v35; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-60h]

  v7 = Object;
  *Object = 0LL;
  v12 = (a3[1] & 4) != 0 ? 0x50 : 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12 + 120, 0x68536956u);
  v16 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v27 = WdLogNewEntry5_WdWarning(v15, v14);
    WdLogEvent5_WdWarning(v27);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, v12 + 120);
  v18 = 1LL;
  *(_DWORD *)v16 = 1853444950;
  *(_QWORD *)(v16 + 8) = a1;
  *(_QWORD *)(v16 + 16) = a2;
  *(_QWORD *)(v16 + 32) = 1LL;
  *(_BYTE *)(v16 + 24) = a3[1] & 1;
  *(_BYTE *)(v16 + 26) = (a3[1] & 0x80000000) != 0;
  *(_BYTE *)(v16 + 27) = (a3[1] & 4) != 0;
  v19 = *a3;
  if ( (_DWORD)v19 == 1 )
  {
    *(_DWORD *)(v16 + 40) = 0;
    *(_BYTE *)(v16 + 25) = 0;
    if ( !a3[2] )
    {
      v20 = -1LL;
LABEL_5:
      *(_QWORD *)(v16 + 56) = v20;
      *(_QWORD *)(v16 + 48) = v20;
      goto LABEL_6;
    }
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_QWORD *)(v16 + 56) = 0LL;
LABEL_6:
    *(_QWORD *)(v16 + 96) = v16 + 88;
    *(_QWORD *)(v16 + 88) = v16 + 88;
    *(_QWORD *)(v16 + 112) = v16 + 104;
    *(_QWORD *)(v16 + 104) = v16 + 104;
    if ( *(_BYTE *)(v16 + 27) )
    {
      *(_QWORD *)(v16 + 184) = a4;
      *(_QWORD *)(v16 + 192) = VidSchPostSignalCrossAdapter;
      VidSchiAddSyncObjectToAdapterList(a1, v16);
      VidSchiAddSyncObjectToCrossAdapterInfo(v16);
    }
    v21 = bTracingEnabled == 0;
    *v7 = v16;
    if ( v21 )
      return 0LL;
    v33 = *(_QWORD *)(a1 + 16);
    if ( *a3 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        Template_ppqqpt(
          a3[18],
          &EventCreateSynchronizationMutex,
          v17,
          v33,
          v16,
          HandleInformation,
          a3[1],
          a3[18],
          a3[2]);
      }
      return 0LL;
    }
    if ( *a3 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        Template_ppqqpqq(a3[18], &EventCreateSemaphore, v17, v33, v16, HandleInformation, a3[1], a3[18], a3[2], a3[3]);
      }
      return 0LL;
    }
    if ( *a3 == 3 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v35 = (const EVENT_DESCRIPTOR *)&EventCreateFence;
        goto LABEL_49;
      }
    }
    else
    {
      if ( *a3 == 4 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(HandleInformation) = 0;
          Template_ppqqpx(
            a3[18],
            &EventCreateCPUNotification,
            v17,
            v33,
            v16,
            HandleInformation,
            a3[1],
            a3[18],
            *((_QWORD *)a3 + 1));
        }
        return 0LL;
      }
      if ( *a3 != 5 )
      {
        if ( *a3 == 6 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(HandleInformation) = 0;
            Template_ppqqppqi(
              a3[2],
              &EventCreatePeriodicMonitoredFence,
              v17,
              v33,
              v16,
              HandleInformation,
              a3[1],
              a3[18],
              a3[2],
              a3[3],
              *((_QWORD *)a3 + 2));
          }
        }
        else
        {
          v34 = WdLogNewEntry5_WdAssertion(*a3 - 5, v18);
          *(_QWORD *)(v34 + 24) = 909LL;
          WdLogEvent5_WdAssertion(v34);
        }
        return 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v35 = (const EVENT_DESCRIPTOR *)&EventCreateMonitoredFence;
LABEL_49:
        LODWORD(HandleInformation) = 0;
        Template_ppqqpx(a3[18], v35, v17, v33, v16, HandleInformation, a3[1], a3[18], *((_QWORD *)a3 + 1));
      }
    }
    return 0LL;
  }
  if ( (_DWORD)v19 == 3 )
  {
    *(_DWORD *)(v16 + 40) = 2;
    *(_BYTE *)(v16 + 25) = 1;
    v20 = *((_QWORD *)a3 + 1);
    *(_QWORD *)(v16 + 64) = v20;
    goto LABEL_5;
  }
  if ( (_DWORD)v19 != 2 )
  {
    if ( (_DWORD)v19 == 4 )
    {
      if ( (a3[1] & 1) == 0 )
      {
        *(_DWORD *)(v16 + 40) = 3;
        *(_BYTE *)(v16 + 25) = 0;
        v29 = ObReferenceObjectByHandle(
                *((HANDLE *)a3 + 1),
                0x1F0003u,
                (POBJECT_TYPE)ExEventObjectType,
                1,
                (PVOID *)&Object,
                0LL);
        v30 = Object;
        *(_QWORD *)(v16 + 48) = Object;
        v26 = v29;
        if ( v29 >= 0 )
          goto LABEL_6;
        v31 = WdLogNewEntry5_WdWarning(v30, v18);
        *(_QWORD *)(v31 + 24) = v26;
        WdLogEvent5_WdWarning(v31);
        goto LABEL_30;
      }
      v28 = WdLogNewEntry5_WdAssertion(v19, 1LL);
      *(_QWORD *)(v28 + 24) = -1073741811LL;
    }
    else
    {
      if ( (unsigned int)(v19 - 5) <= 1 )
      {
        *(_BYTE *)(v16 + 25) = 1;
        *(_DWORD *)(v16 + 40) = 5 - ((_DWORD)v19 != 6);
        v23 = a7;
        if ( a7 )
        {
          *(_OWORD *)(v16 + 48) = *a7;
          *(_OWORD *)(v16 + 64) = v23[1];
          *(_QWORD *)(v16 + 80) = *((_QWORD *)v23 + 4);
          v24 = *(_BYTE *)(a2 + 224);
LABEL_16:
          *(_BYTE *)(v16 + 29) = v24;
          goto LABEL_6;
        }
        v25 = 0LL;
        if ( *a3 != 6 )
          v25 = *((_QWORD *)a3 + 1);
        LODWORD(v26) = VIDMM_GLOBAL::AllocateFenceStorageSlot(
                         (struct VIDMM_MONITORED_FENCE_STORAGE *)(v16 + 48),
                         *(_BYTE *)(v16 + 24) != 0,
                         a2 == 0,
                         v25,
                         *(_BYTE *)(a1 + 48) != 0);
        if ( (int)v26 >= 0 )
        {
          *(_QWORD *)(v16 + 72) = a5;
          v24 = *(_BYTE *)(a1 + 48);
          goto LABEL_16;
        }
        goto LABEL_30;
      }
      v28 = WdLogNewEntry5_WdAssertion(v19, 1LL);
    }
    WdLogEvent5_WdAssertion(v28);
    LODWORD(v26) = -1073741811;
LABEL_30:
    ExFreePoolWithTag((PVOID)v16, 0);
    return (unsigned int)v26;
  }
  if ( a3[3] <= a3[2] )
  {
    *(_DWORD *)(v16 + 40) = 1;
    *(_BYTE *)(v16 + 25) = 0;
    *(_DWORD *)(v16 + 48) = a3[3];
    *(_DWORD *)(v16 + 56) = a3[3];
    *(_DWORD *)(v16 + 52) = a3[2];
    goto LABEL_6;
  }
  v32 = WdLogNewEntry5_WdAssertion(v19, 1LL);
  WdLogEvent5_WdAssertion(v32);
  ExFreePoolWithTag((PVOID)v16, 0);
  return 3221225485LL;
}
