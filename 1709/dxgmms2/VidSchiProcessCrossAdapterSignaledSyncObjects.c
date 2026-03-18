/*
 * XREFs of VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C00283FC
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009D80 (VidSchiScheduleCommandToRun.c)
 *     VidSchFlushAdapter @ 0x1C00B4320 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C000DE7C (VidSchiCompleteSignalCommmand.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

void __fastcall VidSchiProcessCrossAdapterSignaledSyncObjects(unsigned __int64 a1, char a2)
{
  unsigned __int64 v4; // rax
  __int64 ***v5; // rcx
  __int64 **v6; // rdx
  __int64 ***v7; // rcx
  _QWORD *v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  int v12; // eax
  __int64 v13; // rsi
  bool v14; // zf
  volatile signed __int32 *v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // [rsp+20h] [rbp-E0h] BYREF
  __int64 **v19; // [rsp+28h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+30h] [rbp-D0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[116]; // [rsp+60h] [rbp-A0h] BYREF

  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
  v19 = &v18;
  v18 = (__int64 *)&v18;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2984), &v20);
  v4 = a1 + 2968;
  while ( *(_QWORD *)v4 != v4 )
  {
    v5 = *(__int64 ****)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *v5, (*v5)[1] != (__int64 *)v5) )
      __fastfail(3u);
    *(_QWORD *)v4 = v6;
    v6[1] = (__int64 *)v4;
    *v5 = 0LL;
    v5[1] = 0LL;
    v7 = v5 + 2;
    v8 = v19;
    if ( *v19 != (__int64 *)&v18 )
      __fastfail(3u);
    v7[1] = v19;
    *v7 = &v18;
    *v8 = v7;
    --*(_DWORD *)(a1 + 3000);
    v19 = (__int64 **)v7;
  }
  KeReleaseInStackQueuedSpinLock(&v20);
  while ( 1 )
  {
    v9 = v18;
    if ( v18 == (__int64 *)&v18 )
      break;
    if ( (__int64 **)v18[1] != &v18 || (v10 = (__int64 *)*v18, *(__int64 **)(*v18 + 8) != v18) )
      __fastfail(3u);
    v18 = (__int64 *)*v18;
    v10[1] = (__int64)&v18;
    v11 = v9 - 19;
    *v9 = 0LL;
    v9[1] = 0LL;
    v12 = *((_DWORD *)v9 - 28);
    v13 = *(_QWORD *)(a1 + 224);
    if ( v12 == 2 )
    {
      memset(v22, 0, sizeof(v22));
      v14 = *((_BYTE *)v11 + 27) == 0;
      LODWORD(v22[0]) = 1953189969;
      LODWORD(v22[6]) = 5;
      v22[11] = v13;
      if ( v14 )
        v17 = v11[8];
      else
        v17 = *(_QWORD *)(v11[23] + 32);
      v22[69] = v17;
      v22[37] = v11;
      HIDWORD(v22[36]) = 1;
      VidSchiCompleteSignalCommmand((__int64)v22, 0LL);
    }
    else if ( (unsigned int)(v12 - 4) <= 1 )
    {
      if ( !*(_BYTE *)(v11[23] + 32) )
      {
        v16 = a1;
        goto LABEL_25;
      }
      if ( !*((_BYTE *)v11 + 28) )
      {
        v14 = *((_BYTE *)v11 + 27) == 0;
        *((_BYTE *)v11 + 28) = 1;
        if ( v14 )
        {
          v15 = (volatile signed __int32 *)v11[7];
          if ( *((_BYTE *)v11 + 29) )
            *(_QWORD *)v15 = -1LL;
          else
            _InterlockedExchangeAdd(v15, 0x3FFFFFFFu);
        }
        v16 = v11[1];
LABEL_25:
        VidSchiUnwaitMonitoredFences(v16);
      }
    }
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
