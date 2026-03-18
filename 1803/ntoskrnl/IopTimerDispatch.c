/*
 * XREFs of IopTimerDispatch @ 0x1400D1F10
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1400B76E4 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _local_unwind @ 0x140188100 (_local_unwind.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine1 @ 0x1401B4AB0 (KiCustomAccessRoutine1.c)
 */

unsigned __int64 __fastcall IopTimerDispatch(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v5; // esi
  unsigned __int64 result; // rax
  KIRQL v7; // r12
  int v8; // r14d
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v10; // r15
  _DWORD v11[66]; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v12; // [rsp+108h] [rbp-E0h]
  _DWORD *v13; // [rsp+128h] [rbp-C0h]
  __int64 v14; // [rsp+13Ah] [rbp-AEh]
  __int64 v15; // [rsp+172h] [rbp-76h]
  __int64 v16; // [rsp+182h] [rbp-66h]
  LARGE_INTEGER v17[4]; // [rsp+190h] [rbp-58h] BYREF

  v13 = v11;
  v12 = a2;
  v5 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v11[33] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  result = (a2 >> 47) + 1;
  if ( result > 1 )
  {
    v11[14] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v16 = a3;
    v14 = __ROL8__(a2, a3);
    v15 = __ROR8__(a1, a3);
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
        v10 = i + 1;
        if ( v5 )
        {
          EtwGetKernelTraceTimestamp(v17, 0x40800000u);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v10->Flink)(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(3910, 0x40800000u, (__int64)&i[1], 8, 4196866, (__int64)v17);
        }
        else
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v10->Flink)(i[2].Flink, i[1].Blink);
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
