/*
 * XREFs of VidSchCreateSyncObject @ 0x1C006F8F0
 * Callers:
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C00705EC (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0079834 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     McTemplateK0ppqqpx @ 0x1C0016C40 (McTemplateK0ppqqpx.c)
 *     McTemplateK0ppqqppqi @ 0x1C0016CF8 (McTemplateK0ppqqppqi.c)
 *     McTemplateK0ppqqpqq @ 0x1C0016DD0 (McTemplateK0ppqqpqq.c)
 *     McTemplateK0ppqqpt @ 0x1C0016E8C (McTemplateK0ppqqpt.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     VidSchiAddSyncObjectToAdapterList @ 0x1C0027A2C (VidSchiAddSyncObjectToAdapterList.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C0027A98 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C006FB68 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
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
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // r9
  _OWORD *v23; // rax
  char v24; // al
  unsigned __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  NTSTATUS v29; // eax
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  void *v34; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-60h]

  v7 = Object;
  *Object = 0LL;
  v12 = (a3[1] & 4) != 0 ? 0x50 : 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12 + 120, 0x68536956u);
  v15 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v27 = WdLogNewEntry5_WdWarning(v14);
    WdLogEvent5_WdWarning(v27);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, v12 + 120);
  *(_DWORD *)v15 = 1853444950;
  v17 = 1LL;
  *(_QWORD *)(v15 + 8) = a1;
  *(_QWORD *)(v15 + 16) = a2;
  *(_QWORD *)(v15 + 32) = 1LL;
  *(_BYTE *)(v15 + 24) = a3[1] & 1;
  *(_BYTE *)(v15 + 26) = (a3[1] & 0x80000000) != 0;
  *(_BYTE *)(v15 + 27) = (a3[1] & 4) != 0;
  v18 = *a3;
  if ( (_DWORD)v18 == 1 )
  {
    *(_DWORD *)(v15 + 40) = 0;
    *(_BYTE *)(v15 + 25) = 0;
    if ( !a3[2] )
    {
      v19 = -1LL;
LABEL_5:
      *(_QWORD *)(v15 + 56) = v19;
      *(_QWORD *)(v15 + 48) = v19;
      goto LABEL_6;
    }
    *(_QWORD *)(v15 + 48) = 0LL;
    *(_QWORD *)(v15 + 56) = 0LL;
LABEL_6:
    *(_QWORD *)(v15 + 96) = v15 + 88;
    *(_QWORD *)(v15 + 88) = v15 + 88;
    *(_QWORD *)(v15 + 112) = v15 + 104;
    *(_QWORD *)(v15 + 104) = v15 + 104;
    if ( *(_BYTE *)(v15 + 27) )
    {
      *(_QWORD *)(v15 + 184) = a4;
      *(_QWORD *)(v15 + 192) = VidSchPostSignalCrossAdapter;
      VidSchiAddSyncObjectToAdapterList(a1, v15);
      VidSchiAddSyncObjectToCrossAdapterInfo(v15);
    }
    v20 = bTracingEnabled == 0;
    *v7 = v15;
    if ( v20 )
      return 0LL;
    v21 = *(_QWORD *)(a1 + 16);
    if ( *a3 == 1 )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpt(
          a3[18],
          (__int64)&EventCreateSynchronizationMutex,
          v16,
          v21,
          v15,
          HandleInformation,
          a3[1],
          a3[18],
          a3[2]);
      }
      return 0LL;
    }
    if ( *a3 == 2 )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpqq(
          a3[18],
          (__int64)&EventCreateSemaphore,
          v16,
          v21,
          v15,
          HandleInformation,
          a3[1],
          a3[18],
          a3[2],
          a3[3]);
      }
      return 0LL;
    }
    if ( *a3 == 3 )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v34 = &EventCreateFence;
        goto LABEL_51;
      }
    }
    else
    {
      if ( *a3 == 4 )
      {
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          LODWORD(HandleInformation) = 0;
          McTemplateK0ppqqpx(
            a3[18],
            (__int64)&EventCreateCPUNotification,
            v16,
            v21,
            v15,
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
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(HandleInformation) = 0;
            McTemplateK0ppqqppqi(
              a3[2],
              (__int64)&EventCreatePeriodicMonitoredFence,
              v16,
              v21,
              v15,
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
          v33 = WdLogNewEntry5_WdAssertion(*a3 - 5, v17);
          *(_QWORD *)(v33 + 24) = 911LL;
          WdLogEvent5_WdAssertion(v33);
        }
        return 0LL;
      }
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v34 = &EventCreateMonitoredFence;
LABEL_51:
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpx(a3[18], (__int64)v34, v16, v21, v15, HandleInformation, a3[1], a3[18], *((_QWORD *)a3 + 1));
      }
    }
    return 0LL;
  }
  if ( (_DWORD)v18 == 3 )
  {
    *(_DWORD *)(v15 + 40) = 2;
    *(_BYTE *)(v15 + 25) = 1;
    v19 = *((_QWORD *)a3 + 1);
    *(_QWORD *)(v15 + 64) = v19;
    goto LABEL_5;
  }
  if ( (_DWORD)v18 != 2 )
  {
    if ( (_DWORD)v18 == 4 )
    {
      if ( (a3[1] & 1) == 0 )
      {
        *(_DWORD *)(v15 + 40) = 3;
        *(_BYTE *)(v15 + 25) = 0;
        v29 = ObReferenceObjectByHandle(
                *((HANDLE *)a3 + 1),
                0x1F0003u,
                (POBJECT_TYPE)ExEventObjectType,
                1,
                (PVOID *)&Object,
                0LL);
        v30 = Object;
        *(_QWORD *)(v15 + 48) = Object;
        v26 = v29;
        if ( v29 >= 0 )
          goto LABEL_6;
        v31 = WdLogNewEntry5_WdWarning(v30);
        *(_QWORD *)(v31 + 24) = v26;
        WdLogEvent5_WdWarning(v31);
        goto LABEL_41;
      }
      v28 = WdLogNewEntry5_WdAssertion(v18, 1LL);
      *(_QWORD *)(v28 + 24) = -1073741811LL;
    }
    else
    {
      if ( (unsigned int)(v18 - 5) <= 1 )
      {
        *(_BYTE *)(v15 + 25) = 1;
        *(_DWORD *)(v15 + 40) = 5 - ((_DWORD)v18 != 6);
        v23 = a7;
        if ( a7 )
        {
          *(_OWORD *)(v15 + 48) = *a7;
          *(_OWORD *)(v15 + 64) = v23[1];
          *(_QWORD *)(v15 + 80) = *((_QWORD *)v23 + 4);
          v24 = *(_BYTE *)(a2 + 240);
LABEL_25:
          *(_BYTE *)(v15 + 29) = v24;
          goto LABEL_6;
        }
        v25 = 0LL;
        if ( *a3 != 6 )
          v25 = *((_QWORD *)a3 + 1);
        LODWORD(v26) = VIDMM_GLOBAL::AllocateFenceStorageSlot(
                         (struct VIDMM_MONITORED_FENCE_STORAGE *)(v15 + 48),
                         *(_BYTE *)(v15 + 24) != 0,
                         a2 == 0,
                         v25,
                         *(_BYTE *)(a1 + 48) != 0);
        if ( (int)v26 >= 0 )
        {
          *(_QWORD *)(v15 + 72) = a5;
          v24 = *(_BYTE *)(a1 + 48);
          goto LABEL_25;
        }
        goto LABEL_41;
      }
      v28 = WdLogNewEntry5_WdAssertion(v18, 1LL);
    }
    WdLogEvent5_WdAssertion(v28);
    LODWORD(v26) = -1073741811;
LABEL_41:
    ExFreePoolWithTag((PVOID)v15, 0);
    return (unsigned int)v26;
  }
  if ( a3[3] <= a3[2] )
  {
    *(_DWORD *)(v15 + 40) = 1;
    *(_BYTE *)(v15 + 25) = 0;
    *(_DWORD *)(v15 + 48) = a3[3];
    *(_DWORD *)(v15 + 56) = a3[3];
    *(_DWORD *)(v15 + 52) = a3[2];
    goto LABEL_6;
  }
  v32 = WdLogNewEntry5_WdAssertion(v18, 1LL);
  WdLogEvent5_WdAssertion(v32);
  ExFreePoolWithTag((PVOID)v15, 0);
  return 3221225485LL;
}
