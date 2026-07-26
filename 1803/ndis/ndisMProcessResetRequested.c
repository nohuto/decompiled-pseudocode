/*
 * XREFs of ndisMProcessResetRequested @ 0x1C0060CF4
 * Callers:
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     ndisMSwapOpenHandlers @ 0x1C001CD1C (ndisMSwapOpenHandlers.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisMProcessResetRequested(__int64 MiniportAdapterHandle, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ecx
  unsigned int v6; // edi
  __int64 v7; // rcx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+40h] [rbp-98h] BYREF

  v4 = *(_QWORD *)(MiniportAdapterHandle + 848);
  if ( v4 )
  {
    *(_QWORD *)(MiniportAdapterHandle + 848) = *(_QWORD *)v4;
    *(_DWORD *)(v4 + 8) = 4;
    *(_QWORD *)v4 = *(_QWORD *)(MiniportAdapterHandle + 856);
    *(_QWORD *)(MiniportAdapterHandle + 856) = v4;
  }
  v5 = *(_DWORD *)(MiniportAdapterHandle + 120);
  if ( (*(_DWORD *)(MiniportAdapterHandle + 124) & 0x80000) != 0 )
  {
    v6 = -2147418111;
    *(_DWORD *)(MiniportAdapterHandle + 120) = v5 & 0xFFEFFFFF;
  }
  else
  {
    *(_DWORD *)(MiniportAdapterHandle + 120) = v5 & 0xFFCFFFFF | 0x200000;
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
    if ( (unsigned __int8)byte_1C0099618 >= 4u )
      WPP_SF_q(0x49u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, MiniportAdapterHandle);
    if ( (Microsoft_Windows_NDISEnableBits & 0x400) != 0 )
      McTemplateK0jqxq(
        v7,
        &CallMiniportReset,
        (const GUID *)(MiniportAdapterHandle + 4032),
        MiniportAdapterHandle + 4032,
        *(_DWORD *)(MiniportAdapterHandle + 4080),
        *(_QWORD *)(MiniportAdapterHandle + 4048),
        25);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(MiniportAdapterHandle + 3784) + 192LL))(
           a2,
           *(_QWORD *)(MiniportAdapterHandle + 24));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(MiniportAdapterHandle + 96));
    *(_QWORD *)(MiniportAdapterHandle + 520) = KeGetCurrentThread();
    *(_DWORD *)(MiniportAdapterHandle + 1856) = 726304;
  }
  return v6;
}
