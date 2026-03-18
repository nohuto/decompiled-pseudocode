/*
 * XREFs of ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@Z@Z @ 0x1C0028248
 * Callers:
 *     DxgRegisterSharedPowerComponent @ 0x1C019A7EC (DxgRegisterSharedPowerComponent.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C0027EA8 (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@ZP6AX22@ZP6AX2KIE2@ZPEAV?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@@Z @ 0x1C01A92E8 (--0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C01A97F8 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C01AC45C (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::RegisterSharedPowerComponent(
        DXGGLOBAL *this,
        struct DXGADAPTER *a2,
        void *const a3,
        void (*a4)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a5)(void *, void *),
        void (*a6)(void *, unsigned int, unsigned int, unsigned __int8, void *))
{
  char *v7; // r15
  char *v8; // r14
  int v10; // esi
  void **v11; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  void **v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  struct _KTHREAD **v26; // [rsp+A0h] [rbp+8h]

  v7 = (char *)this + 1176;
  v26 = (struct _KTHREAD **)((char *)this + 400);
  v8 = (char *)*((_QWORD *)this + 147);
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 400));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1152));
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v10 = -1073741130;
    goto LABEL_22;
  }
  while ( v8 != v7 && v8 )
  {
    if ( *((void *const *)v8 + 3) == a3 && *((struct DXGADAPTER **)v8 + 4) == a2 )
    {
      v10 = -1073740008;
      v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      *(_QWORD *)(v16 + 24) = -1073740008LL;
      WdLogEvent5_WdWarning(v16);
      goto LABEL_22;
    }
    v8 = *(char **)v8;
  }
  v17 = (void **)operator new(0x10uLL, 0x4B677844u, PagedPool);
  v11 = v17;
  if ( v17 )
  {
    v17[1] = v17;
    *v17 = v17;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v19 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v19 + 24) = 5015LL;
LABEL_14:
    WdLogEvent5_WdLowResource(v19);
    v10 = -1073741801;
    goto LABEL_22;
  }
  v20 = operator new(0x48uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v20 )
    v12 = (DXGSHAREDPOWERINUSELISTOBJECT *)DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
                                             (_DWORD)v20,
                                             (_DWORD)this,
                                             (_DWORD)a3,
                                             (_DWORD)a2,
                                             (__int64)a4,
                                             (__int64)a5,
                                             (__int64)a6,
                                             (__int64)v11);
  if ( !v12 )
  {
    v19 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v19 + 24) = 5024LL;
    goto LABEL_14;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 143, &LockHandle);
  v22 = *(_QWORD *)v7;
  if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
    __fastfail(3u);
  *(_QWORD *)v12 = v22;
  *((_QWORD *)v12 + 1) = v7;
  *(_QWORD *)(v22 + 8) = v12;
  *(_QWORD *)v7 = v12;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_22:
  *((_QWORD *)this + 145) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1152, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v26);
  if ( v10 < 0 )
  {
    if ( v11 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v11);
    if ( v12 )
    {
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v12);
      operator delete(v23);
    }
  }
  return (unsigned int)v10;
}
