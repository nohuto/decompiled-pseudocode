/*
 * XREFs of VidSchCreateSyncObject @ 0x1C00776D0
 * Callers:
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z @ 0x1C0056384 (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@@Z.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007D3E0 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00053A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     McTemplateK0ppqqpx @ 0x1C0016530 (McTemplateK0ppqqpx.c)
 *     McTemplateK0ppqqppqi @ 0x1C00165E8 (McTemplateK0ppqqppqi.c)
 *     McTemplateK0ppqqpqq @ 0x1C00166C0 (McTemplateK0ppqqpqq.c)
 *     McTemplateK0ppqqpt @ 0x1C001677C (McTemplateK0ppqqpt.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiAddSyncObjectToAdapterList @ 0x1C002A71C (VidSchiAddSyncObjectToAdapterList.c)
 *     VidSchiAddSyncObjectToCrossAdapterInfo @ 0x1C002A788 (VidSchiAddSyncObjectToCrossAdapterInfo.c)
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z @ 0x1C007798C (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N11_K1@Z.c)
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
  struct DXGPROCESS *Current; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // r9
  _OWORD *v25; // rax
  char v26; // al
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  NTSTATUS v31; // eax
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  void *v36; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-60h]

  v7 = Object;
  *Object = 0LL;
  v12 = (a3[1] & 4) != 0 ? 0x50 : 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v12 + 136, 0x68536956u);
  v16 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    v29 = WdLogNewEntry5_WdWarning(v15, v14);
    WdLogEvent5_WdWarning(v29);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, v12 + 136);
  *(_DWORD *)v16 = 1853444950;
  *(_QWORD *)(v16 + 8) = a1;
  *(_QWORD *)(v16 + 16) = a2;
  *(_QWORD *)(v16 + 32) = 1LL;
  *(_BYTE *)(v16 + 24) = a3[1] & 1;
  *(_BYTE *)(v16 + 26) = (a3[1] & 0x80000000) != 0;
  *(_BYTE *)(v16 + 27) = (a3[1] & 4) != 0;
  Current = DXGPROCESS::GetCurrent();
  if ( Current && (*((_BYTE *)Current + 323) & 8) != 0 )
    *(_BYTE *)(v16 + 31) = 1;
  v20 = *a3;
  if ( (_DWORD)v20 == 1 )
  {
    *(_DWORD *)(v16 + 44) = 0;
    *(_BYTE *)(v16 + 25) = 0;
    if ( !a3[2] )
    {
      v21 = -1LL;
LABEL_8:
      *(_QWORD *)(v16 + 48) = v21;
LABEL_9:
      *(_QWORD *)(v16 + 56) = v21;
      goto LABEL_10;
    }
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_QWORD *)(v16 + 56) = 0LL;
LABEL_10:
    *(_QWORD *)(v16 + 96) = v16 + 88;
    *(_QWORD *)(v16 + 88) = v16 + 88;
    *(_QWORD *)(v16 + 112) = v16 + 104;
    *(_QWORD *)(v16 + 104) = v16 + 104;
    if ( *(_BYTE *)(v16 + 27) )
    {
      *(_QWORD *)(v16 + 200) = a4;
      *(_QWORD *)(v16 + 208) = VidSchPostSignalCrossAdapter;
      VidSchiAddSyncObjectToAdapterList(a1, v16);
      VidSchiAddSyncObjectToCrossAdapterInfo(v16);
    }
    v22 = bTracingEnabled == 0;
    *v7 = v16;
    if ( v22 )
      return 0LL;
    v23 = *(_QWORD *)(a1 + 16);
    if ( *a3 == 1 )
    {
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpt(
          a3[18],
          (__int64)&EventCreateSynchronizationMutex,
          v19,
          v23,
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
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpqq(
          a3[18],
          (__int64)&EventCreateSemaphore,
          v19,
          v23,
          v16,
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
        v36 = &EventCreateFence;
        goto LABEL_57;
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
            v19,
            v23,
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
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(HandleInformation) = 0;
            McTemplateK0ppqqppqi(
              a3[2],
              (__int64)&EventCreatePeriodicMonitoredFence,
              v19,
              v23,
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
          v35 = WdLogNewEntry5_WdAssertion(*a3 - 5, v18);
          *(_QWORD *)(v35 + 24) = 969LL;
          WdLogEvent5_WdAssertion(v35);
        }
        return 0LL;
      }
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v36 = &EventCreateMonitoredFence;
LABEL_57:
        LODWORD(HandleInformation) = 0;
        McTemplateK0ppqqpx(a3[18], (__int64)v36, v19, v23, v16, HandleInformation, a3[1], a3[18], *((_QWORD *)a3 + 1));
      }
    }
    return 0LL;
  }
  if ( (_DWORD)v20 == 3 )
  {
    *(_DWORD *)(v16 + 44) = 2;
    *(_BYTE *)(v16 + 25) = 1;
    v21 = *((_QWORD *)a3 + 1);
    *(_QWORD *)(v16 + 64) = v21;
    goto LABEL_8;
  }
  if ( (_DWORD)v20 != 2 )
  {
    if ( (_DWORD)v20 == 4 )
    {
      if ( (a3[1] & 1) == 0 )
      {
        *(_DWORD *)(v16 + 44) = 3;
        *(_BYTE *)(v16 + 25) = 0;
        if ( *(_BYTE *)(v16 + 31) )
        {
          v21 = *((_QWORD *)a3 + 1);
          goto LABEL_9;
        }
        v31 = ObReferenceObjectByHandle(
                *((HANDLE *)a3 + 1),
                0x1F0003u,
                (POBJECT_TYPE)ExEventObjectType,
                1,
                (PVOID *)&Object,
                0LL);
        v32 = Object;
        *(_QWORD *)(v16 + 48) = Object;
        v28 = v31;
        if ( v31 >= 0 )
          goto LABEL_10;
        v33 = WdLogNewEntry5_WdWarning(v32, v18);
        *(_QWORD *)(v33 + 24) = v28;
        WdLogEvent5_WdWarning(v33);
        goto LABEL_47;
      }
      v30 = WdLogNewEntry5_WdAssertion(v20, v18);
      *(_QWORD *)(v30 + 24) = -1073741811LL;
    }
    else
    {
      if ( (unsigned int)(v20 - 5) <= 1 )
      {
        *(_BYTE *)(v16 + 25) = 1;
        *(_DWORD *)(v16 + 44) = 5 - ((_DWORD)v20 != 6);
        *(_BYTE *)(v16 + 30) = (a3[1] & 0x80) != 0;
        v25 = a7;
        if ( a7 )
        {
          *(_OWORD *)(v16 + 48) = *a7;
          *(_OWORD *)(v16 + 64) = v25[1];
          *(_QWORD *)(v16 + 80) = *((_QWORD *)v25 + 4);
          v26 = *(_BYTE *)(a2 + 248);
LABEL_23:
          *(_BYTE *)(v16 + 29) = v26;
          goto LABEL_10;
        }
        v27 = 0LL;
        if ( *a3 != 6 )
          v27 = *((_QWORD *)a3 + 1);
        LODWORD(v28) = VIDMM_GLOBAL::AllocateFenceStorageSlot(
                         (struct VIDMM_MONITORED_FENCE_STORAGE *)(v16 + 48),
                         *(_BYTE *)(v16 + 24) != 0,
                         0,
                         a2 == 0,
                         v27,
                         *(_BYTE *)(a1 + 48) != 0);
        if ( (int)v28 >= 0 )
        {
          *(_QWORD *)(v16 + 72) = a5;
          v26 = *(_BYTE *)(a1 + 48);
          goto LABEL_23;
        }
        goto LABEL_47;
      }
      v30 = WdLogNewEntry5_WdAssertion(v20, v18);
    }
    WdLogEvent5_WdAssertion(v30);
    LODWORD(v28) = -1073741811;
LABEL_47:
    ExFreePoolWithTag((PVOID)v16, 0);
    return (unsigned int)v28;
  }
  if ( a3[3] <= a3[2] )
  {
    *(_DWORD *)(v16 + 44) = 1;
    *(_BYTE *)(v16 + 25) = 0;
    *(_DWORD *)(v16 + 48) = a3[3];
    *(_DWORD *)(v16 + 56) = a3[3];
    *(_DWORD *)(v16 + 52) = a3[2];
    goto LABEL_10;
  }
  v34 = WdLogNewEntry5_WdAssertion(v20, v18);
  WdLogEvent5_WdAssertion(v34);
  ExFreePoolWithTag((PVOID)v16, 0);
  return 3221225485LL;
}
