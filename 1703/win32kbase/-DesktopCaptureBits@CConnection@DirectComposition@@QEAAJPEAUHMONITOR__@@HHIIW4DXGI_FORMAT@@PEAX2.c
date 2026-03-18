/*
 * XREFs of ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C013F948
 * Callers:
 *     NtDesktopCaptureBits @ 0x1C013F5C0 (NtDesktopCaptureBits.c)
 * Callees:
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C001518C (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C0141400 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PE.c)
 */

__int64 __fastcall DirectComposition::CConnection::DesktopCaptureBits(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  NTSTATUS v13; // esi
  struct _ERESOURCE *v14; // rbx
  NTSTATUS v15; // eax
  __int64 v16; // rdi
  struct _ERESOURCE *v17; // rbx
  struct _ERESOURCE *v18; // rbx
  struct _ERESOURCE *v19; // rbx
  struct _ERESOURCE *v20; // rbx
  char v22[4]; // [rsp+50h] [rbp-30h] BYREF
  int TokenInformation; // [rsp+54h] [rbp-2Ch] BYREF
  ULONG ReturnLength; // [rsp+58h] [rbp-28h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF

  v22[0] = 0;
  v13 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( v13 >= 0 )
  {
    TokenInformation = 0;
    ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
    if ( TokenInformation )
    {
      RtlInitUnicodeString(&DestinationString, L"ID_CAP_SCREENCAPTURE");
      v13 = RtlCapabilityCheck(TokenHandle, &DestinationString, v22);
    }
    else
    {
      v22[0] = 1;
    }
    ZwClose(TokenHandle);
    if ( v13 >= 0 )
    {
      if ( !v22[0] )
        v13 = -1073741790;
      if ( v13 >= 0 )
      {
        v14 = *(struct _ERESOURCE **)(*(_QWORD *)(a1 + 152) + 32LL);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v14, 1u);
        v15 = DirectComposition::CSystemChannel::DesktopCaptureBits(
                *(_QWORD *)(a1 + 152),
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9);
        v16 = *(_QWORD *)(a1 + 152);
        v13 = v15;
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
    }
  }
  return (unsigned int)v13;
}
