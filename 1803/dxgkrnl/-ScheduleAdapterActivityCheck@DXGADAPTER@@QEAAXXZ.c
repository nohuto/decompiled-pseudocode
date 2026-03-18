/*
 * XREFs of ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x1C0026778
 * Callers:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0025B70 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F4FB0 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z @ 0x1C002508C (--0DXGAUTOSPINLOCK@@QEAA@QEAVDXGSPINLOCK@@E@Z.c)
 */

void __fastcall DXGADAPTER::ScheduleAdapterActivityCheck(KSPIN_LOCK *this)
{
  KSPIN_LOCK v2; // rdx
  PKSPIN_LOCK v3; // rbx
  KSPIN_LOCK *v4; // rax
  KSPIN_LOCK **v5; // rcx
  KSPIN_LOCK v6; // rcx
  char v7[8]; // [rsp+20h] [rbp-38h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+48h] [rbp-10h]

  DXGAUTOSPINLOCK::DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v7, this + 370, 0);
  if ( (struct _KTHREAD *)this[371] != KeGetCurrentThread() )
  {
    v3 = SpinLock;
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v3[1] = (KSPIN_LOCK)KeGetCurrentThread();
    v10 = 1;
  }
  *(_QWORD *)(this[357] + 392) = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(this[357] + 392) += this[350];
  v4 = (KSPIN_LOCK *)(this[357] + 400);
  if ( !*v4 )
  {
    v5 = (KSPIN_LOCK **)(this + 368);
    v2 = this[368];
    if ( *(KSPIN_LOCK **)(v2 + 8) != this + 368 )
      __fastfail(3u);
    *v4 = v2;
    v4[1] = (KSPIN_LOCK)v5;
    *(_QWORD *)(v2 + 8) = v4;
    *v5 = v4;
  }
  if ( !*((_BYTE *)this + 2932) )
  {
    v6 = this[308];
    LOBYTE(v2) = 1;
    *((_BYTE *)this + 2932) = 1;
    (*(void (__fastcall **)(_QWORD, KSPIN_LOCK))(*(_QWORD *)(*(_QWORD *)(v6 + 520) + 8LL) + 872LL))(
      *(_QWORD *)(v6 + 528),
      v2);
  }
  if ( v10 )
  {
    v10 = 0;
    SpinLock[1] = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
