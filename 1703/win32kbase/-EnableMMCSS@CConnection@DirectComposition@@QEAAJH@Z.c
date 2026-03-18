/*
 * XREFs of ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C013FBD4
 * Callers:
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C00547AC (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x1C013F260 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C001518C (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z @ 0x1C01414BC (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::EnableMMCSS(DirectComposition::CConnection *this, int a2)
{
  struct _ERESOURCE *v2; // rbx
  unsigned int v5; // ebp
  bool v6; // al
  int v7; // ecx
  struct _ERESOURCE *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx
  struct _ERESOURCE *v15; // rbx

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  v5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v2, 1u);
  v6 = 0;
  if ( a2 )
  {
    v7 = *((_DWORD *)this + 62);
    if ( v7 == -1 )
    {
      v5 = -1073741823;
    }
    else
    {
      *((_DWORD *)this + 62) = v7 + 1;
      v6 = v7 == 0;
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 62))-- != 1 )
      goto LABEL_19;
    v6 = 1;
  }
  if ( v6 && DirectComposition::CConnection::IsConnected(this) )
  {
    v9 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v9, 1u);
    v10 = DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), a2);
    v11 = *((_QWORD *)this + 19);
    v5 = v10;
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
  }
LABEL_19:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return v5;
}
