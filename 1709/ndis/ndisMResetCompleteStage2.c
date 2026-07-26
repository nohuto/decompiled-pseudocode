/*
 * XREFs of ndisMResetCompleteStage2 @ 0x1C0060AB4
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     NdisMResetComplete @ 0x1C005E3D0 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C005FF50 (ndisMProcessDeferred.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0001B74 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0011180 (NdisMIndicateStatusEx.c)
 *     ndisMRestoreOpenHandlers @ 0x1C001F9A8 (ndisMRestoreOpenHandlers.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

void __fastcall ndisMResetCompleteStage2(_QWORD *MiniportAdapterHandle)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  struct _KEVENT *v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-49h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-39h] BYREF

  v5 = 0LL;
  if ( (MiniportAdapterHandle[15] & 0x40000) != 0 )
  {
    v2 = MiniportAdapterHandle[49];
    MiniportAdapterHandle[49] = 0LL;
    v5 = v2;
  }
  else
  {
    v3 = (_QWORD *)MiniportAdapterHandle[107];
    if ( v3 )
    {
      MiniportAdapterHandle[107] = *v3;
      v5 = v3[2];
      *v3 = MiniportAdapterHandle[113];
      MiniportAdapterHandle[113] = v3;
    }
  }
  *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x200000u;
  ndisMRestoreOpenHandlers((__int64)MiniportAdapterHandle, 1u);
  MiniportAdapterHandle[65] = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 12);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.StatusBuffer = MiniportAdapterHandle + 48;
  StatusIndication.SourceHandle = MiniportAdapterHandle;
  StatusIndication.StatusCode = 1073807365;
  StatusIndication.StatusBufferSize = 4;
  NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
  KeAcquireSpinLockAtDpcLevel(MiniportAdapterHandle + 12);
  MiniportAdapterHandle[65] = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 726614;
  if ( v5 )
  {
    MiniportAdapterHandle[65] = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 12);
    (*(void (__fastcall **)(_QWORD, _QWORD))(v5 + 200))(
      *(_QWORD *)(v5 + 32),
      *((unsigned int *)MiniportAdapterHandle + 96));
    KeAcquireSpinLockAtDpcLevel(MiniportAdapterHandle + 12);
    MiniportAdapterHandle[65] = KeGetCurrentThread();
    *((_DWORD *)MiniportAdapterHandle + 464) = 726625;
    ndisMDereferenceOpenLocked(v5);
  }
  v4 = (struct _KEVENT *)MiniportAdapterHandle[236];
  if ( v4 )
    KeSetEvent(v4, 0, 0);
}
