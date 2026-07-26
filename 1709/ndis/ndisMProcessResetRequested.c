/*
 * XREFs of ndisMProcessResetRequested @ 0x1C00602E8
 * Callers:
 *     ndisMProcessDeferred @ 0x1C005FF50 (ndisMProcessDeferred.c)
 * Callees:
 *     ndisMSwapOpenHandlers @ 0x1C0010ACC (ndisMSwapOpenHandlers.c)
 *     NdisMIndicateStatusEx @ 0x1C0011180 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisMProcessResetRequested(__int64 MiniportAdapterHandle, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-98h] BYREF

  v4 = *(_QWORD *)(MiniportAdapterHandle + 848);
  if ( v4 )
  {
    *(_QWORD *)(MiniportAdapterHandle + 848) = *(_QWORD *)v4;
    *(_DWORD *)(v4 + 8) = 4;
    *(_QWORD *)v4 = *(_QWORD *)(MiniportAdapterHandle + 856);
    *(_QWORD *)(MiniportAdapterHandle + 856) = v4;
  }
  if ( (*(_DWORD *)(MiniportAdapterHandle + 124) & 0x80000) != 0 )
  {
    *(_DWORD *)(MiniportAdapterHandle + 120) &= ~0x100000u;
    return (unsigned int)-2147418111;
  }
  else
  {
    *(_DWORD *)(MiniportAdapterHandle + 120) = *(_DWORD *)(MiniportAdapterHandle + 120) & 0xFFCFFFFF | 0x200000;
    ndisMSwapOpenHandlers(MiniportAdapterHandle, 1u);
    *(_QWORD *)(MiniportAdapterHandle + 520) = 0LL;
    *(_DWORD *)(MiniportAdapterHandle + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(MiniportAdapterHandle + 96));
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = (void *)MiniportAdapterHandle;
    StatusIndication.StatusCode = 1073807364;
    NdisMIndicateStatusEx((NDIS_HANDLE)MiniportAdapterHandle, &StatusIndication);
    if ( (unsigned __int8)byte_1C0098758 >= 4u )
      WPP_SF_q(0x46u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, MiniportAdapterHandle);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400) != 0 )
      McTemplateK0jqxq(
        v6,
        &CallMiniportReset,
        (const GUID *)(MiniportAdapterHandle + 4032),
        MiniportAdapterHandle + 4032,
        *(_DWORD *)(MiniportAdapterHandle + 4080),
        *(_QWORD *)(MiniportAdapterHandle + 4048),
        173);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(MiniportAdapterHandle + 3784) + 192LL))(
           a2,
           *(_QWORD *)(MiniportAdapterHandle + 24));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(MiniportAdapterHandle + 96));
    *(_QWORD *)(MiniportAdapterHandle + 520) = KeGetCurrentThread();
    *(_DWORD *)(MiniportAdapterHandle + 1856) = 726196;
  }
  return v5;
}
