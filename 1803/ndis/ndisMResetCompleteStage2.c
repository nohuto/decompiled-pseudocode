/*
 * XREFs of ndisMResetCompleteStage2 @ 0x1C00614CC
 * Callers:
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     NdisMResetComplete @ 0x1C005EDD0 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 * Callees:
 *     ndisMRestoreOpenHandlers @ 0x1C000F7E0 (ndisMRestoreOpenHandlers.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C280 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001CCB0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

void __fastcall ndisMResetCompleteStage2(char *MiniportAdapterHandle, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  struct _KEVENT *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-49h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-39h] BYREF

  v7 = 0LL;
  v3 = *((_DWORD *)MiniportAdapterHandle + 30);
  if ( (v3 & 0x40000) != 0 )
  {
    v4 = *((_QWORD *)MiniportAdapterHandle + 49);
    *((_QWORD *)MiniportAdapterHandle + 49) = 0LL;
  }
  else
  {
    v5 = (_QWORD *)*((_QWORD *)MiniportAdapterHandle + 107);
    v4 = 0LL;
    if ( !v5 )
      goto LABEL_6;
    *((_QWORD *)MiniportAdapterHandle + 107) = *v5;
    v4 = v5[2];
    *v5 = *((_QWORD *)MiniportAdapterHandle + 113);
    *((_QWORD *)MiniportAdapterHandle + 113) = v5;
    v3 = *((_DWORD *)MiniportAdapterHandle + 30);
  }
  v7 = v4;
LABEL_6:
  LOBYTE(a2) = 1;
  *((_DWORD *)MiniportAdapterHandle + 30) = v3 & 0xFFDFFFFF;
  ndisMRestoreOpenHandlers((__int64)MiniportAdapterHandle, a2);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.StatusBuffer = MiniportAdapterHandle + 384;
  StatusIndication.SourceHandle = MiniportAdapterHandle;
  StatusIndication.StatusCode = 1073807365;
  StatusIndication.StatusBufferSize = 4;
  NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 726722;
  if ( v4 )
  {
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    (*(void (__fastcall **)(_QWORD, _QWORD))(v7 + 200))(
      *(_QWORD *)(v7 + 32),
      *((unsigned int *)MiniportAdapterHandle + 96));
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
    *((_DWORD *)MiniportAdapterHandle + 464) = 726733;
    ndisMDereferenceOpenLocked(v7, 8u);
  }
  v6 = (struct _KEVENT *)*((_QWORD *)MiniportAdapterHandle + 236);
  if ( v6 )
    KeSetEvent(v6, 0, 0);
}
