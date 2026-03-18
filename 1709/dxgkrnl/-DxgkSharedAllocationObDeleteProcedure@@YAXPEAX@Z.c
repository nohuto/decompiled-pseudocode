/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00B5E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0028764 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x1C0091444 (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(_QWORD *a1)
{
  __int64 v1; // rdi
  volatile signed __int64 *v3; // rdx
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  void **v6; // rax
  DXGKEYEDMUTEX *v7; // r15
  struct DXGSYNCOBJECT *v8; // rbp
  __int64 v9; // rcx
  _QWORD *i; // rsi
  PERESOURCE *Global; // rax
  _BYTE v12[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v13[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v14; // [rsp+30h] [rbp-68h]
  DXGADAPTER *v15; // [rsp+38h] [rbp-60h]
  char v16; // [rsp+40h] [rbp-58h]
  _BYTE v17[8]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v18; // [rsp+50h] [rbp-48h]
  volatile signed __int64 *v19; // [rsp+58h] [rbp-40h]
  char v20; // [rsp+60h] [rbp-38h]

  v1 = a1[2];
  v3 = *(volatile signed __int64 **)(*(_QWORD *)(v1 + 72) + 16LL);
  v15 = (DXGADAPTER *)v3;
  v16 = 0;
  if ( v3 )
  {
    _InterlockedIncrement64(v3 + 3);
    v14 = -1LL;
  }
  v19 = v3;
  v20 = 0;
  if ( v3 )
  {
    _InterlockedIncrement64(v3 + 3);
    v18 = -1LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v15) )
    COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v12);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 56), 0xFFFFFFFF);
  v4 = *(_QWORD *)(v1 + 72);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 208, 0LL);
  *(_QWORD *)(v4 + 216) = KeGetCurrentThread();
  v5 = (_QWORD *)*a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (void **)a1[1], *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  *(_QWORD *)(v4 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 208, 0LL);
  KeLeaveCriticalRegion();
  v7 = (DXGKEYEDMUTEX *)a1[3];
  v8 = (struct DXGSYNCOBJECT *)a1[4];
  v9 = *(_QWORD *)(*(_QWORD *)(v1 + 72) + 16LL);
  if ( *(_DWORD *)(v9 + 176) == 1 )
  {
    for ( i = *(_QWORD **)(v1 + 128); i != (_QWORD *)(v1 + 128); i = (_QWORD *)*i )
    {
      if ( (*((_DWORD *)i - 11) & 0x4000) != 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 72) + 528LL) + 8LL) + 1128LL))(
          *(i - 5),
          0xFFFFFFFFLL);
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 60), 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)v1, 0LL, 0);
  a1[2] = 0LL;
  if ( v7 )
  {
    DXGKEYEDMUTEX::ReleaseReference(v7);
    a1[3] = 0LL;
  }
  if ( v8 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v9);
    DXGGLOBAL::DestroySyncObject(Global, v8, 0);
    a1[4] = 0LL;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v17);
  COREACCESS::~COREACCESS((COREACCESS *)v13);
}
