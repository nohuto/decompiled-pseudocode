/*
 * XREFs of ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C013F4A0
 * Callers:
 *     DCompositionRenderBlack @ 0x1C013E040 (DCompositionRenderBlack.c)
 * Callees:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002EDC4 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C0032AE4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0033B30 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C0034A5C (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RenderBlack(
        DirectComposition::CConnection *this,
        unsigned __int8 a2)
{
  struct _ERESOURCE *v4; // rbx
  DirectComposition::CBatchSharedMemoryPool ***v5; // rbx
  _DWORD *v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // rdi
  struct _ERESOURCE *v9; // rbx
  struct _ERESOURCE *v10; // rbx
  struct _ERESOURCE *v11; // rbx
  struct _ERESOURCE *v12; // rbx
  void *v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  v5 = (DirectComposition::CBatchSharedMemoryPool ***)*((_QWORD *)this + 19);
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)v5);
  if ( DirectComposition::CBatch::GetPayloadWritePointer(v5[21], 0xCuLL, &v14) )
  {
    v6 = v14;
    *(_DWORD *)v14 = 12;
    v6[1] = 250;
    v6[2] = a2;
    v7 = DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)v5, 0LL, 1, 0LL);
  }
  else
  {
    v7 = -1073741823;
  }
  v8 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 2, 1) == 1 )
    {
      v9 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v9, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, 0LL);
      v10 = *(struct _ERESOURCE **)(*(_QWORD *)(v8 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v10, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v8 + 40)) )
        *(_DWORD *)(v8 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v8 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 5, 4) == 4 )
    {
      v11 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v11, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
      v12 = *(struct _ERESOURCE **)(*(_QWORD *)(v8 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v12, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v8 + 40)) )
        *(_DWORD *)(v8 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v8 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v8 + 24) == 1 );
  return v7;
}
