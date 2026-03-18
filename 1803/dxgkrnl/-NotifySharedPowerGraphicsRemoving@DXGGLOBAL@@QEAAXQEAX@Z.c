/*
 * XREFs of ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C019FD14
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C00326FC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ?RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z @ 0x1C0032C7C (-RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C019CAF8 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsRemoving(
        DXGGLOBAL *this,
        struct DXGSHAREDPOWERREGISTRATIONOBJECT *a2)
{
  char *v2; // rbp
  struct DXGSHAREDPOWERREGISTRATIONOBJECT *v4; // r15
  struct DXGSHAREDPOWERREGISTRATIONOBJECT **v5; // rbx
  struct DXGSHAREDPOWERREGISTRATIONOBJECT ***v6; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned __int8 v10; // cl
  PVOID **v11; // r13
  DXGSHAREDPOWERINUSELISTOBJECT **v12; // r15
  DXGSHAREDPOWERINUSELISTOBJECT *v13; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v14; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v15; // rdx
  DXGSHAREDPOWERINUSELISTOBJECT **v16; // rax
  void *v17; // rcx
  void *v18; // rcx

  v2 = (char *)this + 1280;
  v4 = a2;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1280));
  v5 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT **)*((_QWORD *)this + 163);
  while ( v5 != (struct DXGSHAREDPOWERREGISTRATIONOBJECT **)((char *)this + 1304) )
  {
    v6 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT ***)v5;
    if ( !v5 )
      break;
    if ( v5[4] == v4 )
    {
      CurrentIrql = KeGetCurrentIrql();
      ((void (__fastcall *)(struct DXGSHAREDPOWERREGISTRATIONOBJECT *, struct DXGSHAREDPOWERREGISTRATIONOBJECT *))v5[6])(
        v4,
        v5[3]);
      if ( CurrentIrql != KeGetCurrentIrql() )
      {
        v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8);
        v9[3] = 275LL;
        v9[4] = 16LL;
        v9[5] = this;
        v9[6] = CurrentIrql;
        v10 = KeGetCurrentIrql();
        v9[7] = v10;
        WdLogEvent5_WdCriticalError(v9);
      }
      v11 = (PVOID **)(v5 + 8);
      v12 = (DXGSHAREDPOWERINUSELISTOBJECT **)v5[8];
      v13 = *v12;
      while ( 1 )
      {
        v14 = v13;
        if ( v13 == (DXGSHAREDPOWERINUSELISTOBJECT *)v12 || !v13 )
          break;
        v15 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v13;
        v13 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v13;
        if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v14 + 8LL) != v14
          || (v16 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v14 + 1), *v16 != v14) )
        {
          __fastfail(3u);
        }
        *v16 = v15;
        *((_QWORD *)v15 + 1) = v16;
        DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v14);
        operator delete(v17);
      }
      v5 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT **)*v5;
      DXGGLOBAL::RemoveListObjectFromSharedPowerList((KSPIN_LOCK *)this, v6);
      if ( *v11 )
        DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(*v11);
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT((DXGSHAREDPOWERINUSELISTOBJECT *)v6);
      operator delete(v18);
      v4 = a2;
    }
    else
    {
      v5 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT **)*v5;
    }
  }
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
