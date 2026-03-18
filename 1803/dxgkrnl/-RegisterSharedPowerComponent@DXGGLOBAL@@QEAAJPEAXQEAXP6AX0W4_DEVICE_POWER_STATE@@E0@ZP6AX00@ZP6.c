/*
 * XREFs of ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C003295C
 * Callers:
 *     DxgRegisterSharedPowerComponent @ 0x1C01878F4 (DxgRegisterSharedPowerComponent.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z @ 0x1C00326FC (--_G-$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@AEAAPEAXI@Z.c)
 *     ??0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@ZP6AX22@ZP6AX2KIE2@ZPEAV?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@@Z @ 0x1C019C5B0 (--0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@.c)
 *     ??1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ @ 0x1C019CAF8 (--1DXGSHAREDPOWERINUSELISTOBJECT@@IEAA@XZ.c)
 *     ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C01A1864 (-ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::RegisterSharedPowerComponent(
        DXGGLOBAL *this,
        struct DXGADAPTER *a2,
        void *const a3,
        void (*a4)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a5)(void *, void *),
        void (*a6)(void *, unsigned int, unsigned int, unsigned __int8, void *),
        void (*a7)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))
{
  int v8; // esi
  char *v10; // rbp
  char *v11; // r15
  char *v12; // r14
  PVOID *v13; // rdi
  DXGSHAREDPOWERINUSELISTOBJECT *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  PVOID *v17; // rax
  __int64 v18; // rax
  PVOID v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // ebp
  __int64 v23; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  PVOID v30; // rcx
  int v32; // [rsp+30h] [rbp-98h]
  struct _KTHREAD **v33; // [rsp+40h] [rbp-88h]
  __int128 v34; // [rsp+50h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-68h] BYREF

  v8 = 0;
  v33 = (struct _KTHREAD **)((char *)this + 408);
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 408));
  v10 = (char *)this + 1280;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1280));
  v11 = (char *)this + 1304;
  v12 = (char *)*((_QWORD *)this + 163);
  v13 = 0LL;
  v14 = 0LL;
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v8 = -1073741130;
    goto LABEL_30;
  }
  while ( v12 != v11 && v12 )
  {
    if ( *((void *const *)v12 + 3) == a3 && *((struct DXGADAPTER **)v12 + 4) == a2 )
    {
      v8 = -1073740008;
      v16 = WdLogNewEntry5_WdWarning(v12, a3, v15);
      *(_QWORD *)(v16 + 24) = -1073740008LL;
      WdLogEvent5_WdWarning(v16);
      goto LABEL_30;
    }
    v12 = *(char **)v12;
  }
  v17 = (PVOID *)operator new[](0x10uLL, 0x4B677844u, PagedPool);
  v13 = v17;
  if ( v17 )
  {
    v17[1] = v17;
    *v17 = v17;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v18 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v18 + 24) = 5454LL;
LABEL_14:
    WdLogEvent5_WdLowResource(v18);
    v8 = -1073741801;
    goto LABEL_30;
  }
  v19 = operator new[](0x48uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v19 )
    v14 = (DXGSHAREDPOWERINUSELISTOBJECT *)DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
                                             (_DWORD)v19,
                                             (_DWORD)this,
                                             (_DWORD)a3,
                                             (_DWORD)a2,
                                             (__int64)a4,
                                             (__int64)a5,
                                             (__int64)a6,
                                             (__int64)v13);
  if ( !v14 )
  {
    v18 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v18 + 24) = 5463LL;
    goto LABEL_14;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 159, &LockHandle);
  v21 = *(_QWORD *)v11;
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  *(_QWORD *)v14 = v21;
  *((_QWORD *)v14 + 1) = v11;
  *(_QWORD *)(v21 + 8) = v14;
  *(_QWORD *)v11 = v14;
  if ( a7 )
  {
    v22 = 0;
    if ( *((_DWORD *)a2 + 660) )
    {
      do
      {
        v23 = *((_QWORD *)a2 + 312) + 520LL * v22;
        if ( *(_DWORD *)(v23 + 208) == 7 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v25 = *(unsigned int *)(v23 + 4);
          v32 = *(_DWORD *)(v23 + 212);
          LOBYTE(v20) = *(_BYTE *)(v23 + 360) == 0;
          v26 = *(_DWORD *)(v23 + 344);
          v34 = *(_OWORD *)(v23 + 220);
          ((void (__fastcall *)(struct DXGADAPTER *, void *const, __int64, __int64, int, __int128 *, int))a7)(
            a2,
            a3,
            v25,
            v20,
            v26,
            &v34,
            v32);
          if ( CurrentIrql != KeGetCurrentIrql() )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v27);
            v28[3] = 275LL;
            v28[4] = 16LL;
            v28[5] = this;
            v28[6] = CurrentIrql;
            v29 = KeGetCurrentIrql();
            v28[7] = v29;
            WdLogEvent5_WdCriticalError(v28);
          }
        }
        ++v22;
      }
      while ( v22 < *((_DWORD *)a2 + 660) );
      v8 = 0;
    }
    v10 = (char *)this + 1280;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_30:
  *((_QWORD *)v10 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v33);
  if ( v8 < 0 )
  {
    if ( v13 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v13);
    if ( v14 )
    {
      DXGSHAREDPOWERINUSELISTOBJECT::~DXGSHAREDPOWERINUSELISTOBJECT(v14);
      ExFreePoolWithTag(v30, 0);
    }
  }
  return (unsigned int)v8;
}
