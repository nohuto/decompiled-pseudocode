/*
 * XREFs of VidSchDestroySyncObject @ 0x1C006F6F0
 * Callers:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C005134C (--1VIDMM_DEVICE@@QEAA@XZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009A5F8 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B3C0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchTimeoutSyncObject @ 0x1C0013ED4 (VidSchTimeoutSyncObject.c)
 *     McTemplateK0ppqqpx @ 0x1C0016C40 (McTemplateK0ppqqpx.c)
 *     McTemplateK0ppqqppqi @ 0x1C0016CF8 (McTemplateK0ppqqppqi.c)
 *     McTemplateK0ppqqpqq @ 0x1C0016DD0 (McTemplateK0ppqqpqq.c)
 *     McTemplateK0ppqqpt @ 0x1C0016E8C (McTemplateK0ppqqpt.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

__int64 __fastcall VidSchDestroySyncObject(int *P, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  __int64 v8; // rcx
  int v9; // eax
  void *v10; // rdx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // [rsp+38h] [rbp-21h]
  __int64 v25; // [rsp+38h] [rbp-21h]
  int v26; // [rsp+40h] [rbp-19h]
  __int64 v27; // [rsp+40h] [rbp-19h]
  __int64 v28; // [rsp+40h] [rbp-19h]
  int v29; // [rsp+40h] [rbp-19h]
  int v30; // [rsp+48h] [rbp-11h]
  int v31; // [rsp+48h] [rbp-11h]
  __int64 v32; // [rsp+50h] [rbp-9h]
  _QWORD v33[10]; // [rsp+60h] [rbp+7h] BYREF

  if ( P )
  {
    if ( P[8] > 1 )
      VidSchTimeoutSyncObject((__int64)P);
    v3 = *((_QWORD *)P + 2);
    if ( v3 )
    {
      if ( !bTracingEnabled )
        goto LABEL_10;
      v4 = *(_QWORD *)(*((_QWORD *)P + 1) + 16LL);
      if ( *(_DWORD *)(v3 + 160) == 1 )
      {
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          v5 = *(unsigned int *)(v3 + 232);
          v26 = *(_DWORD *)(v3 + 168);
          v6 = *(_DWORD *)(v3 + 164);
LABEL_9:
          McTemplateK0ppqqpt(v5, (__int64)&EventDestroySynchronizationMutex, v3, v4, P, 1, v6, v5, v26);
        }
LABEL_10:
        VidSchiReleaseSyncObjectReference((char *)P);
        return 0LL;
      }
      if ( *(_DWORD *)(v3 + 160) != 2 )
      {
        if ( *(_DWORD *)(v3 + 160) != 3 )
        {
          if ( *(_DWORD *)(v3 + 160) != 4 )
          {
            v8 = (unsigned int)(*(_DWORD *)(v3 + 160) - 5);
            if ( *(_DWORD *)(v3 + 160) == 5 )
            {
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                goto LABEL_10;
              v8 = *(unsigned int *)(v3 + 232);
              v27 = *(_QWORD *)(v3 + 168);
              v9 = *(_DWORD *)(v3 + 164);
              v24 = v8;
              goto LABEL_17;
            }
            if ( *(_DWORD *)(v3 + 160) == 6 )
            {
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                goto LABEL_10;
              v17 = *(unsigned int *)(v3 + 168);
              v18 = *(unsigned int *)(v3 + 232);
              v32 = *(_QWORD *)(v3 + 176);
              v30 = *(_DWORD *)(v3 + 172);
              v19 = *(_DWORD *)(v3 + 164);
              goto LABEL_40;
            }
            goto LABEL_48;
          }
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_10;
          v8 = *(unsigned int *)(v3 + 232);
          v28 = *(_QWORD *)(v3 + 168);
          v20 = *(_DWORD *)(v3 + 164);
          v25 = v8;
          goto LABEL_51;
        }
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_10;
        v8 = *(unsigned int *)(v3 + 232);
        v27 = *(_QWORD *)(v3 + 168);
        v9 = *(_DWORD *)(v3 + 164);
        v24 = v8;
        goto LABEL_52;
      }
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_10;
      v21 = *(unsigned int *)(v3 + 232);
      v31 = *(_DWORD *)(v3 + 172);
      v29 = *(_DWORD *)(v3 + 168);
      v22 = *(_DWORD *)(v3 + 164);
    }
    else
    {
      memset(v33, 0, sizeof(v33));
      if ( P[10] == 4 )
      {
        v3 = 4294962295LL;
        v11 = 5;
        v33[1] = 4294962295LL;
      }
      else
      {
        v3 = v33[1];
        v11 = 3;
      }
      if ( !bTracingEnabled )
        goto LABEL_10;
      v8 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL);
      v4 = *(_QWORD *)(v8 + 16);
      v12 = v11 - 1;
      if ( !v12 )
      {
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_10;
        v5 = LODWORD(v33[9]);
        v26 = v33[1];
        v6 = HIDWORD(v33[0]);
        goto LABEL_9;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            a2 = (unsigned int)(v15 - 1);
            if ( !(_DWORD)a2 )
            {
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                goto LABEL_10;
              v27 = v3;
              v24 = LODWORD(v33[9]);
              v9 = HIDWORD(v33[0]);
LABEL_17:
              v10 = &EventDestroyMonitoredFence;
LABEL_18:
              McTemplateK0ppqqpx(v8, (__int64)v10, v3, v4, P, 1, v9, v24, v27);
              goto LABEL_10;
            }
            if ( (_DWORD)a2 == 1 )
            {
              if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                goto LABEL_10;
              v17 = LODWORD(v33[1]);
              v18 = LODWORD(v33[9]);
              v32 = v33[2];
              v30 = HIDWORD(v33[1]);
              v19 = HIDWORD(v33[0]);
LABEL_40:
              McTemplateK0ppqqppqi(
                v17,
                (__int64)&EventDestroyPeriodicMonitoredFence,
                v3,
                v4,
                P,
                1,
                v19,
                v18,
                v17,
                v30,
                v32);
              goto LABEL_10;
            }
LABEL_48:
            v23 = WdLogNewEntry5_WdAssertion(v8, a2);
            *(_QWORD *)(v23 + 24) = 911LL;
            WdLogEvent5_WdAssertion(v23);
            goto LABEL_10;
          }
          if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            goto LABEL_10;
          v28 = v3;
          v25 = LODWORD(v33[9]);
          v20 = HIDWORD(v33[0]);
LABEL_51:
          McTemplateK0ppqqpx(v8, (__int64)&EventDestroyCPUNotification, v3, v4, P, 1, v20, v25, v28);
          goto LABEL_10;
        }
        if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
          goto LABEL_10;
        v27 = v3;
        v24 = LODWORD(v33[9]);
        v9 = HIDWORD(v33[0]);
LABEL_52:
        v10 = &EventDestroyFence;
        goto LABEL_18;
      }
      if ( ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_10;
      v21 = LODWORD(v33[9]);
      v31 = HIDWORD(v33[1]);
      v29 = v33[1];
      v22 = HIDWORD(v33[0]);
    }
    McTemplateK0ppqqpqq(v21, (__int64)&EventDestroySemaphore, v3, v4, P, 1, v22, v21, v29, v31);
    goto LABEL_10;
  }
  v16 = WdLogNewEntry5_WdAssertion(0LL, a2);
  *(_QWORD *)(v16 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v16);
  return 3221225485LL;
}
