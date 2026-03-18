/*
 * XREFs of ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C01AC344
 * Callers:
 *     DxgUnregisterSharedPowerDriverCB @ 0x1C019A9A0 (DxgUnregisterSharedPowerDriverCB.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C001FD5C (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C01A97F8 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C01AC45C (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::UnregisterSharedPowerDriver(DXGGLOBAL *this, DXGADAPTER *a2, void *const a3)
{
  char *v3; // r14
  char *v5; // rdi
  struct _KTHREAD **v6; // r12
  unsigned int v9; // esi
  char *v10; // r13
  int **v11; // rdi
  int *v12; // rbx
  int v13; // r14d
  DXGSHAREDPOWERINUSELISTOBJECT *v14; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v15; // rax
  DXGSHAREDPOWERINUSELISTOBJECT **v16; // r8
  void *v17; // rcx

  v3 = (char *)this + 1176;
  v5 = (char *)*((_QWORD *)this + 147);
  v6 = (struct _KTHREAD **)((char *)this + 400);
  v9 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 400));
  v10 = (char *)this + 1152;
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1152));
  if ( DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    while ( 1 )
    {
      if ( v5 == v3 || !v5 )
      {
        v9 = -1073741811;
        goto LABEL_16;
      }
      if ( *((DXGADAPTER **)v5 + 4) == a2 && *((void *const *)v5 + 3) == a3 )
        break;
      v5 = *(char **)v5;
    }
    v11 = (int **)*((_QWORD *)v5 + 8);
    v12 = *v11;
    while ( v12 != (int *)v11 && v12 )
    {
      v13 = v12[6];
      v14 = (DXGSHAREDPOWERINUSELISTOBJECT *)v12;
      v12 = *(int **)v12;
      v15 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v14;
      if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v14 + 8LL) != v14
        || (v16 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v14 + 1), *v16 != v14) )
      {
        __fastfail(3u);
      }
      *v16 = v15;
      *((_QWORD *)v15 + 1) = v16;
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v14);
      operator delete(v17);
      DXGADAPTER::SetPowerComponentIdleCB(a2, v13);
    }
  }
  else
  {
    v9 = -1073741130;
  }
LABEL_16:
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v6);
  return v9;
}
