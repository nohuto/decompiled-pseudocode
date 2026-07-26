/*
 * XREFs of NdisCmCloseAddressFamilyComplete @ 0x1C0106800
 * Callers:
 *     NdisClCloseAddressFamily @ 0x1C0106020 (NdisClCloseAddressFamily.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0021274 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ndisDereferenceMiniportRef @ 0x1C005D4DC (ndisDereferenceMiniportRef.c)
 *     ndisDereferenceAf @ 0x1C010958C (ndisDereferenceAf.c)
 */

void __stdcall NdisCmCloseAddressFamilyComplete(NDIS_STATUS Status, NDIS_HANDLE NdisAfHandle)
{
  __int64 v4; // rdi
  KIRQL v5; // bp
  __int64 v6; // rcx
  NDIS_HANDLE *v7; // rcx
  _QWORD *v8; // rax

  if ( *((_DWORD *)NdisAfHandle + 99) >= 6u )
    (*((void (__fastcall **)(NDIS_STATUS, _QWORD))NdisAfHandle + 32))(Status, *((_QWORD *)NdisAfHandle + 47));
  else
    (*((void (__fastcall **)(NDIS_STATUS, _QWORD))NdisAfHandle + 13))(Status, *((_QWORD *)NdisAfHandle + 47));
  if ( !Status )
  {
    v4 = *((_QWORD *)NdisAfHandle + 2);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
    *(_QWORD *)(v4 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v4 + 1856) = 1573677;
    v6 = *((_QWORD *)NdisAfHandle + 5);
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 376));
      ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 5), 0x10u);
    }
    else
    {
      ndisDereferenceMiniportRef(v4, 0x51u);
    }
    v7 = (NDIS_HANDLE *)(*((_QWORD *)NdisAfHandle + 46) + 1016LL);
    if ( *v7 )
    {
      while ( 1 )
      {
        v8 = *v7;
        if ( *v7 == NdisAfHandle )
          break;
        v7 = (NDIS_HANDLE *)*v7;
        if ( !*v8 )
          goto LABEL_13;
      }
      *v7 = *(NDIS_HANDLE *)NdisAfHandle;
    }
LABEL_13:
    _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)NdisAfHandle + 46) + 376LL));
    ndisMDereferenceOpenLocked(*((_QWORD *)NdisAfHandle + 46), 0xFu);
    *(_QWORD *)(v4 + 520) = 0LL;
    *(_DWORD *)(v4 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v5);
    ndisDereferenceAf(NdisAfHandle);
  }
}
