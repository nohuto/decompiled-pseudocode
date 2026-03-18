/*
 * XREFs of VidSchFlushQueuePackets @ 0x1C0013350
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiClearFlipDevice @ 0x1C00022EC (VidSchiClearFlipDevice.c)
 *     VidSchiSetFlipDevice @ 0x1C0003F40 (VidSchiSetFlipDevice.c)
 *     VidSchiAcceptsIncomingWork @ 0x1C00072D0 (VidSchiAcceptsIncomingWork.c)
 *     VidSchiDecrementDeviceReference @ 0x1C00103AC (VidSchiDecrementDeviceReference.c)
 *     VidSchiIsFlipQueuePacket @ 0x1C0013320 (VidSchiIsFlipQueuePacket.c)
 *     VidSchiFlushQueuePacket @ 0x1C00262BC (VidSchiFlushQueuePacket.c)
 */

void __fastcall VidSchFlushQueuePackets(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r13d
  KSPIN_LOCK *v9; // r14
  __int64 ***v10; // rbx
  __int64 ***i; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 **v17; // r12
  int v18; // r15d
  char *v19; // r14
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  char *v22; // rdx
  _QWORD *v23; // r10
  _QWORD *j; // r8
  _QWORD *v25; // r9
  _QWORD *k; // rax
  _QWORD *v27; // r9
  _QWORD *m; // rax
  __int64 *v29; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  __int64 v31; // rcx
  char *v32; // r15
  char *n; // rsi
  char *ii; // rdi
  char *jj; // rax
  char *kk; // rax
  __int64 v37; // rcx
  __int64 ***v38; // r8
  __int64 **v39; // rcx
  _QWORD *v40; // rcx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 *v43; // rcx
  __int64 **v44; // rcx
  char *v45; // rbx
  char *v46; // rbx
  __int64 *v47; // [rsp+30h] [rbp-40h] BYREF
  __int64 **v48; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v50; // [rsp+58h] [rbp-18h] BYREF
  int v51; // [rsp+B0h] [rbp+40h]
  char v52; // [rsp+C0h] [rbp+50h]

  v3 = -1;
  if ( a3 < *((_DWORD *)a1 + 10) )
    v3 = a3;
  if ( VidSchiAcceptsIncomingWork((__int64)a1) )
  {
    if ( v6 == 1 )
    {
      v8 = 0;
      v48 = &v47;
      v9 = (KSPIN_LOCK *)(v7 + 1880);
      v51 = 0;
      v47 = (__int64 *)&v47;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1880), &LockHandle);
      v10 = (__int64 ***)((char *)a1 + 248);
      for ( i = (__int64 ***)*((_QWORD *)a1 + 31); i != v10; i = (__int64 ***)*i )
      {
        _m_prefetchw(i - 7);
        v12 = (signed __int64)*(i - 7);
        while ( v12 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)i - 7, v12 + 1, v12);
          if ( v13 == v12 )
          {
            v51 = ++v8;
            goto LABEL_10;
          }
        }
        v38 = (__int64 ***)*i;
        v39 = i[1];
        if ( (*i)[1] != (__int64 *)i || *v39 != (__int64 *)i )
          __fastfail(3u);
        *v39 = (__int64 *)v38;
        v38[1] = v39;
        v40 = v48;
        if ( *v48 != (__int64 *)&v47 )
          __fastfail(3u);
        i[1] = v48;
        *i = &v47;
        *v40 = i;
        v48 = (__int64 **)i;
LABEL_10:
        ;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v17 = *v10;
      v18 = 0;
      if ( *v10 != (__int64 **)v10 )
      {
        do
        {
          v19 = (char *)(v17 - 10);
          v52 = 0;
          v17 = (__int64 **)*v17;
          ++v18;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 235, &LockHandle);
          v20 = *((_DWORD *)a1 + 10);
          v21 = 0;
          if ( v20 )
          {
            v22 = (char *)a1 + 2992;
            while ( v3 != v21 && v3 != -1 || *(char **)(*(_QWORD *)v22 + 16LL) != v19 )
            {
              ++v21;
              v22 += 8;
              if ( v21 >= v20 )
                goto LABEL_19;
            }
            v52 = 1;
          }
LABEL_19:
          v23 = v19 + 64;
          for ( j = (_QWORD *)*((_QWORD *)v19 + 8); j != v23; j = (_QWORD *)*j )
          {
            v25 = j + 81;
            for ( k = (_QWORD *)j[81]; k != v25; k = *(_QWORD **)(v37 + 32) )
            {
              if ( VidSchiIsFlipQueuePacket((_DWORD *)k - 8, v3) )
                *(_DWORD *)(v37 + 64) |= 0x20u;
            }
            v27 = j + 83;
            for ( m = (_QWORD *)j[83]; m != v27; m = *(_QWORD **)(v41 + 32) )
            {
              if ( VidSchiIsFlipQueuePacket((_DWORD *)m - 8, v3) )
                *(_DWORD *)(v41 + 64) |= 0x20u;
            }
          }
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v52 )
          {
            if ( v3 == -1 )
              VidSchiClearFlipDevice(a1, (__int64)v19, 6);
            else
              VidSchiSetFlipDevice(a1, v3, v19, 0, 6u, 0);
          }
          VidSchiDecrementDeviceReference(v19, 0);
        }
        while ( v17 != (__int64 **)v10 );
        v8 = v51;
        v9 = (KSPIN_LOCK *)((char *)a1 + 1880);
      }
      if ( v18 != v8 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14, v16);
        v42[5] = v8;
        v42[6] = v18;
        v42[3] = 281LL;
        v42[4] = 2304LL;
        v42[7] = a1;
        WdLogEvent5_WdCriticalError(v42);
        JUMPOUT(0x1C001E093LL);
      }
      KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
      while ( 1 )
      {
        v29 = v47;
        if ( v47 == (__int64 *)&v47 )
          break;
        v43 = (__int64 *)*v47;
        if ( (__int64 **)v47[1] != &v47 || (__int64 *)v43[1] != v47 )
          __fastfail(3u);
        v47 = (__int64 *)*v47;
        v43[1] = (__int64)&v47;
        v44 = (__int64 **)*((_QWORD *)a1 + 32);
        if ( *v44 != (__int64 *)v10 )
          __fastfail(3u);
        *v29 = (__int64)v10;
        v29[1] = (__int64)v44;
        *v44 = v29;
        *((_QWORD *)a1 + 32) = v29;
      }
      p_LockHandle = &LockHandle;
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1880), &v50);
      v32 = (char *)a1 + 248;
      for ( n = (char *)*((_QWORD *)a1 + 31); n != v32; n = *(char **)n )
      {
        for ( ii = (char *)*((_QWORD *)n - 2); ii != n - 16; ii = *(char **)ii )
        {
          for ( jj = (char *)*((_QWORD *)ii + 81); jj != ii + 648; jj = (char *)*((_QWORD *)v45 + 4) )
          {
            v45 = jj - 32;
            VidSchiFlushQueuePacket(v31, jj - 32, a2);
          }
          for ( kk = (char *)*((_QWORD *)ii + 83); kk != ii + 664; kk = (char *)*((_QWORD *)v46 + 4) )
          {
            v46 = kk - 32;
            VidSchiFlushQueuePacket(v31, kk - 32, a2);
          }
        }
      }
      p_LockHandle = &v50;
    }
    KeReleaseInStackQueuedSpinLock(p_LockHandle);
  }
}
