/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C01440FC
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C01443CC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C000136C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C00037E8 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x1C000FE6C (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000FEE4 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0046C6C (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C014485C (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C0147608 (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C0147AE4 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(DirectComposition::CConnection *this, void *a2)
{
  struct _ERESOURCE *v4; // rbx
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  signed int v8; // esi
  struct _EPROCESS *CurrentProcess; // rax
  void *v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rdi
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx
  struct _ERESOURCE *v15; // rbx
  struct _ERESOURCE *v16; // rbx
  int v18; // [rsp+50h] [rbp+8h]
  unsigned __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v5, 1u);
  v7 = *((unsigned int *)this + 37);
  v8 = *((_DWORD *)this + 37) != 0 ? 0xC0000236 : 0;
  v18 = v8;
  if ( !(_DWORD)v7 )
  {
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7);
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CConnection *)((char *)this + 192),
      CurrentProcess);
    v8 = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
           (DirectComposition::CConnection *)((char *)this + 192),
           1uLL);
    v18 = v8;
  }
  if ( v8 < 0
    || (v18 = DirectComposition::CEvent::Create(a2, v6, (struct DirectComposition::CEvent **)this + 10), v18 < 0) )
  {
    DirectComposition::CConnection::Disconnect(this);
  }
  else
  {
    v19 = 0LL;
    *((_DWORD *)this + 37) = 1;
    *((_DWORD *)this + 36) = 0;
    while ( 1 )
    {
      v10 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
              (DirectComposition::CConnection *)((char *)this + 24),
              &v19);
      v11 = (volatile signed __int32 *)v10;
      if ( !v10 )
        break;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)v10 + 6, 4, 3) == 3
        && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v10 + 4)) )
      {
        if ( _InterlockedCompareExchange(v11 + 6, 5, 4) == 4 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 56LL))(v11);
        ExReleaseResourceLite(*((PERESOURCE *)v11 + 4));
        KeLeaveCriticalRegion();
      }
    }
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 8LL), 1, 0);
    if ( *((_DWORD *)this + 56) )
      DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), 1);
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  v12 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 24), 2, 1) == 1 )
    {
      v13 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, 0LL);
      v14 = *(struct _ERESOURCE **)(*(_QWORD *)(v12 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v14, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v12 + 40)) )
        *(_DWORD *)(v12 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v12 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 24), 5, 4) == 4 )
    {
      v15 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v15, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 56LL))(v12);
      v16 = *(struct _ERESOURCE **)(*(_QWORD *)(v12 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v16, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v12 + 40)) )
        *(_DWORD *)(v12 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v12 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v12 + 24) == 1 );
  return (unsigned int)v18;
}
