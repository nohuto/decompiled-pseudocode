/*
 * XREFs of CiProcessSuspend @ 0x1C00025CC
 * Callers:
 *     CiProcessNotification @ 0x1C0001120 (CiProcessNotification.c)
 * Callees:
 *     WPP_SF_qqd @ 0x1C000275C (WPP_SF_qqd.c)
 *     CiSchedulerPoke @ 0x1C0002B84 (CiSchedulerPoke.c)
 *     CiSchedulerPostSuspend @ 0x1C0002BC8 (CiSchedulerPostSuspend.c)
 *     CiSchedulerSetPriority @ 0x1C00030B8 (CiSchedulerSetPriority.c)
 *     CiAcquireProcessLock @ 0x1C000A888 (CiAcquireProcessLock.c)
 *     CiReleaseProcessLock @ 0x1C000A8B8 (CiReleaseProcessLock.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000AD50 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000ADE8 (CiThreadIncrementScheduledCount.c)
 */

__int64 __fastcall CiProcessSuspend(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // bp
  char v5; // di
  _QWORD *v6; // rdi
  _QWORD **i; // rsi
  _QWORD *v8; // rcx
  unsigned int v9; // r15d
  _QWORD *j; // r14
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  char v13; // al
  __int64 result; // rax
  char v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_qqd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, a1, *(_QWORD *)(a1 + 80), (unsigned __int8)a2);
  v5 = 0;
  v15 = 0;
  CiAcquireProcessLock(a1);
  if ( *(_BYTE *)(a1 + 88) != v4 )
  {
    v6 = *(_QWORD **)(a1 + 64);
    for ( i = (_QWORD **)(a1 + 64); v6 != i; v6 = (_QWORD *)*v6 )
    {
      v8 = v6 - 14;
      if ( v4 )
        CiThreadDecrementScheduledCount(v8);
      else
        CiThreadIncrementScheduledCount(v8);
    }
    v9 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( j = *i; j != i; j = (_QWORD *)*j )
    {
      v11 = j - 14;
      v12 = v9 + 1;
      if ( (*(_BYTE *)(*(_QWORD *)(*(j - 5) + 136LL) + 3LL) & 1) == 0 )
        v12 = v9;
      v9 = v12;
      v13 = v4 & 1 | *((_BYTE *)v11 + 148) & 0xFE;
      *((_BYTE *)v11 + 148) = v13;
      if ( (v13 & 1) != 0 )
      {
        if ( *((_BYTE *)v11 + 107) != 0xFF )
          KeSetBasePriorityThread((PKTHREAD)v11[12], *((_DWORD *)v11 + 36));
        *((_BYTE *)v11 + 107) = -1;
      }
      else
      {
        CiSchedulerSetPriority(j - 14);
      }
    }
    CiSchedulerPostSuspend(v4, v9, &v15);
    v5 = v15;
    *(_BYTE *)(a1 + 88) = v4;
  }
  result = CiReleaseProcessLock(a1);
  if ( v5 )
    return CiSchedulerPoke(0LL);
  return result;
}
