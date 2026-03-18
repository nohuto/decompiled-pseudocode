/*
 * XREFs of IopTimerDispatch @ 0x14012FE30
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x140008074 (EtwTraceTimedEvent.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _local_unwind @ 0x14015E3E0 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine1 @ 0x14018AE00 (KiCustomAccessRoutine1.c)
 */

unsigned __int64 __fastcall IopTimerDispatch(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5; // r14d
  unsigned __int64 result; // rax
  KIRQL v7; // r12
  int v8; // r15d
  struct _LIST_ENTRY *i; // rdi
  _DWORD v10[66]; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v11; // [rsp+108h] [rbp-D0h]
  _DWORD *v12; // [rsp+128h] [rbp-B0h]
  __int64 v13; // [rsp+13Ah] [rbp-9Eh]
  __int64 v14; // [rsp+172h] [rbp-66h]
  __int64 v15; // [rsp+182h] [rbp-56h]
  __int64 v16[3]; // [rsp+190h] [rbp-48h] BYREF

  v12 = v10;
  v11 = a2;
  v5 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v10[33] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  result = (a2 >> 47) + 1;
  if ( result > 1 )
  {
    v10[14] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v15 = a3;
    v13 = __ROL8__(a2, a3);
    v14 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    result = KiCustomAccessRoutine1(a2);
  }
  if ( *(_DWORD *)a2 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v8 = *(_DWORD *)a2;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v8; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        if ( v5 )
        {
          EtwGetKernelTraceTimestamp(v16, 0x40800000u);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))i[1].Flink)(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(3910, 0x40800000u, (__int64)&i[1], 8, 4196866, (__int64)v16);
        }
        else
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))i[1].Flink)(i[2].Flink, i[1].Blink);
        }
        --v8;
      }
    }
    KxReleaseSpinLock(&IopTimerLock);
    result = v7;
    __writecr8(v7);
  }
  return result;
}
