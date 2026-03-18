/*
 * XREFs of ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C014485C
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C01440FC (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0144790 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C01451BC (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0001518 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C00037E8 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000FEE4 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C000FF3C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0046C6C (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C009F19C (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C009F9FC (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0144834 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C0147608 (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 */

void __fastcall DirectComposition::CConnection::Disconnect(DirectComposition::CConnection *this)
{
  char v2; // si
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v4; // rbx
  DirectComposition::CBatch *v5; // rcx
  DirectComposition::CBatch *v6; // rbx
  DirectComposition::CBatch *v7; // rcx
  DirectComposition::CBatch *v8; // rbx
  struct DirectComposition::CBatch *v9; // rax
  struct DirectComposition::CBatch *v10; // rbx
  DirectComposition::CBatch *v11; // rax
  DirectComposition::CBatch *v12; // rbx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  DirectComposition::CEvent *v15; // rcx
  __int64 v16; // rdi
  struct _ERESOURCE *v17; // rbx
  struct _ERESOURCE *v18; // rbx
  struct _ERESOURCE *v19; // rbx
  struct _ERESOURCE *v20; // rbx
  struct DirectComposition::CBatch *v21; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  if ( *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 37) = 0;
    v2 = 1;
  }
  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPool **)this + 24);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 192),
    0LL);
  v5 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v5 )
  {
    do
    {
      v6 = *(DirectComposition::CBatch **)v5;
      DirectComposition::CBatch::ReturnToApplication(v5, 0);
      v5 = v6;
    }
    while ( v6 );
  }
  v7 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v7 )
  {
    do
    {
      v8 = *(DirectComposition::CBatch **)v7;
      DirectComposition::CBatch::ReturnToApplication(v7, 0);
      v7 = v8;
    }
    while ( v8 );
  }
  v9 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  v21 = v9;
  if ( v9 )
  {
    do
    {
      v10 = *(struct DirectComposition::CBatch **)v9;
      DirectComposition::CBatch::ReturnToApplication(v9, 0);
      v9 = v10;
    }
    while ( v10 );
    v21 = 0LL;
  }
  DirectComposition::CConnection::GetNewBatches((union _SLIST_HEADER *)this, &v21);
  v11 = v21;
  if ( v21 )
  {
    do
    {
      v12 = *(DirectComposition::CBatch **)v11;
      DirectComposition::CBatch::ReturnToApplication(v11, 0);
      v11 = v12;
    }
    while ( v12 );
    v21 = 0LL;
  }
  if ( v2 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      v13 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
              (DirectComposition::CConnection *)((char *)this + 24),
              &v22);
      v14 = (volatile signed __int32 *)v13;
      if ( !v13 )
        break;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)v13 + 6, 3, 4) != 4
        && !_InterlockedCompareExchange((volatile signed __int32 *)v13 + 6, 1, 0)
        && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v13 + 4)) )
      {
        if ( _InterlockedCompareExchange(v14 + 6, 2, 1) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, 0LL);
        ExReleaseResourceLite(*((PERESOURCE *)v14 + 4));
        KeLeaveCriticalRegion();
      }
    }
  }
  v15 = (DirectComposition::CEvent *)*((_QWORD *)this + 10);
  if ( v15 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v15);
    *((_QWORD *)this + 10) = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  v16 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v16 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 24), 2, 1) == 1 )
    {
      v17 = *(struct _ERESOURCE **)(v16 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v17, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 48LL))(v16, 0LL);
      v18 = *(struct _ERESOURCE **)(*(_QWORD *)(v16 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v18, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v16 + 40)) )
        *(_DWORD *)(v16 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v16 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 24), 5, 4) == 4 )
    {
      v19 = *(struct _ERESOURCE **)(v16 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v19, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 56LL))(v16);
      v20 = *(struct _ERESOURCE **)(*(_QWORD *)(v16 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v20, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v16 + 40)) )
        *(_DWORD *)(v16 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v16 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v16 + 24) == 1 );
}
