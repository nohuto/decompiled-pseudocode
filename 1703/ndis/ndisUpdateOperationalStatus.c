/*
 * XREFs of ndisUpdateOperationalStatus @ 0x1C0019E64
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0016BE4 (-ndisPostProcessRestartParametersAfterProtocols@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_I.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00F6D74 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019420 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisIfSetInterfaceState @ 0x1C00194BC (ndisIfSetInterfaceState.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0019AF4 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

void __fastcall ndisUpdateOperationalStatus(struct _TlgProvider_t *a1)
{
  unsigned __int64 *p_RegHandle; // rdi
  KIRQL v3; // al
  KIRQL v4; // si
  char v5; // al
  _NDIS_IF_BLOCK *RegHandle; // rcx
  KIRQL NewIrql[16]; // [rsp+28h] [rbp-49h] BYREF
  __int128 v8[7]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v9; // [rsp+A8h] [rbp+37h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+B0h] [rbp+3Fh]

  p_RegHandle = &a1[1].RegHandle;
  v3 = KeAcquireSpinLockRaiseToDpc(&a1[1].RegHandle);
  NewIrql[0] = v3;
  v4 = v3;
  a1[8].ProviderMetadataPtr = (const unsigned __int16 *)KeGetCurrentThread();
  a1[29].LevelPlus1 = 2103152;
  v5 = ndisIfSetInterfaceState(a1, 1, v3);
  a1[8].ProviderMetadataPtr = 0LL;
  a1[29].LevelPlus1 = 0;
  if ( v5 )
  {
    KeReleaseSpinLock(p_RegHandle, v4);
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql);
    RegHandle = (_NDIS_IF_BLOCK *)a1[63].RegHandle;
    ifOperStatusFlags = 0;
    v9 = 786816LL;
    HIDWORD(v9) = RegHandle->ifOperStatus;
    ifOperStatusFlags = RegHandle->ifOperStatusFlags;
    memset(v8, 0, sizeof(v8));
    LODWORD(v8[0]) = 7340440;
    *(_QWORD *)&v8[3] = &v9;
    *((_QWORD *)&v8[0] + 1) = a1;
    DWORD1(v8[1]) = 1073807395;
    DWORD2(v8[3]) = 12;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)a1, v8);
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)a1, NewIrql[0]);
  }
  else
  {
    KeReleaseSpinLock(p_RegHandle, v4);
  }
}
