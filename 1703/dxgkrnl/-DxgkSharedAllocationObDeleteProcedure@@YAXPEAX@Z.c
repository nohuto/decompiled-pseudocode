/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C0100E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00D81F0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C00FEC20 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  void **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGKEYEDMUTEX *v11; // r14
  _QWORD *v12; // rsi
  struct DXGSYNCOBJECT *v13; // rbp
  PERESOURCE *Global; // rax
  __int64 v15; // r9
  _BYTE v16[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  char v20; // [rsp+40h] [rbp-58h]
  _BYTE v21[8]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  char v24; // [rsp+60h] [rbp-38h]

  v1 = a1[2];
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 16LL);
  v19 = v3;
  v20 = 0;
  if ( v3 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v3 + 24));
    v18 = -1LL;
  }
  v23 = v3;
  v24 = 0;
  if ( v3 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v3 + 24));
    v22 = -1LL;
  }
  COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 56), 0xFFFFFFFF);
  v4 = *(_QWORD *)(v1 + 72);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 208, 0LL);
  *(_QWORD *)(v4 + 216) = KeGetCurrentThread();
  v5 = (_QWORD *)*a1;
  v6 = (void **)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || *v6 != a1 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  *(_QWORD *)(v4 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 208, 0LL);
  KeLeaveCriticalRegion();
  v11 = (DXGKEYEDMUTEX *)a1[3];
  v12 = *(_QWORD **)(v1 + 128);
  v13 = (struct DXGSYNCOBJECT *)a1[4];
  while ( v12 != (_QWORD *)(v1 + 128) )
  {
    if ( (*((_DWORD *)v12 - 11) & 0x4000) != 0 )
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 432LL) + 8LL) + 1128LL))(
        *(v12 - 5),
        0xFFFFFFFFLL);
    v12 = (_QWORD *)*v12;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 60), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v1, 0LL, 0);
  a1[2] = 0LL;
  if ( v11 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v11, v7, v9, v10);
    a1[3] = 0LL;
  }
  if ( v13 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7, v9, v10);
    DXGGLOBAL::DestroySyncObject(Global, v13, 0LL, v15);
    a1[4] = 0LL;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  COREACCESS::~COREACCESS((COREACCESS *)v17);
}
