/*
 * XREFs of ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C001D2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C001518C (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C008E584 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::UnlockAndUnreference(
        DirectComposition::CApplicationChannel *this)
{
  struct DirectComposition::CrossChannelVisualData *v1; // rsi
  char v3; // al
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // rbx
  struct _ERESOURCE *v8; // rbx
  struct _ERESOURCE *v9; // rbx
  struct _ERESOURCE *v10; // rbx
  struct _ERESOURCE *v11; // rbx
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx

  v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 51);
  if ( v1 )
  {
    v3 = *((_BYTE *)this + 256);
    if ( (v3 & 4) == 0 )
    {
      *((_BYTE *)this + 256) = v3 | 4;
      do
      {
        v4 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
        *((_QWORD *)this + 51) = 0LL;
        ExReleaseResourceLite(v4);
        KeLeaveCriticalRegion();
        do
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
          {
            v6 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(v6, 1u);
            (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(
              this,
              0LL);
            v7 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(v7, 1u);
            if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
              *((_DWORD *)this + 6) = 4;
            ExReleaseResourceLite(*((PERESOURCE *)this + 4));
            KeLeaveCriticalRegion();
            ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
            KeLeaveCriticalRegion();
          }
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
          {
            v8 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite(v8, 1u);
            (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
            v9 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite(v9, 1u);
            if ( !DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
              *((_DWORD *)this + 6) = 1;
            ExReleaseResourceLite(*((PERESOURCE *)this + 4));
            KeLeaveCriticalRegion();
            ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
            KeLeaveCriticalRegion();
          }
        }
        while ( *((_DWORD *)this + 6) == 1 );
        DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
          *((struct DirectComposition::CConnection **)this + 5),
          v1);
        v5 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v5, 1u);
        v1 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 51);
      }
      while ( v1 );
      *((_BYTE *)this + 256) &= ~4u;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 4));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 2, 1) == 1 )
    {
      v10 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v10, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 48LL))(this, 0LL);
      v11 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v11, 1u);
      if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
        *((_DWORD *)this + 6) = 4;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 6, 5, 4) == 4 )
    {
      v12 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v12, 1u);
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 56LL))(this);
      v13 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
        *((_DWORD *)this + 6) = 1;
      ExReleaseResourceLite(*((PERESOURCE *)this + 4));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *((_DWORD *)this + 6) == 1 );
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 24LL))(this);
}
