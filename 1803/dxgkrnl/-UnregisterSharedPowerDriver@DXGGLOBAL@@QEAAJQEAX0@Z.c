/*
 * XREFs of ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C01A1708
 * Callers:
 *     DxgUnregisterSharedPowerDriverCB @ 0x1C0187AB0 (DxgUnregisterSharedPowerDriverCB.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0026DB8 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C00326FC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ?RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z @ 0x1C0032C7C (-RemoveListObjectFromSharedPowerList@DXGGLOBAL@@QEAAXPEAVDXGSHAREDPOWERREGISTRATIONOBJECT@@@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C019CAF8 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C01A1864 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::UnregisterSharedPowerDriver(DXGGLOBAL *this, DXGADAPTER *a2, __int64 *a3)
{
  unsigned int v6; // esi
  __int64 **v7; // rdi
  struct DXGSHAREDPOWERREGISTRATIONOBJECT ***v8; // rbx
  int **v9; // r14
  int *v10; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v11; // rcx
  int *v12; // r8
  int v13; // r12d
  DXGSHAREDPOWERINUSELISTOBJECT **v14; // rax
  void *v15; // rcx
  PVOID *v16; // rcx
  void *v17; // rcx
  struct _KTHREAD **v19; // [rsp+50h] [rbp+8h]

  v19 = (struct _KTHREAD **)((char *)this + 408);
  v6 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 408));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1280));
  v7 = (__int64 **)*((_QWORD *)this + 163);
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    while ( 1 )
    {
      v8 = (struct DXGSHAREDPOWERREGISTRATIONOBJECT ***)v7;
      if ( v7 == (__int64 **)((char *)this + 1304) || !v7 )
      {
        v6 = -1073741811;
        goto LABEL_19;
      }
      if ( v7[4] == (__int64 *)a2 && v7[3] == a3 )
        break;
      v7 = (__int64 **)*v7;
    }
    v9 = (int **)v7[8];
    v10 = *v9;
    while ( 1 )
    {
      v11 = (DXGSHAREDPOWERINUSELISTOBJECT *)v10;
      if ( v10 == (int *)v9 || !v10 )
        break;
      v12 = *(int **)v10;
      v13 = v10[6];
      v10 = *(int **)v10;
      if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v11 + 8LL) != v11
        || (v14 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v11 + 1), *v14 != v11) )
      {
        __fastfail(3u);
      }
      *v14 = (DXGSHAREDPOWERINUSELISTOBJECT *)v12;
      *((_QWORD *)v12 + 1) = v14;
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v11);
      operator delete(v15);
      DXGADAPTER::SetPowerComponentIdleCB(a2, v13);
    }
    DXGGLOBAL::RemoveListObjectFromSharedPowerList((KSPIN_LOCK *)this, v8);
    v16 = (PVOID *)v8[8];
    if ( v16 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v16);
    DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT((DXGSHAREDPOWERINUSELISTOBJECT *)v8);
    operator delete(v17);
  }
  else
  {
    v6 = -1073741130;
  }
LABEL_19:
  *((_QWORD *)this + 161) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1280, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v19);
  return v6;
}
