/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00ACEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00BF75C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0182C70 (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  void **v7; // rax
  DXGKEYEDMUTEX *v8; // rbp
  struct DXGSYNCOBJECT *v9; // r15
  __int64 v10; // rcx
  _QWORD *i; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v15; // rax
  int v16; // [rsp+20h] [rbp-78h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h]
  _BYTE v18[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v19[16]; // [rsp+38h] [rbp-60h] BYREF
  DXGADAPTER *v20; // [rsp+48h] [rbp-50h]
  _BYTE v21[40]; // [rsp+58h] [rbp-40h] BYREF

  v17 = 0LL;
  v16 = 16000;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 16000);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v16, 16000);
  v4 = *((_QWORD *)a1 + 2);
  COREADAPTERACCESS::COREADAPTERACCESS(
    (COREADAPTERACCESS *)v18,
    *(struct DXGADAPTER *const *)(*(_QWORD *)(v4 + 72) + 16LL),
    0LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v20) )
    COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 56));
  v5 = *(_QWORD *)(v4 + 72);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 208, 0LL);
  *(_QWORD *)(v5 + 216) = KeGetCurrentThread();
  v6 = *(_QWORD **)a1;
  if ( *(void **)(*(_QWORD *)a1 + 8LL) != a1 || (v7 = (void **)*((_QWORD *)a1 + 1), *v7 != a1) )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = v7;
  *(_QWORD *)(v5 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 208, 0LL);
  KeLeaveCriticalRegion();
  v8 = (DXGKEYEDMUTEX *)*((_QWORD *)a1 + 3);
  v9 = (struct DXGSYNCOBJECT *)*((_QWORD *)a1 + 4);
  v10 = *(_QWORD *)(*(_QWORD *)(v4 + 72) + 16LL);
  if ( *(_DWORD *)(v10 + 176) == 1 )
  {
    for ( i = *(_QWORD **)(v4 + 128); i != (_QWORD *)(v4 + 128); i = (_QWORD *)*i )
    {
      if ( (*((_DWORD *)i - 11) & 0x4000) != 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 72) + 544LL) + 8LL) + 1144LL))(
          *(i - 5),
          0xFFFFFFFFLL);
    }
  }
  if ( *((_DWORD *)a1 + 10) )
  {
    Global = DXGGLOBAL::GetGlobal(v10);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)Global + 152),
      *((_DWORD *)a1 + 10));
    *((_DWORD *)a1 + 10) = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 60), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v4, 0LL, 0);
  *((_QWORD *)a1 + 2) = 0LL;
  if ( v8 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v8);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  if ( v9 )
  {
    v15 = DXGGLOBAL::GetGlobal(v10);
    DXGGLOBAL::DestroySyncObject(v15, v9, 0);
    *((_QWORD *)a1 + 4) = 0LL;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v12, &EventProfilerExit, v13, v16);
}
