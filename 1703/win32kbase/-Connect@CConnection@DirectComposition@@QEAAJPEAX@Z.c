/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00151DC
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0091B08 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0014F90 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C001518C (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C001DE08 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C007C7C4 (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C007F210 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C007F288 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C0081EC8 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C01414BC (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(DirectComposition::CConnection *this, void *a2)
{
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v5; // rbx
  int v6; // edx
  signed int v7; // esi
  struct _EPROCESS *CurrentProcess; // rax
  void *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx
  struct _ERESOURCE *v15; // rbx
  int v17; // [rsp+50h] [rbp+8h]
  unsigned __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v5, 1u);
  v7 = *((_DWORD *)this + 37) != 0 ? 0xC0000236 : 0;
  v17 = v7;
  if ( !*((_DWORD *)this + 37) )
  {
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess();
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CConnection *)((char *)this + 216),
      CurrentProcess);
    v7 = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
           (DirectComposition::CConnection *)((char *)this + 216),
           1uLL);
    v17 = v7;
  }
  if ( v7 < 0
    || (v17 = DirectComposition::CEvent::Create(a2, v6, (struct DirectComposition::CEvent **)this + 11), v17 < 0) )
  {
    DirectComposition::CConnection::Disconnect(this);
  }
  else
  {
    v18 = 0LL;
    *((_DWORD *)this + 37) = 1;
    *((_DWORD *)this + 36) = 0;
    while ( 1 )
    {
      v9 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
             (DirectComposition::CConnection *)((char *)this + 24),
             &v18);
      v10 = (volatile signed __int32 *)v9;
      if ( !v9 )
        break;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)v9 + 6, 4, 3) == 3
        && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v9 + 4)) )
      {
        if ( _InterlockedCompareExchange(v10 + 6, 5, 4) == 4 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 56LL))(v10);
        ExReleaseResourceLite(*((PERESOURCE *)v10 + 4));
        KeLeaveCriticalRegion();
      }
    }
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 11) + 8LL), 1, 0);
    if ( *((_DWORD *)this + 62) )
      DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), 1);
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  v11 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 2, 1) == 1 )
    {
      v12 = *(struct _ERESOURCE **)(v11 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v12, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 48LL))(v11, 0LL);
      v13 = *(struct _ERESOURCE **)(*(_QWORD *)(v11 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v11 + 40)) )
        *(_DWORD *)(v11 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 24), 5, 4) == 4 )
    {
      v14 = *(struct _ERESOURCE **)(v11 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v14, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
      v15 = *(struct _ERESOURCE **)(*(_QWORD *)(v11 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v15, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v11 + 40)) )
        *(_DWORD *)(v11 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v11 + 24) == 1 );
  return (unsigned int)v17;
}
