/*
 * XREFs of VidSchDestroySyncObject @ 0x1C006B960
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C004CD60 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00929F4 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009ED0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchTimeoutSyncObject @ 0x1C0012BAC (VidSchTimeoutSyncObject.c)
 *     Template_ppqqppqi @ 0x1C001474C (Template_ppqqppqi.c)
 *     Template_ppqqpqq @ 0x1C0014814 (Template_ppqqpqq.c)
 *     Template_ppqqpt @ 0x1C00148E0 (Template_ppqqpt.c)
 *     Template_ppqqpx @ 0x1C001499C (Template_ppqqpx.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

__int64 __fastcall VidSchDestroySyncObject(int *P, __int64 a2)
{
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  const EVENT_DESCRIPTOR *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // [rsp+38h] [rbp-80h]
  __int64 v12; // [rsp+40h] [rbp-78h]
  _DWORD v13[20]; // [rsp+60h] [rbp-58h] BYREF

  if ( P )
  {
    if ( P[8] > 1 )
      VidSchTimeoutSyncObject((__int64)P);
    v3 = *((_QWORD *)P + 2);
    if ( v3 )
    {
      if ( !bTracingEnabled )
        goto LABEL_6;
      v6 = *(_QWORD *)(*((_QWORD *)P + 1) + 16LL);
      if ( *(_DWORD *)(v3 + 144) == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_ppqqpt(
            *(unsigned int *)(v3 + 216),
            &EventDestroySynchronizationMutex,
            v3,
            v6,
            P,
            1,
            *(_DWORD *)(v3 + 148),
            *(unsigned int *)(v3 + 216),
            *(_DWORD *)(v3 + 152));
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v3 + 144) == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_ppqqpqq(
            *(unsigned int *)(v3 + 216),
            &EventDestroySemaphore,
            v3,
            v6,
            P,
            1,
            *(_DWORD *)(v3 + 148),
            *(unsigned int *)(v3 + 216),
            *(_DWORD *)(v3 + 152),
            *(_DWORD *)(v3 + 156));
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v3 + 144) == 3 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_6;
        v7 = (const EVENT_DESCRIPTOR *)&EventDestroyFence;
      }
      else
      {
        if ( *(_DWORD *)(v3 + 144) == 4 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_ppqqpx(
              *(unsigned int *)(v3 + 216),
              &EventDestroyCPUNotification,
              v3,
              v6,
              P,
              1,
              *(_DWORD *)(v3 + 148),
              *(unsigned int *)(v3 + 216),
              *(_QWORD *)(v3 + 152));
          goto LABEL_6;
        }
        if ( *(_DWORD *)(v3 + 144) != 5 )
        {
          if ( *(_DWORD *)(v3 + 144) == 6 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_ppqqppqi(
                *(unsigned int *)(v3 + 152),
                &EventDestroyPeriodicMonitoredFence,
                v3,
                v6,
                P,
                1,
                *(_DWORD *)(v3 + 148),
                *(unsigned int *)(v3 + 216),
                *(unsigned int *)(v3 + 152),
                *(_DWORD *)(v3 + 156),
                *(_QWORD *)(v3 + 160));
          }
          else
          {
            v10 = WdLogNewEntry5_WdAssertion((unsigned int)(*(_DWORD *)(v3 + 144) - 5), a2);
            *(_QWORD *)(v10 + 24) = 909LL;
            WdLogEvent5_WdAssertion(v10);
          }
          goto LABEL_6;
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        {
LABEL_6:
          VidSchiReleaseSyncObjectReference((char *)P);
          return 0LL;
        }
        v7 = (const EVENT_DESCRIPTOR *)&EventDestroyMonitoredFence;
      }
      v8 = *(unsigned int *)(v3 + 216);
      v12 = *(_QWORD *)(v3 + 152);
      v9 = *(_DWORD *)(v3 + 148);
      v11 = v8;
    }
    else
    {
      memset(v13, 0, sizeof(v13));
      if ( !bTracingEnabled )
        goto LABEL_6;
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 1) + 8LL) + 16LL);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_6;
      v7 = (const EVENT_DESCRIPTOR *)&EventDestroyMonitoredFence;
      v8 = 4294962295LL;
      v12 = 4294962295LL;
      v11 = v13[18];
      v9 = v13[1];
    }
    Template_ppqqpx(v8, v7, v3, v6, P, 1, v9, v11, v12);
    goto LABEL_6;
  }
  v5 = WdLogNewEntry5_WdAssertion(0LL, a2);
  *(_QWORD *)(v5 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v5);
  return 3221225485LL;
}
