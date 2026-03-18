/*
 * XREFs of PnpProcessCompletedEject @ 0x140696080
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 *     PnpCompleteDeviceEvent @ 0x1404A5C6C (PnpCompleteDeviceEvent.c)
 *     PnpInvalidateRelationsInList @ 0x14056DCF8 (PnpInvalidateRelationsInList.c)
 *     IopFreeRelationList @ 0x1405702D8 (IopFreeRelationList.c)
 *     PnpTrackQueryRemoveDevices @ 0x14059AC5C (PnpTrackQueryRemoveDevices.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1406A0138 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PnpSetDeviceRemovalSafe @ 0x1406A06D4 (PnpSetDeviceRemovalSafe.c)
 *     IopWarmEjectDevice @ 0x1406A9064 (IopWarmEjectDevice.c)
 */

void __fastcall PnpProcessCompletedEject(void *a1)
{
  int v1; // esi
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  void **v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  void *v8; // rcx

  v1 = 0;
  if ( *((_DWORD *)a1 + 23) > 1u )
  {
    *((_BYTE *)a1 + 89) = 0;
    v1 = IopWarmEjectDevice(*((_QWORD *)a1 + 7));
  }
  v3 = *((_QWORD *)a1 + 12);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 1LL);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 12) + 24LL))(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL));
  }
  PpDevNodeLockTree(1);
  v4 = *(_QWORD **)a1;
  v5 = (void **)*((_QWORD *)a1 + 1);
  if ( *(void **)(*(_QWORD *)a1 + 8LL) != a1 || *v5 != a1 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  v6 = *((_QWORD *)a1 + 7);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  if ( *((_QWORD *)a1 + 8) )
  {
    if ( *((_BYTE *)a1 + 88) )
      PpProfileMarkAllTransitioningDocksEjected();
    PnpInvalidateRelationsInList(*((_QWORD **)a1 + 8), 4u, 0, 1);
    PnpTrackQueryRemoveDevices(*((unsigned int ***)a1 + 8), 0);
    IopFreeRelationList(*((_QWORD **)a1 + 8));
    *(_QWORD *)(v7 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)a1 + 89) = 0;
  }
  PpDevNodeUnlockTree(1);
  v8 = (void *)*((_QWORD *)a1 + 6);
  if ( v8 )
    PnpCompleteDeviceEvent(v8, v1);
  if ( *((_BYTE *)a1 + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)a1 + 7));
  ObfDereferenceObject(*((PVOID *)a1 + 7));
  ExFreePoolWithTag(a1, 0);
}
