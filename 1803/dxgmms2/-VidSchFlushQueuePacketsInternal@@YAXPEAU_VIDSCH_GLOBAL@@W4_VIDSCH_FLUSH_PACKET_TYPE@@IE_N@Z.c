/*
 * XREFs of ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C0015A0C
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C00159F0 (VidSchFlushQueuePackets.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00BD290 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0005D0C (VidSchiSetFlipDevice.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C0008290 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiClearFlipDevice @ 0x1C0012C3C (VidSchiClearFlipDevice.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0012CAC (VidSchiDecrementDeviceReference.c)
 *     VidSchiFlushQueuePacket @ 0x1C002B154 (VidSchiFlushQueuePacket.c)
 *     VidSchiIsFlipQueuePacket @ 0x1C002B198 (VidSchiIsFlipQueuePacket.c)
 */

void __fastcall VidSchFlushQueuePacketsInternal(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // r14d
  int v8; // edx
  __int64 v9; // rcx
  __int64 ***v10; // rdi
  int v11; // r15d
  __int64 ***i; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rtt
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 ***v18; // r13
  int v19; // r12d
  __int64 ***v20; // rax
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 **v24; // r11
  __int64 **j; // r9
  __int64 *v26; // r10
  __int64 *k; // r8
  __int64 *v28; // r10
  __int64 *m; // r8
  __int64 *v30; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  __int64 v32; // rcx
  __int64 ***n; // rsi
  __int64 ***ii; // rbx
  __int64 ***jj; // r14
  __int64 ***kk; // r14
  __int64 ***v37; // rax
  __int64 **v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // r8
  int v42; // eax
  int v43; // eax
  __int64 v44; // rcx
  _QWORD *v45; // r8
  int v46; // eax
  int v47; // eax
  _QWORD *v48; // rax
  __int64 *v49; // rcx
  __int64 **v50; // rcx
  __int64 *v51; // [rsp+40h] [rbp-40h] BYREF
  __int64 **v52; // [rsp+48h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v54; // [rsp+68h] [rbp-18h] BYREF
  __int64 ***P; // [rsp+C0h] [rbp+40h]
  int v56; // [rsp+D0h] [rbp+50h]
  char v57; // [rsp+D8h] [rbp+58h]

  v5 = -1;
  if ( a3 < *(_DWORD *)(a1 + 40) )
    v5 = a3;
  if ( VidSchiAcceptsIncomingWork(a1) )
  {
    v10 = (__int64 ***)(v9 + 272);
    if ( v8 == 1 )
    {
      v11 = 0;
      v52 = &v51;
      v56 = 0;
      v51 = (__int64 *)&v51;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1904), &LockHandle);
      for ( i = (__int64 ***)*v10; i != v10; i = (__int64 ***)*i )
      {
        _m_prefetchw(i - 10);
        v13 = (signed __int64)*(i - 10);
        while ( v13 )
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)i - 10, v13 + 1, v13);
          if ( v14 == v13 )
          {
            v56 = ++v11;
            goto LABEL_10;
          }
        }
        v37 = (__int64 ***)*i;
        if ( (*i)[1] != (__int64 *)i || (v38 = i[1], *v38 != (__int64 *)i) )
          __fastfail(3u);
        *v38 = (__int64 *)v37;
        v37[1] = v38;
        v39 = v52;
        if ( *v52 != (__int64 *)&v51 )
          __fastfail(3u);
        i[1] = v52;
        *i = &v51;
        *v39 = i;
        v52 = (__int64 **)i;
LABEL_10:
        ;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v18 = (__int64 ***)*v10;
      v19 = 0;
      if ( *v10 != (__int64 **)v10 )
      {
        do
        {
          v20 = v18 - 13;
          v57 = 0;
          v18 = (__int64 ***)*v18;
          P = v20;
          ++v19;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
          v21 = *(_DWORD *)(a1 + 40);
          v22 = 0;
          if ( v21 )
          {
            v23 = a1 + 3032;
            while ( v5 != v22 && v5 != -1 || *(__int64 ****)(*(_QWORD *)v23 + 16LL) != P )
            {
              ++v22;
              v23 += 8LL;
              if ( v22 >= v21 )
                goto LABEL_19;
            }
            v57 = 1;
          }
LABEL_19:
          v24 = (__int64 **)(P + 9);
          for ( j = P[9]; j != v24; j = (__int64 **)*j )
          {
            v26 = j + 79;
            for ( k = j[79]; k != v26; k = (_QWORD *)*v41 )
            {
              if ( (unsigned __int8)VidSchiIsFlipQueuePacket(k - 4, v5) )
              {
                v42 = *(_DWORD *)(v40 + 64);
                if ( (v42 & 0x20) == 0 )
                {
                  v43 = v42 | 0x20;
                  *(_DWORD *)(v40 + 64) = v43;
                  if ( *(_DWORD *)(v40 + 48) == 3 && (v43 & 2) == 0 && (*(_DWORD *)(v40 + 72) & 0xC00) != 0x400 )
                    ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 88) + 104LL) + 8LL * *(unsigned int *)(v40 + 160) + 360);
                }
              }
            }
            v28 = j + 81;
            for ( m = j[81]; m != v28; m = (_QWORD *)*v45 )
            {
              if ( (unsigned __int8)VidSchiIsFlipQueuePacket(m - 4, v5) )
              {
                v46 = *(_DWORD *)(v44 + 64);
                if ( (v46 & 0x20) == 0 )
                {
                  v47 = v46 | 0x20;
                  *(_DWORD *)(v44 + 64) = v47;
                  if ( *(_DWORD *)(v44 + 48) == 3 && (v47 & 2) == 0 && (*(_DWORD *)(v44 + 72) & 0xC00) != 0x400 )
                    ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 88) + 104LL) + 8LL * *(unsigned int *)(v44 + 160) + 360);
                }
              }
            }
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v57 )
          {
            if ( v5 == -1 )
              VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)a1, (__int64)P, 6u);
            else
              VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)a1, v5, (__int64)P, 0, 6u, 0, a5);
          }
          VidSchiDecrementDeviceReference((char *)P, 0);
        }
        while ( v18 != v10 );
        v11 = v56;
      }
      if ( v19 != v11 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
        v48[5] = v11;
        v48[6] = v19;
        v48[3] = 281LL;
        v48[4] = 2304LL;
        v48[7] = a1;
        WdLogEvent5_WdCriticalError(v48);
        JUMPOUT(0x1C0019CB9LL);
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
      while ( 1 )
      {
        v30 = v51;
        if ( v51 == (__int64 *)&v51 )
          break;
        if ( (__int64 **)v51[1] != &v51 || (v49 = (__int64 *)*v51, *(__int64 **)(*v51 + 8) != v51) )
          __fastfail(3u);
        v51 = (__int64 *)*v51;
        v49[1] = (__int64)&v51;
        v50 = v10[1];
        if ( *v50 != (__int64 *)v10 )
          __fastfail(3u);
        *v30 = (__int64)v10;
        v30[1] = (__int64)v50;
        *v50 = v30;
        v10[1] = (__int64 **)v30;
      }
      p_LockHandle = &LockHandle;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1904), &v54);
      for ( n = (__int64 ***)*v10; n != v10; n = (__int64 ***)*n )
      {
        for ( ii = (__int64 ***)*(n - 4); ii != n - 4; ii = (__int64 ***)*ii )
        {
          for ( jj = (__int64 ***)ii[79]; jj != ii + 79; jj = (__int64 ***)*jj )
            VidSchiFlushQueuePacket(v32, jj - 4, a2);
          for ( kk = (__int64 ***)ii[81]; kk != ii + 81; kk = (__int64 ***)*kk )
            VidSchiFlushQueuePacket(v32, kk - 4, a2);
        }
      }
      p_LockHandle = &v54;
    }
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
  }
}
