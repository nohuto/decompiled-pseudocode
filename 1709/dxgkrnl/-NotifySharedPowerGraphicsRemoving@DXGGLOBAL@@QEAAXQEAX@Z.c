/*
 * XREFs of ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0028090
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C0027EA8 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C01A97F8 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsRemoving(DXGGLOBAL *this, void *const a2)
{
  __int64 v4; // rax
  DXGSHAREDPOWERINUSELISTOBJECT *v5; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v7; // rax
  unsigned __int8 v8; // cl
  DXGSHAREDPOWERINUSELISTOBJECT **v9; // r14
  DXGSHAREDPOWERINUSELISTOBJECT *v10; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v11; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v12; // rax
  DXGSHAREDPOWERINUSELISTOBJECT **v13; // rdx
  void *v14; // rcx
  void **v15; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v16; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v17; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT **v18; // rax
  void *v19; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( KeGetCurrentIrql() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 5230LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1152));
  v5 = (DXGSHAREDPOWERINUSELISTOBJECT *)*((_QWORD *)this + 147);
  while ( v5 != (DXGGLOBAL *)((char *)this + 1176) && v5 )
  {
    if ( *((void *const *)v5 + 4) == a2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      (*((void (__fastcall **)(void *const, _QWORD))v5 + 6))(a2, *((_QWORD *)v5 + 3));
      if ( CurrentIrql != KeGetCurrentIrql() )
      {
        v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
        v7[3] = 275LL;
        v7[4] = 16LL;
        v7[5] = this;
        v7[6] = CurrentIrql;
        v8 = KeGetCurrentIrql();
        v7[7] = v8;
        WdLogEvent5_WdCriticalError(v7);
      }
      v9 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v5 + 8);
      v10 = *v9;
      while ( v10 != (DXGSHAREDPOWERINUSELISTOBJECT *)v9 && v10 )
      {
        v11 = v10;
        v10 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v10;
        v12 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v11;
        if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v11 + 8LL) != v11
          || (v13 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v11 + 1), *v13 != v11) )
        {
          __fastfail(3u);
        }
        *v13 = v12;
        *((_QWORD *)v12 + 1) = v13;
        DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v11);
        operator delete(v14);
      }
      v15 = (void **)*((_QWORD *)v5 + 8);
      if ( v15 )
        DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v15);
      v16 = v5;
      v5 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v5;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 143, &LockHandle);
      v17 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v16;
      if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v16 + 8LL) != v16
        || (v18 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v16 + 1), *v18 != v16) )
      {
        __fastfail(3u);
      }
      *v18 = v17;
      *((_QWORD *)v17 + 1) = v18;
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v16);
      operator delete(v19);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    else
    {
      v5 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v5;
    }
  }
  *((_QWORD *)this + 145) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1152, 0LL);
  KeLeaveCriticalRegion();
}
