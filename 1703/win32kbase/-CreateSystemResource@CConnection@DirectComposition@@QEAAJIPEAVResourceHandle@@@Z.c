/*
 * XREFs of ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0014A94
 * Callers:
 *     ?ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x1C000DF60 (-ObjectInit@ResourceObject@DirectComposition@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionO.c)
 *     ?CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1C0019DBC (-CreateSystemVisualForCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVR.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C001518C (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B3B4 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001D424 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C00821EC (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::CreateSystemResource(
        DirectComposition::CConnection *this,
        unsigned int a2,
        struct ResourceHandle *a3)
{
  struct _ERESOURCE *v6; // rbx
  int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rdi
  struct _ERESOURCE *v11; // rbx
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx
  struct DirectComposition::CResourceMarshaler *v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = DirectComposition::CApplicationChannel::CreateInternalResource(
         *((DirectComposition::CApplicationChannel **)this + 19),
         a2,
         &v15);
  if ( v7 >= 0 )
  {
    v8 = *((_DWORD *)v15 + 6);
    v7 = DirectComposition::CApplicationChannel::Commit(
           *((DirectComposition::CApplicationChannel **)this + 19),
           0LL,
           0,
           0LL);
    if ( v7 < 0 )
      DirectComposition::CSystemChannel::ReleaseSystemResource(*((_QWORD *)this + 19), v8);
    else
      *(_DWORD *)a3 = v8;
  }
  v9 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 2, 1) == 1 )
    {
      v11 = *(struct _ERESOURCE **)(v9 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v11, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, 0LL);
      v12 = *(struct _ERESOURCE **)(*(_QWORD *)(v9 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v12, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v9 + 40)) )
        *(_DWORD *)(v9 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 5, 4) == 4 )
    {
      v13 = *(struct _ERESOURCE **)(v9 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
      v14 = *(struct _ERESOURCE **)(*(_QWORD *)(v9 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v14, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v9 + 40)) )
        *(_DWORD *)(v9 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v9 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v9 + 24) == 1 );
  return (unsigned int)v7;
}
