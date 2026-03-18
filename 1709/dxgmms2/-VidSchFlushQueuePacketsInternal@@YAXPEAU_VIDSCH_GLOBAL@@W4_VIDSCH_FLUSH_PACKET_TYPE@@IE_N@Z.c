/*
 * XREFs of ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00155DC
 * Callers:
 *     VidSchFlushQueuePackets @ 0x1C00155C0 (VidSchFlushQueuePackets.c)
 *     VidSchFlushPresentReferencesAndDisableOverlays @ 0x1C00B46E0 (VidSchFlushPresentReferencesAndDisableOverlays.c)
 * Callees:
 *     VidSchiSetFlipDevice @ 0x1C0004150 (VidSchiSetFlipDevice.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C0008100 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiClearFlipDevice @ 0x1C000EB1C (VidSchiClearFlipDevice.c)
 *     VidSchiDecrementDeviceReference @ 0x1C000EC50 (VidSchiDecrementDeviceReference.c)
 *     VidSchiIsFlipQueuePacket @ 0x1C00160D4 (VidSchiIsFlipQueuePacket.c)
 *     VidSchiFlushQueuePacket @ 0x1C002830C (VidSchiFlushQueuePacket.c)
 */

void __fastcall VidSchFlushQueuePacketsInternal(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // esi
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r13d
  KSPIN_LOCK *v11; // r15
  __int64 ***v12; // rbx
  __int64 ***i; // rdx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 **v19; // r12
  int v20; // r14d
  __int64 v21; // r15
  unsigned int v22; // r8d
  unsigned int v23; // ecx
  __int64 v24; // rdx
  _QWORD *v25; // r10
  _QWORD *j; // r8
  _QWORD *v27; // r9
  _QWORD *k; // rax
  _QWORD *v29; // r9
  _QWORD *m; // rax
  __int64 *v31; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // r15
  _QWORD *n; // rsi
  _QWORD *ii; // rdi
  _QWORD *jj; // rax
  _QWORD *kk; // rax
  __int64 v39; // rcx
  __int64 ***v40; // r8
  __int64 **v41; // rcx
  _QWORD *v42; // rcx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 *v45; // rcx
  __int64 **v46; // rcx
  _QWORD *v47; // rbx
  _QWORD *v48; // rbx
  __int64 *v49; // [rsp+40h] [rbp-40h] BYREF
  __int64 **v50; // [rsp+48h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v52; // [rsp+68h] [rbp-18h] BYREF
  int v53; // [rsp+D0h] [rbp+50h]
  char v54; // [rsp+D8h] [rbp+58h]

  v5 = -1;
  if ( a3 < *(_DWORD *)(a1 + 40) )
    v5 = a3;
  if ( VidSchiAcceptsIncomingWork(a1) )
  {
    if ( v8 == 1 )
    {
      v10 = 0;
      v50 = &v49;
      v11 = (KSPIN_LOCK *)(v9 + 1888);
      v53 = 0;
      v49 = (__int64 *)&v49;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1888), &LockHandle);
      v12 = (__int64 ***)(a1 + 256);
      for ( i = *(__int64 ****)(a1 + 256); i != v12; i = (__int64 ***)*i )
      {
        _m_prefetchw(i - 7);
        v14 = (signed __int64)*(i - 7);
        while ( v14 )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)i - 7, v14 + 1, v14);
          if ( v15 == v14 )
          {
            v53 = ++v10;
            goto LABEL_10;
          }
        }
        v40 = (__int64 ***)*i;
        if ( (*i)[1] != (__int64 *)i || (v41 = i[1], *v41 != (__int64 *)i) )
          __fastfail(3u);
        *v41 = (__int64 *)v40;
        v40[1] = v41;
        v42 = v50;
        if ( *v50 != (__int64 *)&v49 )
          __fastfail(3u);
        i[1] = v50;
        *i = &v49;
        *v42 = i;
        v50 = (__int64 **)i;
LABEL_10:
        ;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v19 = *v12;
      v20 = 0;
      if ( *v12 != (__int64 **)v12 )
      {
        do
        {
          v21 = (__int64)(v19 - 10);
          v54 = 0;
          v19 = (__int64 **)*v19;
          ++v20;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
          v22 = *(_DWORD *)(a1 + 40);
          v23 = 0;
          if ( v22 )
          {
            v24 = a1 + 3008;
            while ( v5 != v23 && v5 != -1 || *(_QWORD *)(*(_QWORD *)v24 + 16LL) != v21 )
            {
              ++v23;
              v24 += 8LL;
              if ( v23 >= v22 )
                goto LABEL_18;
            }
            v54 = 1;
          }
LABEL_18:
          v25 = (_QWORD *)(v21 + 64);
          for ( j = *(_QWORD **)(v21 + 64); j != v25; j = (_QWORD *)*j )
          {
            v27 = j + 78;
            for ( k = (_QWORD *)j[78]; k != v27; k = *(_QWORD **)(v39 + 32) )
            {
              if ( (unsigned __int8)VidSchiIsFlipQueuePacket(k - 4, v5) )
                *(_DWORD *)(v39 + 64) |= 0x20u;
            }
            v29 = j + 80;
            for ( m = (_QWORD *)j[80]; m != v29; m = *(_QWORD **)(v43 + 32) )
            {
              if ( (unsigned __int8)VidSchiIsFlipQueuePacket(m - 4, v5) )
                *(_DWORD *)(v43 + 64) |= 0x20u;
            }
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v54 )
          {
            if ( v5 == -1 )
              VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)a1, v21, 6u);
            else
              VidSchiSetFlipDevice((struct _VIDSCH_GLOBAL *)a1, v5, v21, 0, 6u, 0, a5);
          }
          VidSchiDecrementDeviceReference((char *)v21, 0);
        }
        while ( v19 != (__int64 **)v12 );
        v10 = v53;
        v11 = (KSPIN_LOCK *)(a1 + 1888);
      }
      if ( v20 != v10 )
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
        v44[5] = v10;
        v44[6] = v20;
        v44[3] = 281LL;
        v44[4] = 2304LL;
        v44[7] = a1;
        WdLogEvent5_WdCriticalError(v44);
        JUMPOUT(0x1C001FD11LL);
      }
      KeAcquireInStackQueuedSpinLock(v11, &LockHandle);
      while ( 1 )
      {
        v31 = v49;
        if ( v49 == (__int64 *)&v49 )
          break;
        if ( (__int64 **)v49[1] != &v49 || (v45 = (__int64 *)*v49, *(__int64 **)(*v49 + 8) != v49) )
          __fastfail(3u);
        v49 = (__int64 *)*v49;
        v45[1] = (__int64)&v49;
        v46 = *(__int64 ***)(a1 + 264);
        if ( *v46 != (__int64 *)v12 )
          __fastfail(3u);
        *v31 = (__int64)v12;
        v31[1] = (__int64)v46;
        *v46 = v31;
        *(_QWORD *)(a1 + 264) = v31;
      }
      p_LockHandle = &LockHandle;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1888), &v52);
      v34 = (_QWORD *)(a1 + 256);
      for ( n = *(_QWORD **)(a1 + 256); n != v34; n = (_QWORD *)*n )
      {
        for ( ii = (_QWORD *)*(n - 2); ii != n - 2; ii = (_QWORD *)*ii )
        {
          for ( jj = (_QWORD *)ii[78]; jj != ii + 78; jj = (_QWORD *)v47[4] )
          {
            v47 = jj - 4;
            VidSchiFlushQueuePacket(v33, jj - 4, a2);
          }
          for ( kk = (_QWORD *)ii[80]; kk != ii + 80; kk = (_QWORD *)v48[4] )
          {
            v48 = kk - 4;
            VidSchiFlushQueuePacket(v33, kk - 4, a2);
          }
        }
      }
      p_LockHandle = &v52;
    }
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
  }
}
