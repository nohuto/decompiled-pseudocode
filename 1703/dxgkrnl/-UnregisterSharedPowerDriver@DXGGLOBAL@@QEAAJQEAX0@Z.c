/*
 * XREFs of ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C0197270
 * Callers:
 *     DxgUnregisterSharedPowerDriverCB @ 0x1C0184EE0 (DxgUnregisterSharedPowerDriverCB.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z @ 0x1C0022664 (-SetPowerComponentIdleCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C0194C9C (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C019737C (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::UnregisterSharedPowerDriver(DXGGLOBAL *this, DXGADAPTER *a2, void *const a3)
{
  char *v3; // r14
  char *v5; // rdi
  struct _KTHREAD **v6; // r12
  unsigned int v9; // esi
  struct _KTHREAD **v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int **v14; // rdi
  int *v15; // rbx
  int v16; // r14d
  DXGSHAREDPOWERINUSELISTOBJECT *v17; // rcx
  DXGSHAREDPOWERINUSELISTOBJECT *v18; // r8
  DXGSHAREDPOWERINUSELISTOBJECT **v19; // rax
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9

  v3 = (char *)this + 1192;
  v5 = (char *)*((_QWORD *)this + 149);
  v6 = (struct _KTHREAD **)((char *)this + 400);
  v9 = 0;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 400));
  v10 = (struct _KTHREAD **)((char *)this + 1152);
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 1152));
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
    v14 = (int **)*((_QWORD *)v5 + 7);
    v15 = *v14;
    while ( v15 != (int *)v14 && v15 )
    {
      v16 = v15[6];
      v17 = (DXGSHAREDPOWERINUSELISTOBJECT *)v15;
      v15 = *(int **)v15;
      v18 = *(DXGSHAREDPOWERINUSELISTOBJECT **)v17;
      v19 = (DXGSHAREDPOWERINUSELISTOBJECT **)*((_QWORD *)v17 + 1);
      if ( *(DXGSHAREDPOWERINUSELISTOBJECT **)(*(_QWORD *)v17 + 8LL) != v17 || *v19 != v17 )
        __fastfail(3u);
      *v19 = v18;
      *((_QWORD *)v18 + 1) = v19;
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v17);
      operator delete(v20);
      DXGADAPTER::SetPowerComponentIdleCB(a2, v16);
    }
  }
  else
  {
    v9 = -1073741130;
  }
LABEL_16:
  DXGFASTMUTEX::Release(v10, v11, v12, v13);
  DXGFASTMUTEX::Release(v6, v21, v22, v23);
  return v9;
}
